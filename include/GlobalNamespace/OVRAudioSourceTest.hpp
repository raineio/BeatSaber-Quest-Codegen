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
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: OVRAudioSourceTest
  class OVRAudioSourceTest;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::OVRAudioSourceTest);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRAudioSourceTest*, "", "OVRAudioSourceTest");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: OVRAudioSourceTest
  // [TokenAttribute] Offset: FFFFFFFF
  class OVRAudioSourceTest : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // public System.Single period
    // Size: 0x4
    // Offset: 0x18
    float period;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single nextActionTime
    // Size: 0x4
    // Offset: 0x1C
    float nextActionTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: public System.Single period
    [[deprecated("Use field access instead!")]] float& dyn_period();
    // Get instance field reference: private System.Single nextActionTime
    [[deprecated("Use field access instead!")]] float& dyn_nextActionTime();
    // public System.Void .ctor()
    // Offset: 0x164FAF0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OVRAudioSourceTest* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::OVRAudioSourceTest::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OVRAudioSourceTest*, creationType>()));
    }
    // private System.Void Start()
    // Offset: 0x164F838
    void Start();
    // private System.Void Update()
    // Offset: 0x164F92C
    void Update();
  }; // OVRAudioSourceTest
  #pragma pack(pop)
  static check_size<sizeof(OVRAudioSourceTest), 28 + sizeof(float)> __GlobalNamespace_OVRAudioSourceTestSizeCheck;
  static_assert(sizeof(OVRAudioSourceTest) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::OVRAudioSourceTest::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::OVRAudioSourceTest::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRAudioSourceTest::*)()>(&GlobalNamespace::OVRAudioSourceTest::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRAudioSourceTest*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRAudioSourceTest::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRAudioSourceTest::*)()>(&GlobalNamespace::OVRAudioSourceTest::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRAudioSourceTest*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
