// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: PlaybackRenderer
#include "GlobalNamespace/PlaybackRenderer.hpp"
// Including type: UnityEngine.LayerMask
#include "UnityEngine/LayerMask.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: RenderTexture
  class RenderTexture;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Skipping declaration: Type because it is already included!
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::PlaybackRenderer::PlaybackScreenshot);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PlaybackRenderer::PlaybackScreenshot*, "", "PlaybackRenderer/PlaybackScreenshot");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: PlaybackRenderer/PlaybackScreenshot
  // [TokenAttribute] Offset: FFFFFFFF
  class PlaybackRenderer::PlaybackScreenshot : public ::Il2CppObject {
    public:
    // Nested type: ::GlobalNamespace::PlaybackRenderer::PlaybackScreenshot::Type
    struct Type;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: PlaybackRenderer/PlaybackScreenshot/Type
    // [TokenAttribute] Offset: FFFFFFFF
    struct Type/*, public ::System::Enum*/ {
      public:
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      public:
      // Creating value type constructor for type: Type
      constexpr Type(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator ::System::Enum
      operator ::System::Enum() noexcept {
        return *reinterpret_cast<::System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public PlaybackRenderer/PlaybackScreenshot/Type Foreground
      static constexpr const int Foreground = 1;
      // Get static field: static public PlaybackRenderer/PlaybackScreenshot/Type Foreground
      static ::GlobalNamespace::PlaybackRenderer::PlaybackScreenshot::Type _get_Foreground();
      // Set static field: static public PlaybackRenderer/PlaybackScreenshot/Type Foreground
      static void _set_Foreground(::GlobalNamespace::PlaybackRenderer::PlaybackScreenshot::Type value);
      // static field const value: static public PlaybackRenderer/PlaybackScreenshot/Type Background
      static constexpr const int Background = 2;
      // Get static field: static public PlaybackRenderer/PlaybackScreenshot/Type Background
      static ::GlobalNamespace::PlaybackRenderer::PlaybackScreenshot::Type _get_Background();
      // Set static field: static public PlaybackRenderer/PlaybackScreenshot/Type Background
      static void _set_Background(::GlobalNamespace::PlaybackRenderer::PlaybackScreenshot::Type value);
      // Get instance field reference: public System.Int32 value__
      int& dyn_value__();
    }; // PlaybackRenderer/PlaybackScreenshot/Type
    #pragma pack(pop)
    static check_size<sizeof(PlaybackRenderer::PlaybackScreenshot::Type), 0 + sizeof(int)> __GlobalNamespace_PlaybackRenderer_PlaybackScreenshot_TypeSizeCheck;
    static_assert(sizeof(PlaybackRenderer::PlaybackScreenshot::Type) == 0x4);
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // private System.String _name
    // Size: 0x8
    // Offset: 0x10
    ::StringW name;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private UnityEngine.LayerMask _layerMask
    // Size: 0x4
    // Offset: 0x18
    ::UnityEngine::LayerMask layerMask;
    // Field size check
    static_assert(sizeof(::UnityEngine::LayerMask) == 0x4);
    // private PlaybackRenderer/PlaybackScreenshot/Type _type
    // Size: 0x4
    // Offset: 0x1C
    ::GlobalNamespace::PlaybackRenderer::PlaybackScreenshot::Type type;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::PlaybackRenderer::PlaybackScreenshot::Type) == 0x4);
    // private UnityEngine.RenderTexture _texture
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::RenderTexture* texture;
    // Field size check
    static_assert(sizeof(::UnityEngine::RenderTexture*) == 0x8);
    // private System.String _path
    // Size: 0x8
    // Offset: 0x28
    ::StringW path;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Get instance field reference: private System.String _name
    ::StringW& dyn__name();
    // Get instance field reference: private UnityEngine.LayerMask _layerMask
    ::UnityEngine::LayerMask& dyn__layerMask();
    // Get instance field reference: private PlaybackRenderer/PlaybackScreenshot/Type _type
    ::GlobalNamespace::PlaybackRenderer::PlaybackScreenshot::Type& dyn__type();
    // Get instance field reference: private UnityEngine.RenderTexture _texture
    ::UnityEngine::RenderTexture*& dyn__texture();
    // Get instance field reference: private System.String _path
    ::StringW& dyn__path();
    // public System.String get_name()
    // Offset: 0x148136C
    ::StringW get_name();
    // public UnityEngine.RenderTexture get_texture()
    // Offset: 0x1481374
    ::UnityEngine::RenderTexture* get_texture();
    // public UnityEngine.LayerMask get_layerMask()
    // Offset: 0x148137C
    ::UnityEngine::LayerMask get_layerMask();
    // public PlaybackRenderer/PlaybackScreenshot/Type get_type()
    // Offset: 0x1481384
    ::GlobalNamespace::PlaybackRenderer::PlaybackScreenshot::Type get_type();
    // public System.String get_path()
    // Offset: 0x148138C
    ::StringW get_path();
    // public System.Void set_path(System.String value)
    // Offset: 0x1481394
    void set_path(::StringW value);
    // public System.Void .ctor(System.String name, UnityEngine.LayerMask layerMask, PlaybackRenderer/PlaybackScreenshot/Type type)
    // Offset: 0x148139C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PlaybackRenderer::PlaybackScreenshot* New_ctor(::StringW name, ::UnityEngine::LayerMask layerMask, ::GlobalNamespace::PlaybackRenderer::PlaybackScreenshot::Type type) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::PlaybackRenderer::PlaybackScreenshot::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PlaybackRenderer::PlaybackScreenshot*, creationType>(name, layerMask, type)));
    }
    // public System.Void CreateTexture(System.Int32 width, System.Int32 height)
    // Offset: 0x1480B6C
    void CreateTexture(int width, int height);
  }; // PlaybackRenderer/PlaybackScreenshot
  #pragma pack(pop)
  static check_size<sizeof(PlaybackRenderer::PlaybackScreenshot), 40 + sizeof(::StringW)> __GlobalNamespace_PlaybackRenderer_PlaybackScreenshotSizeCheck;
  static_assert(sizeof(PlaybackRenderer::PlaybackScreenshot) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PlaybackRenderer::PlaybackScreenshot::Type, "", "PlaybackRenderer/PlaybackScreenshot/Type");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::PlaybackRenderer::PlaybackScreenshot::get_name
