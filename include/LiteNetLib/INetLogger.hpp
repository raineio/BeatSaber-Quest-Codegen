// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include <initializer_list>
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: LiteNetLib.NetLogLevel
#include "LiteNetLib/NetLogLevel.hpp"
#include "extern/beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Type namespace: LiteNetLib
namespace LiteNetLib {
  // Forward declaring type: INetLogger
  class INetLogger;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(LiteNetLib::INetLogger);
DEFINE_IL2CPP_ARG_TYPE(LiteNetLib::INetLogger*, "LiteNetLib", "INetLogger");
// Type namespace: LiteNetLib
namespace LiteNetLib {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: LiteNetLib.INetLogger
  // [TokenAttribute] Offset: FFFFFFFF
  class INetLogger {
    public:
    // public System.Void WriteNet(LiteNetLib.NetLogLevel level, System.String str, params System.Object[] args)
    // Offset: 0xFFFFFFFF
    void WriteNet(LiteNetLib::NetLogLevel level, ::Il2CppString* str, ::ArrayW<::Il2CppObject*> args);
  }; // LiteNetLib.INetLogger
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: LiteNetLib::INetLogger::WriteNet
// Il2CppName: WriteNet
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::INetLogger::*)(LiteNetLib::NetLogLevel, ::Il2CppString*, ::ArrayW<::Il2CppObject*>)>(&LiteNetLib::INetLogger::WriteNet)> {
  static const MethodInfo* get() {
    static auto* level = &::il2cpp_utils::GetClassFromName("LiteNetLib", "NetLogLevel")->byval_arg;
    static auto* str = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* args = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::INetLogger*), "WriteNet", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{level, str, args});
  }
};
