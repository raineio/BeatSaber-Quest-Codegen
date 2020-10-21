# Copyright (C) 2009 The Android Open Source Project
#
# Licensed under the Apache License, Version 2.0 (the License);
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#      http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an AS IS BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.
#
#
#
# Autogenerated by codegen
LOCAL_PATH := $(call my-dir)
TARGET_ARCH_ABI := $(APP_ABI)
rwildcard=$(wildcard $1$2) $(foreach d,$(wildcard $1*),$(call rwildcard,$d/,$2))

# Writing prebuilt shared library: beatsaber-hook
include $(CLEAR_VARS)
LOCAL_MODULE := beatsaber-hook_0_7_5
LOCAL_EXPORT_C_INCLUDES := extern/beatsaber-hook
LOCAL_SRC_FILES := extern/libbeatsaber-hook_0_7_5.so
LOCAL_CPP_FEATURES += exceptions
include $(PREBUILT_SHARED_LIBRARY)
# Creating prebuilt for dependency: modloader - version: 1.0.2
include $(CLEAR_VARS)
LOCAL_MODULE := modloader
LOCAL_EXPORT_C_INCLUDES := extern/modloader
LOCAL_SRC_FILES := extern/libmodloader.so
include $(PREBUILT_SHARED_LIBRARY)

# Writing single library: il2cpp_codegen
include $(CLEAR_VARS)
LOCAL_MODULE := codegen_0_3_1
LOCAL_SRC_FILES := $(call rwildcard,./src,*.cpp)
LOCAL_SHARED_LIBRARIES += beatsaber-hook_0_7_5
LOCAL_SHARED_LIBRARIES += modloader
LOCAL_LDLIBS += -llog
LOCAL_CFLAGS += -DMOD_ID='"il2cpp_codegen"' -DVERSION='"0.3.1"' -DNEED_UNSAFE_CSHARP -DNO_CODEGEN_USE -isystem'./extern' -Wall -Wextra -Werror -Wno-unused-function -isystem'extern/libil2cpp/il2cpp/libil2cpp'
LOCAL_C_INCLUDES += ./include ./extern
include $(BUILD_SHARED_LIBRARY)
