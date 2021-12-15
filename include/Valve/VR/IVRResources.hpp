// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Valve::VR
namespace Valve::VR {
}
// Completed forward declares
// Type namespace: Valve.VR
namespace Valve::VR {
  // Forward declaring type: IVRResources
  struct IVRResources;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::IVRResources, "Valve.VR", "IVRResources");
// Type namespace: Valve.VR
namespace Valve::VR {
  // Size: 0x10
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: Valve.VR.IVRResources
  // [TokenAttribute] Offset: FFFFFFFF
  struct IVRResources/*, public System::ValueType*/ {
    public:
    // Nested type: Valve::VR::IVRResources::_LoadSharedResource
    class _LoadSharedResource;
    // Nested type: Valve::VR::IVRResources::_GetResourceFullPath
    class _GetResourceFullPath;
    public:
    // Valve.VR.IVRResources/Valve.VR._LoadSharedResource LoadSharedResource
    // Size: 0x8
    // Offset: 0x0
    Valve::VR::IVRResources::_LoadSharedResource* LoadSharedResource;
    // Field size check
    static_assert(sizeof(Valve::VR::IVRResources::_LoadSharedResource*) == 0x8);
    // Valve.VR.IVRResources/Valve.VR._GetResourceFullPath GetResourceFullPath
    // Size: 0x8
    // Offset: 0x8
    Valve::VR::IVRResources::_GetResourceFullPath* GetResourceFullPath;
    // Field size check
    static_assert(sizeof(Valve::VR::IVRResources::_GetResourceFullPath*) == 0x8);
    public:
    // Creating value type constructor for type: IVRResources
    constexpr IVRResources(Valve::VR::IVRResources::_LoadSharedResource* LoadSharedResource_ = {}, Valve::VR::IVRResources::_GetResourceFullPath* GetResourceFullPath_ = {}) noexcept : LoadSharedResource{LoadSharedResource_}, GetResourceFullPath{GetResourceFullPath_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Get instance field reference: Valve.VR.IVRResources/Valve.VR._LoadSharedResource LoadSharedResource
    Valve::VR::IVRResources::_LoadSharedResource*& dyn_LoadSharedResource();
    // Get instance field reference: Valve.VR.IVRResources/Valve.VR._GetResourceFullPath GetResourceFullPath
    Valve::VR::IVRResources::_GetResourceFullPath*& dyn_GetResourceFullPath();
  }; // Valve.VR.IVRResources
  #pragma pack(pop)
  static check_size<sizeof(IVRResources), 8 + sizeof(Valve::VR::IVRResources::_GetResourceFullPath*)> __Valve_VR_IVRResourcesSizeCheck;
  static_assert(sizeof(IVRResources) == 0x10);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
