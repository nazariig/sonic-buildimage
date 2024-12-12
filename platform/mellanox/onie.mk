#
# Copyright (c) 2017-2024 NVIDIA CORPORATION & AFFILIATES.
# Apache-2.0
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
# http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.
#

ONIE_RECOVERY_IMAGE = onie-recovery-x86_64-kvm_x86_64-r0.iso
$(ONIE_RECOVERY_IMAGE)_URL = "https://sonicstorage.blob.core.windows.net/public/onie/$(ONIE_RECOVERY_IMAGE)"

SONIC_ONLINE_FILES += $(ONIE_RECOVERY_IMAGE)
