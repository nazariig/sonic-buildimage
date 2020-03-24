# mellanox firmware

MLNX_FW_BASE_PATH = $(MLNX_SDK_BASE_PATH)

# Place an URL here to FW if you want to download FW instead
MLNX_FW_BASE_URL =

ifneq ($(MLNX_FW_BASE_URL), )
FW_FROM_URL = y
else
FW_FROM_URL = n
endif

MLNX_SPC_FW_VERSION = 13.2007.0322
MLNX_SPC_FW_FILE = fw-SPC-rel-$(subst .,_,$(MLNX_SPC_FW_VERSION))-EVB.mfa
$(MLNX_SPC_FW_FILE)_PATH = $(MLNX_FW_BASE_PATH)
$(MLNX_SPC_FW_FILE)_URL = $(MLNX_FW_BASE_URL)/$(MLNX_SPC_FW_FILE)

MLNX_SPC2_FW_VERSION = 29.2007.0322
MLNX_SPC2_FW_FILE = fw-SPC2-rel-$(subst .,_,$(MLNX_SPC2_FW_VERSION))-EVB.mfa
$(MLNX_SPC2_FW_FILE)_PATH = $(MLNX_FW_BASE_PATH)
$(MLNX_SPC2_FW_FILE)_URL = $(MLNX_FW_BASE_URL)/$(MLNX_SPC2_FW_FILE)

MLNX_SPC3_FW_VERSION = 30.2007.0322
MLNX_SPC3_FW_FILE = fw-SPC3-rel-$(subst .,_,$(MLNX_SPC3_FW_VERSION))-EVB.mfa
$(MLNX_SPC3_FW_FILE)_PATH = $(MLNX_FW_BASE_PATH)
$(MLNX_SPC3_FW_FILE)_URL = $(MLNX_FW_BASE_URL)/$(MLNX_SPC3_FW_FILE)

MLNX_FW_FILES = $(MLNX_SPC_FW_FILE) $(MLNX_SPC2_FW_FILE) $(MLNX_SPC3_FW_FILE)

ifeq ($(FW_FROM_URL),n)
SONIC_COPY_FILES += $(MLNX_FW_FILES)
else
SONIC_ONLINE_FILES += $(MLNX_FW_FILES)
endif

MLNX_FILES += $(MLNX_FW_FILES)

export MLNX_SPC_FW_VERSION
export MLNX_SPC_FW_FILE

export MLNX_SPC2_FW_VERSION
export MLNX_SPC2_FW_FILE

export MLNX_SPC3_FW_VERSION
export MLNX_SPC3_FW_FILE
