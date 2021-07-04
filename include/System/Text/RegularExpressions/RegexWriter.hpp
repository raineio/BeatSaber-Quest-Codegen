// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: Hashtable
  class Hashtable;
}
// Forward declaring namespace: System::Text::RegularExpressions
namespace System::Text::RegularExpressions {
  // Forward declaring type: RegexCode
  class RegexCode;
  // Forward declaring type: RegexTree
  class RegexTree;
  // Forward declaring type: RegexNode
  class RegexNode;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: ArgumentException
  class ArgumentException;
}
// Completed forward declares
// Type namespace: System.Text.RegularExpressions
namespace System::Text::RegularExpressions {
  // Size: 0x58
  #pragma pack(push, 1)
  // Autogenerated type: System.Text.RegularExpressions.RegexWriter
  class RegexWriter : public ::Il2CppObject {
    public:
    // System.Int32[] _intStack
    // Size: 0x8
    // Offset: 0x10
    ::Array<int>* intStack;
    // Field size check
    static_assert(sizeof(::Array<int>*) == 0x8);
    // System.Int32 _depth
    // Size: 0x4
    // Offset: 0x18
    int depth;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: depth and: emitted
    char __padding1[0x4] = {};
    // System.Int32[] _emitted
    // Size: 0x8
    // Offset: 0x20
    ::Array<int>* emitted;
    // Field size check
    static_assert(sizeof(::Array<int>*) == 0x8);
    // System.Int32 _curpos
    // Size: 0x4
    // Offset: 0x28
    int curpos;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: curpos and: stringhash
    char __padding3[0x4] = {};
    // System.Collections.Generic.Dictionary`2<System.String,System.Int32> _stringhash
    // Size: 0x8
    // Offset: 0x30
    System::Collections::Generic::Dictionary_2<::Il2CppString*, int>* stringhash;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::Dictionary_2<::Il2CppString*, int>*) == 0x8);
    // System.Collections.Generic.List`1<System.String> _stringtable
    // Size: 0x8
    // Offset: 0x38
    System::Collections::Generic::List_1<::Il2CppString*>* stringtable;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<::Il2CppString*>*) == 0x8);
    // System.Boolean _counting
    // Size: 0x1
    // Offset: 0x40
    bool counting;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: counting and: count
    char __padding6[0x3] = {};
    // System.Int32 _count
    // Size: 0x4
    // Offset: 0x44
    int count;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // System.Int32 _trackcount
    // Size: 0x4
    // Offset: 0x48
    int trackcount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: trackcount and: caps
    char __padding8[0x4] = {};
    // System.Collections.Hashtable _caps
    // Size: 0x8
    // Offset: 0x50
    System::Collections::Hashtable* caps;
    // Field size check
    static_assert(sizeof(System::Collections::Hashtable*) == 0x8);
    // Creating value type constructor for type: RegexWriter
    RegexWriter(::Array<int>* intStack_ = {}, int depth_ = {}, ::Array<int>* emitted_ = {}, int curpos_ = {}, System::Collections::Generic::Dictionary_2<::Il2CppString*, int>* stringhash_ = {}, System::Collections::Generic::List_1<::Il2CppString*>* stringtable_ = {}, bool counting_ = {}, int count_ = {}, int trackcount_ = {}, System::Collections::Hashtable* caps_ = {}) noexcept : intStack{intStack_}, depth{depth_}, emitted{emitted_}, curpos{curpos_}, stringhash{stringhash_}, stringtable{stringtable_}, counting{counting_}, count{count_}, trackcount{trackcount_}, caps{caps_} {}
    // static System.Text.RegularExpressions.RegexCode Write(System.Text.RegularExpressions.RegexTree t)
    // Offset: 0x199799C
    static System::Text::RegularExpressions::RegexCode* Write(System::Text::RegularExpressions::RegexTree* t);
    // System.Void PushInt(System.Int32 I)
    // Offset: 0x1997E5C
    void PushInt(int I);
    // System.Boolean EmptyStack()
    // Offset: 0x1997F3C
    bool EmptyStack();
    // System.Int32 PopInt()
    // Offset: 0x1997F4C
    int PopInt();
    // System.Int32 CurPos()
    // Offset: 0x1997F94
    int CurPos();
    // System.Void PatchJump(System.Int32 Offset, System.Int32 jumpDest)
    // Offset: 0x1997F9C
    void PatchJump(int Offset, int jumpDest);
    // System.Void Emit(System.Int32 op)
    // Offset: 0x1997FDC
    void Emit(int op);
    // System.Void Emit(System.Int32 op, System.Int32 opd1)
    // Offset: 0x1998074
    void Emit(int op, int opd1);
    // System.Void Emit(System.Int32 op, System.Int32 opd1, System.Int32 opd2)
    // Offset: 0x1998134
    void Emit(int op, int opd1, int opd2);
    // System.Int32 StringCode(System.String str)
    // Offset: 0x199821C
    int StringCode(::Il2CppString* str);
    // System.ArgumentException MakeException(System.String message)
    // Offset: 0x1998328
    System::ArgumentException* MakeException(::Il2CppString* message);
    // System.Int32 MapCapnum(System.Int32 capnum)
    // Offset: 0x199838C
    int MapCapnum(int capnum);
    // System.Text.RegularExpressions.RegexCode RegexCodeFromRegexTree(System.Text.RegularExpressions.RegexTree tree)
    // Offset: 0x1997AC8
    System::Text::RegularExpressions::RegexCode* RegexCodeFromRegexTree(System::Text::RegularExpressions::RegexTree* tree);
    // System.Void EmitFragment(System.Int32 nodetype, System.Text.RegularExpressions.RegexNode node, System.Int32 CurIndex)
    // Offset: 0x1998448
    void EmitFragment(int nodetype, System::Text::RegularExpressions::RegexNode* node, int CurIndex);
    // private System.Void .ctor()
    // Offset: 0x1997A04
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RegexWriter* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Text::RegularExpressions::RegexWriter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RegexWriter*, creationType>()));
    }
  }; // System.Text.RegularExpressions.RegexWriter
  #pragma pack(pop)
  static check_size<sizeof(RegexWriter), 80 + sizeof(System::Collections::Hashtable*)> __System_Text_RegularExpressions_RegexWriterSizeCheck;
  static_assert(sizeof(RegexWriter) == 0x58);
}
DEFINE_IL2CPP_ARG_TYPE(System::Text::RegularExpressions::RegexWriter*, "System.Text.RegularExpressions", "RegexWriter");
// Writing MetadataGetter for method: System::Text::RegularExpressions::RegexWriter::Write
// Il2CppName: Write
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Text::RegularExpressions::RegexCode* (*)(System::Text::RegularExpressions::RegexTree*)>(&System::Text::RegularExpressions::RegexWriter::Write)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Text::RegularExpressions::RegexWriter*), "Write", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Text::RegularExpressions::RegexTree*>()});
  }
};
// Writing MetadataGetter for method: System::Text::RegularExpressions::RegexWriter::PushInt
// Il2CppName: PushInt
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Text::RegularExpressions::RegexWriter::*)(int)>(&System::Text::RegularExpressions::RegexWriter::PushInt)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Text::RegularExpressions::RegexWriter*), "PushInt", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<int>()});
  }
};
// Writing MetadataGetter for method: System::Text::RegularExpressions::RegexWriter::EmptyStack
// Il2CppName: EmptyStack
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Text::RegularExpressions::RegexWriter::*)()>(&System::Text::RegularExpressions::RegexWriter::EmptyStack)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Text::RegularExpressions::RegexWriter*), "EmptyStack", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Text::RegularExpressions::RegexWriter::PopInt
// Il2CppName: PopInt
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Text::RegularExpressions::RegexWriter::*)()>(&System::Text::RegularExpressions::RegexWriter::PopInt)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Text::RegularExpressions::RegexWriter*), "PopInt", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Text::RegularExpressions::RegexWriter::CurPos
// Il2CppName: CurPos
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Text::RegularExpressions::RegexWriter::*)()>(&System::Text::RegularExpressions::RegexWriter::CurPos)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Text::RegularExpressions::RegexWriter*), "CurPos", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Text::RegularExpressions::RegexWriter::PatchJump
// Il2CppName: PatchJump
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Text::RegularExpressions::RegexWriter::*)(int, int)>(&System::Text::RegularExpressions::RegexWriter::PatchJump)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Text::RegularExpressions::RegexWriter*), "PatchJump", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<int>(), ::il2cpp_utils::ExtractIndependentType<int>()});
  }
};
// Writing MetadataGetter for method: System::Text::RegularExpressions::RegexWriter::Emit
// Il2CppName: Emit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Text::RegularExpressions::RegexWriter::*)(int)>(&System::Text::RegularExpressions::RegexWriter::Emit)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Text::RegularExpressions::RegexWriter*), "Emit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<int>()});
  }
};
// Writing MetadataGetter for method: System::Text::RegularExpressions::RegexWriter::Emit
// Il2CppName: Emit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Text::RegularExpressions::RegexWriter::*)(int, int)>(&System::Text::RegularExpressions::RegexWriter::Emit)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Text::RegularExpressions::RegexWriter*), "Emit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<int>(), ::il2cpp_utils::ExtractIndependentType<int>()});
  }
};
// Writing MetadataGetter for method: System::Text::RegularExpressions::RegexWriter::Emit
// Il2CppName: Emit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Text::RegularExpressions::RegexWriter::*)(int, int, int)>(&System::Text::RegularExpressions::RegexWriter::Emit)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Text::RegularExpressions::RegexWriter*), "Emit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<int>(), ::il2cpp_utils::ExtractIndependentType<int>(), ::il2cpp_utils::ExtractIndependentType<int>()});
  }
};
// Writing MetadataGetter for method: System::Text::RegularExpressions::RegexWriter::StringCode
// Il2CppName: StringCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Text::RegularExpressions::RegexWriter::*)(::Il2CppString*)>(&System::Text::RegularExpressions::RegexWriter::StringCode)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Text::RegularExpressions::RegexWriter*), "StringCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>()});
  }
};
// Writing MetadataGetter for method: System::Text::RegularExpressions::RegexWriter::MakeException
// Il2CppName: MakeException
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::ArgumentException* (System::Text::RegularExpressions::RegexWriter::*)(::Il2CppString*)>(&System::Text::RegularExpressions::RegexWriter::MakeException)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Text::RegularExpressions::RegexWriter*), "MakeException", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>()});
  }
};
// Writing MetadataGetter for method: System::Text::RegularExpressions::RegexWriter::MapCapnum
// Il2CppName: MapCapnum
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Text::RegularExpressions::RegexWriter::*)(int)>(&System::Text::RegularExpressions::RegexWriter::MapCapnum)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Text::RegularExpressions::RegexWriter*), "MapCapnum", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<int>()});
  }
};
// Writing MetadataGetter for method: System::Text::RegularExpressions::RegexWriter::RegexCodeFromRegexTree
// Il2CppName: RegexCodeFromRegexTree
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Text::RegularExpressions::RegexCode* (System::Text::RegularExpressions::RegexWriter::*)(System::Text::RegularExpressions::RegexTree*)>(&System::Text::RegularExpressions::RegexWriter::RegexCodeFromRegexTree)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Text::RegularExpressions::RegexWriter*), "RegexCodeFromRegexTree", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Text::RegularExpressions::RegexTree*>()});
  }
};
// Writing MetadataGetter for method: System::Text::RegularExpressions::RegexWriter::EmitFragment
// Il2CppName: EmitFragment
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Text::RegularExpressions::RegexWriter::*)(int, System::Text::RegularExpressions::RegexNode*, int)>(&System::Text::RegularExpressions::RegexWriter::EmitFragment)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Text::RegularExpressions::RegexWriter*), "EmitFragment", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<int>(), ::il2cpp_utils::ExtractIndependentType<System::Text::RegularExpressions::RegexNode*>(), ::il2cpp_utils::ExtractIndependentType<int>()});
  }
};
// Writing MetadataGetter for method: System::Text::RegularExpressions::RegexWriter::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
