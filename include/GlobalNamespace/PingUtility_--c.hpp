// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: PingUtility
#include "GlobalNamespace/PingUtility.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
}
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: IPAddress
  class IPAddress;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Ping
  class Ping;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::PingUtility::$$c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PingUtility::$$c*, "", "PingUtility/<>c");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: PingUtility/<>c
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class PingUtility::$$c : public ::Il2CppObject {
    public:
    // Get static field: static public readonly PingUtility/<>c <>9
    static ::GlobalNamespace::PingUtility::$$c* _get_$$9();
    // Set static field: static public readonly PingUtility/<>c <>9
    static void _set_$$9(::GlobalNamespace::PingUtility::$$c* value);
    // Get static field: static public System.Func`2<System.Net.IPAddress,UnityEngine.Ping> <>9__0_0
    static ::System::Func_2<::System::Net::IPAddress*, ::UnityEngine::Ping*>* _get_$$9__0_0();
    // Set static field: static public System.Func`2<System.Net.IPAddress,UnityEngine.Ping> <>9__0_0
    static void _set_$$9__0_0(::System::Func_2<::System::Net::IPAddress*, ::UnityEngine::Ping*>* value);
    // static private System.Void .cctor()
    // Offset: 0x2634D00
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0x2634D64
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PingUtility::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::PingUtility::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PingUtility::$$c*, creationType>()));
    }
    // UnityEngine.Ping <PingAsync>b__0_0(System.Net.IPAddress ip)
    // Offset: 0x2634D6C
    ::UnityEngine::Ping* $PingAsync$b__0_0(::System::Net::IPAddress* ip);
  }; // PingUtility/<>c
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::PingUtility::$$c::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::PingUtility::$$c::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PingUtility::$$c*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PingUtility::$$c::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::PingUtility::$$c::$PingAsync$b__0_0
// Il2CppName: <PingAsync>b__0_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Ping* (GlobalNamespace::PingUtility::$$c::*)(::System::Net::IPAddress*)>(&GlobalNamespace::PingUtility::$$c::$PingAsync$b__0_0)> {
  static const MethodInfo* get() {
    static auto* ip = &::il2cpp_utils::GetClassFromName("System.Net", "IPAddress")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PingUtility::$$c*), "<PingAsync>b__0_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ip});
  }
};
