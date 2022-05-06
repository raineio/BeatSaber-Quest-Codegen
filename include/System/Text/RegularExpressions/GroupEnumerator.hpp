// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Collections.IEnumerator
#include "System/Collections/IEnumerator.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Text::RegularExpressions
namespace System::Text::RegularExpressions {
  // Forward declaring type: GroupCollection
  class GroupCollection;
  // Forward declaring type: Capture
  class Capture;
}
// Completed forward declares
// Type namespace: System.Text.RegularExpressions
namespace System::Text::RegularExpressions {
  // Forward declaring type: GroupEnumerator
  class GroupEnumerator;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Text::RegularExpressions::GroupEnumerator);
DEFINE_IL2CPP_ARG_TYPE(::System::Text::RegularExpressions::GroupEnumerator*, "System.Text.RegularExpressions", "GroupEnumerator");
// Type namespace: System.Text.RegularExpressions
namespace System::Text::RegularExpressions {
  // Size: 0x1C
  #pragma pack(push, 1)
  // Autogenerated type: System.Text.RegularExpressions.GroupEnumerator
  // [TokenAttribute] Offset: FFFFFFFF
  class GroupEnumerator : public ::Il2CppObject/*, public ::System::Collections::IEnumerator*/ {
    public:
    public:
    // System.Text.RegularExpressions.GroupCollection _rgc
    // Size: 0x8
    // Offset: 0x10
    ::System::Text::RegularExpressions::GroupCollection* rgc;
    // Field size check
    static_assert(sizeof(::System::Text::RegularExpressions::GroupCollection*) == 0x8);
    // System.Int32 _curindex
    // Size: 0x4
    // Offset: 0x18
    int curindex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating interface conversion operator: operator ::System::Collections::IEnumerator
    operator ::System::Collections::IEnumerator() noexcept {
      return *reinterpret_cast<::System::Collections::IEnumerator*>(this);
    }
    // Get instance field reference: System.Text.RegularExpressions.GroupCollection _rgc
    [[deprecated("Use field access instead!")]] ::System::Text::RegularExpressions::GroupCollection*& dyn__rgc();
    // Get instance field reference: System.Int32 _curindex
    [[deprecated("Use field access instead!")]] int& dyn__curindex();
    // public System.Object get_Current()
    // Offset: 0x1BFDC90
    ::Il2CppObject* get_Current();
    // public System.Text.RegularExpressions.Capture get_Capture()
    // Offset: 0x1BFDC94
    ::System::Text::RegularExpressions::Capture* get_Capture();
    // System.Void .ctor(System.Text.RegularExpressions.GroupCollection rgc)
    // Offset: 0x1BFDBCC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GroupEnumerator* New_ctor(::System::Text::RegularExpressions::GroupCollection* rgc) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Text::RegularExpressions::GroupEnumerator::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GroupEnumerator*, creationType>(rgc)));
    }
    // public System.Boolean MoveNext()
    // Offset: 0x1BFDC40
    bool MoveNext();
    // public System.Void Reset()
    // Offset: 0x1BFDD50
    void Reset();
  }; // System.Text.RegularExpressions.GroupEnumerator
  #pragma pack(pop)
  static check_size<sizeof(GroupEnumerator), 24 + sizeof(int)> __System_Text_RegularExpressions_GroupEnumeratorSizeCheck;
  static_assert(sizeof(GroupEnumerator) == 0x1C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Text::RegularExpressions::GroupEnumerator::get_Current
// Il2CppName: get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Text::RegularExpressions::GroupEnumerator::*)()>(&System::Text::RegularExpressions::GroupEnumerator::get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Text::RegularExpressions::GroupEnumerator*), "get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Text::RegularExpressions::GroupEnumerator::get_Capture
// Il2CppName: get_Capture
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Text::RegularExpressions::Capture* (System::Text::RegularExpressions::GroupEnumerator::*)()>(&System::Text::RegularExpressions::GroupEnumerator::get_Capture)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Text::RegularExpressions::GroupEnumerator*), "get_Capture", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Text::RegularExpressions::GroupEnumerator::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Text::RegularExpressions::GroupEnumerator::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Text::RegularExpressions::GroupEnumerator::*)()>(&System::Text::RegularExpressions::GroupEnumerator::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Text::RegularExpressions::GroupEnumerator*), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Text::RegularExpressions::GroupEnumerator::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Text::RegularExpressions::GroupEnumerator::*)()>(&System::Text::RegularExpressions::GroupEnumerator::Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Text::RegularExpressions::GroupEnumerator*), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
