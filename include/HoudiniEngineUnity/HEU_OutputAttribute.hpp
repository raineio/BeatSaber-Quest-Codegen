// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: HoudiniEngineUnity.HAPI_AttributeOwner
#include "HoudiniEngineUnity/HAPI_AttributeOwner.hpp"
// Including type: HoudiniEngineUnity.HAPI_StorageType
#include "HoudiniEngineUnity/HAPI_StorageType.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "extern/beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Type namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Forward declaring type: HEU_OutputAttribute
  class HEU_OutputAttribute;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(HoudiniEngineUnity::HEU_OutputAttribute);
DEFINE_IL2CPP_ARG_TYPE(HoudiniEngineUnity::HEU_OutputAttribute*, "HoudiniEngineUnity", "HEU_OutputAttribute");
// Type namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: HoudiniEngineUnity.HEU_OutputAttribute
  // [TokenAttribute] Offset: FFFFFFFF
  class HEU_OutputAttribute : public ::Il2CppObject {
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
    // public System.String _name
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* name;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public HoudiniEngineUnity.HAPI_AttributeOwner _class
    // Size: 0x4
    // Offset: 0x18
    HoudiniEngineUnity::HAPI_AttributeOwner _class;
    // Field size check
    static_assert(sizeof(HoudiniEngineUnity::HAPI_AttributeOwner) == 0x4);
    // public HoudiniEngineUnity.HAPI_StorageType _type
    // Size: 0x4
    // Offset: 0x1C
    HoudiniEngineUnity::HAPI_StorageType type;
    // Field size check
    static_assert(sizeof(HoudiniEngineUnity::HAPI_StorageType) == 0x4);
    // public System.Int32 _count
    // Size: 0x4
    // Offset: 0x20
    int count;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 _tupleSize
    // Size: 0x4
    // Offset: 0x24
    int tupleSize;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32[] _intValues
    // Size: 0x8
    // Offset: 0x28
    ::ArrayW<int> intValues;
    // Field size check
    static_assert(sizeof(::ArrayW<int>) == 0x8);
    // public System.Single[] _floatValues
    // Size: 0x8
    // Offset: 0x30
    ::ArrayW<float> floatValues;
    // Field size check
    static_assert(sizeof(::ArrayW<float>) == 0x8);
    // public System.String[] _stringValues
    // Size: 0x8
    // Offset: 0x38
    ::ArrayW<::Il2CppString*> stringValues;
    // Field size check
    static_assert(sizeof(::ArrayW<::Il2CppString*>) == 0x8);
    public:
    // Get instance field reference: public System.String _name
    ::Il2CppString*& dyn__name();
    // Get instance field reference: public HoudiniEngineUnity.HAPI_AttributeOwner _class
    HoudiniEngineUnity::HAPI_AttributeOwner& dyn__class();
    // Get instance field reference: public HoudiniEngineUnity.HAPI_StorageType _type
    HoudiniEngineUnity::HAPI_StorageType& dyn__type();
    // Get instance field reference: public System.Int32 _count
    int& dyn__count();
    // Get instance field reference: public System.Int32 _tupleSize
    int& dyn__tupleSize();
    // Get instance field reference: public System.Int32[] _intValues
    ::ArrayW<int>& dyn__intValues();
    // Get instance field reference: public System.Single[] _floatValues
    ::ArrayW<float>& dyn__floatValues();
    // Get instance field reference: public System.String[] _stringValues
    ::ArrayW<::Il2CppString*>& dyn__stringValues();
    // public System.Void .ctor()
    // Offset: 0x1813A7C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HEU_OutputAttribute* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("HoudiniEngineUnity::HEU_OutputAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HEU_OutputAttribute*, creationType>()));
    }
  }; // HoudiniEngineUnity.HEU_OutputAttribute
  #pragma pack(pop)
  static check_size<sizeof(HEU_OutputAttribute), 56 + sizeof(::ArrayW<::Il2CppString*>)> __HoudiniEngineUnity_HEU_OutputAttributeSizeCheck;
  static_assert(sizeof(HEU_OutputAttribute) == 0x40);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_OutputAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
