// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: HMAutoincrementedRequestId
#include "GlobalNamespace/HMAutoincrementedRequestId.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: HMAsyncRequest
  class HMAsyncRequest;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::HMAsyncRequest);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::HMAsyncRequest*, "", "HMAsyncRequest");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: HMAsyncRequest
  // [TokenAttribute] Offset: FFFFFFFF
  class HMAsyncRequest : public ::GlobalNamespace::HMAutoincrementedRequestId {
    public:
    // Nested type: ::GlobalNamespace::HMAsyncRequest::CancelHander
    class CancelHander;
    public:
    // private System.Boolean _cancelled
    // Size: 0x1
    // Offset: 0x18
    bool cancelled;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: cancelled and: cancelHander
    char __padding0[0x7] = {};
    // private HMAsyncRequest/CancelHander _cancelHander
    // Size: 0x8
    // Offset: 0x20
    ::GlobalNamespace::HMAsyncRequest::CancelHander* cancelHander;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::HMAsyncRequest::CancelHander*) == 0x8);
    public:
    // Deleting conversion operator: operator uint64_t
    constexpr operator uint64_t() const noexcept = delete;
    // Get instance field reference: private System.Boolean _cancelled
    [[deprecated("Use field access instead!")]] bool& dyn__cancelled();
    // Get instance field reference: private HMAsyncRequest/CancelHander _cancelHander
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::HMAsyncRequest::CancelHander*& dyn__cancelHander();
    // public HMAsyncRequest/CancelHander get_CancelHandler()
    // Offset: 0x15A9624
    ::GlobalNamespace::HMAsyncRequest::CancelHander* get_CancelHandler();
    // public System.Void set_CancelHandler(HMAsyncRequest/CancelHander value)
    // Offset: 0x15A962C
    void set_CancelHandler(::GlobalNamespace::HMAsyncRequest::CancelHander* value);
    // public System.Boolean get_cancelled()
    // Offset: 0x15A9634
    bool get_cancelled();
    // public System.Void Cancel()
    // Offset: 0x15A963C
    void Cancel();
    // public System.Void .ctor()
    // Offset: 0x15A99EC
    // Implemented from: HMAutoincrementedRequestId
    // Base method: System.Void HMAutoincrementedRequestId::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HMAsyncRequest* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::HMAsyncRequest::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HMAsyncRequest*, creationType>()));
    }
  }; // HMAsyncRequest
  #pragma pack(pop)
  static check_size<sizeof(HMAsyncRequest), 32 + sizeof(::GlobalNamespace::HMAsyncRequest::CancelHander*)> __GlobalNamespace_HMAsyncRequestSizeCheck;
  static_assert(sizeof(HMAsyncRequest) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::HMAsyncRequest::get_CancelHandler
// Il2CppName: get_CancelHandler
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::HMAsyncRequest::CancelHander* (GlobalNamespace::HMAsyncRequest::*)()>(&GlobalNamespace::HMAsyncRequest::get_CancelHandler)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::HMAsyncRequest*), "get_CancelHandler", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::HMAsyncRequest::set_CancelHandler
// Il2CppName: set_CancelHandler
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::HMAsyncRequest::*)(::GlobalNamespace::HMAsyncRequest::CancelHander*)>(&GlobalNamespace::HMAsyncRequest::set_CancelHandler)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("", "HMAsyncRequest/CancelHander")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::HMAsyncRequest*), "set_CancelHandler", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::HMAsyncRequest::get_cancelled
// Il2CppName: get_cancelled
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::HMAsyncRequest::*)()>(&GlobalNamespace::HMAsyncRequest::get_cancelled)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::HMAsyncRequest*), "get_cancelled", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::HMAsyncRequest::Cancel
// Il2CppName: Cancel
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::HMAsyncRequest::*)()>(&GlobalNamespace::HMAsyncRequest::Cancel)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::HMAsyncRequest*), "Cancel", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::HMAsyncRequest::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
