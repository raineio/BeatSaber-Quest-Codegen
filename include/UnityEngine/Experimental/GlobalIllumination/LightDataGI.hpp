// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: UnityEngine.Experimental.GlobalIllumination.LinearColor
#include "UnityEngine/Experimental/GlobalIllumination/LinearColor.hpp"
// Including type: UnityEngine.Quaternion
#include "UnityEngine/Quaternion.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
// Including type: UnityEngine.Experimental.GlobalIllumination.LightType
#include "UnityEngine/Experimental/GlobalIllumination/LightType.hpp"
// Including type: UnityEngine.Experimental.GlobalIllumination.LightMode
#include "UnityEngine/Experimental/GlobalIllumination/LightMode.hpp"
// Including type: UnityEngine.Experimental.GlobalIllumination.FalloffType
#include "UnityEngine/Experimental/GlobalIllumination/FalloffType.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Experimental::GlobalIllumination
namespace UnityEngine::Experimental::GlobalIllumination {
  // Forward declaring type: DirectionalLight
  struct DirectionalLight;
  // Forward declaring type: PointLight
  struct PointLight;
  // Forward declaring type: SpotLight
  struct SpotLight;
  // Forward declaring type: RectangleLight
  struct RectangleLight;
  // Forward declaring type: DiscLight
  struct DiscLight;
}
// Completed forward declares
// Type namespace: UnityEngine.Experimental.GlobalIllumination
namespace UnityEngine::Experimental::GlobalIllumination {
  // Forward declaring type: LightDataGI
  struct LightDataGI;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Experimental::GlobalIllumination::LightDataGI, "UnityEngine.Experimental.GlobalIllumination", "LightDataGI");
