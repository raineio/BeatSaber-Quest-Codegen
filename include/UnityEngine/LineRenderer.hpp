// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.Renderer
#include "UnityEngine/Renderer.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Color
  struct Color;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.LineRenderer
  // [NativeHeaderAttribute] Offset: D8EAC0
  // [NativeHeaderAttribute] Offset: D8EAC0
  class LineRenderer : public UnityEngine::Renderer {
    public:
    // Creating value type constructor for type: LineRenderer
    LineRenderer() noexcept {}
    // public System.Void set_startWidth(System.Single value)
    // Offset: 0x1C0A754
    void set_startWidth(float value);
    // public System.Void set_endWidth(System.Single value)
    // Offset: 0x1C0A7A4
    void set_endWidth(float value);
    // public System.Void set_useWorldSpace(System.Boolean value)
    // Offset: 0x1C0A7F4
    void set_useWorldSpace(bool value);
    // public System.Void set_startColor(UnityEngine.Color value)
    // Offset: 0x1C0A844
    void set_startColor(UnityEngine::Color value);
    // public System.Void set_endColor(UnityEngine.Color value)
    // Offset: 0x1C0A8EC
    void set_endColor(UnityEngine::Color value);
    // public System.Void set_positionCount(System.Int32 value)
    // Offset: 0x1C0A994
    void set_positionCount(int value);
    // public System.Void SetPosition(System.Int32 index, UnityEngine.Vector3 position)
    // Offset: 0x1C0A9E4
    void SetPosition(int index, UnityEngine::Vector3 position);
    // public System.Void SetPositions(UnityEngine.Vector3[] positions)
    // Offset: 0x1C0AAA4
    void SetPositions(::Array<UnityEngine::Vector3>* positions);
    // private System.Void set_startColor_Injected(ref UnityEngine.Color value)
    // Offset: 0x1C0A89C
    void set_startColor_Injected(UnityEngine::Color& value);
    // private System.Void set_endColor_Injected(ref UnityEngine.Color value)
    // Offset: 0x1C0A944
    void set_endColor_Injected(UnityEngine::Color& value);
    // private System.Void SetPosition_Injected(System.Int32 index, ref UnityEngine.Vector3 position)
    // Offset: 0x1C0AA4C
    void SetPosition_Injected(int index, UnityEngine::Vector3& position);
  }; // UnityEngine.LineRenderer
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::LineRenderer*, "UnityEngine", "LineRenderer");
// Writing MetadataGetter for method: UnityEngine::LineRenderer::set_startWidth
// Il2CppName: set_startWidth
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::LineRenderer::*)(float)>(&UnityEngine::LineRenderer::set_startWidth)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::LineRenderer*), "set_startWidth", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<float>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::LineRenderer::set_endWidth
// Il2CppName: set_endWidth
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::LineRenderer::*)(float)>(&UnityEngine::LineRenderer::set_endWidth)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::LineRenderer*), "set_endWidth", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<float>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::LineRenderer::set_useWorldSpace
// Il2CppName: set_useWorldSpace
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::LineRenderer::*)(bool)>(&UnityEngine::LineRenderer::set_useWorldSpace)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::LineRenderer*), "set_useWorldSpace", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<bool>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::LineRenderer::set_startColor
// Il2CppName: set_startColor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::LineRenderer::*)(UnityEngine::Color)>(&UnityEngine::LineRenderer::set_startColor)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::LineRenderer*), "set_startColor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::Color>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::LineRenderer::set_endColor
// Il2CppName: set_endColor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::LineRenderer::*)(UnityEngine::Color)>(&UnityEngine::LineRenderer::set_endColor)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::LineRenderer*), "set_endColor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::Color>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::LineRenderer::set_positionCount
// Il2CppName: set_positionCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::LineRenderer::*)(int)>(&UnityEngine::LineRenderer::set_positionCount)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::LineRenderer*), "set_positionCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<int>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::LineRenderer::SetPosition
// Il2CppName: SetPosition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::LineRenderer::*)(int, UnityEngine::Vector3)>(&UnityEngine::LineRenderer::SetPosition)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::LineRenderer*), "SetPosition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<int>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::Vector3>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::LineRenderer::SetPositions
// Il2CppName: SetPositions
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::LineRenderer::*)(::Array<UnityEngine::Vector3>*)>(&UnityEngine::LineRenderer::SetPositions)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::LineRenderer*), "SetPositions", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Array<UnityEngine::Vector3>*>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::LineRenderer::set_startColor_Injected
// Il2CppName: set_startColor_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::LineRenderer::*)(UnityEngine::Color&)>(&UnityEngine::LineRenderer::set_startColor_Injected)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::LineRenderer*), "set_startColor_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::Color&>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::LineRenderer::set_endColor_Injected
// Il2CppName: set_endColor_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::LineRenderer::*)(UnityEngine::Color&)>(&UnityEngine::LineRenderer::set_endColor_Injected)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::LineRenderer*), "set_endColor_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::Color&>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::LineRenderer::SetPosition_Injected
// Il2CppName: SetPosition_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::LineRenderer::*)(int, UnityEngine::Vector3&)>(&UnityEngine::LineRenderer::SetPosition_Injected)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::LineRenderer*), "SetPosition_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<int>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::Vector3&>()});
  }
};
