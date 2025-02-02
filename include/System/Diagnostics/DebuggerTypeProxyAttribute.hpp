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
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: System.Diagnostics
namespace System::Diagnostics {
  // Forward declaring type: DebuggerTypeProxyAttribute
  class DebuggerTypeProxyAttribute;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Diagnostics::DebuggerTypeProxyAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Diagnostics::DebuggerTypeProxyAttribute*, "System.Diagnostics", "DebuggerTypeProxyAttribute");
// Type namespace: System.Diagnostics
namespace System::Diagnostics {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: System.Diagnostics.DebuggerTypeProxyAttribute
  // [TokenAttribute] Offset: FFFFFFFF
  // [AttributeUsageAttribute] Offset: 107A2E0
  // [ComVisibleAttribute] Offset: 107A2E0
  class DebuggerTypeProxyAttribute : public ::System::Attribute {
    public:
    public:
    // private System.String typeName
    // Size: 0x8
    // Offset: 0x10
    ::StringW typeName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Creating conversion operator: operator ::StringW
    constexpr operator ::StringW() const noexcept {
      return typeName;
    }
    // Get instance field reference: private System.String typeName
    [[deprecated("Use field access instead!")]] ::StringW& dyn_typeName();
    // public System.Void .ctor(System.Type type)
    // Offset: 0x198D5E0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DebuggerTypeProxyAttribute* New_ctor(::System::Type* type) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Diagnostics::DebuggerTypeProxyAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DebuggerTypeProxyAttribute*, creationType>(type)));
    }
  }; // System.Diagnostics.DebuggerTypeProxyAttribute
  #pragma pack(pop)
  static check_size<sizeof(DebuggerTypeProxyAttribute), 16 + sizeof(::StringW)> __System_Diagnostics_DebuggerTypeProxyAttributeSizeCheck;
  static_assert(sizeof(DebuggerTypeProxyAttribute) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Diagnostics::DebuggerTypeProxyAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