// Type namespace: UnityEngine.Experimental.GlobalIllumination
namespace UnityEngine::Experimental::GlobalIllumination {
  // Size: 0x58
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.Experimental.GlobalIllumination.LightDataGI
  // [TokenAttribute] Offset: FFFFFFFF
  // [UsedByNativeCodeAttribute] Offset: EB7028
  struct LightDataGI/*, public System::ValueType*/ {
    public:
    public:
    // public System.Int32 instanceID
    // Size: 0x4
    // Offset: 0x0
    int instanceID;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public UnityEngine.Experimental.GlobalIllumination.LinearColor color
    // Size: 0x10
    // Offset: 0x4
    UnityEngine::Experimental::GlobalIllumination::LinearColor color;
    // Field size check
    static_assert(sizeof(UnityEngine::Experimental::GlobalIllumination::LinearColor) == 0x10);
    // public UnityEngine.Experimental.GlobalIllumination.LinearColor indirectColor
    // Size: 0x10
    // Offset: 0x14
    UnityEngine::Experimental::GlobalIllumination::LinearColor indirectColor;
    // Field size check
    static_assert(sizeof(UnityEngine::Experimental::GlobalIllumination::LinearColor) == 0x10);
    // public UnityEngine.Quaternion orientation
    // Size: 0x10
    // Offset: 0x24
    UnityEngine::Quaternion orientation;
    // Field size check
    static_assert(sizeof(UnityEngine::Quaternion) == 0x10);
    // public UnityEngine.Vector3 position
    // Size: 0xC
    // Offset: 0x34
    UnityEngine::Vector3 position;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // public System.Single range
    // Size: 0x4
    // Offset: 0x40
    float range;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single coneAngle
    // Size: 0x4
    // Offset: 0x44
    float coneAngle;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single innerConeAngle
    // Size: 0x4
    // Offset: 0x48
    float innerConeAngle;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single shape0
    // Size: 0x4
    // Offset: 0x4C
    float shape0;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single shape1
    // Size: 0x4
    // Offset: 0x50
    float shape1;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public UnityEngine.Experimental.GlobalIllumination.LightType type
    // Size: 0x1
    // Offset: 0x54
    UnityEngine::Experimental::GlobalIllumination::LightType type;
    // Field size check
    static_assert(sizeof(UnityEngine::Experimental::GlobalIllumination::LightType) == 0x1);
    // public UnityEngine.Experimental.GlobalIllumination.LightMode mode
    // Size: 0x1
    // Offset: 0x55
    UnityEngine::Experimental::GlobalIllumination::LightMode mode;
    // Field size check
    static_assert(sizeof(UnityEngine::Experimental::GlobalIllumination::LightMode) == 0x1);
    // public System.Byte shadow
    // Size: 0x1
    // Offset: 0x56
    uint8_t shadow;
    // Field size check
    static_assert(sizeof(uint8_t) == 0x1);
    // public UnityEngine.Experimental.GlobalIllumination.FalloffType falloff
    // Size: 0x1
    // Offset: 0x57
    UnityEngine::Experimental::GlobalIllumination::FalloffType falloff;
    // Field size check
    static_assert(sizeof(UnityEngine::Experimental::GlobalIllumination::FalloffType) == 0x1);
    public:
    // Creating value type constructor for type: LightDataGI
    constexpr LightDataGI(int instanceID_ = {}, UnityEngine::Experimental::GlobalIllumination::LinearColor color_ = {}, UnityEngine::Experimental::GlobalIllumination::LinearColor indirectColor_ = {}, UnityEngine::Quaternion orientation_ = {}, UnityEngine::Vector3 position_ = {}, float range_ = {}, float coneAngle_ = {}, float innerConeAngle_ = {}, float shape0_ = {}, float shape1_ = {}, UnityEngine::Experimental::GlobalIllumination::LightType type_ = {}, UnityEngine::Experimental::GlobalIllumination::LightMode mode_ = {}, uint8_t shadow_ = {}, UnityEngine::Experimental::GlobalIllumination::FalloffType falloff_ = {}) noexcept : instanceID{instanceID_}, color{color_}, indirectColor{indirectColor_}, orientation{orientation_}, position{position_}, range{range_}, coneAngle{coneAngle_}, innerConeAngle{innerConeAngle_}, shape0{shape0_}, shape1{shape1_}, type{type_}, mode{mode_}, shadow{shadow_}, falloff{falloff_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Get instance field reference: public System.Int32 instanceID
    int& dyn_instanceID();
    // Get instance field reference: public UnityEngine.Experimental.GlobalIllumination.LinearColor color
    UnityEngine::Experimental::GlobalIllumination::LinearColor& dyn_color();
    // Get instance field reference: public UnityEngine.Experimental.GlobalIllumination.LinearColor indirectColor
    UnityEngine::Experimental::GlobalIllumination::LinearColor& dyn_indirectColor();
    // Get instance field reference: public UnityEngine.Quaternion orientation
    UnityEngine::Quaternion& dyn_orientation();
    // Get instance field reference: public UnityEngine.Vector3 position
    UnityEngine::Vector3& dyn_position();
    // Get instance field reference: public System.Single range
    float& dyn_range();
    // Get instance field reference: public System.Single coneAngle
    float& dyn_coneAngle();
    // Get instance field reference: public System.Single innerConeAngle
    float& dyn_innerConeAngle();
    // Get instance field reference: public System.Single shape0
    float& dyn_shape0();
    // Get instance field reference: public System.Single shape1
    float& dyn_shape1();
    // Get instance field reference: public UnityEngine.Experimental.GlobalIllumination.LightType type
    UnityEngine::Experimental::GlobalIllumination::LightType& dyn_type();
    // Get instance field reference: public UnityEngine.Experimental.GlobalIllumination.LightMode mode
    UnityEngine::Experimental::GlobalIllumination::LightMode& dyn_mode();
    // Get instance field reference: public System.Byte shadow
    uint8_t& dyn_shadow();
    // Get instance field reference: public UnityEngine.Experimental.GlobalIllumination.FalloffType falloff
    UnityEngine::Experimental::GlobalIllumination::FalloffType& dyn_falloff();
    // public System.Void Init(ref UnityEngine.Experimental.GlobalIllumination.DirectionalLight light)
    // Offset: 0x1D0D324
    void Init(ByRef<UnityEngine::Experimental::GlobalIllumination::DirectionalLight> light);
    // public System.Void Init(ref UnityEngine.Experimental.GlobalIllumination.PointLight light)
    // Offset: 0x1D0D42C
    void Init(ByRef<UnityEngine::Experimental::GlobalIllumination::PointLight> light);
    // public System.Void Init(ref UnityEngine.Experimental.GlobalIllumination.SpotLight light)
    // Offset: 0x1D0D504
    void Init(ByRef<UnityEngine::Experimental::GlobalIllumination::SpotLight> light);
    // public System.Void Init(ref UnityEngine.Experimental.GlobalIllumination.RectangleLight light)
    // Offset: 0x1D0D584
    void Init(ByRef<UnityEngine::Experimental::GlobalIllumination::RectangleLight> light);
    // public System.Void Init(ref UnityEngine.Experimental.GlobalIllumination.DiscLight light)
    // Offset: 0x1D0D5F4
    void Init(ByRef<UnityEngine::Experimental::GlobalIllumination::DiscLight> light);
    // public System.Void InitNoBake(System.Int32 lightInstanceID)
    // Offset: 0x1D0D65C
    void InitNoBake(int lightInstanceID);
  }; // UnityEngine.Experimental.GlobalIllumination.LightDataGI
  #pragma pack(pop)
  static check_size<sizeof(LightDataGI), 87 + sizeof(UnityEngine::Experimental::GlobalIllumination::FalloffType)> __UnityEngine_Experimental_GlobalIllumination_LightDataGISizeCheck;
  static_assert(sizeof(LightDataGI) == 0x58);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Experimental::GlobalIllumination::LightDataGI::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Experimental::GlobalIllumination::LightDataGI::*)(ByRef<UnityEngine::Experimental::GlobalIllumination::DirectionalLight>)>(&UnityEngine::Experimental::GlobalIllumination::LightDataGI::Init)> {
  static const MethodInfo* get() {
    static auto* light = &::il2cpp_utils::GetClassFromName("UnityEngine.Experimental.GlobalIllumination", "DirectionalLight")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Experimental::GlobalIllumination::LightDataGI), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{light});
  }
};
// Writing MetadataGetter for method: UnityEngine::Experimental::GlobalIllumination::LightDataGI::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Experimental::GlobalIllumination::LightDataGI::*)(ByRef<UnityEngine::Experimental::GlobalIllumination::PointLight>)>(&UnityEngine::Experimental::GlobalIllumination::LightDataGI::Init)> {
  static const MethodInfo* get() {
    static auto* light = &::il2cpp_utils::GetClassFromName("UnityEngine.Experimental.GlobalIllumination", "PointLight")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Experimental::GlobalIllumination::LightDataGI), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{light});
  }
};
// Writing MetadataGetter for method: UnityEngine::Experimental::GlobalIllumination::LightDataGI::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Experimental::GlobalIllumination::LightDataGI::*)(ByRef<UnityEngine::Experimental::GlobalIllumination::SpotLight>)>(&UnityEngine::Experimental::GlobalIllumination::LightDataGI::Init)> {
  static const MethodInfo* get() {
    static auto* light = &::il2cpp_utils::GetClassFromName("UnityEngine.Experimental.GlobalIllumination", "SpotLight")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Experimental::GlobalIllumination::LightDataGI), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{light});
  }
};
// Writing MetadataGetter for method: UnityEngine::Experimental::GlobalIllumination::LightDataGI::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Experimental::GlobalIllumination::LightDataGI::*)(ByRef<UnityEngine::Experimental::GlobalIllumination::RectangleLight>)>(&UnityEngine::Experimental::GlobalIllumination::LightDataGI::Init)> {
  static const MethodInfo* get() {
    static auto* light = &::il2cpp_utils::GetClassFromName("UnityEngine.Experimental.GlobalIllumination", "RectangleLight")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Experimental::GlobalIllumination::LightDataGI), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{light});
  }
};
// Writing MetadataGetter for method: UnityEngine::Experimental::GlobalIllumination::LightDataGI::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Experimental::GlobalIllumination::LightDataGI::*)(ByRef<UnityEngine::Experimental::GlobalIllumination::DiscLight>)>(&UnityEngine::Experimental::GlobalIllumination::LightDataGI::Init)> {
  static const MethodInfo* get() {
    static auto* light = &::il2cpp_utils::GetClassFromName("UnityEngine.Experimental.GlobalIllumination", "DiscLight")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Experimental::GlobalIllumination::LightDataGI), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{light});
  }
};
// Writing MetadataGetter for method: UnityEngine::Experimental::GlobalIllumination::LightDataGI::InitNoBake
// Il2CppName: InitNoBake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Experimental::GlobalIllumination::LightDataGI::*)(int)>(&UnityEngine::Experimental::GlobalIllumination::LightDataGI::InitNoBake)> {
  static const MethodInfo* get() {
    static auto* lightInstanceID = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Experimental::GlobalIllumination::LightDataGI), "InitNoBake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{lightInstanceID});
  }
};
