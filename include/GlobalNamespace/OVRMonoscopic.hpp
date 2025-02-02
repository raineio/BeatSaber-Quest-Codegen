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
  // Forward declaring type: OVRMonoscopic
  class OVRMonoscopic;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::OVRMonoscopic);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRMonoscopic*, "", "OVRMonoscopic");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x1D
  #pragma pack(push, 1)
  // Autogenerated type: OVRMonoscopic
  // [TokenAttribute] Offset: FFFFFFFF
  class OVRMonoscopic : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // public OVRInput/RawButton toggleButton
    // Size: 0x4
    // Offset: 0x18
    ::GlobalNamespace::OVRInput::RawButton toggleButton;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::OVRInput::RawButton) == 0x4);
    // private System.Boolean monoscopic
    // Size: 0x1
    // Offset: 0x1C
    bool monoscopic;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: public OVRInput/RawButton toggleButton
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::OVRInput::RawButton& dyn_toggleButton();
    // Get instance field reference: private System.Boolean monoscopic
    [[deprecated("Use field access instead!")]] bool& dyn_monoscopic();
    // public System.Void .ctor()
    // Offset: 0x1779034
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OVRMonoscopic* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::OVRMonoscopic::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OVRMonoscopic*, creationType>()));
    }
    // private System.Void Update()
    // Offset: 0x1778F20
    void Update();
  }; // OVRMonoscopic
  #pragma pack(pop)
  static check_size<sizeof(OVRMonoscopic), 28 + sizeof(bool)> __GlobalNamespace_OVRMonoscopicSizeCheck;
  static_assert(sizeof(OVRMonoscopic) == 0x1D);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::OVRMonoscopic::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::OVRMonoscopic::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRMonoscopic::*)()>(&GlobalNamespace::OVRMonoscopic::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRMonoscopic*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
