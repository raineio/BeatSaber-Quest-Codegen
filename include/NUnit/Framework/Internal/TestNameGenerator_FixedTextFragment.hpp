// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: NUnit.Framework.Internal.TestNameGenerator
#include "NUnit/Framework/Internal/TestNameGenerator.hpp"
// Including type: NUnit.Framework.Internal.TestNameGenerator/NUnit.Framework.Internal.NameFragment
#include "NUnit/Framework/Internal/TestNameGenerator_NameFragment.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: MethodInfo
  class MethodInfo;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(NUnit::Framework::Internal::TestNameGenerator::FixedTextFragment);
DEFINE_IL2CPP_ARG_TYPE(NUnit::Framework::Internal::TestNameGenerator::FixedTextFragment*, "NUnit.Framework.Internal", "TestNameGenerator/FixedTextFragment");
// Type namespace: NUnit.Framework.Internal
namespace NUnit::Framework::Internal {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: NUnit.Framework.Internal.TestNameGenerator/NUnit.Framework.Internal.FixedTextFragment
  // [TokenAttribute] Offset: FFFFFFFF
  class TestNameGenerator::FixedTextFragment : public NUnit::Framework::Internal::TestNameGenerator::NameFragment {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // private System.String _text
    // Size: 0x8
    // Offset: 0x10
    ::StringW text;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Creating conversion operator: operator ::StringW
    constexpr operator ::StringW() const noexcept {
      return text;
    }
    // Get instance field reference: private System.String _text
    ::StringW& dyn__text();
    // public System.Void .ctor(System.String text)
    // Offset: 0x2556FF8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TestNameGenerator::FixedTextFragment* New_ctor(::StringW text) {
      static auto ___internal__logger = ::Logger::get().WithContext("NUnit::Framework::Internal::TestNameGenerator::FixedTextFragment::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TestNameGenerator::FixedTextFragment*, creationType>(text)));
    }
    // public override System.String GetText(System.Reflection.MethodInfo method, System.Object[] args)
    // Offset: 0x2557D04
    // Implemented from: NUnit.Framework.Internal.TestNameGenerator/NUnit.Framework.Internal.NameFragment
    // Base method: System.String NameFragment::GetText(System.Reflection.MethodInfo method, System.Object[] args)
    ::StringW GetText(System::Reflection::MethodInfo* method, ::ArrayW<::Il2CppObject*> args);
  }; // NUnit.Framework.Internal.TestNameGenerator/NUnit.Framework.Internal.FixedTextFragment
  #pragma pack(pop)
  static check_size<sizeof(TestNameGenerator::FixedTextFragment), 16 + sizeof(::StringW)> __NUnit_Framework_Internal_TestNameGenerator_FixedTextFragmentSizeCheck;
  static_assert(sizeof(TestNameGenerator::FixedTextFragment) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: NUnit::Framework::Internal::TestNameGenerator::FixedTextFragment::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: NUnit::Framework::Internal::TestNameGenerator::FixedTextFragment::GetText
// Il2CppName: GetText
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (NUnit::Framework::Internal::TestNameGenerator::FixedTextFragment::*)(System::Reflection::MethodInfo*, ::ArrayW<::Il2CppObject*>)>(&NUnit::Framework::Internal::TestNameGenerator::FixedTextFragment::GetText)> {
  static const MethodInfo* get() {
    static auto* method = &::il2cpp_utils::GetClassFromName("System.Reflection", "MethodInfo")->byval_arg;
    static auto* args = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::TestNameGenerator::FixedTextFragment*), "GetText", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{method, args});
  }
};
