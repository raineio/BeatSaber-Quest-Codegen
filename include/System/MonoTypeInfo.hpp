// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: MonoCMethod
  class MonoCMethod;
}
// Completed forward declares
// Type namespace: System
namespace System {
  // Size: 0x20
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: System.MonoTypeInfo
  // [TokenAttribute] Offset: FFFFFFFF
  class MonoTypeInfo : public ::Il2CppObject {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    private:
    #endif
    // public System.String full_name
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* full_name;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public System.Reflection.MonoCMethod default_ctor
    // Size: 0x8
    // Offset: 0x18
    System::Reflection::MonoCMethod* default_ctor;
    // Field size check
    static_assert(sizeof(System::Reflection::MonoCMethod*) == 0x8);
    public:
    // Get instance field reference: public System.String full_name
    ::Il2CppString*& dyn_full_name();
    // Get instance field reference: public System.Reflection.MonoCMethod default_ctor
    System::Reflection::MonoCMethod*& dyn_default_ctor();
    // public System.Void .ctor()
    // Offset: 0x1A123E0
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MonoTypeInfo* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::MonoTypeInfo::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MonoTypeInfo*, creationType>()));
    }
  }; // System.MonoTypeInfo
  #pragma pack(pop)
  static check_size<sizeof(MonoTypeInfo), 24 + sizeof(System::Reflection::MonoCMethod*)> __System_MonoTypeInfoSizeCheck;
  static_assert(sizeof(MonoTypeInfo) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(System::MonoTypeInfo*, "System", "MonoTypeInfo");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::MonoTypeInfo::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
