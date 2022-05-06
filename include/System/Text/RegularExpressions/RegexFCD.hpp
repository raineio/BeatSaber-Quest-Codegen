// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Text::RegularExpressions
namespace System::Text::RegularExpressions {
  // Forward declaring type: RegexFC
  class RegexFC;
  // Forward declaring type: RegexPrefix
  class RegexPrefix;
  // Forward declaring type: RegexTree
  class RegexTree;
  // Forward declaring type: RegexNode
  class RegexNode;
}
// Completed forward declares
// Type namespace: System.Text.RegularExpressions
namespace System::Text::RegularExpressions {
  // Forward declaring type: RegexFCD
  class RegexFCD;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Text::RegularExpressions::RegexFCD);
DEFINE_IL2CPP_ARG_TYPE(::System::Text::RegularExpressions::RegexFCD*, "System.Text.RegularExpressions", "RegexFCD");
// Type namespace: System.Text.RegularExpressions
namespace System::Text::RegularExpressions {
  // Size: 0x2F
  #pragma pack(push, 1)
  // Autogenerated type: System.Text.RegularExpressions.RegexFCD
  // [TokenAttribute] Offset: FFFFFFFF
  class RegexFCD : public ::Il2CppObject {
    public:
    public:
    // private System.Int32[] _intStack
    // Size: 0x8
    // Offset: 0x10
    ::ArrayW<int> intStack;
    // Field size check
    static_assert(sizeof(::ArrayW<int>) == 0x8);
    // private System.Int32 _intDepth
    // Size: 0x4
    // Offset: 0x18
    int intDepth;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: intDepth and: fcStack
    char __padding1[0x4] = {};
    // private System.Text.RegularExpressions.RegexFC[] _fcStack
    // Size: 0x8
    // Offset: 0x20
    ::ArrayW<::System::Text::RegularExpressions::RegexFC*> fcStack;
    // Field size check
    static_assert(sizeof(::ArrayW<::System::Text::RegularExpressions::RegexFC*>) == 0x8);
    // private System.Int32 _fcDepth
    // Size: 0x4
    // Offset: 0x28
    int fcDepth;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Boolean _skipAllChildren
    // Size: 0x1
    // Offset: 0x2C
    bool skipAllChildren;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _skipchild
    // Size: 0x1
    // Offset: 0x2D
    bool skipchild;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _failed
    // Size: 0x1
    // Offset: 0x2E
    bool failed;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get instance field reference: private System.Int32[] _intStack
    [[deprecated("Use field access instead!")]] ::ArrayW<int>& dyn__intStack();
    // Get instance field reference: private System.Int32 _intDepth
    [[deprecated("Use field access instead!")]] int& dyn__intDepth();
    // Get instance field reference: private System.Text.RegularExpressions.RegexFC[] _fcStack
    [[deprecated("Use field access instead!")]] ::ArrayW<::System::Text::RegularExpressions::RegexFC*>& dyn__fcStack();
    // Get instance field reference: private System.Int32 _fcDepth
    [[deprecated("Use field access instead!")]] int& dyn__fcDepth();
    // Get instance field reference: private System.Boolean _skipAllChildren
    [[deprecated("Use field access instead!")]] bool& dyn__skipAllChildren();
    // Get instance field reference: private System.Boolean _skipchild
    [[deprecated("Use field access instead!")]] bool& dyn__skipchild();
    // Get instance field reference: private System.Boolean _failed
    [[deprecated("Use field access instead!")]] bool& dyn__failed();
    // private System.Void .ctor()
    // Offset: 0x1DDB8D4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RegexFCD* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Text::RegularExpressions::RegexFCD::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RegexFCD*, creationType>()));
    }
    // static System.Text.RegularExpressions.RegexPrefix FirstChars(System.Text.RegularExpressions.RegexTree t)
    // Offset: 0x1DDB7B8
    static ::System::Text::RegularExpressions::RegexPrefix* FirstChars(::System::Text::RegularExpressions::RegexTree* t);
    // static System.Text.RegularExpressions.RegexPrefix Prefix(System.Text.RegularExpressions.RegexTree tree)
    // Offset: 0x1DDBAFC
    static ::System::Text::RegularExpressions::RegexPrefix* Prefix(::System::Text::RegularExpressions::RegexTree* tree);
    // static System.Int32 Anchors(System.Text.RegularExpressions.RegexTree tree)
    // Offset: 0x1DDBE38
    static int Anchors(::System::Text::RegularExpressions::RegexTree* tree);
    // static private System.Int32 AnchorFromType(System.Int32 type)
    // Offset: 0x1DDBF6C
    static int AnchorFromType(int type);
    // private System.Void PushInt(System.Int32 I)
    // Offset: 0x1DDBFD8
    void PushInt(int I);
    // private System.Boolean IntIsEmpty()
    // Offset: 0x1DDC0B8
    bool IntIsEmpty();
    // private System.Int32 PopInt()
    // Offset: 0x1DDC0C8
    int PopInt();
    // private System.Void PushFC(System.Text.RegularExpressions.RegexFC fc)
    // Offset: 0x1DDC110
    void PushFC(::System::Text::RegularExpressions::RegexFC* fc);
    // private System.Boolean FCIsEmpty()
    // Offset: 0x1DDC218
    bool FCIsEmpty();
    // private System.Text.RegularExpressions.RegexFC PopFC()
    // Offset: 0x1DDC228
    ::System::Text::RegularExpressions::RegexFC* PopFC();
    // private System.Text.RegularExpressions.RegexFC TopFC()
    // Offset: 0x1DDC270
    ::System::Text::RegularExpressions::RegexFC* TopFC();
    // private System.Text.RegularExpressions.RegexFC RegexFCFromRegexTree(System.Text.RegularExpressions.RegexTree tree)
    // Offset: 0x1DDB950
    ::System::Text::RegularExpressions::RegexFC* RegexFCFromRegexTree(::System::Text::RegularExpressions::RegexTree* tree);
    // private System.Void SkipChild()
    // Offset: 0x1DDC720
    void SkipChild();
    // private System.Void CalculateFC(System.Int32 NodeType, System.Text.RegularExpressions.RegexNode node, System.Int32 CurIndex)
    // Offset: 0x1DDC2B4
    void CalculateFC(int NodeType, ::System::Text::RegularExpressions::RegexNode* node, int CurIndex);
  }; // System.Text.RegularExpressions.RegexFCD
  #pragma pack(pop)
  static check_size<sizeof(RegexFCD), 46 + sizeof(bool)> __System_Text_RegularExpressions_RegexFCDSizeCheck;
  static_assert(sizeof(RegexFCD) == 0x2F);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Text::RegularExpressions::RegexFCD::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Text::RegularExpressions::RegexFCD::FirstChars
