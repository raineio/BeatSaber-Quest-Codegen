// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Attribute
#include "System/Attribute.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: NativeClassAttribute
  class NativeClassAttribute;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::NativeClassAttribute);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::NativeClassAttribute*, "UnityEngine", "NativeClassAttribute");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.NativeClassAttribute
  // [TokenAttribute] Offset: FFFFFFFF
  // [VisibleToOtherModulesAttribute] Offset: 1041E94
  // [AttributeUsageAttribute] Offset: 1041E94
  class NativeClassAttribute : public ::System::Attribute {
    public:
    public:
    // [DebuggerBrowsableAttribute] Offset: 0x1042408
    // private System.String <QualifiedNativeName>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    ::StringW QualifiedNativeName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // [DebuggerBrowsableAttribute] Offset: 0x1042444
    // private System.String <Declaration>k__BackingField
    // Size: 0x8
    // Offset: 0x18
    ::StringW Declaration;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Get instance field reference: private System.String <QualifiedNativeName>k__BackingField
    [[deprecated("Use field access instead!")]] ::StringW& dyn_$QualifiedNativeName$k__BackingField();
    // Get instance field reference: private System.String <Declaration>k__BackingField
    [[deprecated("Use field access instead!")]] ::StringW& dyn_$Declaration$k__BackingField();
    // private System.Void set_QualifiedNativeName(System.String value)
    // Offset: 0x2ADC51C
    void set_QualifiedNativeName(::StringW value);
    // private System.Void set_Declaration(System.String value)
    // Offset: 0x2ADC524
    void set_Declaration(::StringW value);
    // public System.Void .ctor(System.String qualifiedCppName)
    // Offset: 0x2ADC52C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NativeClassAttribute* New_ctor(::StringW qualifiedCppName) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::NativeClassAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NativeClassAttribute*, creationType>(qualifiedCppName)));
    }
    // public System.Void .ctor(System.String qualifiedCppName, System.String declaration)
    // Offset: 0x2ADC5A4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NativeClassAttribute* New_ctor(::StringW qualifiedCppName, ::StringW declaration) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::NativeClassAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NativeClassAttribute*, creationType>(qualifiedCppName, declaration)));
    }
  }; // UnityEngine.NativeClassAttribute
  #pragma pack(pop)
  static check_size<sizeof(NativeClassAttribute), 24 + sizeof(::StringW)> __UnityEngine_NativeClassAttributeSizeCheck;
  static_assert(sizeof(NativeClassAttribute) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::NativeClassAttribute::set_QualifiedNativeName
// Il2CppName: set_QualifiedNativeName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::NativeClassAttribute::*)(::StringW)>(&UnityEngine::NativeClassAttribute::set_QualifiedNativeName)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::NativeClassAttribute*), "set_QualifiedNativeName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::NativeClassAttribute::set_Declaration
// Il2CppName: set_Declaration
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::NativeClassAttribute::*)(::StringW)>(&UnityEngine::NativeClassAttribute::set_Declaration)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::NativeClassAttribute*), "set_Declaration", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::NativeClassAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::NativeClassAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
