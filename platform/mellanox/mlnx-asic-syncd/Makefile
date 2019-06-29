.ONESHELL:
SHELL = /bin/bash

MAIN_TARGET = mlnx-asic-syncd_1.mlnx.$(MLNX_ASIC_SYNCD_VERSION)_amd64.deb

$(addprefix $(DEST)/, $(MAIN_TARGET)): $(DEST)/% :
	pushd asic-syncd
	chmod +x ./debian/rules
	sudo ./debian/rules binary
	popd

	mv $* $(DEST)/
