// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: SimpleFileLogger
#include "GlobalNamespace/SimpleFileLogger.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::SimpleFileLogger::MonoLogger);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SimpleFileLogger::MonoLogger*, "", "SimpleFileLogger/MonoLogger");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: SimpleFileLogger/MonoLogger
  // [TokenAttribute] Offset: FFFFFFFF
  class SimpleFileLogger::MonoLogger : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // private readonly System.Collections.Generic.List`1<System.String> _lines
    // Size: 0x8
    // Offset: 0x18
    ::System::Collections::Generic::List_1<::StringW>* lines;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::StringW>*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private readonly System.Collections.Generic.List`1<System.String> _lines
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::StringW>*& dyn__lines();
    // public System.Void .ctor()
    // Offset: 0x2A29510
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SimpleFileLogger::MonoLogger* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::SimpleFileLogger::MonoLogger::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SimpleFileLogger::MonoLogger*, creationType>()));
    }
    // protected System.Void OnDestroy()
    // Offset: 0x2A294BC
    void OnDestroy();
    // public System.Void Log(System.String text)
    // Offset: 0x2A291C0
    void Log(::StringW text);
    // public System.Void Clear()
    // Offset: 0x2A29128
    void Clear();
  }; // SimpleFileLogger/MonoLogger
  #pragma pack(pop)
  static check_size<sizeof(SimpleFileLogger::MonoLogger), 24 + sizeof(::System::Collections::Generic::List_1<::StringW>*)> __GlobalNamespace_SimpleFileLogger_MonoLoggerSizeCheck;
  static_assert(sizeof(SimpleFileLogger::MonoLogger) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::SimpleFileLogger::MonoLogger::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::SimpleFileLogger::MonoLogger::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SimpleFileLogger::MonoLogger::*)()>(&GlobalNamespace::SimpleFileLogger::MonoLogger::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SimpleFileLogger::MonoLogger*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SimpleFileLogger::MonoLogger::Log
// Il2CppName: Log
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SimpleFileLogger::MonoLogger::*)(::StringW)>(&GlobalNamespace::SimpleFileLogger::MonoLogger::Log)> {
  static const MethodInfo* get() {
    static auto* text = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SimpleFileLogger::MonoLogger*), "Log", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{text});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SimpleFileLogger::MonoLogger::Clear
// Il2CppName: Clear
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SimpleFileLogger::MonoLogger::*)()>(&GlobalNamespace::SimpleFileLogger::MonoLogger::Clear)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SimpleFileLogger::MonoLogger*), "Clear", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
