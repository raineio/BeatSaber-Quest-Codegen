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
// Type namespace: System.Runtime.InteropServices
namespace System::Runtime::InteropServices {
  // Forward declaring type: GuidAttribute
  class GuidAttribute;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(System::Runtime::InteropServices::GuidAttribute);
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::InteropServices::GuidAttribute*, "System.Runtime.InteropServices", "GuidAttribute");
// Type namespace: System.Runtime.InteropServices
namespace System::Runtime::InteropServices {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.InteropServices.GuidAttribute
  // [TokenAttribute] Offset: FFFFFFFF
  // [AttributeUsageAttribute] Offset: EA1FE4
  // [ComVisibleAttribute] Offset: EA1FE4
  class GuidAttribute : public System::Attribute {
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
    // System.String _val
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* val;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    public:
    // Creating conversion operator: operator ::Il2CppString*
    constexpr operator ::Il2CppString*() const noexcept {
      return val;
    }
    // Get instance field reference: System.String _val
    ::Il2CppString*& dyn__val();
    // public System.String get_Value()
    // Offset: 0x162328C
    ::Il2CppString* get_Value();
    // public System.Void .ctor(System.String guid)
    // Offset: 0x1623260
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GuidAttribute* New_ctor(::Il2CppString* guid) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Runtime::InteropServices::GuidAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GuidAttribute*, creationType>(guid)));
    }
  }; // System.Runtime.InteropServices.GuidAttribute
  #pragma pack(pop)
  static check_size<sizeof(GuidAttribute), 16 + sizeof(::Il2CppString*)> __System_Runtime_InteropServices_GuidAttributeSizeCheck;
  static_assert(sizeof(GuidAttribute) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Runtime::InteropServices::GuidAttribute::get_Value
// Il2CppName: get_Value
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::Runtime::InteropServices::GuidAttribute::*)()>(&System::Runtime::InteropServices::GuidAttribute::get_Value)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::InteropServices::GuidAttribute*), "get_Value", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::InteropServices::GuidAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
