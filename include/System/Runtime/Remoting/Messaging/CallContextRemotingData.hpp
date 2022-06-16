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
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: System.Runtime.Remoting.Messaging
namespace System::Runtime::Remoting::Messaging {
  // Forward declaring type: CallContextRemotingData
  class CallContextRemotingData;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Runtime::Remoting::Messaging::CallContextRemotingData);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::Messaging::CallContextRemotingData*, "System.Runtime.Remoting.Messaging", "CallContextRemotingData");
// Type namespace: System.Runtime.Remoting.Messaging
namespace System::Runtime::Remoting::Messaging {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.Remoting.Messaging.CallContextRemotingData
  // [TokenAttribute] Offset: FFFFFFFF
  class CallContextRemotingData : public ::Il2CppObject/*, public ::System::ICloneable*/ {
    public:
    public:
    // private System.String _logicalCallID
    // Size: 0x8
    // Offset: 0x10
    ::StringW logicalCallID;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Creating interface conversion operator: operator ::System::ICloneable
    operator ::System::ICloneable() noexcept {
      return *reinterpret_cast<::System::ICloneable*>(this);
    }
    // Creating interface conversion operator: i_ICloneable
    inline ::System::ICloneable* i_ICloneable() noexcept {
      return reinterpret_cast<::System::ICloneable*>(this);
    }
    // Creating conversion operator: operator ::StringW
    constexpr operator ::StringW() const noexcept {
      return logicalCallID;
    }
    // Get instance field reference: private System.String _logicalCallID
    [[deprecated("Use field access instead!")]] ::StringW& dyn__logicalCallID();
    // System.String get_LogicalCallID()
    // Offset: 0x1C75EC8
    ::StringW get_LogicalCallID();
    // System.Void set_LogicalCallID(System.String value)
    // Offset: 0x1C75ED0
    void set_LogicalCallID(::StringW value);
    // System.Boolean get_HasInfo()
    // Offset: 0x1C75ED8
    bool get_HasInfo();
    // public System.Object Clone()
    // Offset: 0x1C75EE8
    ::Il2CppObject* Clone();
    // public System.Void .ctor()
    // Offset: 0x1C75F58
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CallContextRemotingData* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Runtime::Remoting::Messaging::CallContextRemotingData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CallContextRemotingData*, creationType>()));
    }
  }; // System.Runtime.Remoting.Messaging.CallContextRemotingData
  #pragma pack(pop)
  static check_size<sizeof(CallContextRemotingData), 16 + sizeof(::StringW)> __System_Runtime_Remoting_Messaging_CallContextRemotingDataSizeCheck;
  static_assert(sizeof(CallContextRemotingData) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::CallContextRemotingData::get_LogicalCallID
// Il2CppName: get_LogicalCallID
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Runtime::Remoting::Messaging::CallContextRemotingData::*)()>(&System::Runtime::Remoting::Messaging::CallContextRemotingData::get_LogicalCallID)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Messaging::CallContextRemotingData*), "get_LogicalCallID", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::CallContextRemotingData::set_LogicalCallID
// Il2CppName: set_LogicalCallID
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Remoting::Messaging::CallContextRemotingData::*)(::StringW)>(&System::Runtime::Remoting::Messaging::CallContextRemotingData::set_LogicalCallID)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Messaging::CallContextRemotingData*), "set_LogicalCallID", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::CallContextRemotingData::get_HasInfo
// Il2CppName: get_HasInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Runtime::Remoting::Messaging::CallContextRemotingData::*)()>(&System::Runtime::Remoting::Messaging::CallContextRemotingData::get_HasInfo)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Messaging::CallContextRemotingData*), "get_HasInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::CallContextRemotingData::Clone
// Il2CppName: Clone
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Runtime::Remoting::Messaging::CallContextRemotingData::*)()>(&System::Runtime::Remoting::Messaging::CallContextRemotingData::Clone)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Messaging::CallContextRemotingData*), "Clone", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::CallContextRemotingData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
