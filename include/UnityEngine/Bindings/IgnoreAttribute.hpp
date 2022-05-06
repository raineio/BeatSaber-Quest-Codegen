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
// Completed includes
// Type namespace: UnityEngine.Bindings
namespace UnityEngine::Bindings {
  // Forward declaring type: IgnoreAttribute
  class IgnoreAttribute;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Bindings::IgnoreAttribute);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Bindings::IgnoreAttribute*, "UnityEngine.Bindings", "IgnoreAttribute");
// Type namespace: UnityEngine.Bindings
namespace UnityEngine::Bindings {
  // Size: 0x11
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Bindings.IgnoreAttribute
  // [TokenAttribute] Offset: FFFFFFFF
  // [VisibleToOtherModulesAttribute] Offset: FFFFFFFF
  // [AttributeUsageAttribute] Offset: 10417C0
  class IgnoreAttribute : public ::System::Attribute {
    public:
    public:
    // [DebuggerBrowsableAttribute] Offset: 0x1041D84
    // private System.Boolean <DoesNotContributeToSize>k__BackingField
    // Size: 0x1
    // Offset: 0x10
    bool DoesNotContributeToSize;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Creating conversion operator: operator bool
    constexpr operator bool() const noexcept {
      return DoesNotContributeToSize;
    }
    // Get instance field reference: private System.Boolean <DoesNotContributeToSize>k__BackingField
    [[deprecated("Use field access instead!")]] bool& dyn_$DoesNotContributeToSize$k__BackingField();
    // public System.Void set_DoesNotContributeToSize(System.Boolean value)
    // Offset: 0x2AE50AC
    void set_DoesNotContributeToSize(bool value);
    // public System.Void .ctor()
    // Offset: 0x2AE50B8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IgnoreAttribute* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Bindings::IgnoreAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IgnoreAttribute*, creationType>()));
    }
  }; // UnityEngine.Bindings.IgnoreAttribute
  #pragma pack(pop)
  static check_size<sizeof(IgnoreAttribute), 16 + sizeof(bool)> __UnityEngine_Bindings_IgnoreAttributeSizeCheck;
  static_assert(sizeof(IgnoreAttribute) == 0x11);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Bindings::IgnoreAttribute::set_DoesNotContributeToSize
// Il2CppName: set_DoesNotContributeToSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Bindings::IgnoreAttribute::*)(bool)>(&UnityEngine::Bindings::IgnoreAttribute::set_DoesNotContributeToSize)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Bindings::IgnoreAttribute*), "set_DoesNotContributeToSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Bindings::IgnoreAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
