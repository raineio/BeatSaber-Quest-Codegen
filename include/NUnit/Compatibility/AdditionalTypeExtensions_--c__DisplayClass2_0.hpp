// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: NUnit.Compatibility.AdditionalTypeExtensions
#include "NUnit/Compatibility/AdditionalTypeExtensions.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: MethodInfo
  class MethodInfo;
}
// Completed forward declares
// Type namespace: NUnit.Compatibility
namespace NUnit::Compatibility {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: NUnit.Compatibility.AdditionalTypeExtensions/<>c__DisplayClass2_0
  // [] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: D0F558
  class AdditionalTypeExtensions::$$c__DisplayClass2_0 : public ::Il2CppObject {
    public:
    // public System.Type to
    // Size: 0x8
    // Offset: 0x10
    System::Type* to;
    // Field size check
    static_assert(sizeof(System::Type*) == 0x8);
    // Creating value type constructor for type: $$c__DisplayClass2_0
    $$c__DisplayClass2_0(System::Type* to_ = {}) noexcept : to{to_} {}
    // Creating conversion operator: operator System::Type*
    constexpr operator System::Type*() const noexcept {
      return to;
    }
    // System.Boolean <IsCastableFrom>b__0(System.Reflection.MethodInfo m)
    // Offset: 0x159DCD8
    bool $IsCastableFrom$b__0(System::Reflection::MethodInfo* m);
    // public System.Void .ctor()
    // Offset: 0x159D2AC
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AdditionalTypeExtensions::$$c__DisplayClass2_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("NUnit::Compatibility::AdditionalTypeExtensions::$$c__DisplayClass2_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AdditionalTypeExtensions::$$c__DisplayClass2_0*, creationType>()));
    }
  }; // NUnit.Compatibility.AdditionalTypeExtensions/<>c__DisplayClass2_0
  #pragma pack(pop)
  static check_size<sizeof(AdditionalTypeExtensions::$$c__DisplayClass2_0), 16 + sizeof(System::Type*)> __NUnit_Compatibility_AdditionalTypeExtensions_$$c__DisplayClass2_0SizeCheck;
  static_assert(sizeof(AdditionalTypeExtensions::$$c__DisplayClass2_0) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(NUnit::Compatibility::AdditionalTypeExtensions::$$c__DisplayClass2_0*, "NUnit.Compatibility", "AdditionalTypeExtensions/<>c__DisplayClass2_0");