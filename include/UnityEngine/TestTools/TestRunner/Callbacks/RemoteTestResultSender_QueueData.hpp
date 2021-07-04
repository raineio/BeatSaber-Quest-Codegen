// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.TestTools.TestRunner.Callbacks.RemoteTestResultSender
#include "UnityEngine/TestTools/TestRunner/Callbacks/RemoteTestResultSender.hpp"
// Including type: System.Guid
#include "System/Guid.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: UnityEngine.TestTools.TestRunner.Callbacks
namespace UnityEngine::TestTools::TestRunner::Callbacks {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.TestTools.TestRunner.Callbacks.RemoteTestResultSender/QueueData
  class RemoteTestResultSender::QueueData : public ::Il2CppObject {
    public:
    // [CompilerGeneratedAttribute] Offset: 0xE3DFC0
    // private System.Guid <id>k__BackingField
    // Size: 0x10
    // Offset: 0x10
    System::Guid id;
    // Field size check
    static_assert(sizeof(System::Guid) == 0x10);
    // [CompilerGeneratedAttribute] Offset: 0xE3DFD0
    // private System.Byte[] <data>k__BackingField
    // Size: 0x8
    // Offset: 0x20
    ::Array<uint8_t>* data;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // Creating value type constructor for type: QueueData
    QueueData(System::Guid id_ = {}, ::Array<uint8_t>* data_ = {}) noexcept : id{id_}, data{data_} {}
    // public System.Guid get_id()
    // Offset: 0x14BBCBC
    System::Guid get_id();
    // public System.Void set_id(System.Guid value)
    // Offset: 0x14BBCC8
    void set_id(System::Guid value);
    // public System.Byte[] get_data()
    // Offset: 0x14BBCD0
    ::Array<uint8_t>* get_data();
    // public System.Void set_data(System.Byte[] value)
    // Offset: 0x14BBCD8
    void set_data(::Array<uint8_t>* value);
    // public System.Void .ctor()
    // Offset: 0x14BB234
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RemoteTestResultSender::QueueData* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::TestTools::TestRunner::Callbacks::RemoteTestResultSender::QueueData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RemoteTestResultSender::QueueData*, creationType>()));
    }
  }; // UnityEngine.TestTools.TestRunner.Callbacks.RemoteTestResultSender/QueueData
  #pragma pack(pop)
  static check_size<sizeof(RemoteTestResultSender::QueueData), 32 + sizeof(::Array<uint8_t>*)> __UnityEngine_TestTools_TestRunner_Callbacks_RemoteTestResultSender_QueueDataSizeCheck;
  static_assert(sizeof(RemoteTestResultSender::QueueData) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::TestTools::TestRunner::Callbacks::RemoteTestResultSender::QueueData*, "UnityEngine.TestTools.TestRunner.Callbacks", "RemoteTestResultSender/QueueData");
// Writing MetadataGetter for method: UnityEngine::TestTools::TestRunner::Callbacks::RemoteTestResultSender::QueueData::get_id
// Il2CppName: get_id
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Guid (UnityEngine::TestTools::TestRunner::Callbacks::RemoteTestResultSender::QueueData::*)()>(&UnityEngine::TestTools::TestRunner::Callbacks::RemoteTestResultSender::QueueData::get_id)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestTools::TestRunner::Callbacks::RemoteTestResultSender::QueueData*), "get_id", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestTools::TestRunner::Callbacks::RemoteTestResultSender::QueueData::set_id
// Il2CppName: set_id
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::TestTools::TestRunner::Callbacks::RemoteTestResultSender::QueueData::*)(System::Guid)>(&UnityEngine::TestTools::TestRunner::Callbacks::RemoteTestResultSender::QueueData::set_id)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestTools::TestRunner::Callbacks::RemoteTestResultSender::QueueData*), "set_id", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Guid>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestTools::TestRunner::Callbacks::RemoteTestResultSender::QueueData::get_data
// Il2CppName: get_data
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<uint8_t>* (UnityEngine::TestTools::TestRunner::Callbacks::RemoteTestResultSender::QueueData::*)()>(&UnityEngine::TestTools::TestRunner::Callbacks::RemoteTestResultSender::QueueData::get_data)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestTools::TestRunner::Callbacks::RemoteTestResultSender::QueueData*), "get_data", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestTools::TestRunner::Callbacks::RemoteTestResultSender::QueueData::set_data
// Il2CppName: set_data
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::TestTools::TestRunner::Callbacks::RemoteTestResultSender::QueueData::*)(::Array<uint8_t>*)>(&UnityEngine::TestTools::TestRunner::Callbacks::RemoteTestResultSender::QueueData::set_data)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestTools::TestRunner::Callbacks::RemoteTestResultSender::QueueData*), "set_data", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Array<uint8_t>*>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestTools::TestRunner::Callbacks::RemoteTestResultSender::QueueData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
