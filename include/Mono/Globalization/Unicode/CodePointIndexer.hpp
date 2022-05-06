// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Type namespace: Mono.Globalization.Unicode
namespace Mono::Globalization::Unicode {
  // Forward declaring type: CodePointIndexer
  class CodePointIndexer;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Mono::Globalization::Unicode::CodePointIndexer);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Globalization::Unicode::CodePointIndexer*, "Mono.Globalization.Unicode", "CodePointIndexer");
// Type namespace: Mono.Globalization.Unicode
namespace Mono::Globalization::Unicode {
  // Size: 0x24
  #pragma pack(push, 1)
  // Autogenerated type: Mono.Globalization.Unicode.CodePointIndexer
  // [TokenAttribute] Offset: FFFFFFFF
  class CodePointIndexer : public ::Il2CppObject {
    public:
    // Nested type: ::Mono::Globalization::Unicode::CodePointIndexer::TableRange
    struct TableRange;
    // Size: 0x14
    #pragma pack(push, 1)
    // WARNING Layout: Sequential may not be correctly taken into account!
    // Autogenerated type: Mono.Globalization.Unicode.CodePointIndexer/Mono.Globalization.Unicode.TableRange
    // [TokenAttribute] Offset: FFFFFFFF
    struct TableRange/*, public ::System::ValueType*/ {
      public:
      public:
      // public readonly System.Int32 Start
      // Size: 0x4
      // Offset: 0x0
      int Start;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      // public readonly System.Int32 End
      // Size: 0x4
      // Offset: 0x4
      int End;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      // public readonly System.Int32 Count
      // Size: 0x4
      // Offset: 0x8
      int Count;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      // public readonly System.Int32 IndexStart
      // Size: 0x4
      // Offset: 0xC
      int IndexStart;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      // public readonly System.Int32 IndexEnd
      // Size: 0x4
      // Offset: 0x10
      int IndexEnd;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      public:
      // Creating value type constructor for type: TableRange
      constexpr TableRange(int Start_ = {}, int End_ = {}, int Count_ = {}, int IndexStart_ = {}, int IndexEnd_ = {}) noexcept : Start{Start_}, End{End_}, Count{Count_}, IndexStart{IndexStart_}, IndexEnd{IndexEnd_} {}
      // Creating interface conversion operator: operator ::System::ValueType
      operator ::System::ValueType() noexcept {
        return *reinterpret_cast<::System::ValueType*>(this);
      }
      // Get instance field reference: public readonly System.Int32 Start
      [[deprecated("Use field access instead!")]] int& dyn_Start();
      // Get instance field reference: public readonly System.Int32 End
      [[deprecated("Use field access instead!")]] int& dyn_End();
      // Get instance field reference: public readonly System.Int32 Count
      [[deprecated("Use field access instead!")]] int& dyn_Count();
      // Get instance field reference: public readonly System.Int32 IndexStart
      [[deprecated("Use field access instead!")]] int& dyn_IndexStart();
      // Get instance field reference: public readonly System.Int32 IndexEnd
      [[deprecated("Use field access instead!")]] int& dyn_IndexEnd();
      // public System.Void .ctor(System.Int32 start, System.Int32 end, System.Int32 indexStart)
      // Offset: 0x1F45300
      TableRange(int start, int end, int indexStart);
    }; // Mono.Globalization.Unicode.CodePointIndexer/Mono.Globalization.Unicode.TableRange
    #pragma pack(pop)
    static check_size<sizeof(CodePointIndexer::TableRange), 16 + sizeof(int)> __Mono_Globalization_Unicode_CodePointIndexer_TableRangeSizeCheck;
    static_assert(sizeof(CodePointIndexer::TableRange) == 0x14);
    public:
    // private readonly Mono.Globalization.Unicode.CodePointIndexer/Mono.Globalization.Unicode.TableRange[] ranges
    // Size: 0x8
    // Offset: 0x10
    ::ArrayW<::Mono::Globalization::Unicode::CodePointIndexer::TableRange> ranges;
    // Field size check
    static_assert(sizeof(::ArrayW<::Mono::Globalization::Unicode::CodePointIndexer::TableRange>) == 0x8);
    // public readonly System.Int32 TotalCount
    // Size: 0x4
    // Offset: 0x18
    int TotalCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 defaultIndex
    // Size: 0x4
    // Offset: 0x1C
    int defaultIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 defaultCP
    // Size: 0x4
    // Offset: 0x20
    int defaultCP;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Get instance field reference: private readonly Mono.Globalization.Unicode.CodePointIndexer/Mono.Globalization.Unicode.TableRange[] ranges
    [[deprecated("Use field access instead!")]] ::ArrayW<::Mono::Globalization::Unicode::CodePointIndexer::TableRange>& dyn_ranges();
    // Get instance field reference: public readonly System.Int32 TotalCount
    [[deprecated("Use field access instead!")]] int& dyn_TotalCount();
    // Get instance field reference: private System.Int32 defaultIndex
    [[deprecated("Use field access instead!")]] int& dyn_defaultIndex();
    // Get instance field reference: private System.Int32 defaultCP
    [[deprecated("Use field access instead!")]] int& dyn_defaultCP();
    // public System.Void .ctor(System.Int32[] starts, System.Int32[] ends, System.Int32 defaultIndex, System.Int32 defaultCP)
    // Offset: 0x1F4518C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CodePointIndexer* New_ctor(::ArrayW<int> starts, ::ArrayW<int> ends, int defaultIndex, int defaultCP) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Mono::Globalization::Unicode::CodePointIndexer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CodePointIndexer*, creationType>(starts, ends, defaultIndex, defaultCP)));
    }
    // public System.Int32 ToIndex(System.Int32 cp)
    // Offset: 0x1F45318
    int ToIndex(int cp);
  }; // Mono.Globalization.Unicode.CodePointIndexer
  #pragma pack(pop)
  static check_size<sizeof(CodePointIndexer), 32 + sizeof(int)> __Mono_Globalization_Unicode_CodePointIndexerSizeCheck;
  static_assert(sizeof(CodePointIndexer) == 0x24);
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Mono::Globalization::Unicode::CodePointIndexer::TableRange, "Mono.Globalization.Unicode", "CodePointIndexer/TableRange");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Mono::Globalization::Unicode::CodePointIndexer::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Mono::Globalization::Unicode::CodePointIndexer::ToIndex
// Il2CppName: ToIndex
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Mono::Globalization::Unicode::CodePointIndexer::*)(int)>(&Mono::Globalization::Unicode::CodePointIndexer::ToIndex)> {
  static const MethodInfo* get() {
    static auto* cp = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Globalization::Unicode::CodePointIndexer*), "ToIndex", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{cp});
  }
};
