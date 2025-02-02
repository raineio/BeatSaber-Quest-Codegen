// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.DateTime
#include "System/DateTime.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: Oculus.Platform.Models
namespace Oculus::Platform::Models {
  // Forward declaring type: Purchase
  class Purchase;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Platform::Models::Purchase);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Models::Purchase*, "Oculus.Platform.Models", "Purchase");
// Type namespace: Oculus.Platform.Models
namespace Oculus::Platform::Models {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Platform.Models.Purchase
  // [TokenAttribute] Offset: FFFFFFFF
  class Purchase : public ::Il2CppObject {
    public:
    public:
    // public readonly System.DateTime ExpirationTime
    // Size: 0x8
    // Offset: 0x10
    ::System::DateTime ExpirationTime;
    // Field size check
    static_assert(sizeof(::System::DateTime) == 0x8);
    // public readonly System.DateTime GrantTime
    // Size: 0x8
    // Offset: 0x18
    ::System::DateTime GrantTime;
    // Field size check
    static_assert(sizeof(::System::DateTime) == 0x8);
    // public readonly System.String ID
    // Size: 0x8
    // Offset: 0x20
    ::StringW _ID;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public readonly System.String Sku
    // Size: 0x8
    // Offset: 0x28
    ::StringW Sku;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Get instance field reference: public readonly System.DateTime ExpirationTime
    [[deprecated("Use field access instead!")]] ::System::DateTime& dyn_ExpirationTime();
    // Get instance field reference: public readonly System.DateTime GrantTime
    [[deprecated("Use field access instead!")]] ::System::DateTime& dyn_GrantTime();
    // Get instance field reference: public readonly System.String ID
    [[deprecated("Use field access instead!")]] ::StringW& dyn_ID();
    // Get instance field reference: public readonly System.String Sku
    [[deprecated("Use field access instead!")]] ::StringW& dyn_Sku();
    // public System.Void .ctor(System.IntPtr o)
    // Offset: 0x1A36C08
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Purchase* New_ctor(::System::IntPtr o) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Platform::Models::Purchase::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Purchase*, creationType>(o)));
    }
  }; // Oculus.Platform.Models.Purchase
  #pragma pack(pop)
  static check_size<sizeof(Purchase), 40 + sizeof(::StringW)> __Oculus_Platform_Models_PurchaseSizeCheck;
  static_assert(sizeof(Purchase) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Platform::Models::Purchase::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
