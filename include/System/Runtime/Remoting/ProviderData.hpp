// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: Hashtable
  class Hashtable;
  // Forward declaring type: IList
  class IList;
}
// Completed forward declares
// Type namespace: System.Runtime.Remoting
namespace System::Runtime::Remoting {
  // Forward declaring type: ProviderData
  class ProviderData;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(System::Runtime::Remoting::ProviderData);
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Remoting::ProviderData*, "System.Runtime.Remoting", "ProviderData");
// Type namespace: System.Runtime.Remoting
namespace System::Runtime::Remoting {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.Remoting.ProviderData
  // [TokenAttribute] Offset: FFFFFFFF
  class ProviderData : public ::Il2CppObject {
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
    // System.String Ref
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* Ref;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // System.String Type
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* Type;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // System.String Id
    // Size: 0x8
    // Offset: 0x20
    ::Il2CppString* Id;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // System.Collections.Hashtable CustomProperties
    // Size: 0x8
    // Offset: 0x28
    System::Collections::Hashtable* CustomProperties;
    // Field size check
    static_assert(sizeof(System::Collections::Hashtable*) == 0x8);
    // System.Collections.IList CustomData
    // Size: 0x8
    // Offset: 0x30
    System::Collections::IList* CustomData;
    // Field size check
    static_assert(sizeof(System::Collections::IList*) == 0x8);
    public:
    // Get instance field reference: System.String Ref
    ::Il2CppString*& dyn_Ref();
    // Get instance field reference: System.String Type
    ::Il2CppString*& dyn_Type();
    // Get instance field reference: System.String Id
    ::Il2CppString*& dyn_Id();
    // Get instance field reference: System.Collections.Hashtable CustomProperties
    System::Collections::Hashtable*& dyn_CustomProperties();
    // Get instance field reference: System.Collections.IList CustomData
    System::Collections::IList*& dyn_CustomData();
    // public System.Void CopyFrom(System.Runtime.Remoting.ProviderData other)
    // Offset: 0x1C5D514
    void CopyFrom(System::Runtime::Remoting::ProviderData* other);
    // public System.Void .ctor()
    // Offset: 0x1C4AC10
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ProviderData* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Runtime::Remoting::ProviderData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ProviderData*, creationType>()));
    }
  }; // System.Runtime.Remoting.ProviderData
  #pragma pack(pop)
  static check_size<sizeof(ProviderData), 48 + sizeof(System::Collections::IList*)> __System_Runtime_Remoting_ProviderDataSizeCheck;
  static_assert(sizeof(ProviderData) == 0x38);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Runtime::Remoting::ProviderData::CopyFrom
// Il2CppName: CopyFrom
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Remoting::ProviderData::*)(System::Runtime::Remoting::ProviderData*)>(&System::Runtime::Remoting::ProviderData::CopyFrom)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("System.Runtime.Remoting", "ProviderData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::ProviderData*), "CopyFrom", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::ProviderData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
