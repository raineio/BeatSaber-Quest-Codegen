// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.TestTools.TestRunner.Callbacks.RemoteTestResultSender
#include "UnityEngine/TestTools/TestRunner/Callbacks/RemoteTestResultSender.hpp"
// Including type: System.Guid
#include "System/Guid.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "extern/beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Type namespace: UnityEngine.TestTools.TestRunner.Callbacks
namespace UnityEngine::TestTools::TestRunner::Callbacks {
  // Forward declaring type: QueueData
  class QueueData;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(UnityEngine::TestTools::TestRunner::Callbacks::RemoteTestResultSender::QueueData);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::TestTools::TestRunner::Callbacks::RemoteTestResultSender::QueueData*, "UnityEngine.TestTools.TestRunner.Callbacks", "RemoteTestResultSender/QueueData");
// Type namespace: UnityEngine.TestTools.TestRunner.Callbacks
namespace UnityEngine::TestTools::TestRunner::Callbacks {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.TestTools.TestRunner.Callbacks.RemoteTestResultSender/UnityEngine.TestTools.TestRunner.Callbacks.QueueData
  // [TokenAttribute] Offset: FFFFFFFF
  class RemoteTestResultSender::QueueData : public ::Il2CppObject {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // private System.Guid <id>k__BackingField
    // Size: 0x10
    // Offset: 0x10
    System::Guid id;
    // Field size check
    static_assert(sizeof(System::Guid) == 0x10);
    // private System.Byte[] <data>k__BackingField
    // Size: 0x8
    // Offset: 0x20
    ::ArrayW<uint8_t> data;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    public:
    // Get instance field reference: private System.Guid <id>k__BackingField
    System::Guid& dyn_$id$k__BackingField();
    // Get instance field reference: private System.Byte[] <data>k__BackingField
    ::ArrayW<uint8_t>& dyn_$data$k__BackingField();
    // public System.Guid get_id()
    // Offset: 0x16D3F8C
    System::Guid get_id();
    // public System.Void set_id(System.Guid value)
    // Offset: 0x16D3F98
    void set_id(System::Guid value);
    // public System.Byte[] get_data()
    // Offset: 0x16D3FA0
    ::ArrayW<uint8_t> get_data();
    // public System.Void set_data(System.Byte[] value)
    // Offset: 0x16D3FA8
    void set_data(::ArrayW<uint8_t> value);
    // public System.Void .ctor()
    // Offset: 0x16D3504
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RemoteTestResultSender::QueueData* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::TestTools::TestRunner::Callbacks::RemoteTestResultSender::QueueData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RemoteTestResultSender::QueueData*, creationType>()));
    }
  }; // UnityEngine.TestTools.TestRunner.Callbacks.RemoteTestResultSender/UnityEngine.TestTools.TestRunner.Callbacks.QueueData
  #pragma pack(pop)
  static check_size<sizeof(RemoteTestResultSender::QueueData), 32 + sizeof(::ArrayW<uint8_t>)> __UnityEngine_TestTools_TestRunner_Callbacks_RemoteTestResultSender_QueueDataSizeCheck;
  static_assert(sizeof(RemoteTestResultSender::QueueData) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::TestTools::TestRunner::Callbacks::RemoteTestResultSender::QueueData::get_id
// Il2CppName: get_id
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Guid (UnityEngine::TestTools::TestRunner::Callbacks::RemoteTestResultSender::QueueData::*)()>(&UnityEngine::TestTools::TestRunner::Callbacks::RemoteTestResultSender::QueueData::get_id)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestTools::TestRunner::Callbacks::RemoteTestResultSender::QueueData*), "get_id", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestTools::TestRunner::Callbacks::RemoteTestResultSender::QueueData::set_id
// Il2CppName: set_id
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::TestTools::TestRunner::Callbacks::RemoteTestResultSender::QueueData::*)(System::Guid)>(&UnityEngine::TestTools::TestRunner::Callbacks::RemoteTestResultSender::QueueData::set_id)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Guid")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestTools::TestRunner::Callbacks::RemoteTestResultSender::QueueData*), "set_id", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestTools::TestRunner::Callbacks::RemoteTestResultSender::QueueData::get_data
// Il2CppName: get_data
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (UnityEngine::TestTools::TestRunner::Callbacks::RemoteTestResultSender::QueueData::*)()>(&UnityEngine::TestTools::TestRunner::Callbacks::RemoteTestResultSender::QueueData::get_data)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestTools::TestRunner::Callbacks::RemoteTestResultSender::QueueData*), "get_data", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestTools::TestRunner::Callbacks::RemoteTestResultSender::QueueData::set_data
// Il2CppName: set_data
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::TestTools::TestRunner::Callbacks::RemoteTestResultSender::QueueData::*)(::ArrayW<uint8_t>)>(&UnityEngine::TestTools::TestRunner::Callbacks::RemoteTestResultSender::QueueData::set_data)> {
  static const MethodInfo* get() {
    static auto* value = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestTools::TestRunner::Callbacks::RemoteTestResultSender::QueueData*), "set_data", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestTools::TestRunner::Callbacks::RemoteTestResultSender::QueueData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
