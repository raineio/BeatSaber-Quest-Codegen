// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: UnityEngine.EventSystems
namespace UnityEngine::EventSystems {
  // Size: 0x11
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.EventSystems.AbstractEventData
  // [TokenAttribute] Offset: FFFFFFFF
  class AbstractEventData : public ::Il2CppObject {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    private:
    #endif
    // protected System.Boolean m_Used
    // Size: 0x1
    // Offset: 0x10
    bool m_Used;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Creating conversion operator: operator bool
    constexpr operator bool() const noexcept {
      return m_Used;
    }
    // Get instance field reference: protected System.Boolean m_Used
    bool& dyn_m_Used();
    // public System.Boolean get_used()
    // Offset: 0x15ED208
    bool get_used();
    // public System.Void Reset()
    // Offset: 0x15ED1F4
    void Reset();
    // public System.Void Use()
    // Offset: 0x15ED1FC
    void Use();
    // protected System.Void .ctor()
    // Offset: 0x15ED210
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AbstractEventData* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::EventSystems::AbstractEventData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AbstractEventData*, creationType>()));
    }
  }; // UnityEngine.EventSystems.AbstractEventData
  #pragma pack(pop)
  static check_size<sizeof(AbstractEventData), 16 + sizeof(bool)> __UnityEngine_EventSystems_AbstractEventDataSizeCheck;
  static_assert(sizeof(AbstractEventData) == 0x11);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::EventSystems::AbstractEventData*, "UnityEngine.EventSystems", "AbstractEventData");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::EventSystems::AbstractEventData::get_used
// Il2CppName: get_used
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::EventSystems::AbstractEventData::*)()>(&UnityEngine::EventSystems::AbstractEventData::get_used)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EventSystems::AbstractEventData*), "get_used", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::EventSystems::AbstractEventData::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::EventSystems::AbstractEventData::*)()>(&UnityEngine::EventSystems::AbstractEventData::Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EventSystems::AbstractEventData*), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::EventSystems::AbstractEventData::Use
// Il2CppName: Use
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::EventSystems::AbstractEventData::*)()>(&UnityEngine::EventSystems::AbstractEventData::Use)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EventSystems::AbstractEventData*), "Use", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::EventSystems::AbstractEventData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
