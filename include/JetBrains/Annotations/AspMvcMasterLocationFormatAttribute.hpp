// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Attribute
#include "System/Attribute.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: JetBrains.Annotations
namespace JetBrains::Annotations {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: JetBrains.Annotations.AspMvcMasterLocationFormatAttribute
  // [TokenAttribute] Offset: FFFFFFFF
  // [AttributeUsageAttribute] Offset: EAD9A0
  class AspMvcMasterLocationFormatAttribute : public System::Attribute {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    private:
    #endif
    // private System.String <Format>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* Format;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    public:
    // Creating conversion operator: operator ::Il2CppString*
    constexpr operator ::Il2CppString*() const noexcept {
      return Format;
    }
    // Get instance field reference: private System.String <Format>k__BackingField
    ::Il2CppString*& dyn_$Format$k__BackingField();
    // public System.String get_Format()
    // Offset: 0x2610268
    ::Il2CppString* get_Format();
    // private System.Void set_Format(System.String value)
    // Offset: 0x2610270
    void set_Format(::Il2CppString* value);
    // public System.Void .ctor(System.String format)
    // Offset: 0x261023C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AspMvcMasterLocationFormatAttribute* New_ctor(::Il2CppString* format) {
      static auto ___internal__logger = ::Logger::get().WithContext("JetBrains::Annotations::AspMvcMasterLocationFormatAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AspMvcMasterLocationFormatAttribute*, creationType>(format)));
    }
  }; // JetBrains.Annotations.AspMvcMasterLocationFormatAttribute
  #pragma pack(pop)
  static check_size<sizeof(AspMvcMasterLocationFormatAttribute), 16 + sizeof(::Il2CppString*)> __JetBrains_Annotations_AspMvcMasterLocationFormatAttributeSizeCheck;
  static_assert(sizeof(AspMvcMasterLocationFormatAttribute) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(JetBrains::Annotations::AspMvcMasterLocationFormatAttribute*, "JetBrains.Annotations", "AspMvcMasterLocationFormatAttribute");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: JetBrains::Annotations::AspMvcMasterLocationFormatAttribute::get_Format
// Il2CppName: get_Format
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (JetBrains::Annotations::AspMvcMasterLocationFormatAttribute::*)()>(&JetBrains::Annotations::AspMvcMasterLocationFormatAttribute::get_Format)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(JetBrains::Annotations::AspMvcMasterLocationFormatAttribute*), "get_Format", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: JetBrains::Annotations::AspMvcMasterLocationFormatAttribute::set_Format
// Il2CppName: set_Format
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (JetBrains::Annotations::AspMvcMasterLocationFormatAttribute::*)(::Il2CppString*)>(&JetBrains::Annotations::AspMvcMasterLocationFormatAttribute::set_Format)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(JetBrains::Annotations::AspMvcMasterLocationFormatAttribute*), "set_Format", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: JetBrains::Annotations::AspMvcMasterLocationFormatAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
