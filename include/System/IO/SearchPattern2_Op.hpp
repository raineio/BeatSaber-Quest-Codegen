// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.IO.SearchPattern2
#include "System/IO/SearchPattern2.hpp"
// Including type: System.IO.SearchPattern2/System.IO.OpCode
#include "System/IO/SearchPattern2_OpCode.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::IO::SearchPattern2::Op);
DEFINE_IL2CPP_ARG_TYPE(::System::IO::SearchPattern2::Op*, "System.IO", "SearchPattern2/Op");
// Type namespace: System.IO
namespace System::IO {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: System.IO.SearchPattern2/System.IO.Op
  // [TokenAttribute] Offset: FFFFFFFF
  class SearchPattern2::Op : public ::Il2CppObject {
    public:
    public:
    // public System.IO.SearchPattern2/System.IO.OpCode Code
    // Size: 0x4
    // Offset: 0x10
    ::System::IO::SearchPattern2::OpCode Code;
    // Field size check
    static_assert(sizeof(::System::IO::SearchPattern2::OpCode) == 0x4);
    // Padding between fields: Code and: Argument
    char __padding0[0x4] = {};
    // public System.String Argument
    // Size: 0x8
    // Offset: 0x18
    ::StringW Argument;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.IO.SearchPattern2/System.IO.Op Next
    // Size: 0x8
    // Offset: 0x20
    ::System::IO::SearchPattern2::Op* Next;
    // Field size check
    static_assert(sizeof(::System::IO::SearchPattern2::Op*) == 0x8);
    public:
    // Get instance field reference: public System.IO.SearchPattern2/System.IO.OpCode Code
    [[deprecated("Use field access instead!")]] ::System::IO::SearchPattern2::OpCode& dyn_Code();
    // Get instance field reference: public System.String Argument
    [[deprecated("Use field access instead!")]] ::StringW& dyn_Argument();
    // Get instance field reference: public System.IO.SearchPattern2/System.IO.Op Next
    [[deprecated("Use field access instead!")]] ::System::IO::SearchPattern2::Op*& dyn_Next();
    // public System.Void .ctor(System.IO.SearchPattern2/System.IO.OpCode code)
    // Offset: 0x1CE6D7C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SearchPattern2::Op* New_ctor(::System::IO::SearchPattern2::OpCode code) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::IO::SearchPattern2::Op::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SearchPattern2::Op*, creationType>(code)));
    }
  }; // System.IO.SearchPattern2/System.IO.Op
  #pragma pack(pop)
  static check_size<sizeof(SearchPattern2::Op), 32 + sizeof(::System::IO::SearchPattern2::Op*)> __System_IO_SearchPattern2_OpSizeCheck;
  static_assert(sizeof(SearchPattern2::Op) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::IO::SearchPattern2::Op::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
