// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
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
  // Autogenerated type: TMPro.TMP_UpdateManager
  class TMP_UpdateManager : public ::Il2CppObject {
    public:
    // private readonly System.Collections.Generic.List`1<TMPro.TMP_Text> m_LayoutRebuildQueue
    // Offset: 0x10
    System::Collections::Generic::List_1<TMPro::TMP_Text*>* m_LayoutRebuildQueue;
    // private System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> m_LayoutQueueLookup
    // Offset: 0x18
    System::Collections::Generic::Dictionary_2<int, int>* m_LayoutQueueLookup;
    // private readonly System.Collections.Generic.List`1<TMPro.TMP_Text> m_GraphicRebuildQueue
    // Offset: 0x20
    System::Collections::Generic::List_1<TMPro::TMP_Text*>* m_GraphicRebuildQueue;
    // private System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> m_GraphicQueueLookup
    // Offset: 0x28
    System::Collections::Generic::Dictionary_2<int, int>* m_GraphicQueueLookup;
    // private readonly System.Collections.Generic.List`1<TMPro.TMP_Text> m_InternalUpdateQueue
    // Offset: 0x30
    System::Collections::Generic::List_1<TMPro::TMP_Text*>* m_InternalUpdateQueue;
    // private System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> m_InternalUpdateLookup
    // Offset: 0x38
    System::Collections::Generic::Dictionary_2<int, int>* m_InternalUpdateLookup;
    // Get static field: static private TMPro.TMP_UpdateManager s_Instance
    static TMPro::TMP_UpdateManager* _get_s_Instance();
    // Set static field: static private TMPro.TMP_UpdateManager s_Instance
    static void _set_s_Instance(TMPro::TMP_UpdateManager* value);
    // static public TMPro.TMP_UpdateManager get_instance()
    // Offset: 0x10606E0
    static TMPro::TMP_UpdateManager* get_instance();
    // static System.Void RegisterTextObjectForUpdate(TMPro.TMP_Text textObject)
    // Offset: 0x106099C
    static void RegisterTextObjectForUpdate(TMPro::TMP_Text* textObject);
    // private System.Void InternalRegisterTextObjectForUpdate(TMPro.TMP_Text textObject)
    // Offset: 0x10609C8
    void InternalRegisterTextObjectForUpdate(TMPro::TMP_Text* textObject);
    // static public System.Void RegisterTextElementForLayoutRebuild(TMPro.TMP_Text element)
    // Offset: 0x1060A98
    static void RegisterTextElementForLayoutRebuild(TMPro::TMP_Text* element);
    // private System.Boolean InternalRegisterTextElementForLayoutRebuild(TMPro.TMP_Text element)
    // Offset: 0x1060AC4
    bool InternalRegisterTextElementForLayoutRebuild(TMPro::TMP_Text* element);
    // static public System.Void RegisterTextElementForGraphicRebuild(TMPro.TMP_Text element)
    // Offset: 0x1060B94
    static void RegisterTextElementForGraphicRebuild(TMPro::TMP_Text* element);
    // private System.Boolean InternalRegisterTextElementForGraphicRebuild(TMPro.TMP_Text element)
    // Offset: 0x1060BC0
    bool InternalRegisterTextElementForGraphicRebuild(TMPro::TMP_Text* element);
    // private System.Void OnBeginFrameRendering(UnityEngine.Rendering.ScriptableRenderContext renderContext, UnityEngine.Camera[] cameras)
    // Offset: 0x1060C90
    void OnBeginFrameRendering(UnityEngine::Rendering::ScriptableRenderContext renderContext, ::Array<UnityEngine::Camera*>* cameras);
    // private System.Void OnCameraPreCull(UnityEngine.Camera cam)
    // Offset: 0x1060E64
    void OnCameraPreCull(UnityEngine::Camera* cam);
    // private System.Void DoRebuilds()
    // Offset: 0x1060C94
    void DoRebuilds();
    // static System.Void UnRegisterTextObjectForUpdate(TMPro.TMP_Text textObject)
    // Offset: 0x1060E68
    static void UnRegisterTextObjectForUpdate(TMPro::TMP_Text* textObject);
    // static public System.Void UnRegisterTextElementForRebuild(TMPro.TMP_Text element)
    // Offset: 0x1060F34
    static void UnRegisterTextElementForRebuild(TMPro::TMP_Text* element);
    // private System.Void InternalUnRegisterTextElementForGraphicRebuild(TMPro.TMP_Text element)
    // Offset: 0x1060F80
    void InternalUnRegisterTextElementForGraphicRebuild(TMPro::TMP_Text* element);
    // private System.Void InternalUnRegisterTextElementForLayoutRebuild(TMPro.TMP_Text element)
    // Offset: 0x1061020
    void InternalUnRegisterTextElementForLayoutRebuild(TMPro::TMP_Text* element);
    // private System.Void InternalUnRegisterTextObjectForUpdate(TMPro.TMP_Text textObject)
    // Offset: 0x1060E94
    void InternalUnRegisterTextObjectForUpdate(TMPro::TMP_Text* textObject);
    // protected System.Void .ctor()
    // Offset: 0x1060764
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static TMP_UpdateManager* New_ctor();
  }; // TMPro.TMP_UpdateManager
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(TMPro::TMP_UpdateManager*, "TMPro", "TMP_UpdateManager");
#pragma pack(pop)
