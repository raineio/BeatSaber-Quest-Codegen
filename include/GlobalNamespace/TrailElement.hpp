// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: TrailElement
  // [TokenAttribute] Offset: FFFFFFFF
  class TrailElement : public ::Il2CppObject {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    private:
    #endif
    // private UnityEngine.Vector3 <position>k__BackingField
    // Size: 0xC
    // Offset: 0x10
    UnityEngine::Vector3 position;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Vector3 <normal>k__BackingField
    // Size: 0xC
    // Offset: 0x1C
    UnityEngine::Vector3 normal;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // private System.Single <distance>k__BackingField
    // Size: 0x4
    // Offset: 0x28
    float distance;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single <time>k__BackingField
    // Size: 0x4
    // Offset: 0x2C
    float time;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Get instance field reference: private UnityEngine.Vector3 <position>k__BackingField
    UnityEngine::Vector3& dyn_$position$k__BackingField();
    // Get instance field reference: private UnityEngine.Vector3 <normal>k__BackingField
    UnityEngine::Vector3& dyn_$normal$k__BackingField();
    // Get instance field reference: private System.Single <distance>k__BackingField
    float& dyn_$distance$k__BackingField();
    // Get instance field reference: private System.Single <time>k__BackingField
    float& dyn_$time$k__BackingField();
    // public UnityEngine.Vector3 get_position()
    // Offset: 0x11624B8
    UnityEngine::Vector3 get_position();
    // private System.Void set_position(UnityEngine.Vector3 value)
    // Offset: 0x11624C4
    void set_position(UnityEngine::Vector3 value);
    // public UnityEngine.Vector3 get_normal()
    // Offset: 0x11624D0
    UnityEngine::Vector3 get_normal();
    // private System.Void set_normal(UnityEngine.Vector3 value)
    // Offset: 0x11624DC
    void set_normal(UnityEngine::Vector3 value);
    // public System.Single get_distance()
    // Offset: 0x11624E8
    float get_distance();
    // private System.Void set_distance(System.Single value)
    // Offset: 0x11624F0
    void set_distance(float value);
    // public System.Single get_time()
    // Offset: 0x11624F8
    float get_time();
    // private System.Void set_time(System.Single value)
    // Offset: 0x1162500
    void set_time(float value);
    // public System.Void SetData(UnityEngine.Vector3 start, UnityEngine.Vector3 end, System.Single time)
    // Offset: 0x1162508
    void SetData(UnityEngine::Vector3 start, UnityEngine::Vector3 end, float time);
    // public System.Void SetDistance(System.Single value)
    // Offset: 0x1162608
    void SetDistance(float value);
    // public System.Void .ctor()
    // Offset: 0x1162610
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TrailElement* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::TrailElement::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TrailElement*, creationType>()));
    }
  }; // TrailElement
  #pragma pack(pop)
  static check_size<sizeof(TrailElement), 44 + sizeof(float)> __GlobalNamespace_TrailElementSizeCheck;
  static_assert(sizeof(TrailElement) == 0x30);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::TrailElement*, "", "TrailElement");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::TrailElement::get_position
// Il2CppName: get_position
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector3 (GlobalNamespace::TrailElement::*)()>(&GlobalNamespace::TrailElement::get_position)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TrailElement*), "get_position", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TrailElement::set_position
// Il2CppName: set_position
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TrailElement::*)(UnityEngine::Vector3)>(&GlobalNamespace::TrailElement::set_position)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TrailElement*), "set_position", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TrailElement::get_normal
// Il2CppName: get_normal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector3 (GlobalNamespace::TrailElement::*)()>(&GlobalNamespace::TrailElement::get_normal)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TrailElement*), "get_normal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TrailElement::set_normal
// Il2CppName: set_normal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TrailElement::*)(UnityEngine::Vector3)>(&GlobalNamespace::TrailElement::set_normal)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TrailElement*), "set_normal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TrailElement::get_distance
// Il2CppName: get_distance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::TrailElement::*)()>(&GlobalNamespace::TrailElement::get_distance)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TrailElement*), "get_distance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TrailElement::set_distance
// Il2CppName: set_distance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TrailElement::*)(float)>(&GlobalNamespace::TrailElement::set_distance)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TrailElement*), "set_distance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TrailElement::get_time
// Il2CppName: get_time
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::TrailElement::*)()>(&GlobalNamespace::TrailElement::get_time)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TrailElement*), "get_time", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TrailElement::set_time
// Il2CppName: set_time
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TrailElement::*)(float)>(&GlobalNamespace::TrailElement::set_time)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TrailElement*), "set_time", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TrailElement::SetData
// Il2CppName: SetData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TrailElement::*)(UnityEngine::Vector3, UnityEngine::Vector3, float)>(&GlobalNamespace::TrailElement::SetData)> {
  static const MethodInfo* get() {
    static auto* start = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* end = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* time = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TrailElement*), "SetData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{start, end, time});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TrailElement::SetDistance
// Il2CppName: SetDistance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TrailElement::*)(float)>(&GlobalNamespace::TrailElement::SetDistance)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TrailElement*), "SetDistance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TrailElement::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
