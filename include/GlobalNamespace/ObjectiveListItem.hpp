// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: TMPro
namespace TMPro {
  // Forward declaring type: TextMeshProUGUI
  class TextMeshProUGUI;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: ObjectiveListItem
  // [TokenAttribute] Offset: FFFFFFFF
  class ObjectiveListItem : public UnityEngine::MonoBehaviour {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    private:
    #endif
    // private TMPro.TextMeshProUGUI _titleText
    // Size: 0x8
    // Offset: 0x18
    TMPro::TextMeshProUGUI* titleText;
    // Field size check
    static_assert(sizeof(TMPro::TextMeshProUGUI*) == 0x8);
    // private TMPro.TextMeshProUGUI _conditionText
    // Size: 0x8
    // Offset: 0x20
    TMPro::TextMeshProUGUI* conditionText;
    // Field size check
    static_assert(sizeof(TMPro::TextMeshProUGUI*) == 0x8);
    public:
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get instance field reference: private TMPro.TextMeshProUGUI _titleText
    TMPro::TextMeshProUGUI*& dyn__titleText();
    // Get instance field reference: private TMPro.TextMeshProUGUI _conditionText
    TMPro::TextMeshProUGUI*& dyn__conditionText();
    // public System.Void set_title(System.String value)
    // Offset: 0x135AB04
    void set_title(::Il2CppString* value);
    // public System.Void set_conditionText(System.String value)
    // Offset: 0x135AB20
    void set_conditionText(::Il2CppString* value);
    // public System.Void set_hideCondition(System.Boolean value)
    // Offset: 0x135AB3C
    void set_hideCondition(bool value);
    // public System.Void .ctor()
    // Offset: 0x135AB7C
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ObjectiveListItem* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::ObjectiveListItem::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ObjectiveListItem*, creationType>()));
    }
  }; // ObjectiveListItem
  #pragma pack(pop)
  static check_size<sizeof(ObjectiveListItem), 32 + sizeof(TMPro::TextMeshProUGUI*)> __GlobalNamespace_ObjectiveListItemSizeCheck;
  static_assert(sizeof(ObjectiveListItem) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ObjectiveListItem*, "", "ObjectiveListItem");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::ObjectiveListItem::set_title
// Il2CppName: set_title
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ObjectiveListItem::*)(::Il2CppString*)>(&GlobalNamespace::ObjectiveListItem::set_title)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ObjectiveListItem*), "set_title", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ObjectiveListItem::set_conditionText
// Il2CppName: set_conditionText
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ObjectiveListItem::*)(::Il2CppString*)>(&GlobalNamespace::ObjectiveListItem::set_conditionText)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ObjectiveListItem*), "set_conditionText", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ObjectiveListItem::set_hideCondition
// Il2CppName: set_hideCondition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ObjectiveListItem::*)(bool)>(&GlobalNamespace::ObjectiveListItem::set_hideCondition)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ObjectiveListItem*), "set_hideCondition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ObjectiveListItem::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
