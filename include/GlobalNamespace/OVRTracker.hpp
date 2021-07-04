// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: OVRPose
  struct OVRPose;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: OVRTracker
  class OVRTracker : public ::Il2CppObject {
    public:
    // Nested type: GlobalNamespace::OVRTracker::Frustum
    struct Frustum;
    // Creating value type constructor for type: OVRTracker
    OVRTracker() noexcept {}
    // public System.Boolean get_isPresent()
    // Offset: 0x1ED572C
    bool get_isPresent();
    // public System.Boolean get_isPositionTracked()
    // Offset: 0x1ED57C8
    bool get_isPositionTracked();
    // public System.Boolean get_isEnabled()
    // Offset: 0x1ED5828
    bool get_isEnabled();
    // public System.Void set_isEnabled(System.Boolean value)
    // Offset: 0x1ED58C4
    void set_isEnabled(bool value);
    // public System.Int32 get_count()
    // Offset: 0x1ED5964
    int get_count();
    // public OVRTracker/Frustum GetFrustum(System.Int32 tracker)
    // Offset: 0x1ED5AE0
    GlobalNamespace::OVRTracker::Frustum GetFrustum(int tracker);
    // public OVRPose GetPose(System.Int32 tracker)
    // Offset: 0x1ED5B90
    GlobalNamespace::OVRPose GetPose(int tracker);
    // public System.Boolean GetPoseValid(System.Int32 tracker)
    // Offset: 0x1ED5E24
    bool GetPoseValid(int tracker);
    // public System.Boolean GetPresent(System.Int32 tracker)
    // Offset: 0x1ED59A4
    bool GetPresent(int tracker);
    // public System.Void .ctor()
    // Offset: 0x1ED5F60
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OVRTracker* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::OVRTracker::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OVRTracker*, creationType>()));
    }
  }; // OVRTracker
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRTracker*, "", "OVRTracker");
// Writing MetadataGetter for method: GlobalNamespace::OVRTracker::get_isPresent
// Il2CppName: get_isPresent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::OVRTracker::*)()>(&GlobalNamespace::OVRTracker::get_isPresent)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRTracker*), "get_isPresent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRTracker::get_isPositionTracked
// Il2CppName: get_isPositionTracked
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::OVRTracker::*)()>(&GlobalNamespace::OVRTracker::get_isPositionTracked)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRTracker*), "get_isPositionTracked", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRTracker::get_isEnabled
// Il2CppName: get_isEnabled
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::OVRTracker::*)()>(&GlobalNamespace::OVRTracker::get_isEnabled)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRTracker*), "get_isEnabled", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRTracker::set_isEnabled
// Il2CppName: set_isEnabled
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRTracker::*)(bool)>(&GlobalNamespace::OVRTracker::set_isEnabled)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRTracker*), "set_isEnabled", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<bool>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRTracker::get_count
// Il2CppName: get_count
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::OVRTracker::*)()>(&GlobalNamespace::OVRTracker::get_count)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRTracker*), "get_count", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRTracker::GetFrustum
// Il2CppName: GetFrustum
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::OVRTracker::Frustum (GlobalNamespace::OVRTracker::*)(int)>(&GlobalNamespace::OVRTracker::GetFrustum)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRTracker*), "GetFrustum", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<int>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRTracker::GetPose
// Il2CppName: GetPose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::OVRPose (GlobalNamespace::OVRTracker::*)(int)>(&GlobalNamespace::OVRTracker::GetPose)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRTracker*), "GetPose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<int>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRTracker::GetPoseValid
// Il2CppName: GetPoseValid
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::OVRTracker::*)(int)>(&GlobalNamespace::OVRTracker::GetPoseValid)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRTracker*), "GetPoseValid", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<int>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRTracker::GetPresent
// Il2CppName: GetPresent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::OVRTracker::*)(int)>(&GlobalNamespace::OVRTracker::GetPresent)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRTracker*), "GetPresent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<int>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRTracker::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
