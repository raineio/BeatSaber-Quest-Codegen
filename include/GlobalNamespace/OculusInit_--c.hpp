// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: OculusInit
#include "GlobalNamespace/OculusInit.hpp"
// Including type: Oculus.Platform.Message
#include "Oculus/Platform/Message.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(GlobalNamespace::OculusInit::$$c);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OculusInit::$$c*, "", "OculusInit/<>c");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: OculusInit/<>c
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class OculusInit::$$c : public ::Il2CppObject {
    public:
    // Get static field: static public readonly OculusInit/<>c <>9
    static GlobalNamespace::OculusInit::$$c* _get_$$9();
    // Set static field: static public readonly OculusInit/<>c <>9
    static void _set_$$9(GlobalNamespace::OculusInit::$$c* value);
    // Get static field: static public Oculus.Platform.Message/Oculus.Platform.Callback <>9__3_0
    static Oculus::Platform::Message::Callback* _get_$$9__3_0();
    // Set static field: static public Oculus.Platform.Message/Oculus.Platform.Callback <>9__3_0
    static void _set_$$9__3_0(Oculus::Platform::Message::Callback* value);
    // static private System.Void .cctor()
    // Offset: 0x136806C
    static void _cctor();
    // System.Void <InitCallback>b__3_0(Oculus.Platform.Message message)
    // Offset: 0x13680D8
    void $InitCallback$b__3_0(Oculus::Platform::Message* message);
    // public System.Void .ctor()
    // Offset: 0x13680D0
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OculusInit::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::OculusInit::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OculusInit::$$c*, creationType>()));
    }
  }; // OculusInit/<>c
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::OculusInit::$$c::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::OculusInit::$$c::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OculusInit::$$c*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OculusInit::$$c::$InitCallback$b__3_0
// Il2CppName: <InitCallback>b__3_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OculusInit::$$c::*)(Oculus::Platform::Message*)>(&GlobalNamespace::OculusInit::$$c::$InitCallback$b__3_0)> {
  static const MethodInfo* get() {
    static auto* message = &::il2cpp_utils::GetClassFromName("Oculus.Platform", "Message")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OculusInit::$$c*), "<InitCallback>b__3_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{message});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OculusInit::$$c::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