// Il2CppName: FirstChars
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Text::RegularExpressions::RegexPrefix* (*)(::System::Text::RegularExpressions::RegexTree*)>(&System::Text::RegularExpressions::RegexFCD::FirstChars)> {
  static const MethodInfo* get() {
    static auto* t = &::il2cpp_utils::GetClassFromName("System.Text.RegularExpressions", "RegexTree")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::RegularExpressions::RegexFCD*), "FirstChars", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{t});
  }
};
// Writing MetadataGetter for method: System::Text::RegularExpressions::RegexFCD::Prefix
// Il2CppName: Prefix
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Text::RegularExpressions::RegexPrefix* (*)(::System::Text::RegularExpressions::RegexTree*)>(&System::Text::RegularExpressions::RegexFCD::Prefix)> {
  static const MethodInfo* get() {
    static auto* tree = &::il2cpp_utils::GetClassFromName("System.Text.RegularExpressions", "RegexTree")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::RegularExpressions::RegexFCD*), "Prefix", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{tree});
  }
};
// Writing MetadataGetter for method: System::Text::RegularExpressions::RegexFCD::Anchors
// Il2CppName: Anchors
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::System::Text::RegularExpressions::RegexTree*)>(&System::Text::RegularExpressions::RegexFCD::Anchors)> {
  static const MethodInfo* get() {
    static auto* tree = &::il2cpp_utils::GetClassFromName("System.Text.RegularExpressions", "RegexTree")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::RegularExpressions::RegexFCD*), "Anchors", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{tree});
  }
};
// Writing MetadataGetter for method: System::Text::RegularExpressions::RegexFCD::AnchorFromType
// Il2CppName: AnchorFromType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(int)>(&System::Text::RegularExpressions::RegexFCD::AnchorFromType)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::RegularExpressions::RegexFCD*), "AnchorFromType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type});
  }
};
// Writing MetadataGetter for method: System::Text::RegularExpressions::RegexFCD::PushInt
// Il2CppName: PushInt
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Text::RegularExpressions::RegexFCD::*)(int)>(&System::Text::RegularExpressions::RegexFCD::PushInt)> {
  static const MethodInfo* get() {
    static auto* I = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::RegularExpressions::RegexFCD*), "PushInt", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{I});
  }
};
// Writing MetadataGetter for method: System::Text::RegularExpressions::RegexFCD::IntIsEmpty
// Il2CppName: IntIsEmpty
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Text::RegularExpressions::RegexFCD::*)()>(&System::Text::RegularExpressions::RegexFCD::IntIsEmpty)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Text::RegularExpressions::RegexFCD*), "IntIsEmpty", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Text::RegularExpressions::RegexFCD::PopInt
// Il2CppName: PopInt
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Text::RegularExpressions::RegexFCD::*)()>(&System::Text::RegularExpressions::RegexFCD::PopInt)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Text::RegularExpressions::RegexFCD*), "PopInt", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Text::RegularExpressions::RegexFCD::PushFC
// Il2CppName: PushFC
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Text::RegularExpressions::RegexFCD::*)(::System::Text::RegularExpressions::RegexFC*)>(&System::Text::RegularExpressions::RegexFCD::PushFC)> {
  static const MethodInfo* get() {
    static auto* fc = &::il2cpp_utils::GetClassFromName("System.Text.RegularExpressions", "RegexFC")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::RegularExpressions::RegexFCD*), "PushFC", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{fc});
  }
};
// Writing MetadataGetter for method: System::Text::RegularExpressions::RegexFCD::FCIsEmpty
// Il2CppName: FCIsEmpty
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Text::RegularExpressions::RegexFCD::*)()>(&System::Text::RegularExpressions::RegexFCD::FCIsEmpty)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Text::RegularExpressions::RegexFCD*), "FCIsEmpty", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Text::RegularExpressions::RegexFCD::PopFC
// Il2CppName: PopFC
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Text::RegularExpressions::RegexFC* (System::Text::RegularExpressions::RegexFCD::*)()>(&System::Text::RegularExpressions::RegexFCD::PopFC)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Text::RegularExpressions::RegexFCD*), "PopFC", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Text::RegularExpressions::RegexFCD::TopFC
// Il2CppName: TopFC
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Text::RegularExpressions::RegexFC* (System::Text::RegularExpressions::RegexFCD::*)()>(&System::Text::RegularExpressions::RegexFCD::TopFC)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Text::RegularExpressions::RegexFCD*), "TopFC", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Text::RegularExpressions::RegexFCD::RegexFCFromRegexTree
// Il2CppName: RegexFCFromRegexTree
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Text::RegularExpressions::RegexFC* (System::Text::RegularExpressions::RegexFCD::*)(::System::Text::RegularExpressions::RegexTree*)>(&System::Text::RegularExpressions::RegexFCD::RegexFCFromRegexTree)> {
  static const MethodInfo* get() {
    static auto* tree = &::il2cpp_utils::GetClassFromName("System.Text.RegularExpressions", "RegexTree")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::RegularExpressions::RegexFCD*), "RegexFCFromRegexTree", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{tree});
  }
};
// Writing MetadataGetter for method: System::Text::RegularExpressions::RegexFCD::SkipChild
// Il2CppName: SkipChild
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Text::RegularExpressions::RegexFCD::*)()>(&System::Text::RegularExpressions::RegexFCD::SkipChild)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Text::RegularExpressions::RegexFCD*), "SkipChild", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Text::RegularExpressions::RegexFCD::CalculateFC
// Il2CppName: CalculateFC
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Text::RegularExpressions::RegexFCD::*)(int, ::System::Text::RegularExpressions::RegexNode*, int)>(&System::Text::RegularExpressions::RegexFCD::CalculateFC)> {
  static const MethodInfo* get() {
    static auto* NodeType = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* node = &::il2cpp_utils::GetClassFromName("System.Text.RegularExpressions", "RegexNode")->byval_arg;
    static auto* CurIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::RegularExpressions::RegexFCD*), "CalculateFC", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{NodeType, node, CurIndex});
  }
};
