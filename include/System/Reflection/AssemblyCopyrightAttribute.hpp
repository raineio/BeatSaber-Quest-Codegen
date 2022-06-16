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
// Type namespace: System.Reflection
namespace System::Reflection {
  // Forward declaring type: AssemblyCopyrightAttribute
  class AssemblyCopyrightAttribute;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Reflection::AssemblyCopyrightAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Reflection::AssemblyCopyrightAttribute*, "System.Reflection", "AssemblyCopyrightAttribute");
// Type namespace: System.Reflection
namespace System::Reflection {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: System.Reflection.AssemblyCopyrightAttribute
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: 102FAA8
  // [AttributeUsageAttribute] Offset: 102FAA8
  class AssemblyCopyrightAttribute : public ::System::Attribute {
    public:
    public:
    // private System.String m_copyright
    // Size: 0x8
    // Offset: 0x10
    ::StringW m_copyright;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Creating conversion operator: operator ::StringW
    constexpr operator ::StringW() const noexcept {
      return m_copyright;
    }
    // Get instance field reference: private System.String m_copyright
    [[deprecated("Use field access instead!")]] ::StringW& dyn_m_copyright();
    // public System.Void .ctor(System.String copyright)
    // Offset: 0x2201E94
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AssemblyCopyrightAttribute* New_ctor(::StringW copyright) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Reflection::AssemblyCopyrightAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AssemblyCopyrightAttribute*, creationType>(copyright)));
    }
  }; // System.Reflection.AssemblyCopyrightAttribute
  #pragma pack(pop)
  static check_size<sizeof(AssemblyCopyrightAttribute), 16 + sizeof(::StringW)> __System_Reflection_AssemblyCopyrightAttributeSizeCheck;
  static_assert(sizeof(AssemblyCopyrightAttribute) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Reflection::AssemblyCopyrightAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
