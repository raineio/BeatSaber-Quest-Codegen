// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.ResourceManagement.ResourceManager
#include "UnityEngine/ResourceManagement/ResourceManager.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
#include "extern/beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::ResourceManagement::Diagnostics
namespace UnityEngine::ResourceManagement::Diagnostics {
  // Forward declaring type: DiagnosticEvent
  struct DiagnosticEvent;
}
// Completed forward declares
// Type namespace: UnityEngine.AddressableAssets.Utility
namespace UnityEngine::AddressableAssets::Utility {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.AddressableAssets.Utility.DiagnosticInfo
  // [TokenAttribute] Offset: FFFFFFFF
  class DiagnosticInfo : public ::Il2CppObject {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    private:
    #endif
    // public System.String DisplayName
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* DisplayName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public System.Int32 ObjectId
    // Size: 0x4
    // Offset: 0x18
    int ObjectId;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: ObjectId and: Dependencies
    char __padding1[0x4] = {};
    // public System.Int32[] Dependencies
    // Size: 0x8
    // Offset: 0x20
    ::ArrayW<int> Dependencies;
    // Field size check
    static_assert(sizeof(::ArrayW<int>) == 0x8);
    public:
    // Get instance field reference: public System.String DisplayName
    ::Il2CppString*& dyn_DisplayName();
    // Get instance field reference: public System.Int32 ObjectId
    int& dyn_ObjectId();
    // Get instance field reference: public System.Int32[] Dependencies
    ::ArrayW<int>& dyn_Dependencies();
    // public UnityEngine.ResourceManagement.Diagnostics.DiagnosticEvent CreateEvent(System.String category, UnityEngine.ResourceManagement.ResourceManager/UnityEngine.ResourceManagement.DiagnosticEventType eventType, System.Int32 frame, System.Int32 val)
    // Offset: 0x25EF2E4
    UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent CreateEvent(::Il2CppString* category, UnityEngine::ResourceManagement::ResourceManager::DiagnosticEventType eventType, int frame, int val);
    // public System.Void .ctor()
    // Offset: 0x25EF32C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DiagnosticInfo* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::AddressableAssets::Utility::DiagnosticInfo::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DiagnosticInfo*, creationType>()));
    }
  }; // UnityEngine.AddressableAssets.Utility.DiagnosticInfo
  #pragma pack(pop)
  static check_size<sizeof(DiagnosticInfo), 32 + sizeof(::ArrayW<int>)> __UnityEngine_AddressableAssets_Utility_DiagnosticInfoSizeCheck;
  static_assert(sizeof(DiagnosticInfo) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::AddressableAssets::Utility::DiagnosticInfo*, "UnityEngine.AddressableAssets.Utility", "DiagnosticInfo");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::Utility::DiagnosticInfo::CreateEvent
// Il2CppName: CreateEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent (UnityEngine::AddressableAssets::Utility::DiagnosticInfo::*)(::Il2CppString*, UnityEngine::ResourceManagement::ResourceManager::DiagnosticEventType, int, int)>(&UnityEngine::AddressableAssets::Utility::DiagnosticInfo::CreateEvent)> {
  static const MethodInfo* get() {
    static auto* category = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* eventType = &::il2cpp_utils::GetClassFromName("UnityEngine.ResourceManagement", "ResourceManager/DiagnosticEventType")->byval_arg;
    static auto* frame = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* val = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AddressableAssets::Utility::DiagnosticInfo*), "CreateEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{category, eventType, frame, val});
  }
};
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::Utility::DiagnosticInfo::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
