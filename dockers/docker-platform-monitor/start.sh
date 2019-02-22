#!/usr/bin/env bash

mkdir -p /var/sonic
echo "# Config files managed by sonic-config-engine" > /var/sonic/config_status

rm -f /var/run/rsyslogd.pid

supervisorctl start rsyslogd

# If this platform has synchronization script, copy it to it's proper place and run
if [ -e /usr/share/sonic/platform/scripts/wait_for_platform.sh ]; then
    /bin/cp -f /usr/share/sonic/platform/scripts/wait_for_platform.sh /usr/bin/
    /bin/chmod +x /usr/bin/wait_for_platform.sh
    /usr/bin/wait_for_platform.sh
fi

# If this platform has an lm-sensors config file, copy it to it's proper place
# and start lm-sensors
if [ -e /usr/share/sonic/platform/sensors.conf ]; then
    mkdir -p /etc/sensors.d
    /bin/cp -f /usr/share/sonic/platform/sensors.conf /etc/sensors.d/
    supervisorctl start lm-sensors
fi

# If this platform has a fancontrol config file, copy it to it's proper place
# and start fancontrol
if [ -e /usr/share/sonic/platform/fancontrol ]; then
    # Remove stale pid file if it exists
    rm -f /var/run/fancontrol.pid

    /bin/cp -f /usr/share/sonic/platform/fancontrol /etc/
    supervisorctl start fancontrol
fi

supervisorctl start ledd

supervisorctl start xcvrd

supervisorctl start psud
