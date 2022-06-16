// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Timeline.Marker
#include "UnityEngine/Timeline/Marker.hpp"
// Including type: UnityEngine.Playables.INotification
#include "UnityEngine/Playables/INotification.hpp"
// Including type: UnityEngine.PropertyName
#include "UnityEngine/PropertyName.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: TimelinePauseMarker
  class TimelinePauseMarker;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::TimelinePauseMarker);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::TimelinePauseMarker*, "", "TimelinePauseMarker");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x2C
  #pragma pack(push, 1)
  // Autogenerated type: TimelinePauseMarker
  // [TokenAttribute] Offset: FFFFFFFF
  class TimelinePauseMarker : public ::UnityEngine::Timeline::Marker/*, public ::UnityEngine::Playables::INotification*/ {
    public:
    public:
    // private readonly UnityEngine.PropertyName <id>k__BackingField
    // Size: 0x4
    // Offset: 0x28
    ::UnityEngine::PropertyName id;
    // Field size check
    static_assert(sizeof(::UnityEngine::PropertyName) == 0x4);
    public:
    // Creating interface conversion operator: operator ::UnityEngine::Playables::INotification
    operator ::UnityEngine::Playables::INotification() noexcept {
      return *reinterpret_cast<::UnityEngine::Playables::INotification*>(this);
    }
    // Creating interface conversion operator: i_INotification
    inline ::UnityEngine::Playables::INotification* i_INotification() noexcept {
      return reinterpret_cast<::UnityEngine::Playables::INotification*>(this);
    }
    // Get instance field reference: private readonly UnityEngine.PropertyName <id>k__BackingField
    [[deprecated("Use field access instead!")]] ::UnityEngine::PropertyName& dyn_$id$k__BackingField();
    // public UnityEngine.PropertyName get_id()
    // Offset: 0x2A27484
    ::UnityEngine::PropertyName get_id();
    // public System.Void .ctor()
    // Offset: 0x2A2748C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TimelinePauseMarker* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::TimelinePauseMarker::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TimelinePauseMarker*, creationType>()));
    }
  }; // TimelinePauseMarker
  #pragma pack(pop)
  static check_size<sizeof(TimelinePauseMarker), 40 + sizeof(::UnityEngine::PropertyName)> __GlobalNamespace_TimelinePauseMarkerSizeCheck;
  static_assert(sizeof(TimelinePauseMarker) == 0x2C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::TimelinePauseMarker::get_id
// Il2CppName: get_id
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::PropertyName (GlobalNamespace::TimelinePauseMarker::*)()>(&GlobalNamespace::TimelinePauseMarker::get_id)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TimelinePauseMarker*), "get_id", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TimelinePauseMarker::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
