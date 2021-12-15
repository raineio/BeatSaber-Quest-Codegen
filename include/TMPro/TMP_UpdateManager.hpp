// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "extern/beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Forward declaring namespace: TMPro
namespace TMPro {
  // Forward declaring type: TMP_Text
  class TMP_Text;
}
// Forward declaring namespace: UnityEngine::Rendering
namespace UnityEngine::Rendering {
  // Forward declaring type: ScriptableRenderContext
  struct ScriptableRenderContext;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Camera
  class Camera;
}
// Completed forward declares
// Type namespace: TMPro
namespace TMPro {
  // Forward declaring type: TMP_UpdateManager
  class TMP_UpdateManager;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(TMPro::TMP_UpdateManager);
DEFINE_IL2CPP_ARG_TYPE(TMPro::TMP_UpdateManager*, "TMPro", "TMP_UpdateManager");
// Type namespace: TMPro
namespace TMPro {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: TMPro.TMP_UpdateManager
  // [TokenAttribute] Offset: FFFFFFFF
  class TMP_UpdateManager : public ::Il2CppObject {
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
    // private readonly System.Collections.Generic.List`1<TMPro.TMP_Text> m_LayoutRebuildQueue
    // Size: 0x8
    // Offset: 0x10
    System::Collections::Generic::List_1<TMPro::TMP_Text*>* m_LayoutRebuildQueue;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<TMPro::TMP_Text*>*) == 0x8);
    // private System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> m_LayoutQueueLookup
    // Size: 0x8
    // Offset: 0x18
    System::Collections::Generic::Dictionary_2<int, int>* m_LayoutQueueLookup;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::Dictionary_2<int, int>*) == 0x8);
    // private readonly System.Collections.Generic.List`1<TMPro.TMP_Text> m_GraphicRebuildQueue
    // Size: 0x8
    // Offset: 0x20
    System::Collections::Generic::List_1<TMPro::TMP_Text*>* m_GraphicRebuildQueue;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<TMPro::TMP_Text*>*) == 0x8);
    // private System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> m_GraphicQueueLookup
    // Size: 0x8
    // Offset: 0x28
    System::Collections::Generic::Dictionary_2<int, int>* m_GraphicQueueLookup;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::Dictionary_2<int, int>*) == 0x8);
    // private readonly System.Collections.Generic.List`1<TMPro.TMP_Text> m_InternalUpdateQueue
    // Size: 0x8
    // Offset: 0x30
    System::Collections::Generic::List_1<TMPro::TMP_Text*>* m_InternalUpdateQueue;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<TMPro::TMP_Text*>*) == 0x8);
    // private System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> m_InternalUpdateLookup
    // Size: 0x8
    // Offset: 0x38
    System::Collections::Generic::Dictionary_2<int, int>* m_InternalUpdateLookup;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::Dictionary_2<int, int>*) == 0x8);
    public:
    // Get static field: static private TMPro.TMP_UpdateManager s_Instance
    static TMPro::TMP_UpdateManager* _get_s_Instance();
    // Set static field: static private TMPro.TMP_UpdateManager s_Instance
    static void _set_s_Instance(TMPro::TMP_UpdateManager* value);
    // Get instance field reference: private readonly System.Collections.Generic.List`1<TMPro.TMP_Text> m_LayoutRebuildQueue
    System::Collections::Generic::List_1<TMPro::TMP_Text*>*& dyn_m_LayoutRebuildQueue();
    // Get instance field reference: private System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> m_LayoutQueueLookup
    System::Collections::Generic::Dictionary_2<int, int>*& dyn_m_LayoutQueueLookup();
    // Get instance field reference: private readonly System.Collections.Generic.List`1<TMPro.TMP_Text> m_GraphicRebuildQueue
    System::Collections::Generic::List_1<TMPro::TMP_Text*>*& dyn_m_GraphicRebuildQueue();
    // Get instance field reference: private System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> m_GraphicQueueLookup
    System::Collections::Generic::Dictionary_2<int, int>*& dyn_m_GraphicQueueLookup();
    // Get instance field reference: private readonly System.Collections.Generic.List`1<TMPro.TMP_Text> m_InternalUpdateQueue
    System::Collections::Generic::List_1<TMPro::TMP_Text*>*& dyn_m_InternalUpdateQueue();
    // Get instance field reference: private System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> m_InternalUpdateLookup
    System::Collections::Generic::Dictionary_2<int, int>*& dyn_m_InternalUpdateLookup();
    // static public TMPro.TMP_UpdateManager get_instance()
    // Offset: 0x1636AE8
    static TMPro::TMP_UpdateManager* get_instance();
    // static System.Void RegisterTextObjectForUpdate(TMPro.TMP_Text textObject)
    // Offset: 0x1636D40
    static void RegisterTextObjectForUpdate(TMPro::TMP_Text* textObject);
    // private System.Void InternalRegisterTextObjectForUpdate(TMPro.TMP_Text textObject)
    // Offset: 0x1636D6C
    void InternalRegisterTextObjectForUpdate(TMPro::TMP_Text* textObject);
    // static public System.Void RegisterTextElementForLayoutRebuild(TMPro.TMP_Text element)
    // Offset: 0x1636E3C
    static void RegisterTextElementForLayoutRebuild(TMPro::TMP_Text* element);
    // private System.Boolean InternalRegisterTextElementForLayoutRebuild(TMPro.TMP_Text element)
    // Offset: 0x1636E68
    bool InternalRegisterTextElementForLayoutRebuild(TMPro::TMP_Text* element);
    // static public System.Void RegisterTextElementForGraphicRebuild(TMPro.TMP_Text element)
    // Offset: 0x1636F38
    static void RegisterTextElementForGraphicRebuild(TMPro::TMP_Text* element);
    // private System.Boolean InternalRegisterTextElementForGraphicRebuild(TMPro.TMP_Text element)
    // Offset: 0x1636F64
    bool InternalRegisterTextElementForGraphicRebuild(TMPro::TMP_Text* element);
    // private System.Void OnBeginFrameRendering(UnityEngine.Rendering.ScriptableRenderContext renderContext, UnityEngine.Camera[] cameras)
    // Offset: 0x1637034
    void OnBeginFrameRendering(UnityEngine::Rendering::ScriptableRenderContext renderContext, ::ArrayW<UnityEngine::Camera*> cameras);
    // private System.Void OnCameraPreCull(UnityEngine.Camera cam)
    // Offset: 0x1637208
    void OnCameraPreCull(UnityEngine::Camera* cam);
    // private System.Void DoRebuilds()
    // Offset: 0x1637038
    void DoRebuilds();
    // static System.Void UnRegisterTextObjectForUpdate(TMPro.TMP_Text textObject)
    // Offset: 0x163720C
    static void UnRegisterTextObjectForUpdate(TMPro::TMP_Text* textObject);
    // static public System.Void UnRegisterTextElementForRebuild(TMPro.TMP_Text element)
    // Offset: 0x16372D8
    static void UnRegisterTextElementForRebuild(TMPro::TMP_Text* element);
    // private System.Void InternalUnRegisterTextElementForGraphicRebuild(TMPro.TMP_Text element)
    // Offset: 0x1637324
    void InternalUnRegisterTextElementForGraphicRebuild(TMPro::TMP_Text* element);
    // private System.Void InternalUnRegisterTextElementForLayoutRebuild(TMPro.TMP_Text element)
    // Offset: 0x16373C4
    void InternalUnRegisterTextElementForLayoutRebuild(TMPro::TMP_Text* element);
    // private System.Void InternalUnRegisterTextObjectForUpdate(TMPro.TMP_Text textObject)
    // Offset: 0x1637238
    void InternalUnRegisterTextObjectForUpdate(TMPro::TMP_Text* textObject);
    // protected System.Void .ctor()
    // Offset: 0x1636B64
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TMP_UpdateManager* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("TMPro::TMP_UpdateManager::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TMP_UpdateManager*, creationType>()));
    }
  }; // TMPro.TMP_UpdateManager
  #pragma pack(pop)
  static check_size<sizeof(TMP_UpdateManager), 56 + sizeof(System::Collections::Generic::Dictionary_2<int, int>*)> __TMPro_TMP_UpdateManagerSizeCheck;
  static_assert(sizeof(TMP_UpdateManager) == 0x40);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: TMPro::TMP_UpdateManager::get_instance
