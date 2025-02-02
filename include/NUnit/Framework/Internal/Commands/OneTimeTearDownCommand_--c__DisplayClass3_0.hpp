// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: NUnit.Framework.Internal.Commands.OneTimeTearDownCommand
#include "NUnit/Framework/Internal/Commands/OneTimeTearDownCommand.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IDisposable
  class IDisposable;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::NUnit::Framework::Internal::Commands::OneTimeTearDownCommand::$$c__DisplayClass3_0);
DEFINE_IL2CPP_ARG_TYPE(::NUnit::Framework::Internal::Commands::OneTimeTearDownCommand::$$c__DisplayClass3_0*, "NUnit.Framework.Internal.Commands", "OneTimeTearDownCommand/<>c__DisplayClass3_0");
// Type namespace: NUnit.Framework.Internal.Commands
namespace NUnit::Framework::Internal::Commands {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: NUnit.Framework.Internal.Commands.OneTimeTearDownCommand/NUnit.Framework.Internal.Commands.<>c__DisplayClass3_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class OneTimeTearDownCommand::$$c__DisplayClass3_0 : public ::Il2CppObject {
    public:
    public:
    // public System.IDisposable disposable
    // Size: 0x8
    // Offset: 0x10
    ::System::IDisposable* disposable;
    // Field size check
    static_assert(sizeof(::System::IDisposable*) == 0x8);
    public:
    // Creating conversion operator: operator ::System::IDisposable*
    constexpr operator ::System::IDisposable*() const noexcept {
      return disposable;
    }
    // Get instance field reference: public System.IDisposable disposable
    [[deprecated("Use field access instead!")]] ::System::IDisposable*& dyn_disposable();
    // public System.Void .ctor()
    // Offset: 0x1D63EFC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OneTimeTearDownCommand::$$c__DisplayClass3_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::NUnit::Framework::Internal::Commands::OneTimeTearDownCommand::$$c__DisplayClass3_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OneTimeTearDownCommand::$$c__DisplayClass3_0*, creationType>()));
    }
    // System.Object <Execute>b__0()
    // Offset: 0x1D6424C
    ::Il2CppObject* $Execute$b__0();
  }; // NUnit.Framework.Internal.Commands.OneTimeTearDownCommand/NUnit.Framework.Internal.Commands.<>c__DisplayClass3_0
  #pragma pack(pop)
  static check_size<sizeof(OneTimeTearDownCommand::$$c__DisplayClass3_0), 16 + sizeof(::System::IDisposable*)> __NUnit_Framework_Internal_Commands_OneTimeTearDownCommand_$$c__DisplayClass3_0SizeCheck;
  static_assert(sizeof(OneTimeTearDownCommand::$$c__DisplayClass3_0) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: NUnit::Framework::Internal::Commands::OneTimeTearDownCommand::$$c__DisplayClass3_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: NUnit::Framework::Internal::Commands::OneTimeTearDownCommand::$$c__DisplayClass3_0::$Execute$b__0
// Il2CppName: <Execute>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (NUnit::Framework::Internal::Commands::OneTimeTearDownCommand::$$c__DisplayClass3_0::*)()>(&NUnit::Framework::Internal::Commands::OneTimeTearDownCommand::$$c__DisplayClass3_0::$Execute$b__0)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::Commands::OneTimeTearDownCommand::$$c__DisplayClass3_0*), "<Execute>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
