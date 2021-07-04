// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Attribute
#include "System/Attribute.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: UnityEngine.Bindings
namespace UnityEngine::Bindings {
  // Size: 0x11
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Bindings.NativeWritableSelfAttribute
  // [AttributeUsageAttribute] Offset: D8B7EC
  // [VisibleToOtherModulesAttribute] Offset: D8B7EC
  class NativeWritableSelfAttribute : public System::Attribute {
    public:
    // [CompilerGeneratedAttribute] Offset: 0xD8BD68
    // [DebuggerBrowsableAttribute] Offset: 0xD8BD68
    // private System.Boolean <WritableSelf>k__BackingField
    // Size: 0x1
    // Offset: 0x10
    bool WritableSelf;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: NativeWritableSelfAttribute
    NativeWritableSelfAttribute(bool WritableSelf_ = {}) noexcept : WritableSelf{WritableSelf_} {}
    // Creating conversion operator: operator bool
    constexpr operator bool() const noexcept {
      return WritableSelf;
    }
    // public System.Void set_WritableSelf(System.Boolean value)
    // Offset: 0x23EC1C4
    void set_WritableSelf(bool value);
    // public System.Void .ctor()
    // Offset: 0x23EC1D0
    // Implemented from: System.Attribute
    // Base method: System.Void Attribute::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NativeWritableSelfAttribute* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Bindings::NativeWritableSelfAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NativeWritableSelfAttribute*, creationType>()));
    }
  }; // UnityEngine.Bindings.NativeWritableSelfAttribute
  #pragma pack(pop)
  static check_size<sizeof(NativeWritableSelfAttribute), 16 + sizeof(bool)> __UnityEngine_Bindings_NativeWritableSelfAttributeSizeCheck;
  static_assert(sizeof(NativeWritableSelfAttribute) == 0x11);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Bindings::NativeWritableSelfAttribute*, "UnityEngine.Bindings", "NativeWritableSelfAttribute");
// Writing MetadataGetter for method: UnityEngine::Bindings::NativeWritableSelfAttribute::set_WritableSelf
// Il2CppName: set_WritableSelf
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Bindings::NativeWritableSelfAttribute::*)(bool)>(&UnityEngine::Bindings::NativeWritableSelfAttribute::set_WritableSelf)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Bindings::NativeWritableSelfAttribute*), "set_WritableSelf", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<bool>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::Bindings::NativeWritableSelfAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