// Il2CppName: get_instance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<TMPro::TMP_UpdateManager* (*)()>(&TMPro::TMP_UpdateManager::get_instance)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_UpdateManager*), "get_instance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_UpdateManager::RegisterTextObjectForUpdate
// Il2CppName: RegisterTextObjectForUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(TMPro::TMP_Text*)>(&TMPro::TMP_UpdateManager::RegisterTextObjectForUpdate)> {
  static const MethodInfo* get() {
    static auto* textObject = &::il2cpp_utils::GetClassFromName("TMPro", "TMP_Text")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_UpdateManager*), "RegisterTextObjectForUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{textObject});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_UpdateManager::InternalRegisterTextObjectForUpdate
// Il2CppName: InternalRegisterTextObjectForUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (TMPro::TMP_UpdateManager::*)(TMPro::TMP_Text*)>(&TMPro::TMP_UpdateManager::InternalRegisterTextObjectForUpdate)> {
  static const MethodInfo* get() {
    static auto* textObject = &::il2cpp_utils::GetClassFromName("TMPro", "TMP_Text")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_UpdateManager*), "InternalRegisterTextObjectForUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{textObject});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_UpdateManager::RegisterTextElementForLayoutRebuild
// Il2CppName: RegisterTextElementForLayoutRebuild
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(TMPro::TMP_Text*)>(&TMPro::TMP_UpdateManager::RegisterTextElementForLayoutRebuild)> {
  static const MethodInfo* get() {
    static auto* element = &::il2cpp_utils::GetClassFromName("TMPro", "TMP_Text")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_UpdateManager*), "RegisterTextElementForLayoutRebuild", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{element});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_UpdateManager::InternalRegisterTextElementForLayoutRebuild
