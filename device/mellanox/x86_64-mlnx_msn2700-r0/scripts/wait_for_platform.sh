#!/bin/bash

declare -r QSFP_PATH="/var/run/hw-management/qsfp"

function WaitForQsfpReady() {
    local -r _QSFP_PATH="${1}"

    local _QSFP_STATUS="down"
    local -r _QSFP_UP="up"

    local -r TIMEOUT="1s"

    while [[ "${_QSFP_STATUS}" != "${_QSFP_UP}" ]]; do
        for _QSFP in ${_QSFP_PATH}/qsfp*; do
            if [[ -e "${_QSFP}" ]]; then
                _QSFP_STATUS="${_QSFP_UP}"
                break
            fi
        done

        sleep "${TIMEOUT}"
    done
}

echo "Wait for QSFP I2C interface is ready"

WaitForQsfpReady "${QSFP_PATH}"

echo "QSFP I2C interface is ready: mlxsw_minimal has finished initialization"
