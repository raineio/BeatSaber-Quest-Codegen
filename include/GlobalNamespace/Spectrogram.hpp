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
#include "extern/beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: MeshRenderer
  class MeshRenderer;
  // Forward declaring type: MaterialPropertyBlock
  class MaterialPropertyBlock;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: BasicSpectrogramData
  class BasicSpectrogramData;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: Spectrogram
  class Spectrogram;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(GlobalNamespace::Spectrogram);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::Spectrogram*, "", "Spectrogram");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: Spectrogram
  // [TokenAttribute] Offset: FFFFFFFF
  class Spectrogram : public UnityEngine::MonoBehaviour {
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
    // private UnityEngine.MeshRenderer[] _meshRenderers
    // Size: 0x8
    // Offset: 0x18
    ::ArrayW<UnityEngine::MeshRenderer*> meshRenderers;
    // Field size check
    static_assert(sizeof(::ArrayW<UnityEngine::MeshRenderer*>) == 0x8);
    // [InjectAttribute] Offset: 0xF3BEAC
    // private readonly BasicSpectrogramData _spectrogramData
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::BasicSpectrogramData* spectrogramData;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BasicSpectrogramData*) == 0x8);
    public:
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0xF3BEBC
    // Get static field: static private readonly System.Int32 _spectrogramDataID
    static int _get__spectrogramDataID();
    // Set static field: static private readonly System.Int32 _spectrogramDataID
    static void _set__spectrogramDataID(int value);
    // Get static field: static private UnityEngine.MaterialPropertyBlock _materialPropertyBlock
    static UnityEngine::MaterialPropertyBlock* _get__materialPropertyBlock();
    // Set static field: static private UnityEngine.MaterialPropertyBlock _materialPropertyBlock
    static void _set__materialPropertyBlock(UnityEngine::MaterialPropertyBlock* value);
    // Get instance field reference: private UnityEngine.MeshRenderer[] _meshRenderers
    ::ArrayW<UnityEngine::MeshRenderer*>& dyn__meshRenderers();
    // Get instance field reference: private readonly BasicSpectrogramData _spectrogramData
    GlobalNamespace::BasicSpectrogramData*& dyn__spectrogramData();
    // protected System.Void Awake()
    // Offset: 0x121B7E8
    void Awake();
    // protected System.Void Update()
    // Offset: 0x121B894
    void Update();
    // public System.Void .ctor()
    // Offset: 0x121B9B4
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Spectrogram* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::Spectrogram::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Spectrogram*, creationType>()));
    }
    // static private System.Void .cctor()
    // Offset: 0x121B9BC
    // Implemented from: UnityEngine.Object
    // Base method: System.Void Object::.cctor()
    static void _cctor();
  }; // Spectrogram
  #pragma pack(pop)
  static check_size<sizeof(Spectrogram), 32 + sizeof(GlobalNamespace::BasicSpectrogramData*)> __GlobalNamespace_SpectrogramSizeCheck;
  static_assert(sizeof(Spectrogram) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::Spectrogram::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::Spectrogram::*)()>(&GlobalNamespace::Spectrogram::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::Spectrogram*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::Spectrogram::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::Spectrogram::*)()>(&GlobalNamespace::Spectrogram::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::Spectrogram*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::Spectrogram::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::Spectrogram::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::Spectrogram::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::Spectrogram*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