// Il2CppName: InternalRegisterTextElementForLayoutRebuild
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (TMPro::TMP_UpdateManager::*)(TMPro::TMP_Text*)>(&TMPro::TMP_UpdateManager::InternalRegisterTextElementForLayoutRebuild)> {
  static const MethodInfo* get() {
    static auto* element = &::il2cpp_utils::GetClassFromName("TMPro", "TMP_Text")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_UpdateManager*), "InternalRegisterTextElementForLayoutRebuild", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{element});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_UpdateManager::RegisterTextElementForGraphicRebuild
// Il2CppName: RegisterTextElementForGraphicRebuild
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(TMPro::TMP_Text*)>(&TMPro::TMP_UpdateManager::RegisterTextElementForGraphicRebuild)> {
  static const MethodInfo* get() {
    static auto* element = &::il2cpp_utils::GetClassFromName("TMPro", "TMP_Text")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_UpdateManager*), "RegisterTextElementForGraphicRebuild", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{element});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_UpdateManager::InternalRegisterTextElementForGraphicRebuild
// Il2CppName: InternalRegisterTextElementForGraphicRebuild
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (TMPro::TMP_UpdateManager::*)(TMPro::TMP_Text*)>(&TMPro::TMP_UpdateManager::InternalRegisterTextElementForGraphicRebuild)> {
  static const MethodInfo* get() {
    static auto* element = &::il2cpp_utils::GetClassFromName("TMPro", "TMP_Text")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_UpdateManager*), "InternalRegisterTextElementForGraphicRebuild", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{element});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_UpdateManager::OnBeginFrameRendering
