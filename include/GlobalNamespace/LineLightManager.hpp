// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: UnityEngine.Vector4
#include "UnityEngine/Vector4.hpp"
// Including type: System.Int32
#include "System/Int32.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: LineLightManager
  class LineLightManager;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::LineLightManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LineLightManager*, "", "LineLightManager");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: LineLightManager
  // [TokenAttribute] Offset: FFFFFFFF
  // [ExecuteInEditMode] Offset: FFFFFFFF
  class LineLightManager : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // private readonly UnityEngine.Vector4[] _points
    // Size: 0x8
    // Offset: 0x18
    ::ArrayW<::UnityEngine::Vector4> points;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::Vector4>) == 0x8);
    // private readonly UnityEngine.Vector4[] _dirs
    // Size: 0x8
    // Offset: 0x20
    ::ArrayW<::UnityEngine::Vector4> dirs;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::Vector4>) == 0x8);
    // private readonly System.Single[] _dirLengths
    // Size: 0x8
    // Offset: 0x28
    ::ArrayW<float> dirLengths;
    // Field size check
    static_assert(sizeof(::ArrayW<float>) == 0x8);
    // private readonly UnityEngine.Vector4[] _colors
    // Size: 0x8
    // Offset: 0x30
    ::ArrayW<::UnityEngine::Vector4> colors;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::Vector4>) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // static field const value: static private System.Int32 kMaxNumberOfLights
    static constexpr const int kMaxNumberOfLights = 4;
    // Get static field: static private System.Int32 kMaxNumberOfLights
    static int _get_kMaxNumberOfLights();
    // Set static field: static private System.Int32 kMaxNumberOfLights
    static void _set_kMaxNumberOfLights(int value);
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0x1107450
    // Get static field: static private readonly System.Int32 _activeLineLightsCountID
    static int _get__activeLineLightsCountID();
    // Set static field: static private readonly System.Int32 _activeLineLightsCountID
    static void _set__activeLineLightsCountID(int value);
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0x1107460
    // Get static field: static private readonly System.Int32 _lineLightPointsID
    static int _get__lineLightPointsID();
    // Set static field: static private readonly System.Int32 _lineLightPointsID
    static void _set__lineLightPointsID(int value);
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0x1107470
    // Get static field: static private readonly System.Int32 _lineLightDirsID
    static int _get__lineLightDirsID();
    // Set static field: static private readonly System.Int32 _lineLightDirsID
    static void _set__lineLightDirsID(int value);
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0x1107480
    // Get static field: static private readonly System.Int32 _lineLightDirLengthsID
    static int _get__lineLightDirLengthsID();
    // Set static field: static private readonly System.Int32 _lineLightDirLengthsID
    static void _set__lineLightDirLengthsID(int value);
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0x1107490
    // Get static field: static private readonly System.Int32 _lineLightColorsID
    static int _get__lineLightColorsID();
    // Set static field: static private readonly System.Int32 _lineLightColorsID
    static void _set__lineLightColorsID(int value);
    // Get instance field reference: private readonly UnityEngine.Vector4[] _points
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::Vector4>& dyn__points();
    // Get instance field reference: private readonly UnityEngine.Vector4[] _dirs
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::Vector4>& dyn__dirs();
    // Get instance field reference: private readonly System.Single[] _dirLengths
    [[deprecated("Use field access instead!")]] ::ArrayW<float>& dyn__dirLengths();
    // Get instance field reference: private readonly UnityEngine.Vector4[] _colors
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::Vector4>& dyn__colors();
    // public System.Void .ctor()
    // Offset: 0x1CDAB30
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LineLightManager* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::LineLightManager::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LineLightManager*, creationType>()));
    }
    // static private System.Void .cctor()
    // Offset: 0x1CDABC8
    static void _cctor();
    // protected System.Void Update()
    // Offset: 0x1CDA754
    void Update();
  }; // LineLightManager
  #pragma pack(pop)
  static check_size<sizeof(LineLightManager), 48 + sizeof(::ArrayW<::UnityEngine::Vector4>)> __GlobalNamespace_LineLightManagerSizeCheck;
  static_assert(sizeof(LineLightManager) == 0x38);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::LineLightManager::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::LineLightManager::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::LineLightManager::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LineLightManager*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LineLightManager::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LineLightManager::*)()>(&GlobalNamespace::LineLightManager::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LineLightManager*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