// Il2CppName: get_name
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::PlaybackRenderer::PlaybackScreenshot::*)()>(&GlobalNamespace::PlaybackRenderer::PlaybackScreenshot::get_name)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlaybackRenderer::PlaybackScreenshot*), "get_name", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlaybackRenderer::PlaybackScreenshot::get_texture
// Il2CppName: get_texture
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::RenderTexture* (GlobalNamespace::PlaybackRenderer::PlaybackScreenshot::*)()>(&GlobalNamespace::PlaybackRenderer::PlaybackScreenshot::get_texture)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlaybackRenderer::PlaybackScreenshot*), "get_texture", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlaybackRenderer::PlaybackScreenshot::get_layerMask
// Il2CppName: get_layerMask
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::LayerMask (GlobalNamespace::PlaybackRenderer::PlaybackScreenshot::*)()>(&GlobalNamespace::PlaybackRenderer::PlaybackScreenshot::get_layerMask)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlaybackRenderer::PlaybackScreenshot*), "get_layerMask", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlaybackRenderer::PlaybackScreenshot::get_type
// Il2CppName: get_type
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::PlaybackRenderer::PlaybackScreenshot::Type (GlobalNamespace::PlaybackRenderer::PlaybackScreenshot::*)()>(&GlobalNamespace::PlaybackRenderer::PlaybackScreenshot::get_type)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlaybackRenderer::PlaybackScreenshot*), "get_type", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlaybackRenderer::PlaybackScreenshot::get_path
// Il2CppName: get_path
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::PlaybackRenderer::PlaybackScreenshot::*)()>(&GlobalNamespace::PlaybackRenderer::PlaybackScreenshot::get_path)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlaybackRenderer::PlaybackScreenshot*), "get_path", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlaybackRenderer::PlaybackScreenshot::set_path
// Il2CppName: set_path
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlaybackRenderer::PlaybackScreenshot::*)(::StringW)>(&GlobalNamespace::PlaybackRenderer::PlaybackScreenshot::set_path)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlaybackRenderer::PlaybackScreenshot*), "set_path", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlaybackRenderer::PlaybackScreenshot::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::PlaybackRenderer::PlaybackScreenshot::CreateTexture
// Il2CppName: CreateTexture
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlaybackRenderer::PlaybackScreenshot::*)(int, int)>(&GlobalNamespace::PlaybackRenderer::PlaybackScreenshot::CreateTexture)> {
  static const MethodInfo* get() {
    static auto* width = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* height = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlaybackRenderer::PlaybackScreenshot*), "CreateTexture", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{width, height});
  }
};