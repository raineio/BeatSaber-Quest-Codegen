// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: LiteNetLib.INatPunchListener
#include "LiteNetLib/INatPunchListener.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: LiteNetLib
namespace LiteNetLib {
  // Forward declaring type: NatAddressType
  struct NatAddressType;
}
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: IPEndPoint
  class IPEndPoint;
}
// Completed forward declares
// Type namespace: LiteNetLib
namespace LiteNetLib {
  // Forward declaring type: EventBasedNatPunchListener
  class EventBasedNatPunchListener;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(LiteNetLib::EventBasedNatPunchListener);
DEFINE_IL2CPP_ARG_TYPE(LiteNetLib::EventBasedNatPunchListener*, "LiteNetLib", "EventBasedNatPunchListener");
// Type namespace: LiteNetLib
namespace LiteNetLib {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: LiteNetLib.EventBasedNatPunchListener
  // [TokenAttribute] Offset: FFFFFFFF
  class EventBasedNatPunchListener : public ::Il2CppObject/*, public LiteNetLib::INatPunchListener*/ {
    public:
    // Nested type: LiteNetLib::EventBasedNatPunchListener::OnNatIntroductionRequest
    class OnNatIntroductionRequest;
    // Nested type: LiteNetLib::EventBasedNatPunchListener::OnNatIntroductionSuccess
    class OnNatIntroductionSuccess;
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // private LiteNetLib.EventBasedNatPunchListener/LiteNetLib.OnNatIntroductionRequest NatIntroductionRequest
    // Size: 0x8
    // Offset: 0x10
    LiteNetLib::EventBasedNatPunchListener::OnNatIntroductionRequest* NatIntroductionRequest;
    // Field size check
    static_assert(sizeof(LiteNetLib::EventBasedNatPunchListener::OnNatIntroductionRequest*) == 0x8);
    // private LiteNetLib.EventBasedNatPunchListener/LiteNetLib.OnNatIntroductionSuccess NatIntroductionSuccess
    // Size: 0x8
    // Offset: 0x18
    LiteNetLib::EventBasedNatPunchListener::OnNatIntroductionSuccess* NatIntroductionSuccess;
    // Field size check
    static_assert(sizeof(LiteNetLib::EventBasedNatPunchListener::OnNatIntroductionSuccess*) == 0x8);
    public:
    // Creating interface conversion operator: operator LiteNetLib::INatPunchListener
    operator LiteNetLib::INatPunchListener() noexcept {
      return *reinterpret_cast<LiteNetLib::INatPunchListener*>(this);
    }
    // Get instance field reference: private LiteNetLib.EventBasedNatPunchListener/LiteNetLib.OnNatIntroductionRequest NatIntroductionRequest
    LiteNetLib::EventBasedNatPunchListener::OnNatIntroductionRequest*& dyn_NatIntroductionRequest();
    // Get instance field reference: private LiteNetLib.EventBasedNatPunchListener/LiteNetLib.OnNatIntroductionSuccess NatIntroductionSuccess
    LiteNetLib::EventBasedNatPunchListener::OnNatIntroductionSuccess*& dyn_NatIntroductionSuccess();
    // public System.Void add_NatIntroductionRequest(LiteNetLib.EventBasedNatPunchListener/LiteNetLib.OnNatIntroductionRequest value)
    // Offset: 0x1DC0ECC
    void add_NatIntroductionRequest(LiteNetLib::EventBasedNatPunchListener::OnNatIntroductionRequest* value);
    // public System.Void remove_NatIntroductionRequest(LiteNetLib.EventBasedNatPunchListener/LiteNetLib.OnNatIntroductionRequest value)
    // Offset: 0x1DC0F70
    void remove_NatIntroductionRequest(LiteNetLib::EventBasedNatPunchListener::OnNatIntroductionRequest* value);
    // public System.Void add_NatIntroductionSuccess(LiteNetLib.EventBasedNatPunchListener/LiteNetLib.OnNatIntroductionSuccess value)
    // Offset: 0x1DC1014
    void add_NatIntroductionSuccess(LiteNetLib::EventBasedNatPunchListener::OnNatIntroductionSuccess* value);
    // public System.Void remove_NatIntroductionSuccess(LiteNetLib.EventBasedNatPunchListener/LiteNetLib.OnNatIntroductionSuccess value)
    // Offset: 0x1DC10B8
    void remove_NatIntroductionSuccess(LiteNetLib::EventBasedNatPunchListener::OnNatIntroductionSuccess* value);
    // private System.Void LiteNetLib.INatPunchListener.OnNatIntroductionRequest(System.Net.IPEndPoint localEndPoint, System.Net.IPEndPoint remoteEndPoint, System.String token)
    // Offset: 0x1DC115C
    void LiteNetLib_INatPunchListener_OnNatIntroductionRequest(System::Net::IPEndPoint* localEndPoint, System::Net::IPEndPoint* remoteEndPoint, ::Il2CppString* token);
    // private System.Void LiteNetLib.INatPunchListener.OnNatIntroductionSuccess(System.Net.IPEndPoint targetEndPoint, LiteNetLib.NatAddressType type, System.String token)
    // Offset: 0x1DC157C
    void LiteNetLib_INatPunchListener_OnNatIntroductionSuccess(System::Net::IPEndPoint* targetEndPoint, LiteNetLib::NatAddressType type, ::Il2CppString* token);
    // public System.Void .ctor()
    // Offset: 0x1DC19C0
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static EventBasedNatPunchListener* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("LiteNetLib::EventBasedNatPunchListener::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<EventBasedNatPunchListener*, creationType>()));
    }
  }; // LiteNetLib.EventBasedNatPunchListener
  #pragma pack(pop)
  static check_size<sizeof(EventBasedNatPunchListener), 24 + sizeof(LiteNetLib::EventBasedNatPunchListener::OnNatIntroductionSuccess*)> __LiteNetLib_EventBasedNatPunchListenerSizeCheck;
  static_assert(sizeof(EventBasedNatPunchListener) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: LiteNetLib::EventBasedNatPunchListener::add_NatIntroductionRequest
// Il2CppName: add_NatIntroductionRequest
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::EventBasedNatPunchListener::*)(LiteNetLib::EventBasedNatPunchListener::OnNatIntroductionRequest*)>(&LiteNetLib::EventBasedNatPunchListener::add_NatIntroductionRequest)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("LiteNetLib", "EventBasedNatPunchListener/OnNatIntroductionRequest")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::EventBasedNatPunchListener*), "add_NatIntroductionRequest", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: LiteNetLib::EventBasedNatPunchListener::remove_NatIntroductionRequest
// Il2CppName: remove_NatIntroductionRequest
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::EventBasedNatPunchListener::*)(LiteNetLib::EventBasedNatPunchListener::OnNatIntroductionRequest*)>(&LiteNetLib::EventBasedNatPunchListener::remove_NatIntroductionRequest)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("LiteNetLib", "EventBasedNatPunchListener/OnNatIntroductionRequest")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::EventBasedNatPunchListener*), "remove_NatIntroductionRequest", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: LiteNetLib::EventBasedNatPunchListener::add_NatIntroductionSuccess
// Il2CppName: add_NatIntroductionSuccess
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::EventBasedNatPunchListener::*)(LiteNetLib::EventBasedNatPunchListener::OnNatIntroductionSuccess*)>(&LiteNetLib::EventBasedNatPunchListener::add_NatIntroductionSuccess)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("LiteNetLib", "EventBasedNatPunchListener/OnNatIntroductionSuccess")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::EventBasedNatPunchListener*), "add_NatIntroductionSuccess", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: LiteNetLib::EventBasedNatPunchListener::remove_NatIntroductionSuccess
// Il2CppName: remove_NatIntroductionSuccess
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::EventBasedNatPunchListener::*)(LiteNetLib::EventBasedNatPunchListener::OnNatIntroductionSuccess*)>(&LiteNetLib::EventBasedNatPunchListener::remove_NatIntroductionSuccess)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("LiteNetLib", "EventBasedNatPunchListener/OnNatIntroductionSuccess")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::EventBasedNatPunchListener*), "remove_NatIntroductionSuccess", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: LiteNetLib::EventBasedNatPunchListener::LiteNetLib_INatPunchListener_OnNatIntroductionRequest
// Il2CppName: LiteNetLib.INatPunchListener.OnNatIntroductionRequest
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::EventBasedNatPunchListener::*)(System::Net::IPEndPoint*, System::Net::IPEndPoint*, ::Il2CppString*)>(&LiteNetLib::EventBasedNatPunchListener::LiteNetLib_INatPunchListener_OnNatIntroductionRequest)> {
  static const MethodInfo* get() {
    static auto* localEndPoint = &::il2cpp_utils::GetClassFromName("System.Net", "IPEndPoint")->byval_arg;
    static auto* remoteEndPoint = &::il2cpp_utils::GetClassFromName("System.Net", "IPEndPoint")->byval_arg;
    static auto* token = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::EventBasedNatPunchListener*), "LiteNetLib.INatPunchListener.OnNatIntroductionRequest", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{localEndPoint, remoteEndPoint, token});
  }
};
// Writing MetadataGetter for method: LiteNetLib::EventBasedNatPunchListener::LiteNetLib_INatPunchListener_OnNatIntroductionSuccess
// Il2CppName: LiteNetLib.INatPunchListener.OnNatIntroductionSuccess
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::EventBasedNatPunchListener::*)(System::Net::IPEndPoint*, LiteNetLib::NatAddressType, ::Il2CppString*)>(&LiteNetLib::EventBasedNatPunchListener::LiteNetLib_INatPunchListener_OnNatIntroductionSuccess)> {
  static const MethodInfo* get() {
    static auto* targetEndPoint = &::il2cpp_utils::GetClassFromName("System.Net", "IPEndPoint")->byval_arg;
    static auto* type = &::il2cpp_utils::GetClassFromName("LiteNetLib", "NatAddressType")->byval_arg;
    static auto* token = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::EventBasedNatPunchListener*), "LiteNetLib.INatPunchListener.OnNatIntroductionSuccess", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{targetEndPoint, type, token});
  }
};
// Writing MetadataGetter for method: LiteNetLib::EventBasedNatPunchListener::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
