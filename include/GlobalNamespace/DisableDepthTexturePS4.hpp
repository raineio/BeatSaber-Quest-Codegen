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
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: BoolSO
  class BoolSO;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: DisableDepthTexturePS4
  class DisableDepthTexturePS4;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::DisableDepthTexturePS4);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::DisableDepthTexturePS4*, "", "DisableDepthTexturePS4");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: DisableDepthTexturePS4
  // [TokenAttribute] Offset: FFFFFFFF
  class DisableDepthTexturePS4 : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // private BoolSO _depthTextureEnabled
    // Size: 0x8
    // Offset: 0x18
    ::GlobalNamespace::BoolSO* depthTextureEnabled;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::BoolSO*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private BoolSO _depthTextureEnabled
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::BoolSO*& dyn__depthTextureEnabled();
    // public System.Void .ctor()
    // Offset: 0x2AE87D0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DisableDepthTexturePS4* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::DisableDepthTexturePS4::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DisableDepthTexturePS4*, creationType>()));
    }
  }; // DisableDepthTexturePS4
  #pragma pack(pop)
  static check_size<sizeof(DisableDepthTexturePS4), 24 + sizeof(::GlobalNamespace::BoolSO*)> __GlobalNamespace_DisableDepthTexturePS4SizeCheck;
  static_assert(sizeof(DisableDepthTexturePS4) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::DisableDepthTexturePS4::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
