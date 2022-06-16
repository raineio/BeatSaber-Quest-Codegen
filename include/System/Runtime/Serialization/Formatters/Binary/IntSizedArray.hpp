// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ICloneable
#include "System/ICloneable.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Type namespace: System.Runtime.Serialization.Formatters.Binary
namespace System::Runtime::Serialization::Formatters::Binary {
  // Forward declaring type: IntSizedArray
  class IntSizedArray;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Runtime::Serialization::Formatters::Binary::IntSizedArray);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::Formatters::Binary::IntSizedArray*, "System.Runtime.Serialization.Formatters.Binary", "IntSizedArray");
// Type namespace: System.Runtime.Serialization.Formatters.Binary
namespace System::Runtime::Serialization::Formatters::Binary {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.Serialization.Formatters.Binary.IntSizedArray
  // [TokenAttribute] Offset: FFFFFFFF
  // [DefaultMemberAttribute] Offset: 1032638
  class IntSizedArray : public ::Il2CppObject/*, public ::System::ICloneable*/ {
    public:
    public:
    // System.Int32[] objects
    // Size: 0x8
    // Offset: 0x10
    ::ArrayW<int> objects;
    // Field size check
    static_assert(sizeof(::ArrayW<int>) == 0x8);
    // System.Int32[] negObjects
    // Size: 0x8
    // Offset: 0x18
    ::ArrayW<int> negObjects;
    // Field size check
    static_assert(sizeof(::ArrayW<int>) == 0x8);
    public:
    // Creating interface conversion operator: operator ::System::ICloneable
    operator ::System::ICloneable() noexcept {
      return *reinterpret_cast<::System::ICloneable*>(this);
    }
    // Creating interface conversion operator: i_ICloneable
    inline ::System::ICloneable* i_ICloneable() noexcept {
      return reinterpret_cast<::System::ICloneable*>(this);
    }
    // Get instance field reference: System.Int32[] objects
    [[deprecated("Use field access instead!")]] ::ArrayW<int>& dyn_objects();
    // Get instance field reference: System.Int32[] negObjects
    [[deprecated("Use field access instead!")]] ::ArrayW<int>& dyn_negObjects();
    // System.Int32 get_Item(System.Int32 index)
    // Offset: 0x18F22A8
    int get_Item(int index);
    // System.Void set_Item(System.Int32 index, System.Int32 value)
    // Offset: 0x18F232C
    void set_Item(int index, int value);
    // private System.Void .ctor(System.Runtime.Serialization.Formatters.Binary.IntSizedArray sizedArray)
    // Offset: 0x18F2164
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IntSizedArray* New_ctor(::System::Runtime::Serialization::Formatters::Binary::IntSizedArray* sizedArray) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Runtime::Serialization::Formatters::Binary::IntSizedArray::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IntSizedArray*, creationType>(sizedArray)));
    }
    // public System.Object Clone()
    // Offset: 0x18F2248
    ::Il2CppObject* Clone();
    // System.Void IncreaseCapacity(System.Int32 index)
    // Offset: 0x18F23EC
    void IncreaseCapacity(int index);
    // public System.Void .ctor()
    // Offset: 0x18F20F4
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IntSizedArray* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Runtime::Serialization::Formatters::Binary::IntSizedArray::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IntSizedArray*, creationType>()));
    }
  }; // System.Runtime.Serialization.Formatters.Binary.IntSizedArray
  #pragma pack(pop)
  static check_size<sizeof(IntSizedArray), 24 + sizeof(::ArrayW<int>)> __System_Runtime_Serialization_Formatters_Binary_IntSizedArraySizeCheck;
  static_assert(sizeof(IntSizedArray) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Runtime::Serialization::Formatters::Binary::IntSizedArray::get_Item
// Il2CppName: get_Item
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Runtime::Serialization::Formatters::Binary::IntSizedArray::*)(int)>(&System::Runtime::Serialization::Formatters::Binary::IntSizedArray::get_Item)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::Formatters::Binary::IntSizedArray*), "get_Item", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::Formatters::Binary::IntSizedArray::set_Item
// Il2CppName: set_Item
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Serialization::Formatters::Binary::IntSizedArray::*)(int, int)>(&System::Runtime::Serialization::Formatters::Binary::IntSizedArray::set_Item)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::Formatters::Binary::IntSizedArray*), "set_Item", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index, value});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::Formatters::Binary::IntSizedArray::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Runtime::Serialization::Formatters::Binary::IntSizedArray::Clone
// Il2CppName: Clone
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Runtime::Serialization::Formatters::Binary::IntSizedArray::*)()>(&System::Runtime::Serialization::Formatters::Binary::IntSizedArray::Clone)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::Formatters::Binary::IntSizedArray*), "Clone", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::Formatters::Binary::IntSizedArray::IncreaseCapacity
// Il2CppName: IncreaseCapacity
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Serialization::Formatters::Binary::IntSizedArray::*)(int)>(&System::Runtime::Serialization::Formatters::Binary::IntSizedArray::IncreaseCapacity)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::Formatters::Binary::IntSizedArray*), "IncreaseCapacity", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::Formatters::Binary::IntSizedArray::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
