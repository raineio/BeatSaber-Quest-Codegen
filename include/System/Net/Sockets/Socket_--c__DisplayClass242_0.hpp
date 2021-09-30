// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Net.Sockets.Socket
#include "System/Net/Sockets/Socket.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IOAsyncResult
  class IOAsyncResult;
}
// Completed forward declares
// Type namespace: System.Net.Sockets
namespace System::Net::Sockets {
  // Size: 0x14
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.Sockets.Socket/System.Net.Sockets.<>c__DisplayClass242_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class Socket::$$c__DisplayClass242_0 : public ::Il2CppObject {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    private:
    #endif
    // public System.Int32 sent_so_far
    // Size: 0x4
    // Offset: 0x10
    int sent_so_far;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return sent_so_far;
    }
    // Get instance field reference: public System.Int32 sent_so_far
    int& dyn_sent_so_far();
    // System.Void <BeginSendCallback>b__0(System.IOAsyncResult s)
    // Offset: 0x17744D0
    void $BeginSendCallback$b__0(System::IOAsyncResult* s);
    // public System.Void .ctor()
    // Offset: 0x17744C8
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Socket::$$c__DisplayClass242_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::Sockets::Socket::$$c__DisplayClass242_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Socket::$$c__DisplayClass242_0*, creationType>()));
    }
  }; // System.Net.Sockets.Socket/System.Net.Sockets.<>c__DisplayClass242_0
  #pragma pack(pop)
  static check_size<sizeof(Socket::$$c__DisplayClass242_0), 16 + sizeof(int)> __System_Net_Sockets_Socket_$$c__DisplayClass242_0SizeCheck;
  static_assert(sizeof(Socket::$$c__DisplayClass242_0) == 0x14);
}
DEFINE_IL2CPP_ARG_TYPE(System::Net::Sockets::Socket::$$c__DisplayClass242_0*, "System.Net.Sockets", "Socket/<>c__DisplayClass242_0");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::Sockets::Socket::$$c__DisplayClass242_0::$BeginSendCallback$b__0
// Il2CppName: <BeginSendCallback>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Sockets::Socket::$$c__DisplayClass242_0::*)(System::IOAsyncResult*)>(&System::Net::Sockets::Socket::$$c__DisplayClass242_0::$BeginSendCallback$b__0)> {
  static const MethodInfo* get() {
    static auto* s = &::il2cpp_utils::GetClassFromName("System", "IOAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Sockets::Socket::$$c__DisplayClass242_0*), "<BeginSendCallback>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{s});
  }
};
// Writing MetadataGetter for method: System::Net::Sockets::Socket::$$c__DisplayClass242_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
