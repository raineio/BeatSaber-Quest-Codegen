// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include <initializer_list>
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Renderer
  class Renderer;
  // Forward declaring type: Vector4
  struct Vector4;
  // Forward declaring type: Color
  struct Color;
  // Forward declaring type: MaterialPropertyBlock
  class MaterialPropertyBlock;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: MulticolorAvatarPartPropertyBlockSetter
  class MulticolorAvatarPartPropertyBlockSetter : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::MulticolorAvatarPartPropertyBlockSetter::ColorData
    class ColorData;
    // Nested type: GlobalNamespace::MulticolorAvatarPartPropertyBlockSetter::$$c
    class $$c;
    // private MulticolorAvatarPartPropertyBlockSetter/ColorData[] _colorDataList
    // Offset: 0x18
    ::Array<GlobalNamespace::MulticolorAvatarPartPropertyBlockSetter::ColorData*>* colorDataList;
    // private UnityEngine.Renderer _renderer
    // Offset: 0x20
    UnityEngine::Renderer* renderer;
    // private System.Boolean _editInPlayMode
    // Offset: 0x28
    bool editInPlayMode;
    // private readonly UnityEngine.Vector4[] _colors
    // Offset: 0x30
    ::Array<UnityEngine::Vector4>* colors;
    // private readonly UnityEngine.Vector4[] _rimLightColors
    // Offset: 0x38
    ::Array<UnityEngine::Vector4>* rimLightColors;
    // private UnityEngine.Color[] _boostColors
    // Offset: 0x40
    ::Array<UnityEngine::Color>* boostColors;
    // private System.Boolean _highlighted
    // Offset: 0x48
    bool highlighted;
    // private System.Int32 _uvSegment
    // Offset: 0x4C
    int uvSegment;
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get static field: static private UnityEngine.MaterialPropertyBlock _materialPropertyBlock
    static UnityEngine::MaterialPropertyBlock* _get__materialPropertyBlock();
    // Set static field: static private UnityEngine.MaterialPropertyBlock _materialPropertyBlock
    static void _set__materialPropertyBlock(UnityEngine::MaterialPropertyBlock* value);
    // protected System.Void OnValidate()
    // Offset: 0x205C588
    void OnValidate();
    // public System.Void SetColors(params UnityEngine.Color[] colors)
    // Offset: 0x205C708
    void SetColors(::Array<UnityEngine::Color>* colors);
    // Creating initializer_list -> params proxy for: System.Void SetColors(params UnityEngine.Color[] colors)
    void SetColors(std::initializer_list<UnityEngine::Color> colors);
    // Creating TArgs -> initializer_list proxy for: System.Void SetColors(params UnityEngine.Color[] colors)
    template<class ...TParams>
    void SetColors(TParams&&... colors) {
      SetColors({colors...});
    }
    // public System.Void SetHighlight(System.Boolean highlighted, System.Int32 uvSegment)
    // Offset: 0x205CA9C
    void SetHighlight(bool highlighted, int uvSegment);
    // private System.Void UpdateRenderer()
    // Offset: 0x205C928
    void UpdateRenderer();
    // public System.Void .ctor()
    // Offset: 0x205CAAC
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static MulticolorAvatarPartPropertyBlockSetter* New_ctor();
  }; // MulticolorAvatarPartPropertyBlockSetter
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MulticolorAvatarPartPropertyBlockSetter*, "", "MulticolorAvatarPartPropertyBlockSetter");
#pragma pack(pop)
