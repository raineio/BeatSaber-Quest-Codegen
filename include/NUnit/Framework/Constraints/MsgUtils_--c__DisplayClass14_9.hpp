// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: NUnit.Framework.Constraints.MsgUtils
#include "NUnit/Framework/Constraints/MsgUtils.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: NUnit::Framework::Constraints
namespace NUnit::Framework::Constraints {
  // Forward declaring type: ValueFormatter
  class ValueFormatter;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::NUnit::Framework::Constraints::MsgUtils::$$c__DisplayClass14_9);
DEFINE_IL2CPP_ARG_TYPE(::NUnit::Framework::Constraints::MsgUtils::$$c__DisplayClass14_9*, "NUnit.Framework.Constraints", "MsgUtils/<>c__DisplayClass14_9");
// Type namespace: NUnit.Framework.Constraints
namespace NUnit::Framework::Constraints {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: NUnit.Framework.Constraints.MsgUtils/NUnit.Framework.Constraints.<>c__DisplayClass14_9
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class MsgUtils::$$c__DisplayClass14_9 : public ::Il2CppObject {
    public:
    public:
    // public NUnit.Framework.Constraints.ValueFormatter next
    // Size: 0x8
    // Offset: 0x10
    ::NUnit::Framework::Constraints::ValueFormatter* next;
    // Field size check
    static_assert(sizeof(::NUnit::Framework::Constraints::ValueFormatter*) == 0x8);
    public:
    // Creating conversion operator: operator ::NUnit::Framework::Constraints::ValueFormatter*
    constexpr operator ::NUnit::Framework::Constraints::ValueFormatter*() const noexcept {
      return next;
    }
    // Get instance field reference: public NUnit.Framework.Constraints.ValueFormatter next
    [[deprecated("Use field access instead!")]] ::NUnit::Framework::Constraints::ValueFormatter*& dyn_next();
    // public System.Void .ctor()
    // Offset: 0x1C99DF0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MsgUtils::$$c__DisplayClass14_9* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::NUnit::Framework::Constraints::MsgUtils::$$c__DisplayClass14_9::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MsgUtils::$$c__DisplayClass14_9*, creationType>()));
    }
    // System.String <.cctor>b__20(System.Object val)
    // Offset: 0x1C9A57C
    ::StringW $_cctor$b__20(::Il2CppObject* val);
  }; // NUnit.Framework.Constraints.MsgUtils/NUnit.Framework.Constraints.<>c__DisplayClass14_9
  #pragma pack(pop)
  static check_size<sizeof(MsgUtils::$$c__DisplayClass14_9), 16 + sizeof(::NUnit::Framework::Constraints::ValueFormatter*)> __NUnit_Framework_Constraints_MsgUtils_$$c__DisplayClass14_9SizeCheck;
  static_assert(sizeof(MsgUtils::$$c__DisplayClass14_9) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: NUnit::Framework::Constraints::MsgUtils::$$c__DisplayClass14_9::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: NUnit::Framework::Constraints::MsgUtils::$$c__DisplayClass14_9::$_cctor$b__20
// Il2CppName: <.cctor>b__20
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (NUnit::Framework::Constraints::MsgUtils::$$c__DisplayClass14_9::*)(::Il2CppObject*)>(&NUnit::Framework::Constraints::MsgUtils::$$c__DisplayClass14_9::$_cctor$b__20)> {
  static const MethodInfo* get() {
    static auto* val = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Constraints::MsgUtils::$$c__DisplayClass14_9*), "<.cctor>b__20", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{val});
  }
};
