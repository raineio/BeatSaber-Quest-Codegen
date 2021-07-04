// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: HMUI.RangeValuesTextSlider
#include "HMUI/RangeValuesTextSlider.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: HMUI
namespace HMUI {
  // WARNING Size may be invalid!
  // Autogenerated type: HMUI.CustomFormatRangeValuesSlider
  class CustomFormatRangeValuesSlider : public HMUI::RangeValuesTextSlider {
    public:
    // private System.String _formatString
    // Size: 0x8
    // Offset: 0x168
    ::Il2CppString* formatString;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // Creating value type constructor for type: CustomFormatRangeValuesSlider
    CustomFormatRangeValuesSlider(::Il2CppString* formatString_ = {}) noexcept : formatString{formatString_} {}
    // protected override System.String TextForValue(System.Single value)
    // Offset: 0x130F8C8
    // Implemented from: HMUI.RangeValuesTextSlider
    // Base method: System.String RangeValuesTextSlider::TextForValue(System.Single value)
    ::Il2CppString* TextForValue(float value);
    // public System.Void .ctor()
    // Offset: 0x130F940
    // Implemented from: HMUI.RangeValuesTextSlider
    // Base method: System.Void RangeValuesTextSlider::.ctor()
    // Base method: System.Void TextSlider::.ctor()
    // Base method: System.Void Selectable::.ctor()
    // Base method: System.Void UIBehaviour::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CustomFormatRangeValuesSlider* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("HMUI::CustomFormatRangeValuesSlider::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CustomFormatRangeValuesSlider*, creationType>()));
    }
  }; // HMUI.CustomFormatRangeValuesSlider
  // WARNING Not writing size check since size may be invalid!
}
DEFINE_IL2CPP_ARG_TYPE(HMUI::CustomFormatRangeValuesSlider*, "HMUI", "CustomFormatRangeValuesSlider");
// Writing MetadataGetter for method: HMUI::CustomFormatRangeValuesSlider::TextForValue
// Il2CppName: TextForValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (HMUI::CustomFormatRangeValuesSlider::*)(float)>(&HMUI::CustomFormatRangeValuesSlider::TextForValue)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::CustomFormatRangeValuesSlider*), "TextForValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<float>()});
  }
};
// Writing MetadataGetter for method: HMUI::CustomFormatRangeValuesSlider::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
