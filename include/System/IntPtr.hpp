// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include <stdint.h>
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.Runtime.Serialization.ISerializable
#include "System/Runtime/Serialization/ISerializable.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: SerializationInfo
  class SerializationInfo;
  // Forward declaring type: StreamingContext
  struct StreamingContext;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct Il2CppString;
struct Il2CppObject;
// Completed il2cpp-utils forward declares
// Type namespace: System
namespace System {
  // Autogenerated type: System.IntPtr
  struct IntPtr : public System::ValueType, public System::Runtime::Serialization::ISerializable {
    public:
    // private System.Void* m_value
    // Offset: 0x0
    void* m_value;
    // Get static field: static public readonly System.IntPtr Zero
    static System::IntPtr _get_Zero();
    // Set static field: static public readonly System.IntPtr Zero
    static void _set_Zero(System::IntPtr value);
    // Creating value type constructor for type: IntPtr
    IntPtr(void* m_value_ = {}) : m_value{m_value_} {}
    // public System.Void .ctor(System.Int32 value)
    // Offset: 0xA3F84C
    static IntPtr* New_ctor(int value);
    // public System.Void .ctor(System.Int64 value)
    // Offset: 0xA3F858
    static IntPtr* New_ctor(int64_t value);
    // public System.Void .ctor(System.Void* value)
    // Offset: 0xA3F860
    static IntPtr* New_ctor(void* value);
    // private System.Void .ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0xA3F868
    static IntPtr* New_ctor(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context);
    // static public System.Int32 get_Size()
    // Offset: 0x1015DF8
    static int get_Size();
    // public System.Int64 ToInt64()
    // Offset: 0xA3F888
    int64_t ToInt64();
    // public System.Void* ToPointer()
    // Offset: 0xA3F890
    void* ToPointer();
    // public System.String ToString(System.String format)
    // Offset: 0xA3F8CC
    ::Il2CppString* ToString(::Il2CppString* format);
    // System.Boolean IsNull()
    // Offset: 0xA3F904
    bool IsNull();
    // private System.Void System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0xA3F870
    // Implemented from: System.Runtime.Serialization.ISerializable
    // Base method: System.Void ISerializable::GetObjectData(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    void System_Runtime_Serialization_ISerializable_GetObjectData(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context);
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0xA3F878
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0xA3F880
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
    // public override System.String ToString()
    // Offset: 0xA3F898
    // Implemented from: System.ValueType
    // Base method: System.String ValueType::ToString()
    ::Il2CppString* ToString();
  }; // System.IntPtr
  // static public System.Boolean op_Equality(System.IntPtr value1, System.IntPtr value2)
  // Offset: 0x1015FB0
  inline bool operator ==(const System::IntPtr& value1, const System::IntPtr& value2) {
    return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("System", "IntPtr", "op_Equality", value1, value2));
  }
  // static public System.Boolean op_Inequality(System.IntPtr value1, System.IntPtr value2)
  // Offset: 0x1015FBC
  inline bool operator !=(const System::IntPtr& value1, const System::IntPtr& value2) {
    return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("System", "IntPtr", "op_Inequality", value1, value2));
  }
}
DEFINE_IL2CPP_ARG_TYPE(System::IntPtr, "System", "IntPtr");
#pragma pack(pop)
