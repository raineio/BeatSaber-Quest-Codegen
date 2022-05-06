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
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: Hashtable
  class Hashtable;
}
// Forward declaring namespace: System::Text::RegularExpressions
namespace System::Text::RegularExpressions {
  // Forward declaring type: RegexPrefix
  class RegexPrefix;
  // Forward declaring type: RegexBoyerMoore
  class RegexBoyerMoore;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: System.Text.RegularExpressions
namespace System::Text::RegularExpressions {
  // Forward declaring type: RegexCode
  class RegexCode;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Text::RegularExpressions::RegexCode);
DEFINE_IL2CPP_ARG_TYPE(::System::Text::RegularExpressions::RegexCode*, "System.Text.RegularExpressions", "RegexCode");
// Type namespace: System.Text.RegularExpressions
namespace System::Text::RegularExpressions {
  // Size: 0x4D
  #pragma pack(push, 1)
  // Autogenerated type: System.Text.RegularExpressions.RegexCode
  // [TokenAttribute] Offset: FFFFFFFF
  class RegexCode : public ::Il2CppObject {
    public:
    public:
    // System.Int32[] _codes
    // Size: 0x8
    // Offset: 0x10
    ::ArrayW<int> codes;
    // Field size check
    static_assert(sizeof(::ArrayW<int>) == 0x8);
    // System.String[] _strings
    // Size: 0x8
    // Offset: 0x18
    ::ArrayW<::StringW> strings;
    // Field size check
    static_assert(sizeof(::ArrayW<::StringW>) == 0x8);
    // System.Int32 _trackcount
    // Size: 0x4
    // Offset: 0x20
    int trackcount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: trackcount and: caps
    char __padding2[0x4] = {};
    // System.Collections.Hashtable _caps
    // Size: 0x8
    // Offset: 0x28
    ::System::Collections::Hashtable* caps;
    // Field size check
    static_assert(sizeof(::System::Collections::Hashtable*) == 0x8);
    // System.Int32 _capsize
    // Size: 0x4
    // Offset: 0x30
    int capsize;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: capsize and: fcPrefix
    char __padding4[0x4] = {};
    // System.Text.RegularExpressions.RegexPrefix _fcPrefix
    // Size: 0x8
    // Offset: 0x38
    ::System::Text::RegularExpressions::RegexPrefix* fcPrefix;
    // Field size check
    static_assert(sizeof(::System::Text::RegularExpressions::RegexPrefix*) == 0x8);
    // System.Text.RegularExpressions.RegexBoyerMoore _bmPrefix
    // Size: 0x8
    // Offset: 0x40
    ::System::Text::RegularExpressions::RegexBoyerMoore* bmPrefix;
    // Field size check
    static_assert(sizeof(::System::Text::RegularExpressions::RegexBoyerMoore*) == 0x8);
    // System.Int32 _anchors
    // Size: 0x4
    // Offset: 0x48
    int anchors;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // System.Boolean _rightToLeft
    // Size: 0x1
    // Offset: 0x4C
    bool rightToLeft;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get instance field reference: System.Int32[] _codes
    [[deprecated("Use field access instead!")]] ::ArrayW<int>& dyn__codes();
    // Get instance field reference: System.String[] _strings
    [[deprecated("Use field access instead!")]] ::ArrayW<::StringW>& dyn__strings();
    // Get instance field reference: System.Int32 _trackcount
    [[deprecated("Use field access instead!")]] int& dyn__trackcount();
    // Get instance field reference: System.Collections.Hashtable _caps
    [[deprecated("Use field access instead!")]] ::System::Collections::Hashtable*& dyn__caps();
    // Get instance field reference: System.Int32 _capsize
    [[deprecated("Use field access instead!")]] int& dyn__capsize();
    // Get instance field reference: System.Text.RegularExpressions.RegexPrefix _fcPrefix
    [[deprecated("Use field access instead!")]] ::System::Text::RegularExpressions::RegexPrefix*& dyn__fcPrefix();
    // Get instance field reference: System.Text.RegularExpressions.RegexBoyerMoore _bmPrefix
    [[deprecated("Use field access instead!")]] ::System::Text::RegularExpressions::RegexBoyerMoore*& dyn__bmPrefix();
    // Get instance field reference: System.Int32 _anchors
    [[deprecated("Use field access instead!")]] int& dyn__anchors();
    // Get instance field reference: System.Boolean _rightToLeft
    [[deprecated("Use field access instead!")]] bool& dyn__rightToLeft();
    // System.Void .ctor(System.Int32[] codes, System.Collections.Generic.List`1<System.String> stringlist, System.Int32 trackcount, System.Collections.Hashtable caps, System.Int32 capsize, System.Text.RegularExpressions.RegexBoyerMoore bmPrefix, System.Text.RegularExpressions.RegexPrefix fcPrefix, System.Int32 anchors, System.Boolean rightToLeft)
    // Offset: 0x1DDB370
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RegexCode* New_ctor(::ArrayW<int> codes, ::System::Collections::Generic::List_1<::StringW>* stringlist, int trackcount, ::System::Collections::Hashtable* caps, int capsize, ::System::Text::RegularExpressions::RegexBoyerMoore* bmPrefix, ::System::Text::RegularExpressions::RegexPrefix* fcPrefix, int anchors, bool rightToLeft) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Text::RegularExpressions::RegexCode::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RegexCode*, creationType>(codes, stringlist, trackcount, caps, capsize, bmPrefix, fcPrefix, anchors, rightToLeft)));
    }
    // static System.Boolean OpcodeBacktracks(System.Int32 Op)
    // Offset: 0x1DDB46C
    static bool OpcodeBacktracks(int Op);
  }; // System.Text.RegularExpressions.RegexCode
  #pragma pack(pop)
  static check_size<sizeof(RegexCode), 76 + sizeof(bool)> __System_Text_RegularExpressions_RegexCodeSizeCheck;
  static_assert(sizeof(RegexCode) == 0x4D);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Text::RegularExpressions::RegexCode::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Text::RegularExpressions::RegexCode::OpcodeBacktracks
// Il2CppName: OpcodeBacktracks
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(int)>(&System::Text::RegularExpressions::RegexCode::OpcodeBacktracks)> {
  static const MethodInfo* get() {
    static auto* Op = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::RegularExpressions::RegexCode*), "OpcodeBacktracks", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{Op});
  }
};
