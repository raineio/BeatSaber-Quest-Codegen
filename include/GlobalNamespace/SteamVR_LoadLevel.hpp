// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Texture
  class Texture;
  // Forward declaring type: Transform
  class Transform;
  // Forward declaring type: AsyncOperation
  class AsyncOperation;
  // Forward declaring type: RenderTexture
  class RenderTexture;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: SteamVR_LoadLevel
  class SteamVR_LoadLevel;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(GlobalNamespace::SteamVR_LoadLevel);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SteamVR_LoadLevel*, "", "SteamVR_LoadLevel");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0xF1
  #pragma pack(push, 1)
  // Autogenerated type: SteamVR_LoadLevel
  // [TokenAttribute] Offset: FFFFFFFF
  class SteamVR_LoadLevel : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::SteamVR_LoadLevel::$LoadLevel$d__45
    class $LoadLevel$d__45;
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // public System.String levelName
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* levelName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public System.String internalProcessPath
    // Size: 0x8
    // Offset: 0x20
    ::Il2CppString* internalProcessPath;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public System.String internalProcessArgs
    // Size: 0x8
    // Offset: 0x28
    ::Il2CppString* internalProcessArgs;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public System.Boolean loadAdditive
    // Size: 0x1
    // Offset: 0x30
    bool loadAdditive;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean loadAsync
    // Size: 0x1
    // Offset: 0x31
    bool loadAsync;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: loadAsync and: loadingScreen
    char __padding4[0x6] = {};
    // public UnityEngine.Texture loadingScreen
    // Size: 0x8
    // Offset: 0x38
    UnityEngine::Texture* loadingScreen;
    // Field size check
    static_assert(sizeof(UnityEngine::Texture*) == 0x8);
    // public UnityEngine.Texture progressBarEmpty
    // Size: 0x8
    // Offset: 0x40
    UnityEngine::Texture* progressBarEmpty;
    // Field size check
    static_assert(sizeof(UnityEngine::Texture*) == 0x8);
    // public UnityEngine.Texture progressBarFull
    // Size: 0x8
    // Offset: 0x48
    UnityEngine::Texture* progressBarFull;
    // Field size check
    static_assert(sizeof(UnityEngine::Texture*) == 0x8);
    // public System.Single loadingScreenWidthInMeters
    // Size: 0x4
    // Offset: 0x50
    float loadingScreenWidthInMeters;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single progressBarWidthInMeters
    // Size: 0x4
    // Offset: 0x54
    float progressBarWidthInMeters;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single loadingScreenDistance
    // Size: 0x4
    // Offset: 0x58
    float loadingScreenDistance;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: loadingScreenDistance and: loadingScreenTransform
    char __padding10[0x4] = {};
    // public UnityEngine.Transform loadingScreenTransform
    // Size: 0x8
    // Offset: 0x60
    UnityEngine::Transform* loadingScreenTransform;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // public UnityEngine.Transform progressBarTransform
    // Size: 0x8
    // Offset: 0x68
    UnityEngine::Transform* progressBarTransform;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // public UnityEngine.Texture front
    // Size: 0x8
    // Offset: 0x70
    UnityEngine::Texture* front;
    // Field size check
    static_assert(sizeof(UnityEngine::Texture*) == 0x8);
    // public UnityEngine.Texture back
    // Size: 0x8
    // Offset: 0x78
    UnityEngine::Texture* back;
    // Field size check
    static_assert(sizeof(UnityEngine::Texture*) == 0x8);
    // public UnityEngine.Texture left
    // Size: 0x8
    // Offset: 0x80
    UnityEngine::Texture* left;
    // Field size check
    static_assert(sizeof(UnityEngine::Texture*) == 0x8);
    // public UnityEngine.Texture right
    // Size: 0x8
    // Offset: 0x88
    UnityEngine::Texture* right;
    // Field size check
    static_assert(sizeof(UnityEngine::Texture*) == 0x8);
    // public UnityEngine.Texture top
    // Size: 0x8
    // Offset: 0x90
    UnityEngine::Texture* top;
    // Field size check
    static_assert(sizeof(UnityEngine::Texture*) == 0x8);
    // public UnityEngine.Texture bottom
    // Size: 0x8
    // Offset: 0x98
    UnityEngine::Texture* bottom;
    // Field size check
    static_assert(sizeof(UnityEngine::Texture*) == 0x8);
    // public UnityEngine.Color backgroundColor
    // Size: 0x10
    // Offset: 0xA0
    UnityEngine::Color backgroundColor;
    // Field size check
    static_assert(sizeof(UnityEngine::Color) == 0x10);
    // public System.Boolean showGrid
    // Size: 0x1
    // Offset: 0xB0
    bool showGrid;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: showGrid and: fadeOutTime
    char __padding20[0x3] = {};
    // public System.Single fadeOutTime
    // Size: 0x4
    // Offset: 0xB4
    float fadeOutTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single fadeInTime
    // Size: 0x4
    // Offset: 0xB8
    float fadeInTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single postLoadSettleTime
    // Size: 0x4
    // Offset: 0xBC
    float postLoadSettleTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single loadingScreenFadeInTime
    // Size: 0x4
    // Offset: 0xC0
    float loadingScreenFadeInTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single loadingScreenFadeOutTime
    // Size: 0x4
    // Offset: 0xC4
    float loadingScreenFadeOutTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single fadeRate
    // Size: 0x4
    // Offset: 0xC8
    float fadeRate;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single alpha
    // Size: 0x4
    // Offset: 0xCC
    float alpha;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private UnityEngine.AsyncOperation async
    // Size: 0x8
    // Offset: 0xD0
    UnityEngine::AsyncOperation* async;
    // Field size check
    static_assert(sizeof(UnityEngine::AsyncOperation*) == 0x8);
    // private UnityEngine.RenderTexture renderTexture
    // Size: 0x8
    // Offset: 0xD8
    UnityEngine::RenderTexture* renderTexture;
    // Field size check
    static_assert(sizeof(UnityEngine::RenderTexture*) == 0x8);
    // private System.UInt64 loadingScreenOverlayHandle
    // Size: 0x8
    // Offset: 0xE0
    uint64_t loadingScreenOverlayHandle;
    // Field size check
    static_assert(sizeof(uint64_t) == 0x8);
    // private System.UInt64 progressBarOverlayHandle
    // Size: 0x8
    // Offset: 0xE8
    uint64_t progressBarOverlayHandle;
    // Field size check
    static_assert(sizeof(uint64_t) == 0x8);
    // public System.Boolean autoTriggerOnEnable
    // Size: 0x1
    // Offset: 0xF0
    bool autoTriggerOnEnable;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get static field: static private SteamVR_LoadLevel _active
    static GlobalNamespace::SteamVR_LoadLevel* _get__active();
    // Set static field: static private SteamVR_LoadLevel _active
    static void _set__active(GlobalNamespace::SteamVR_LoadLevel* value);
    // Get instance field reference: public System.String levelName
    ::Il2CppString*& dyn_levelName();
    // Get instance field reference: public System.String internalProcessPath
    ::Il2CppString*& dyn_internalProcessPath();
    // Get instance field reference: public System.String internalProcessArgs
    ::Il2CppString*& dyn_internalProcessArgs();
    // Get instance field reference: public System.Boolean loadAdditive
    bool& dyn_loadAdditive();
    // Get instance field reference: public System.Boolean loadAsync
    bool& dyn_loadAsync();
    // Get instance field reference: public UnityEngine.Texture loadingScreen
    UnityEngine::Texture*& dyn_loadingScreen();
    // Get instance field reference: public UnityEngine.Texture progressBarEmpty
    UnityEngine::Texture*& dyn_progressBarEmpty();
    // Get instance field reference: public UnityEngine.Texture progressBarFull
    UnityEngine::Texture*& dyn_progressBarFull();
    // Get instance field reference: public System.Single loadingScreenWidthInMeters
    float& dyn_loadingScreenWidthInMeters();
    // Get instance field reference: public System.Single progressBarWidthInMeters
    float& dyn_progressBarWidthInMeters();
    // Get instance field reference: public System.Single loadingScreenDistance
    float& dyn_loadingScreenDistance();
    // Get instance field reference: public UnityEngine.Transform loadingScreenTransform
    UnityEngine::Transform*& dyn_loadingScreenTransform();
    // Get instance field reference: public UnityEngine.Transform progressBarTransform
    UnityEngine::Transform*& dyn_progressBarTransform();
    // Get instance field reference: public UnityEngine.Texture front
    UnityEngine::Texture*& dyn_front();
    // Get instance field reference: public UnityEngine.Texture back
    UnityEngine::Texture*& dyn_back();
    // Get instance field reference: public UnityEngine.Texture left
    UnityEngine::Texture*& dyn_left();
    // Get instance field reference: public UnityEngine.Texture right
    UnityEngine::Texture*& dyn_right();
    // Get instance field reference: public UnityEngine.Texture top
    UnityEngine::Texture*& dyn_top();
    // Get instance field reference: public UnityEngine.Texture bottom
    UnityEngine::Texture*& dyn_bottom();
    // Get instance field reference: public UnityEngine.Color backgroundColor
    UnityEngine::Color& dyn_backgroundColor();
    // Get instance field reference: public System.Boolean showGrid
    bool& dyn_showGrid();
    // Get instance field reference: public System.Single fadeOutTime
    float& dyn_fadeOutTime();
    // Get instance field reference: public System.Single fadeInTime
    float& dyn_fadeInTime();
    // Get instance field reference: public System.Single postLoadSettleTime
    float& dyn_postLoadSettleTime();
    // Get instance field reference: public System.Single loadingScreenFadeInTime
    float& dyn_loadingScreenFadeInTime();
    // Get instance field reference: public System.Single loadingScreenFadeOutTime
    float& dyn_loadingScreenFadeOutTime();
    // Get instance field reference: private System.Single fadeRate
    float& dyn_fadeRate();
    // Get instance field reference: private System.Single alpha
    float& dyn_alpha();
    // Get instance field reference: private UnityEngine.AsyncOperation async
    UnityEngine::AsyncOperation*& dyn_async();
    // Get instance field reference: private UnityEngine.RenderTexture renderTexture
    UnityEngine::RenderTexture*& dyn_renderTexture();
    // Get instance field reference: private System.UInt64 loadingScreenOverlayHandle
    uint64_t& dyn_loadingScreenOverlayHandle();
    // Get instance field reference: private System.UInt64 progressBarOverlayHandle
    uint64_t& dyn_progressBarOverlayHandle();
    // Get instance field reference: public System.Boolean autoTriggerOnEnable
    bool& dyn_autoTriggerOnEnable();
    // static public System.Boolean get_loading()
    // Offset: 0x15BE994
    static bool get_loading();
    // static public System.Single get_progress()
    // Offset: 0x15BEA2C
    static float get_progress();
    // static public UnityEngine.Texture get_progressTexture()
    // Offset: 0x15BEB40
    static UnityEngine::Texture* get_progressTexture();
    // private System.Void OnEnable()
    // Offset: 0x15BEC18
    void OnEnable();
    // public System.Void Trigger()
    // Offset: 0x15BEC28
    void Trigger();
    // static public System.Void Begin(System.String levelName, System.Boolean showGrid, System.Single fadeOutTime, System.Single r, System.Single g, System.Single b, System.Single a)
    // Offset: 0x15BED30
    static void Begin(::Il2CppString* levelName, bool showGrid, float fadeOutTime, float r, float g, float b, float a);
    // private System.Void OnGUI()
    // Offset: 0x15BEE3C
    void OnGUI();
    // private System.Void Update()
    // Offset: 0x15BF61C
    void Update();
    // private System.Collections.IEnumerator LoadLevel()
    // Offset: 0x15BECC0
    System::Collections::IEnumerator* LoadLevel();
    // private System.UInt64 GetOverlayHandle(System.String overlayName, UnityEngine.Transform transform, System.Single widthInMeters)
    // Offset: 0x15BF280
    uint64_t GetOverlayHandle(::Il2CppString* overlayName, UnityEngine::Transform* transform, float widthInMeters);
    // public System.Void .ctor()
    // Offset: 0x15BF898
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SteamVR_LoadLevel* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::SteamVR_LoadLevel::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SteamVR_LoadLevel*, creationType>()));
    }
    // static private System.Void .cctor()
    // Offset: 0x15BF8FC
    // Implemented from: UnityEngine.Object
    // Base method: System.Void Object::.cctor()
    static void _cctor();
  }; // SteamVR_LoadLevel
  #pragma pack(pop)
  static check_size<sizeof(SteamVR_LoadLevel), 240 + sizeof(bool)> __GlobalNamespace_SteamVR_LoadLevelSizeCheck;
  static_assert(sizeof(SteamVR_LoadLevel) == 0xF1);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_LoadLevel::get_loading
