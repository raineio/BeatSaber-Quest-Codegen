// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: OVRInput/RawButton
#include "GlobalNamespace/OVRInput_RawButton.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: OVRResetOrientation
  class OVRResetOrientation;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(GlobalNamespace::OVRResetOrientation);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRResetOrientation*, "", "OVRResetOrientation");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x1C
  #pragma pack(push, 1)
  // Autogenerated type: OVRResetOrientation
  // [TokenAttribute] Offset: FFFFFFFF
  class OVRResetOrientation : public UnityEngine::MonoBehaviour {
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
    // public OVRInput/RawButton resetButton
    // Size: 0x4
    // Offset: 0x18
    GlobalNamespace::OVRInput::RawButton resetButton;
    // Field size check
    static_assert(sizeof(GlobalNamespace::OVRInput::RawButton) == 0x4);
    public:
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get instance field reference: public OVRInput/RawButton resetButton
    GlobalNamespace::OVRInput::RawButton& dyn_resetButton();
    // private System.Void Update()
    // Offset: 0x187DDE0
    void Update();
    // public System.Void .ctor()
    // Offset: 0x187DED8
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OVRResetOrientation* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::OVRResetOrientation::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OVRResetOrientation*, creationType>()));
    }
  }; // OVRResetOrientation
  #pragma pack(pop)
  static check_size<sizeof(OVRResetOrientation), 24 + sizeof(GlobalNamespace::OVRInput::RawButton)> __GlobalNamespace_OVRResetOrientationSizeCheck;
  static_assert(sizeof(OVRResetOrientation) == 0x1C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::OVRResetOrientation::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRResetOrientation::*)()>(&GlobalNamespace::OVRResetOrientation::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRResetOrientation*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRResetOrientation::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
