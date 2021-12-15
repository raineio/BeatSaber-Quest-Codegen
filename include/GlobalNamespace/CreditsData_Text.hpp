// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: CreditsData
#include "GlobalNamespace/CreditsData.hpp"
// Including type: CreditsData/TextStyle
#include "GlobalNamespace/CreditsData_TextStyle.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: Text
  class Text;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(GlobalNamespace::CreditsData::Text);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::CreditsData::Text*, "", "CreditsData/Text");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: CreditsData/Text
  // [TokenAttribute] Offset: FFFFFFFF
  class CreditsData::Text : public ::Il2CppObject {
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
    // public System.String text
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* text;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public System.Boolean localized
    // Size: 0x1
    // Offset: 0x18
    bool localized;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: localized and: style
    char __padding1[0x3] = {};
    // public CreditsData/TextStyle style
    // Size: 0x4
    // Offset: 0x1C
    GlobalNamespace::CreditsData::TextStyle style;
    // Field size check
    static_assert(sizeof(GlobalNamespace::CreditsData::TextStyle) == 0x4);
    public:
    // Get instance field reference: public System.String text
    ::Il2CppString*& dyn_text();
    // Get instance field reference: public System.Boolean localized
    bool& dyn_localized();
    // Get instance field reference: public CreditsData/TextStyle style
    GlobalNamespace::CreditsData::TextStyle& dyn_style();
    // public System.Boolean IsEmpty()
    // Offset: 0x118FE94
    bool IsEmpty();
    // public System.Void .ctor()
    // Offset: 0x118FF60
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CreditsData::Text* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::CreditsData::Text::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CreditsData::Text*, creationType>()));
    }
    // public override System.String ToString()
    // Offset: 0x118FEB4
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::Il2CppString* ToString();
  }; // CreditsData/Text
  #pragma pack(pop)
  static check_size<sizeof(CreditsData::Text), 28 + sizeof(GlobalNamespace::CreditsData::TextStyle)> __GlobalNamespace_CreditsData_TextSizeCheck;
  static_assert(sizeof(CreditsData::Text) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::CreditsData::Text::IsEmpty
// Il2CppName: IsEmpty
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::CreditsData::Text::*)()>(&GlobalNamespace::CreditsData::Text::IsEmpty)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CreditsData::Text*), "IsEmpty", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CreditsData::Text::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::CreditsData::Text::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (GlobalNamespace::CreditsData::Text::*)()>(&GlobalNamespace::CreditsData::Text::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CreditsData::Text*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
