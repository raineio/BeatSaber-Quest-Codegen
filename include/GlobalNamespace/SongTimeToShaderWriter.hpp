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
  // Forward declaring type: IAudioTimeSource
  class IAudioTimeSource;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: SongTimeToShaderWriter
  class SongTimeToShaderWriter;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::SongTimeToShaderWriter);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SongTimeToShaderWriter*, "", "SongTimeToShaderWriter");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: SongTimeToShaderWriter
  // [TokenAttribute] Offset: FFFFFFFF
  class SongTimeToShaderWriter : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // [InjectAttribute] Offset: 0x112EEB4
    // private readonly IAudioTimeSource _audioTimeSource
    // Size: 0x8
    // Offset: 0x18
    ::GlobalNamespace::IAudioTimeSource* audioTimeSource;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::IAudioTimeSource*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0x112EEC4
    // Get static field: static private readonly System.Int32 _songTimePropertyId
    static int _get__songTimePropertyId();
    // Set static field: static private readonly System.Int32 _songTimePropertyId
    static void _set__songTimePropertyId(int value);
    // Get instance field reference: private readonly IAudioTimeSource _audioTimeSource
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::IAudioTimeSource*& dyn__audioTimeSource();
    // public System.Void .ctor()
    // Offset: 0x1487170
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SongTimeToShaderWriter* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::SongTimeToShaderWriter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SongTimeToShaderWriter*, creationType>()));
    }
    // static private System.Void .cctor()
    // Offset: 0x1487178
    static void _cctor();
    // protected System.Void Update()
    // Offset: 0x1486EE8
    void Update();
  }; // SongTimeToShaderWriter
  #pragma pack(pop)
  static check_size<sizeof(SongTimeToShaderWriter), 24 + sizeof(::GlobalNamespace::IAudioTimeSource*)> __GlobalNamespace_SongTimeToShaderWriterSizeCheck;
  static_assert(sizeof(SongTimeToShaderWriter) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::SongTimeToShaderWriter::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::SongTimeToShaderWriter::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::SongTimeToShaderWriter::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SongTimeToShaderWriter*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SongTimeToShaderWriter::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SongTimeToShaderWriter::*)()>(&GlobalNamespace::SongTimeToShaderWriter::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SongTimeToShaderWriter*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
