// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.AndroidJavaObject
#include "UnityEngine/AndroidJavaObject.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.AndroidJavaClass
  class AndroidJavaClass : public UnityEngine::AndroidJavaObject {
    public:
    // Creating value type constructor for type: AndroidJavaClass
    AndroidJavaClass() noexcept {}
    // public System.Void .ctor(System.String className)
    // Offset: 0x2373828
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AndroidJavaClass* New_ctor(::Il2CppString* className) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::AndroidJavaClass::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AndroidJavaClass*, creationType>(className)));
    }
    // private System.Void _AndroidJavaClass(System.String className)
    // Offset: 0x23738B0
    void _AndroidJavaClass(::Il2CppString* className);
    // System.Void .ctor(System.IntPtr jclass)
    // Offset: 0x2373AC4
    // Implemented from: UnityEngine.AndroidJavaObject
    // Base method: System.Void AndroidJavaObject::.ctor(System.IntPtr jclass)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AndroidJavaClass* New_ctor(System::IntPtr jclass) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::AndroidJavaClass::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AndroidJavaClass*, creationType>(jclass)));
    }
  }; // UnityEngine.AndroidJavaClass
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::AndroidJavaClass*, "UnityEngine", "AndroidJavaClass");
// Writing MetadataGetter for method: UnityEngine::AndroidJavaClass::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::AndroidJavaClass::_AndroidJavaClass
// Il2CppName: _AndroidJavaClass
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::AndroidJavaClass::*)(::Il2CppString*)>(&UnityEngine::AndroidJavaClass::_AndroidJavaClass)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AndroidJavaClass*), "_AndroidJavaClass", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::AndroidJavaClass::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
