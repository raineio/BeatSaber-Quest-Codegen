// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
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
  // Autogenerated type: NUnit.Compatibility.AdditionalTypeExtensions/NUnit.Compatibility.<>c__DisplayClass2_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class AdditionalTypeExtensions::$$c__DisplayClass2_0 : public ::Il2CppObject {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    private:
    #endif
    // public System.Type to
    // Size: 0x8
    // Offset: 0x10
    System::Type* to;
    // Field size check
    static_assert(sizeof(System::Type*) == 0x8);
    public:
    // Creating conversion operator: operator System::Type*
    constexpr operator System::Type*() const noexcept {
      return to;
    }
    // Get instance field reference: public System.Type to
    System::Type*& dyn_to();
    // System.Boolean <IsCastableFrom>b__0(System.Reflection.MethodInfo m)
    // Offset: 0x19265F8
    bool $IsCastableFrom$b__0(System::Reflection::MethodInfo* m);
    // public System.Void .ctor()
    // Offset: 0x1925BCC
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AdditionalTypeExtensions::$$c__DisplayClass2_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("NUnit::Compatibility::AdditionalTypeExtensions::$$c__DisplayClass2_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AdditionalTypeExtensions::$$c__DisplayClass2_0*, creationType>()));
    }
  }; // NUnit.Compatibility.AdditionalTypeExtensions/NUnit.Compatibility.<>c__DisplayClass2_0
  #pragma pack(pop)
  static check_size<sizeof(AdditionalTypeExtensions::$$c__DisplayClass2_0), 16 + sizeof(System::Type*)> __NUnit_Compatibility_AdditionalTypeExtensions_$$c__DisplayClass2_0SizeCheck;
  static_assert(sizeof(AdditionalTypeExtensions::$$c__DisplayClass2_0) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(NUnit::Compatibility::AdditionalTypeExtensions::$$c__DisplayClass2_0*, "NUnit.Compatibility", "AdditionalTypeExtensions/<>c__DisplayClass2_0");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: NUnit::Compatibility::AdditionalTypeExtensions::$$c__DisplayClass2_0::$IsCastableFrom$b__0
// Il2CppName: <IsCastableFrom>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (NUnit::Compatibility::AdditionalTypeExtensions::$$c__DisplayClass2_0::*)(System::Reflection::MethodInfo*)>(&NUnit::Compatibility::AdditionalTypeExtensions::$$c__DisplayClass2_0::$IsCastableFrom$b__0)> {
  static const MethodInfo* get() {
    static auto* m = &::il2cpp_utils::GetClassFromName("System.Reflection", "MethodInfo")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Compatibility::AdditionalTypeExtensions::$$c__DisplayClass2_0*), "<IsCastableFrom>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{m});
  }
};
// Writing MetadataGetter for method: NUnit::Compatibility::AdditionalTypeExtensions::$$c__DisplayClass2_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
