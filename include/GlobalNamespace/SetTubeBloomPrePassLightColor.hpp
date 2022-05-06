// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: ColorSO
  class ColorSO;
  // Forward declaring type: TubeBloomPrePassLight
  class TubeBloomPrePassLight;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: SetTubeBloomPrePassLightColor
  class SetTubeBloomPrePassLightColor;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::SetTubeBloomPrePassLightColor);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SetTubeBloomPrePassLightColor*, "", "SetTubeBloomPrePassLightColor");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: SetTubeBloomPrePassLightColor
  // [TokenAttribute] Offset: FFFFFFFF
  class SetTubeBloomPrePassLightColor : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // private ColorSO _color
    // Size: 0x8
    // Offset: 0x18
    ::GlobalNamespace::ColorSO* color;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::ColorSO*) == 0x8);
    // private TubeBloomPrePassLight[] _tubeLights
    // Size: 0x8
    // Offset: 0x20
    ::ArrayW<::GlobalNamespace::TubeBloomPrePassLight*> tubeLights;
    // Field size check
    static_assert(sizeof(::ArrayW<::GlobalNamespace::TubeBloomPrePassLight*>) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private ColorSO _color
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::ColorSO*& dyn__color();
    // Get instance field reference: private TubeBloomPrePassLight[] _tubeLights
    [[deprecated("Use field access instead!")]] ::ArrayW<::GlobalNamespace::TubeBloomPrePassLight*>& dyn__tubeLights();
    // public System.Void .ctor()
    // Offset: 0x137F810
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SetTubeBloomPrePassLightColor* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::SetTubeBloomPrePassLightColor::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SetTubeBloomPrePassLightColor*, creationType>()));
    }
    // protected System.Void Start()
    // Offset: 0x137F78C
    void Start();
  }; // SetTubeBloomPrePassLightColor
  #pragma pack(pop)
  static check_size<sizeof(SetTubeBloomPrePassLightColor), 32 + sizeof(::ArrayW<::GlobalNamespace::TubeBloomPrePassLight*>)> __GlobalNamespace_SetTubeBloomPrePassLightColorSizeCheck;
  static_assert(sizeof(SetTubeBloomPrePassLightColor) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::SetTubeBloomPrePassLightColor::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::SetTubeBloomPrePassLightColor::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SetTubeBloomPrePassLightColor::*)()>(&GlobalNamespace::SetTubeBloomPrePassLightColor::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SetTubeBloomPrePassLightColor*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