// Il2CppName: get_loading
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&GlobalNamespace::SteamVR_LoadLevel::get_loading)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_LoadLevel*), "get_loading", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_LoadLevel::get_progress
// Il2CppName: get_progress
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)()>(&GlobalNamespace::SteamVR_LoadLevel::get_progress)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_LoadLevel*), "get_progress", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_LoadLevel::get_progressTexture
// Il2CppName: get_progressTexture
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Texture* (*)()>(&GlobalNamespace::SteamVR_LoadLevel::get_progressTexture)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_LoadLevel*), "get_progressTexture", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_LoadLevel::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SteamVR_LoadLevel::*)()>(&GlobalNamespace::SteamVR_LoadLevel::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_LoadLevel*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_LoadLevel::Trigger
// Il2CppName: Trigger
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SteamVR_LoadLevel::*)()>(&GlobalNamespace::SteamVR_LoadLevel::Trigger)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_LoadLevel*), "Trigger", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_LoadLevel::Begin
// Il2CppName: Begin
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Il2CppString*, bool, float, float, float, float, float)>(&GlobalNamespace::SteamVR_LoadLevel::Begin)> {
  static const MethodInfo* get() {
    static auto* levelName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* showGrid = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* fadeOutTime = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* r = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* g = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* b = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* a = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_LoadLevel*), "Begin", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{levelName, showGrid, fadeOutTime, r, g, b, a});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_LoadLevel::OnGUI
// Il2CppName: OnGUI
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SteamVR_LoadLevel::*)()>(&GlobalNamespace::SteamVR_LoadLevel::OnGUI)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_LoadLevel*), "OnGUI", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_LoadLevel::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SteamVR_LoadLevel::*)()>(&GlobalNamespace::SteamVR_LoadLevel::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_LoadLevel*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_LoadLevel::LoadLevel
// Il2CppName: LoadLevel
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::IEnumerator* (GlobalNamespace::SteamVR_LoadLevel::*)()>(&GlobalNamespace::SteamVR_LoadLevel::LoadLevel)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_LoadLevel*), "LoadLevel", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_LoadLevel::GetOverlayHandle
// Il2CppName: GetOverlayHandle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (GlobalNamespace::SteamVR_LoadLevel::*)(::Il2CppString*, UnityEngine::Transform*, float)>(&GlobalNamespace::SteamVR_LoadLevel::GetOverlayHandle)> {
  static const MethodInfo* get() {
    static auto* overlayName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* transform = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    static auto* widthInMeters = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_LoadLevel*), "GetOverlayHandle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{overlayName, transform, widthInMeters});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_LoadLevel::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_LoadLevel::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::SteamVR_LoadLevel::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_LoadLevel*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