// Il2CppName: OnBeginFrameRendering
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (TMPro::TMP_UpdateManager::*)(UnityEngine::Rendering::ScriptableRenderContext, ::ArrayW<UnityEngine::Camera*>)>(&TMPro::TMP_UpdateManager::OnBeginFrameRendering)> {
  static const MethodInfo* get() {
    static auto* renderContext = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering", "ScriptableRenderContext")->byval_arg;
    static auto* cameras = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "Camera"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_UpdateManager*), "OnBeginFrameRendering", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{renderContext, cameras});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_UpdateManager::OnCameraPreCull
// Il2CppName: OnCameraPreCull
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (TMPro::TMP_UpdateManager::*)(UnityEngine::Camera*)>(&TMPro::TMP_UpdateManager::OnCameraPreCull)> {
  static const MethodInfo* get() {
    static auto* cam = &::il2cpp_utils::GetClassFromName("UnityEngine", "Camera")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_UpdateManager*), "OnCameraPreCull", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{cam});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_UpdateManager::DoRebuilds
// Il2CppName: DoRebuilds
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (TMPro::TMP_UpdateManager::*)()>(&TMPro::TMP_UpdateManager::DoRebuilds)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_UpdateManager*), "DoRebuilds", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_UpdateManager::UnRegisterTextObjectForUpdate
// Il2CppName: UnRegisterTextObjectForUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(TMPro::TMP_Text*)>(&TMPro::TMP_UpdateManager::UnRegisterTextObjectForUpdate)> {
  static const MethodInfo* get() {
    static auto* textObject = &::il2cpp_utils::GetClassFromName("TMPro", "TMP_Text")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_UpdateManager*), "UnRegisterTextObjectForUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{textObject});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_UpdateManager::UnRegisterTextElementForRebuild
// Il2CppName: UnRegisterTextElementForRebuild
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(TMPro::TMP_Text*)>(&TMPro::TMP_UpdateManager::UnRegisterTextElementForRebuild)> {
  static const MethodInfo* get() {
    static auto* element = &::il2cpp_utils::GetClassFromName("TMPro", "TMP_Text")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_UpdateManager*), "UnRegisterTextElementForRebuild", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{element});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_UpdateManager::InternalUnRegisterTextElementForGraphicRebuild
// Il2CppName: InternalUnRegisterTextElementForGraphicRebuild
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (TMPro::TMP_UpdateManager::*)(TMPro::TMP_Text*)>(&TMPro::TMP_UpdateManager::InternalUnRegisterTextElementForGraphicRebuild)> {
  static const MethodInfo* get() {
    static auto* element = &::il2cpp_utils::GetClassFromName("TMPro", "TMP_Text")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_UpdateManager*), "InternalUnRegisterTextElementForGraphicRebuild", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{element});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_UpdateManager::InternalUnRegisterTextElementForLayoutRebuild
// Il2CppName: InternalUnRegisterTextElementForLayoutRebuild
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (TMPro::TMP_UpdateManager::*)(TMPro::TMP_Text*)>(&TMPro::TMP_UpdateManager::InternalUnRegisterTextElementForLayoutRebuild)> {
  static const MethodInfo* get() {
    static auto* element = &::il2cpp_utils::GetClassFromName("TMPro", "TMP_Text")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_UpdateManager*), "InternalUnRegisterTextElementForLayoutRebuild", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{element});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_UpdateManager::InternalUnRegisterTextObjectForUpdate
// Il2CppName: InternalUnRegisterTextObjectForUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (TMPro::TMP_UpdateManager::*)(TMPro::TMP_Text*)>(&TMPro::TMP_UpdateManager::InternalUnRegisterTextObjectForUpdate)> {
  static const MethodInfo* get() {
    static auto* textObject = &::il2cpp_utils::GetClassFromName("TMPro", "TMP_Text")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_UpdateManager*), "InternalUnRegisterTextObjectForUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{textObject});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_UpdateManager::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
