// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: SliderMidAnchorMode
  struct SliderMidAnchorMode;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: SliderMidAnchorModeExtensions
  class SliderMidAnchorModeExtensions;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::SliderMidAnchorModeExtensions);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SliderMidAnchorModeExtensions*, "", "SliderMidAnchorModeExtensions");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: SliderMidAnchorModeExtensions
  // [TokenAttribute] Offset: FFFFFFFF
  // [ExtensionAttribute] Offset: FFFFFFFF
  class SliderMidAnchorModeExtensions : public ::Il2CppObject {
    public:
    // static public SliderMidAnchorMode OppositeDirection(SliderMidAnchorMode sliderMidAnchorMode)
    // Offset: 0x26F2E20
    static ::GlobalNamespace::SliderMidAnchorMode OppositeDirection(::GlobalNamespace::SliderMidAnchorMode sliderMidAnchorMode);
  }; // SliderMidAnchorModeExtensions
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::SliderMidAnchorModeExtensions::OppositeDirection
// Il2CppName: OppositeDirection
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::SliderMidAnchorMode (*)(::GlobalNamespace::SliderMidAnchorMode)>(&GlobalNamespace::SliderMidAnchorModeExtensions::OppositeDirection)> {
  static const MethodInfo* get() {
    static auto* sliderMidAnchorMode = &::il2cpp_utils::GetClassFromName("", "SliderMidAnchorMode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SliderMidAnchorModeExtensions*), "OppositeDirection", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sliderMidAnchorMode});
  }
};
