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
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: System.Runtime.Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: KnownTypeAttribute
  class KnownTypeAttribute;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Runtime::Serialization::KnownTypeAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::KnownTypeAttribute*, "System.Runtime.Serialization", "KnownTypeAttribute");
// Type namespace: System.Runtime.Serialization
namespace System::Runtime::Serialization {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.Serialization.KnownTypeAttribute
  // [TokenAttribute] Offset: FFFFFFFF
  // [AttributeUsageAttribute] Offset: 108F0F4
  class KnownTypeAttribute : public ::System::Attribute {
    public:
    public:
    // private System.Type type
    // Size: 0x8
    // Offset: 0x10
    ::System::Type* type;
    // Field size check
    static_assert(sizeof(::System::Type*) == 0x8);
    public:
    // Creating conversion operator: operator ::System::Type*
    constexpr operator ::System::Type*() const noexcept {
      return type;
    }
    // Get instance field reference: private System.Type type
    [[deprecated("Use field access instead!")]] ::System::Type*& dyn_type();
    // public System.Void .ctor(System.Type type)
    // Offset: 0x2AF133C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static KnownTypeAttribute* New_ctor(::System::Type* type) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Runtime::Serialization::KnownTypeAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<KnownTypeAttribute*, creationType>(type)));
    }
  }; // System.Runtime.Serialization.KnownTypeAttribute
  #pragma pack(pop)
  static check_size<sizeof(KnownTypeAttribute), 16 + sizeof(::System::Type*)> __System_Runtime_Serialization_KnownTypeAttributeSizeCheck;
  static_assert(sizeof(KnownTypeAttribute) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Runtime::Serialization::KnownTypeAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
