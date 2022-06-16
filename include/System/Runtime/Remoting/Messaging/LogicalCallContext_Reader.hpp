// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Runtime.Remoting.Messaging.LogicalCallContext
#include "System/Runtime/Remoting/Messaging/LogicalCallContext.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::Messaging::LogicalCallContext::Reader, "System.Runtime.Remoting.Messaging", "LogicalCallContext/Reader");
// Type namespace: System.Runtime.Remoting.Messaging
namespace System::Runtime::Remoting::Messaging {
  // Size: 0x8
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: System.Runtime.Remoting.Messaging.LogicalCallContext/System.Runtime.Remoting.Messaging.Reader
  // [TokenAttribute] Offset: FFFFFFFF
  struct LogicalCallContext::Reader/*, public ::System::ValueType*/ {
    public:
    public:
    // private System.Runtime.Remoting.Messaging.LogicalCallContext m_ctx
    // Size: 0x8
    // Offset: 0x0
    ::System::Runtime::Remoting::Messaging::LogicalCallContext* m_ctx;
    // Field size check
    static_assert(sizeof(::System::Runtime::Remoting::Messaging::LogicalCallContext*) == 0x8);
    public:
    // Creating value type constructor for type: Reader
    constexpr Reader(::System::Runtime::Remoting::Messaging::LogicalCallContext* m_ctx_ = {}) noexcept : m_ctx{m_ctx_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: i_ValueType
    inline ::System::ValueType* i_ValueType() noexcept {
      return reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating conversion operator: operator ::System::Runtime::Remoting::Messaging::LogicalCallContext*
    constexpr operator ::System::Runtime::Remoting::Messaging::LogicalCallContext*() const noexcept {
      return m_ctx;
    }
    // Get instance field reference: private System.Runtime.Remoting.Messaging.LogicalCallContext m_ctx
    [[deprecated("Use field access instead!")]] ::System::Runtime::Remoting::Messaging::LogicalCallContext*& dyn_m_ctx();
    // public System.Boolean get_IsNull()
    // Offset: 0x1C7A118
    bool get_IsNull();
    // public System.Boolean get_HasInfo()
    // Offset: 0x1C7A128
    bool get_HasInfo();
    // public System.Void .ctor(System.Runtime.Remoting.Messaging.LogicalCallContext ctx)
    // Offset: 0x1C7A110
    // ABORTED: conflicts with another method.  Reader(::System::Runtime::Remoting::Messaging::LogicalCallContext* ctx);
    // public System.Runtime.Remoting.Messaging.LogicalCallContext Clone()
    // Offset: 0x1C7A138
    ::System::Runtime::Remoting::Messaging::LogicalCallContext* Clone();
    // public System.Object GetData(System.String name)
    // Offset: 0x1C75B98
    ::Il2CppObject* GetData(::StringW name);
  }; // System.Runtime.Remoting.Messaging.LogicalCallContext/System.Runtime.Remoting.Messaging.Reader
  #pragma pack(pop)
  static check_size<sizeof(LogicalCallContext::Reader), 0 + sizeof(::System::Runtime::Remoting::Messaging::LogicalCallContext*)> __System_Runtime_Remoting_Messaging_LogicalCallContext_ReaderSizeCheck;
  static_assert(sizeof(LogicalCallContext::Reader) == 0x8);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::LogicalCallContext::Reader::get_IsNull
// Il2CppName: get_IsNull
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Runtime::Remoting::Messaging::LogicalCallContext::Reader::*)()>(&System::Runtime::Remoting::Messaging::LogicalCallContext::Reader::get_IsNull)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Messaging::LogicalCallContext::Reader), "get_IsNull", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::LogicalCallContext::Reader::get_HasInfo
// Il2CppName: get_HasInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Runtime::Remoting::Messaging::LogicalCallContext::Reader::*)()>(&System::Runtime::Remoting::Messaging::LogicalCallContext::Reader::get_HasInfo)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Messaging::LogicalCallContext::Reader), "get_HasInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::LogicalCallContext::Reader::Reader
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::LogicalCallContext::Reader::Clone
// Il2CppName: Clone
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::Remoting::Messaging::LogicalCallContext* (System::Runtime::Remoting::Messaging::LogicalCallContext::Reader::*)()>(&System::Runtime::Remoting::Messaging::LogicalCallContext::Reader::Clone)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Messaging::LogicalCallContext::Reader), "Clone", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::LogicalCallContext::Reader::GetData
// Il2CppName: GetData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Runtime::Remoting::Messaging::LogicalCallContext::Reader::*)(::StringW)>(&System::Runtime::Remoting::Messaging::LogicalCallContext::Reader::GetData)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Messaging::LogicalCallContext::Reader), "GetData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name});
  }
};
