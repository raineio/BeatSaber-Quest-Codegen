// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.Runtime.Serialization.ISerializable
#include "System/Runtime/Serialization/ISerializable.hpp"
// Including type: System.Runtime.Serialization.StreamingContext
#include "System/Runtime/Serialization/StreamingContext.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: SerializationInfo
  class SerializationInfo;
}
// Completed forward declares
// Type namespace: System
namespace System {
  // Size: 0x8
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: System.IntPtr
  // [ComVisibleAttribute] Offset: D7B24C
  struct IntPtr/*, public System::ValueType, public System::Runtime::Serialization::ISerializable*/ {
    public:
    // private System.Void* m_value
    // Size: 0x8
    // Offset: 0x0
    void* m_value;
    // Field size check
    static_assert(sizeof(void*) == 0x8);
    // Creating value type constructor for type: IntPtr
    constexpr IntPtr(void* m_value_ = {}) noexcept : m_value{m_value_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator System::Runtime::Serialization::ISerializable
    operator System::Runtime::Serialization::ISerializable() noexcept {
      return *reinterpret_cast<System::Runtime::Serialization::ISerializable*>(this);
    }
    // Creating conversion operator: operator void*
    constexpr operator void*() const noexcept {
      return m_value;
    }
    // Get static field: static public readonly System.IntPtr Zero
    static System::IntPtr _get_Zero();
    // Set static field: static public readonly System.IntPtr Zero
    static void _set_Zero(System::IntPtr value);
    // public System.Void .ctor(System.Int32 value)
    // Offset: 0xEFE5BC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    IntPtr(int value) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::IntPtr::.ctor");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(value)})));
      ::il2cpp_utils::RunMethodThrow<void, false>(*this, ___internal__method, value);
    }
    // public System.Void .ctor(System.Int64 value)
    // Offset: 0xEFE5C8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    IntPtr(int64_t value) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::IntPtr::.ctor");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(value)})));
      ::il2cpp_utils::RunMethodThrow<void, false>(*this, ___internal__method, value);
    }
    // public System.Void .ctor(System.Void* value)
    // Offset: 0xEFE5D0
    // template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    // ABORTED: conflicts with another method.  IntPtr(void* value)
    // private System.Void .ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0xEFE5D8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    IntPtr(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::IntPtr::.ctor");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(info), ::il2cpp_utils::ExtractType(context)})));
      ::il2cpp_utils::RunMethodThrow<void, false>(*this, ___internal__method, info, context);
    }
    // static public System.Int32 get_Size()
    // Offset: 0x181FE98
    static int get_Size();
    // private System.Void System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0xEFE5E0
    void System_Runtime_Serialization_ISerializable_GetObjectData(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context);
    // public System.Int64 ToInt64()
    // Offset: 0xEFE5F8
    int64_t ToInt64();
    // public System.Void* ToPointer()
    // Offset: 0xEFE600
    void* ToPointer();
    // public System.String ToString(System.String format)
    // Offset: 0xEFE63C
    ::Il2CppString* ToString(::Il2CppString* format);
    // static public System.IntPtr op_Explicit(System.Int32 value)
    // Offset: 0x1820068
    explicit IntPtr(int& value);
    // static public System.IntPtr op_Explicit(System.Int64 value)
    // Offset: 0x1820070
    explicit IntPtr(int64_t& value);
    // static public System.IntPtr op_Explicit(System.Void* value)
    // Offset: 0x1820074
    // ABORTED: conflicts with another method.  explicit IntPtr(void* value);
    // static public System.Int32 op_Explicit(System.IntPtr value)
    // Offset: 0x1820078
    explicit operator int();
    // static public System.Int64 op_Explicit(System.IntPtr value)
    // Offset: 0x182007C
    explicit operator int64_t();
    // static public System.Void* op_Explicit(System.IntPtr value)
    // Offset: 0x1820080
    // ABORTED: conflicts with another method.  explicit operator void*();
    // System.Boolean IsNull()
    // Offset: 0xEFE674
    bool IsNull();
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0xEFE5E8
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0xEFE5F0
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
    // public override System.String ToString()
    // Offset: 0xEFE608
    // Implemented from: System.ValueType
    // Base method: System.String ValueType::ToString()
    ::Il2CppString* ToString();
  }; // System.IntPtr
  #pragma pack(pop)
  static check_size<sizeof(IntPtr), 0 + sizeof(void*)> __System_IntPtrSizeCheck;
  static_assert(sizeof(IntPtr) == 0x8);
  // static public System.Boolean op_Equality(System.IntPtr value1, System.IntPtr value2)
  // Offset: 0x1820050
  bool operator ==(const System::IntPtr& value1, const System::IntPtr& value2);
  // static public System.Boolean op_Inequality(System.IntPtr value1, System.IntPtr value2)
  // Offset: 0x182005C
  bool operator !=(const System::IntPtr& value1, const System::IntPtr& value2);
}
DEFINE_IL2CPP_ARG_TYPE(System::IntPtr, "System", "IntPtr");
// Writing MetadataGetter for method: System::IntPtr::IntPtr
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::IntPtr::IntPtr
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::IntPtr::IntPtr
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::IntPtr::IntPtr
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::IntPtr::get_Size
// Il2CppName: get_Size
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)()>(&System::IntPtr::get_Size)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IntPtr), "get_Size", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IntPtr::System_Runtime_Serialization_ISerializable_GetObjectData
// Il2CppName: System.Runtime.Serialization.ISerializable.GetObjectData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IntPtr::*)(System::Runtime::Serialization::SerializationInfo*, System::Runtime::Serialization::StreamingContext)>(&System::IntPtr::System_Runtime_Serialization_ISerializable_GetObjectData)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IntPtr), "System.Runtime.Serialization.ISerializable.GetObjectData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Runtime::Serialization::SerializationInfo*>(), ::il2cpp_utils::ExtractIndependentType<System::Runtime::Serialization::StreamingContext>()});
  }
};
// Writing MetadataGetter for method: System::IntPtr::ToInt64
// Il2CppName: ToInt64
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (System::IntPtr::*)()>(&System::IntPtr::ToInt64)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IntPtr), "ToInt64", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IntPtr::ToPointer
// Il2CppName: ToPointer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void* (System::IntPtr::*)()>(&System::IntPtr::ToPointer)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IntPtr), "ToPointer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IntPtr::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::IntPtr::*)(::Il2CppString*)>(&System::IntPtr::ToString)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IntPtr), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>()});
  }
};
// Writing MetadataGetter for method: System::IntPtr::IntPtr
// Il2CppName: op_Explicit
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::IntPtr::IntPtr
// Il2CppName: op_Explicit
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::IntPtr::IntPtr
// Il2CppName: op_Explicit
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::IntPtr::operator int
// Il2CppName: op_Explicit
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::IntPtr::operator int64_t
// Il2CppName: op_Explicit
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::IntPtr::operator void*
// Il2CppName: op_Explicit
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::IntPtr::IsNull
// Il2CppName: IsNull
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::IntPtr::*)()>(&System::IntPtr::IsNull)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IntPtr), "IsNull", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IntPtr::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::IntPtr::*)(::Il2CppObject*)>(&System::IntPtr::Equals)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IntPtr), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppObject*>()});
  }
};
// Writing MetadataGetter for method: System::IntPtr::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::IntPtr::*)()>(&System::IntPtr::GetHashCode)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IntPtr), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IntPtr::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::IntPtr::*)()>(&System::IntPtr::ToString)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IntPtr), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IntPtr::operator ==
// Il2CppName: op_Equality
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::IntPtr::operator !=
// Il2CppName: op_Inequality
// Cannot perform method pointer template specialization from operators!
