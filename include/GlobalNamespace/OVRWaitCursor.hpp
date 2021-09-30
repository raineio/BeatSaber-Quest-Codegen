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
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x24
  #pragma pack(push, 1)
  // Autogenerated type: OVRWaitCursor
  // [TokenAttribute] Offset: FFFFFFFF
  class OVRWaitCursor : public UnityEngine::MonoBehaviour {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    private:
    #endif
    // public UnityEngine.Vector3 rotateSpeeds
    // Size: 0xC
    // Offset: 0x18
    UnityEngine::Vector3 rotateSpeeds;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    public:
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get instance field reference: public UnityEngine.Vector3 rotateSpeeds
    UnityEngine::Vector3& dyn_rotateSpeeds();
    // private System.Void Update()
    // Offset: 0x20E2158
    void Update();
    // public System.Void .ctor()
    // Offset: 0x20E2214
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OVRWaitCursor* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::OVRWaitCursor::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OVRWaitCursor*, creationType>()));
    }
  }; // OVRWaitCursor
  #pragma pack(pop)
  static check_size<sizeof(OVRWaitCursor), 24 + sizeof(UnityEngine::Vector3)> __GlobalNamespace_OVRWaitCursorSizeCheck;
  static_assert(sizeof(OVRWaitCursor) == 0x24);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRWaitCursor*, "", "OVRWaitCursor");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::OVRWaitCursor::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRWaitCursor::*)()>(&GlobalNamespace::OVRWaitCursor::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRWaitCursor*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRWaitCursor::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
