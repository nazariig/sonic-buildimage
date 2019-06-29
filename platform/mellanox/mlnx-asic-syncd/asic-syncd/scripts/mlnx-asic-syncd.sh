#!/bin/bash

declare -r SYSLOG_LOGGER="/usr/bin/logger"
declare -r SYSLOG_IDENTIFIER="mlnx-asic-syncd"
declare -r SYSLOG_ERROR="error"
declare -r SYSLOG_NOTICE="notice"
declare -r SYSLOG_INFO="info"

declare -r SYSTEMCTL_PMON_IS_ACTIVE="/bin/systemctl is-active pmon"
declare -r SYSTEMCTL_PMON_ACTIVE="active"
declare -r SYSTEMCTL_PMON_STOP="/bin/systemctl stop pmon"
declare -r SYSTEMCTL_PMON_RESTART="/bin/systemctl restart pmon"

declare -r HW_MGMT_CHIPUP="/usr/bin/hw-management.sh chipup"
declare -r HW_MGMT_CHIPDOWN="/usr/bin/hw-management.sh chipdown"

declare -r APPL_DB_ID="0"
declare -r APPL_DB_KEY="PORT_TABLE:PortInitDone"
declare -r APPL_DB_KEYS_QUERY="redis-cli -n ${APPL_DB_ID} keys '*'"
declare -r APPL_DB_QUERY_TIMEOUT="1s"

declare -r EXIT_SUCCESS="0"
declare -r EXIT_FAILURE="1"

function log_error() {
    eval "${SYSLOG_LOGGER} -t ${SYSLOG_IDENTIFIER} -p ${SYSLOG_ERROR} $@"
}

function log_notice() {
    eval "${SYSLOG_LOGGER} -t ${SYSLOG_IDENTIFIER} -p ${SYSLOG_NOTICE} $@"
}

function log_info() {
    eval "${SYSLOG_LOGGER} -t ${SYSLOG_IDENTIFIER} -p ${SYSLOG_INFO} $@"
}

function run_cmd() {
    local _EXIT_CODE="${EXIT_SUCCESS}"

    eval "$@" > /dev/null
    _EXIT_CODE="$?"

    if [[ "${_EXIT_CODE}" != "${EXIT_SUCCESS}" ]]; then
        log_error "command failed: $@"
    fi
}

function prestart() {
    if [[ "$(eval ${SYSTEMCTL_PMON_IS_ACTIVE})" = "${SYSTEMCTL_PMON_ACTIVE}" ]]; then
        log_info "Stop pmon service"
        run_cmd "${SYSTEMCTL_PMON_STOP}"

        log_info "Disconnect ASIC from I2C"
        run_cmd "${HW_MGMT_CHIPDOWN}"

        log_info "Restart pmon service"
        run_cmd "${SYSTEMCTL_PMON_RESTART}"
    else
        log_info "Disconnect ASIC from I2C"
        run_cmd "${HW_MGMT_CHIPDOWN}"
    fi
}

function start() {
    log_notice "Starting ${SYSLOG_IDENTIFIER} service..."

    while [[ "$(eval ${APPL_DB_KEYS_QUERY} | grep ${APPL_DB_KEY})" != "${APPL_DB_KEY}" ]]; do
        sleep "${APPL_DB_QUERY_TIMEOUT}"
    done

    log_info "Connect ASIC to I2C"
    run_cmd "${HW_MGMT_CHIPUP}"
}

function stop() {
    log_notice "Stopping ${SYSLOG_IDENTIFIER} service..."
}

case "$1" in
    prestart|start|stop)
        eval "$1"
        ;;
    *)
        echo "Usage: $0 {prestart|start|stop}"
        exit "${EXIT_SUCCESS}"
        ;;
esac
