// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Text.RegularExpressions.Capture
#include "System/Text/RegularExpressions/Capture.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "extern/beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Type namespace: System.Text.RegularExpressions
namespace System::Text::RegularExpressions {
  // Forward declaring type: Group
  class Group;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(System::Text::RegularExpressions::Group);
DEFINE_IL2CPP_ARG_TYPE(System::Text::RegularExpressions::Group*, "System.Text.RegularExpressions", "Group");
// Type namespace: System.Text.RegularExpressions
namespace System::Text::RegularExpressions {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: System.Text.RegularExpressions.Group
  // [TokenAttribute] Offset: FFFFFFFF
  class Group : public System::Text::RegularExpressions::Capture {
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
    // System.Int32[] _caps
    // Size: 0x8
    // Offset: 0x20
    ::ArrayW<int> caps;
    // Field size check
    static_assert(sizeof(::ArrayW<int>) == 0x8);
    // System.Int32 _capcount
    // Size: 0x4
    // Offset: 0x28
    int capcount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: capcount and: name
    char __padding1[0x4] = {};
    // [OptionalFieldAttribute] Offset: 0xEABB6C
    // System.String _name
    // Size: 0x8
    // Offset: 0x30
    ::Il2CppString* name;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    public:
    // Get static field: static System.Text.RegularExpressions.Group _emptygroup
    static System::Text::RegularExpressions::Group* _get__emptygroup();
    // Set static field: static System.Text.RegularExpressions.Group _emptygroup
    static void _set__emptygroup(System::Text::RegularExpressions::Group* value);
    // Get instance field reference: System.Int32[] _caps
    ::ArrayW<int>& dyn__caps();
    // Get instance field reference: System.Int32 _capcount
    int& dyn__capcount();
    // Get instance field reference: System.String _name
    ::Il2CppString*& dyn__name();
    // public System.Boolean get_Success()
    // Offset: 0x19E4628
    bool get_Success();
    // System.Void .ctor(System.String text, System.Int32[] caps, System.Int32 capcount, System.String name)
    // Offset: 0x19E4578
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Group* New_ctor(::Il2CppString* text, ::ArrayW<int> caps, int capcount, ::Il2CppString* name) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Text::RegularExpressions::Group::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Group*, creationType>(text, caps, capcount, name)));
    }
    // static private System.Void .cctor()
    // Offset: 0x19E4638
    static void _cctor();
    // System.Void .ctor()
    // Offset: 0x19E46F4
    // Implemented from: System.Text.RegularExpressions.Capture
    // Base method: System.Void Capture::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Group* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Text::RegularExpressions::Group::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Group*, creationType>()));
    }
  }; // System.Text.RegularExpressions.Group
  #pragma pack(pop)
  static check_size<sizeof(Group), 48 + sizeof(::Il2CppString*)> __System_Text_RegularExpressions_GroupSizeCheck;
  static_assert(sizeof(Group) == 0x38);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Text::RegularExpressions::Group::get_Success
// Il2CppName: get_Success
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Text::RegularExpressions::Group::*)()>(&System::Text::RegularExpressions::Group::get_Success)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Text::RegularExpressions::Group*), "get_Success", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Text::RegularExpressions::Group::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Text::RegularExpressions::Group::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Text::RegularExpressions::Group::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Text::RegularExpressions::Group*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Text::RegularExpressions::Group::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
