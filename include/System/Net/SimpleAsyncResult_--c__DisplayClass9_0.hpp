// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Net.SimpleAsyncResult
#include "System/Net/SimpleAsyncResult.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
// Type namespace: System.Net
namespace System::Net {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.SimpleAsyncResult/<>c__DisplayClass9_0
  // [CompilerGeneratedAttribute] Offset: D880E4
  class SimpleAsyncResult::$$c__DisplayClass9_0 : public ::Il2CppObject {
    public:
    // public System.AsyncCallback cb
    // Size: 0x8
    // Offset: 0x10
    System::AsyncCallback* cb;
    // Field size check
    static_assert(sizeof(System::AsyncCallback*) == 0x8);
    // public System.Net.SimpleAsyncResult <>4__this
    // Size: 0x8
    // Offset: 0x18
    System::Net::SimpleAsyncResult* $$4__this;
    // Field size check
    static_assert(sizeof(System::Net::SimpleAsyncResult*) == 0x8);
    // Creating value type constructor for type: $$c__DisplayClass9_0
    $$c__DisplayClass9_0(System::AsyncCallback* cb_ = {}, System::Net::SimpleAsyncResult* $$4__this_ = {}) noexcept : cb{cb_}, $$4__this{$$4__this_} {}
    // System.Void <.ctor>b__0(System.Net.SimpleAsyncResult result)
    // Offset: 0x1499FD4
    void $_ctor$b__0(System::Net::SimpleAsyncResult* result);
    // public System.Void .ctor()
    // Offset: 0x1499710
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SimpleAsyncResult::$$c__DisplayClass9_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::SimpleAsyncResult::$$c__DisplayClass9_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SimpleAsyncResult::$$c__DisplayClass9_0*, creationType>()));
    }
  }; // System.Net.SimpleAsyncResult/<>c__DisplayClass9_0
  #pragma pack(pop)
  static check_size<sizeof(SimpleAsyncResult::$$c__DisplayClass9_0), 24 + sizeof(System::Net::SimpleAsyncResult*)> __System_Net_SimpleAsyncResult_$$c__DisplayClass9_0SizeCheck;
  static_assert(sizeof(SimpleAsyncResult::$$c__DisplayClass9_0) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(System::Net::SimpleAsyncResult::$$c__DisplayClass9_0*, "System.Net", "SimpleAsyncResult/<>c__DisplayClass9_0");
// Writing MetadataGetter for method: System::Net::SimpleAsyncResult::$$c__DisplayClass9_0::$_ctor$b__0
// Il2CppName: <.ctor>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::SimpleAsyncResult::$$c__DisplayClass9_0::*)(System::Net::SimpleAsyncResult*)>(&System::Net::SimpleAsyncResult::$$c__DisplayClass9_0::$_ctor$b__0)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::SimpleAsyncResult::$$c__DisplayClass9_0*), "<.ctor>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Net::SimpleAsyncResult*>()});
  }
};
// Writing MetadataGetter for method: System::Net::SimpleAsyncResult::$$c__DisplayClass9_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
