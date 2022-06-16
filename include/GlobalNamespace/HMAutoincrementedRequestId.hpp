// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.IEquatable`1
#include "System/IEquatable_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: HMAutoincrementedRequestId
  class HMAutoincrementedRequestId;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::HMAutoincrementedRequestId);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::HMAutoincrementedRequestId*, "", "HMAutoincrementedRequestId");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: HMAutoincrementedRequestId
  // [TokenAttribute] Offset: FFFFFFFF
  class HMAutoincrementedRequestId : public ::Il2CppObject/*, public ::System::IEquatable_1<::GlobalNamespace::HMAutoincrementedRequestId*>*/ {
    public:
    public:
    // private readonly System.UInt64 _requestId
    // Size: 0x8
    // Offset: 0x10
    uint64_t requestId;
    // Field size check
    static_assert(sizeof(uint64_t) == 0x8);
    public:
    // Creating interface conversion operator: operator ::System::IEquatable_1<::GlobalNamespace::HMAutoincrementedRequestId*>
    operator ::System::IEquatable_1<::GlobalNamespace::HMAutoincrementedRequestId*>() noexcept {
      return *reinterpret_cast<::System::IEquatable_1<::GlobalNamespace::HMAutoincrementedRequestId*>*>(this);
    }
    // Creating interface conversion operator: i_HMAutoincrementedRequestId
    inline ::System::IEquatable_1<::GlobalNamespace::HMAutoincrementedRequestId*>* i_HMAutoincrementedRequestId() noexcept {
      return reinterpret_cast<::System::IEquatable_1<::GlobalNamespace::HMAutoincrementedRequestId*>*>(this);
    }
    // Creating conversion operator: operator uint64_t
    constexpr operator uint64_t() const noexcept {
      return requestId;
    }
    // Get static field: static private System.UInt64 _nextRequestId
    static uint64_t _get__nextRequestId();
    // Set static field: static private System.UInt64 _nextRequestId
    static void _set__nextRequestId(uint64_t value);
    // Get instance field reference: private readonly System.UInt64 _requestId
    [[deprecated("Use field access instead!")]] uint64_t& dyn__requestId();
    // public System.UInt64 get_RequestId()
    // Offset: 0x15A9B1C
    uint64_t get_RequestId();
    // public System.Void .ctor()
    // Offset: 0x15A9A50
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HMAutoincrementedRequestId* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::HMAutoincrementedRequestId::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HMAutoincrementedRequestId*, creationType>()));
    }
    // static private System.Void .cctor()
    // Offset: 0x15A9C34
    static void _cctor();
    // public System.Boolean Equals(HMAutoincrementedRequestId obj)
    // Offset: 0x15A9B24
    bool Equals(::GlobalNamespace::HMAutoincrementedRequestId* obj);
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x15A9B44
    // Implemented from: System.Object
    // Base method: System.Boolean Object::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0x15A9C0C
    // Implemented from: System.Object
    // Base method: System.Int32 Object::GetHashCode()
    int GetHashCode();
  }; // HMAutoincrementedRequestId
  #pragma pack(pop)
  static check_size<sizeof(HMAutoincrementedRequestId), 16 + sizeof(uint64_t)> __GlobalNamespace_HMAutoincrementedRequestIdSizeCheck;
  static_assert(sizeof(HMAutoincrementedRequestId) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::HMAutoincrementedRequestId::get_RequestId
// Il2CppName: get_RequestId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (GlobalNamespace::HMAutoincrementedRequestId::*)()>(&GlobalNamespace::HMAutoincrementedRequestId::get_RequestId)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::HMAutoincrementedRequestId*), "get_RequestId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::HMAutoincrementedRequestId::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::HMAutoincrementedRequestId::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::HMAutoincrementedRequestId::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::HMAutoincrementedRequestId*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::HMAutoincrementedRequestId::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::HMAutoincrementedRequestId::*)(::GlobalNamespace::HMAutoincrementedRequestId*)>(&GlobalNamespace::HMAutoincrementedRequestId::Equals)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("", "HMAutoincrementedRequestId")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::HMAutoincrementedRequestId*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::HMAutoincrementedRequestId::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::HMAutoincrementedRequestId::*)(::Il2CppObject*)>(&GlobalNamespace::HMAutoincrementedRequestId::Equals)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::HMAutoincrementedRequestId*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::HMAutoincrementedRequestId::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::HMAutoincrementedRequestId::*)()>(&GlobalNamespace::HMAutoincrementedRequestId::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::HMAutoincrementedRequestId*), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
