// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Rect
  struct Rect;
  // Forward declaring type: Vector2
  struct Vector2;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GUIClip
  class GUIClip;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::GUIClip);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::GUIClip*, "UnityEngine", "GUIClip");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.GUIClip
  // [TokenAttribute] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: 1063F60
  // [VisibleToOtherModulesAttribute] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: 1063F60
  class GUIClip : public ::Il2CppObject {
    public:
    // static UnityEngine.Rect get_visibleRect()
    // Offset: 0x1FF0BC0
    static ::UnityEngine::Rect get_visibleRect();
    // static System.Void Internal_Push(UnityEngine.Rect screenRect, UnityEngine.Vector2 scrollOffset, UnityEngine.Vector2 renderOffset, System.Boolean resetOffset)
    // Offset: 0x1FF499C
    static void Internal_Push(::UnityEngine::Rect screenRect, ::UnityEngine::Vector2 scrollOffset, ::UnityEngine::Vector2 renderOffset, bool resetOffset);
    // static System.Void Internal_Pop()
    // Offset: 0x1FF2664
    static void Internal_Pop();
    // static System.Void Push(UnityEngine.Rect screenRect, UnityEngine.Vector2 scrollOffset, UnityEngine.Vector2 renderOffset, System.Boolean resetOffset)
    // Offset: 0x1FF2624
    static void Push(::UnityEngine::Rect screenRect, ::UnityEngine::Vector2 scrollOffset, ::UnityEngine::Vector2 renderOffset, bool resetOffset);
    // static System.Void Pop()
    // Offset: 0x1FF3AF0
    static void Pop();
    // static private System.Void get_visibleRect_Injected(out UnityEngine.Rect ret)
    // Offset: 0x1FF495C
    static void get_visibleRect_Injected(ByRef<::UnityEngine::Rect> ret);
    // static private System.Void Internal_Push_Injected(ref UnityEngine.Rect screenRect, ref UnityEngine.Vector2 scrollOffset, ref UnityEngine.Vector2 renderOffset, System.Boolean resetOffset)
    // Offset: 0x1FF4A04
    static void Internal_Push_Injected(ByRef<::UnityEngine::Rect> screenRect, ByRef<::UnityEngine::Vector2> scrollOffset, ByRef<::UnityEngine::Vector2> renderOffset, bool resetOffset);
  }; // UnityEngine.GUIClip
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::GUIClip::get_visibleRect
// Il2CppName: get_visibleRect
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rect (*)()>(&UnityEngine::GUIClip::get_visibleRect)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::GUIClip*), "get_visibleRect", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::GUIClip::Internal_Push
// Il2CppName: Internal_Push
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Rect, ::UnityEngine::Vector2, ::UnityEngine::Vector2, bool)>(&UnityEngine::GUIClip::Internal_Push)> {
  static const MethodInfo* get() {
    static auto* screenRect = &::il2cpp_utils::GetClassFromName("UnityEngine", "Rect")->byval_arg;
    static auto* scrollOffset = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    static auto* renderOffset = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    static auto* resetOffset = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::GUIClip*), "Internal_Push", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{screenRect, scrollOffset, renderOffset, resetOffset});
  }
};
// Writing MetadataGetter for method: UnityEngine::GUIClip::Internal_Pop
// Il2CppName: Internal_Pop
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::GUIClip::Internal_Pop)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::GUIClip*), "Internal_Pop", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::GUIClip::Push
// Il2CppName: Push
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Rect, ::UnityEngine::Vector2, ::UnityEngine::Vector2, bool)>(&UnityEngine::GUIClip::Push)> {
  static const MethodInfo* get() {
    static auto* screenRect = &::il2cpp_utils::GetClassFromName("UnityEngine", "Rect")->byval_arg;
    static auto* scrollOffset = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    static auto* renderOffset = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    static auto* resetOffset = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::GUIClip*), "Push", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{screenRect, scrollOffset, renderOffset, resetOffset});
  }
};
// Writing MetadataGetter for method: UnityEngine::GUIClip::Pop
// Il2CppName: Pop
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::GUIClip::Pop)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::GUIClip*), "Pop", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::GUIClip::get_visibleRect_Injected
// Il2CppName: get_visibleRect_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<::UnityEngine::Rect>)>(&UnityEngine::GUIClip::get_visibleRect_Injected)> {
  static const MethodInfo* get() {
    static auto* ret = &::il2cpp_utils::GetClassFromName("UnityEngine", "Rect")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::GUIClip*), "get_visibleRect_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ret});
  }
};
// Writing MetadataGetter for method: UnityEngine::GUIClip::Internal_Push_Injected
// Il2CppName: Internal_Push_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<::UnityEngine::Rect>, ByRef<::UnityEngine::Vector2>, ByRef<::UnityEngine::Vector2>, bool)>(&UnityEngine::GUIClip::Internal_Push_Injected)> {
  static const MethodInfo* get() {
    static auto* screenRect = &::il2cpp_utils::GetClassFromName("UnityEngine", "Rect")->this_arg;
    static auto* scrollOffset = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->this_arg;
    static auto* renderOffset = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->this_arg;
    static auto* resetOffset = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::GUIClip*), "Internal_Push_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{screenRect, scrollOffset, renderOffset, resetOffset});
  }
};
