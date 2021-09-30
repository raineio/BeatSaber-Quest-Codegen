// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
#include "extern/beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Type namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Size: 0x14
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: HoudiniEngineUnity.HAPI_Viewport
  // [TokenAttribute] Offset: FFFFFFFF
  struct HAPI_Viewport/*, public System::ValueType*/ {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    private:
    #endif
    // public System.Single[] position
    // Size: 0x8
    // Offset: 0x0
    ::ArrayW<float> position;
    // Field size check
    static_assert(sizeof(::ArrayW<float>) == 0x8);
    // public System.Single[] rotationQuaternion
    // Size: 0x8
    // Offset: 0x8
    ::ArrayW<float> rotationQuaternion;
    // Field size check
    static_assert(sizeof(::ArrayW<float>) == 0x8);
    // public System.Single offset
    // Size: 0x4
    // Offset: 0x10
    float offset;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Creating value type constructor for type: HAPI_Viewport
    constexpr HAPI_Viewport(::ArrayW<float> position_ = ::ArrayW<float>(nullptr), ::ArrayW<float> rotationQuaternion_ = ::ArrayW<float>(nullptr), float offset_ = {}) noexcept : position{position_}, rotationQuaternion{rotationQuaternion_}, offset{offset_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Get instance field reference: public System.Single[] position
    ::ArrayW<float>& dyn_position();
    // Get instance field reference: public System.Single[] rotationQuaternion
    ::ArrayW<float>& dyn_rotationQuaternion();
    // Get instance field reference: public System.Single offset
    float& dyn_offset();
    // public System.Void .ctor(System.Boolean initializeFields)
    // Offset: 0x1439EB4
    HAPI_Viewport(bool initializeFields);
    // public System.Void Init()
    // Offset: 0x1439F44
    void Init();
  }; // HoudiniEngineUnity.HAPI_Viewport
  #pragma pack(pop)
  static check_size<sizeof(HAPI_Viewport), 16 + sizeof(float)> __HoudiniEngineUnity_HAPI_ViewportSizeCheck;
  static_assert(sizeof(HAPI_Viewport) == 0x14);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(HoudiniEngineUnity::HAPI_Viewport, "HoudiniEngineUnity", "HAPI_Viewport");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: HoudiniEngineUnity::HAPI_Viewport::HAPI_Viewport
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: HoudiniEngineUnity::HAPI_Viewport::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HAPI_Viewport::*)()>(&HoudiniEngineUnity::HAPI_Viewport::Init)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HAPI_Viewport), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
