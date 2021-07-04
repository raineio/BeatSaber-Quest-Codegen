// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Runtime::Serialization::Formatters::Binary
namespace System::Runtime::Serialization::Formatters::Binary {
  // Forward declaring type: __BinaryParser
  class __BinaryParser;
}
// Completed forward declares
// Type namespace: System.Runtime.Serialization.Formatters.Binary
namespace System::Runtime::Serialization::Formatters::Binary {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.Serialization.Formatters.Binary.BinaryCrossAppDomainAssembly
  class BinaryCrossAppDomainAssembly : public ::Il2CppObject {
    public:
    // System.Int32 assemId
    // Size: 0x4
    // Offset: 0x10
    int assemId;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // System.Int32 assemblyIndex
    // Size: 0x4
    // Offset: 0x14
    int assemblyIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: BinaryCrossAppDomainAssembly
    BinaryCrossAppDomainAssembly(int assemId_ = {}, int assemblyIndex_ = {}) noexcept : assemId{assemId_}, assemblyIndex{assemblyIndex_} {}
    // public System.Void Read(System.Runtime.Serialization.Formatters.Binary.__BinaryParser input)
    // Offset: 0x1607F54
    void Read(System::Runtime::Serialization::Formatters::Binary::__BinaryParser* input);
    // public System.Void Dump()
    // Offset: 0x1607FB4
    void Dump();
    // System.Void .ctor()
    // Offset: 0x1607F4C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BinaryCrossAppDomainAssembly* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Runtime::Serialization::Formatters::Binary::BinaryCrossAppDomainAssembly::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BinaryCrossAppDomainAssembly*, creationType>()));
    }
  }; // System.Runtime.Serialization.Formatters.Binary.BinaryCrossAppDomainAssembly
  #pragma pack(pop)
  static check_size<sizeof(BinaryCrossAppDomainAssembly), 20 + sizeof(int)> __System_Runtime_Serialization_Formatters_Binary_BinaryCrossAppDomainAssemblySizeCheck;
  static_assert(sizeof(BinaryCrossAppDomainAssembly) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Serialization::Formatters::Binary::BinaryCrossAppDomainAssembly*, "System.Runtime.Serialization.Formatters.Binary", "BinaryCrossAppDomainAssembly");
// Writing MetadataGetter for method: System::Runtime::Serialization::Formatters::Binary::BinaryCrossAppDomainAssembly::Read
// Il2CppName: Read
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Serialization::Formatters::Binary::BinaryCrossAppDomainAssembly::*)(System::Runtime::Serialization::Formatters::Binary::__BinaryParser*)>(&System::Runtime::Serialization::Formatters::Binary::BinaryCrossAppDomainAssembly::Read)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::Formatters::Binary::BinaryCrossAppDomainAssembly*), "Read", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Runtime::Serialization::Formatters::Binary::__BinaryParser*>()});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::Formatters::Binary::BinaryCrossAppDomainAssembly::Dump
// Il2CppName: Dump
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Serialization::Formatters::Binary::BinaryCrossAppDomainAssembly::*)()>(&System::Runtime::Serialization::Formatters::Binary::BinaryCrossAppDomainAssembly::Dump)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::Formatters::Binary::BinaryCrossAppDomainAssembly*), "Dump", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::Formatters::Binary::BinaryCrossAppDomainAssembly::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
