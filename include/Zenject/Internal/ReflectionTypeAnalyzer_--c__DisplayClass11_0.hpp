// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.Internal.ReflectionTypeAnalyzer
#include "Zenject/Internal/ReflectionTypeAnalyzer.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: ConstructorInfo
  class ConstructorInfo;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: Zenject.Internal
namespace Zenject::Internal {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.Internal.ReflectionTypeAnalyzer/<>c__DisplayClass11_0
  // [CompilerGeneratedAttribute] Offset: DDE82C
  class ReflectionTypeAnalyzer::$$c__DisplayClass11_0 : public ::Il2CppObject {
    public:
    // public System.Reflection.ConstructorInfo c
    // Size: 0x8
    // Offset: 0x10
    System::Reflection::ConstructorInfo* c;
    // Field size check
    static_assert(sizeof(System::Reflection::ConstructorInfo*) == 0x8);
    // Creating value type constructor for type: $$c__DisplayClass11_0
    $$c__DisplayClass11_0(System::Reflection::ConstructorInfo* c_ = {}) noexcept : c{c_} {}
    // Creating conversion operator: operator System::Reflection::ConstructorInfo*
    constexpr operator System::Reflection::ConstructorInfo*() const noexcept {
      return c;
    }
    // System.Boolean <TryGetInjectConstructor>b__3(System.Type a)
    // Offset: 0x16440C0
    bool $TryGetInjectConstructor$b__3(System::Type* a);
    // public System.Void .ctor()
    // Offset: 0x1644034
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ReflectionTypeAnalyzer::$$c__DisplayClass11_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::Internal::ReflectionTypeAnalyzer::$$c__DisplayClass11_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ReflectionTypeAnalyzer::$$c__DisplayClass11_0*, creationType>()));
    }
  }; // Zenject.Internal.ReflectionTypeAnalyzer/<>c__DisplayClass11_0
  #pragma pack(pop)
  static check_size<sizeof(ReflectionTypeAnalyzer::$$c__DisplayClass11_0), 16 + sizeof(System::Reflection::ConstructorInfo*)> __Zenject_Internal_ReflectionTypeAnalyzer_$$c__DisplayClass11_0SizeCheck;
  static_assert(sizeof(ReflectionTypeAnalyzer::$$c__DisplayClass11_0) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(Zenject::Internal::ReflectionTypeAnalyzer::$$c__DisplayClass11_0*, "Zenject.Internal", "ReflectionTypeAnalyzer/<>c__DisplayClass11_0");
// Writing MetadataGetter for method: Zenject::Internal::ReflectionTypeAnalyzer::$$c__DisplayClass11_0::$TryGetInjectConstructor$b__3
// Il2CppName: <TryGetInjectConstructor>b__3
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Zenject::Internal::ReflectionTypeAnalyzer::$$c__DisplayClass11_0::*)(System::Type*)>(&Zenject::Internal::ReflectionTypeAnalyzer::$$c__DisplayClass11_0::$TryGetInjectConstructor$b__3)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::Internal::ReflectionTypeAnalyzer::$$c__DisplayClass11_0*), "<TryGetInjectConstructor>b__3", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Type*>()});
  }
};
// Writing MetadataGetter for method: Zenject::Internal::ReflectionTypeAnalyzer::$$c__DisplayClass11_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
