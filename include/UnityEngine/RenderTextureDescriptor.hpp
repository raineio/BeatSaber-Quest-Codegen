// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: UnityEngine.Experimental.Rendering.GraphicsFormat
#include "UnityEngine/Experimental/Rendering/GraphicsFormat.hpp"
// Including type: UnityEngine.Rendering.TextureDimension
#include "UnityEngine/Rendering/TextureDimension.hpp"
// Including type: UnityEngine.Rendering.ShadowSamplingMode
#include "UnityEngine/Rendering/ShadowSamplingMode.hpp"
// Including type: UnityEngine.VRTextureUsage
#include "UnityEngine/VRTextureUsage.hpp"
// Including type: UnityEngine.RenderTextureCreationFlags
#include "UnityEngine/RenderTextureCreationFlags.hpp"
// Including type: UnityEngine.RenderTextureMemoryless
#include "UnityEngine/RenderTextureMemoryless.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: RenderTextureFormat
  struct RenderTextureFormat;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: RenderTextureDescriptor
  struct RenderTextureDescriptor;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::RenderTextureDescriptor, "UnityEngine", "RenderTextureDescriptor");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x34
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.RenderTextureDescriptor
  // [TokenAttribute] Offset: FFFFFFFF
  struct RenderTextureDescriptor/*, public ::System::ValueType*/ {
    public:
    public:
    // [DebuggerBrowsableAttribute] Offset: 0x10492E8
    // private System.Int32 <width>k__BackingField
    // Size: 0x4
    // Offset: 0x0
    int width;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // [DebuggerBrowsableAttribute] Offset: 0x1049324
    // private System.Int32 <height>k__BackingField
    // Size: 0x4
    // Offset: 0x4
    int height;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // [DebuggerBrowsableAttribute] Offset: 0x1049360
    // private System.Int32 <msaaSamples>k__BackingField
    // Size: 0x4
    // Offset: 0x8
    int msaaSamples;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // [DebuggerBrowsableAttribute] Offset: 0x104939C
    // private System.Int32 <volumeDepth>k__BackingField
    // Size: 0x4
    // Offset: 0xC
    int volumeDepth;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // [DebuggerBrowsableAttribute] Offset: 0x10493D8
    // private System.Int32 <mipCount>k__BackingField
    // Size: 0x4
    // Offset: 0x10
    int mipCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private UnityEngine.Experimental.Rendering.GraphicsFormat _graphicsFormat
    // Size: 0x4
    // Offset: 0x14
    ::UnityEngine::Experimental::Rendering::GraphicsFormat graphicsFormat;
    // Field size check
    static_assert(sizeof(::UnityEngine::Experimental::Rendering::GraphicsFormat) == 0x4);
    // [DebuggerBrowsableAttribute] Offset: 0x1049414
    // private UnityEngine.Experimental.Rendering.GraphicsFormat <stencilFormat>k__BackingField
    // Size: 0x4
    // Offset: 0x18
    ::UnityEngine::Experimental::Rendering::GraphicsFormat stencilFormat;
    // Field size check
    static_assert(sizeof(::UnityEngine::Experimental::Rendering::GraphicsFormat) == 0x4);
    // private System.Int32 _depthBufferBits
    // Size: 0x4
    // Offset: 0x1C
    int depthBufferBits;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // [DebuggerBrowsableAttribute] Offset: 0x1049450
    // private UnityEngine.Rendering.TextureDimension <dimension>k__BackingField
    // Size: 0x4
    // Offset: 0x20
    ::UnityEngine::Rendering::TextureDimension dimension;
    // Field size check
    static_assert(sizeof(::UnityEngine::Rendering::TextureDimension) == 0x4);
    // [DebuggerBrowsableAttribute] Offset: 0x104948C
    // private UnityEngine.Rendering.ShadowSamplingMode <shadowSamplingMode>k__BackingField
    // Size: 0x4
    // Offset: 0x24
    ::UnityEngine::Rendering::ShadowSamplingMode shadowSamplingMode;
    // Field size check
    static_assert(sizeof(::UnityEngine::Rendering::ShadowSamplingMode) == 0x4);
    // [DebuggerBrowsableAttribute] Offset: 0x10494C8
    // private UnityEngine.VRTextureUsage <vrUsage>k__BackingField
    // Size: 0x4
    // Offset: 0x28
    ::UnityEngine::VRTextureUsage vrUsage;
    // Field size check
    static_assert(sizeof(::UnityEngine::VRTextureUsage) == 0x4);
    // private UnityEngine.RenderTextureCreationFlags _flags
    // Size: 0x4
    // Offset: 0x2C
    ::UnityEngine::RenderTextureCreationFlags flags;
    // Field size check
    static_assert(sizeof(::UnityEngine::RenderTextureCreationFlags) == 0x4);
    // [DebuggerBrowsableAttribute] Offset: 0x1049504
    // private UnityEngine.RenderTextureMemoryless <memoryless>k__BackingField
    // Size: 0x4
    // Offset: 0x30
    ::UnityEngine::RenderTextureMemoryless memoryless;
    // Field size check
    static_assert(sizeof(::UnityEngine::RenderTextureMemoryless) == 0x4);
    public:
    // Creating value type constructor for type: RenderTextureDescriptor
    constexpr RenderTextureDescriptor(int width_ = {}, int height_ = {}, int msaaSamples_ = {}, int volumeDepth_ = {}, int mipCount_ = {}, ::UnityEngine::Experimental::Rendering::GraphicsFormat graphicsFormat_ = {}, ::UnityEngine::Experimental::Rendering::GraphicsFormat stencilFormat_ = {}, int depthBufferBits_ = {}, ::UnityEngine::Rendering::TextureDimension dimension_ = {}, ::UnityEngine::Rendering::ShadowSamplingMode shadowSamplingMode_ = {}, ::UnityEngine::VRTextureUsage vrUsage_ = {}, ::UnityEngine::RenderTextureCreationFlags flags_ = {}, ::UnityEngine::RenderTextureMemoryless memoryless_ = {}) noexcept : width{width_}, height{height_}, msaaSamples{msaaSamples_}, volumeDepth{volumeDepth_}, mipCount{mipCount_}, graphicsFormat{graphicsFormat_}, stencilFormat{stencilFormat_}, depthBufferBits{depthBufferBits_}, dimension{dimension_}, shadowSamplingMode{shadowSamplingMode_}, vrUsage{vrUsage_}, flags{flags_}, memoryless{memoryless_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get static field: static private System.Int32[] depthFormatBits
    static ::ArrayW<int> _get_depthFormatBits();
    // Set static field: static private System.Int32[] depthFormatBits
    static void _set_depthFormatBits(::ArrayW<int> value);
    // Get instance field reference: private System.Int32 <width>k__BackingField
    [[deprecated("Use field access instead!")]] int& dyn_$width$k__BackingField();
    // Get instance field reference: private System.Int32 <height>k__BackingField
    [[deprecated("Use field access instead!")]] int& dyn_$height$k__BackingField();
    // Get instance field reference: private System.Int32 <msaaSamples>k__BackingField
    [[deprecated("Use field access instead!")]] int& dyn_$msaaSamples$k__BackingField();
    // Get instance field reference: private System.Int32 <volumeDepth>k__BackingField
    [[deprecated("Use field access instead!")]] int& dyn_$volumeDepth$k__BackingField();
    // Get instance field reference: private System.Int32 <mipCount>k__BackingField
    [[deprecated("Use field access instead!")]] int& dyn_$mipCount$k__BackingField();
    // Get instance field reference: private UnityEngine.Experimental.Rendering.GraphicsFormat _graphicsFormat
    [[deprecated("Use field access instead!")]] ::UnityEngine::Experimental::Rendering::GraphicsFormat& dyn__graphicsFormat();
    // Get instance field reference: private UnityEngine.Experimental.Rendering.GraphicsFormat <stencilFormat>k__BackingField
    [[deprecated("Use field access instead!")]] ::UnityEngine::Experimental::Rendering::GraphicsFormat& dyn_$stencilFormat$k__BackingField();
    // Get instance field reference: private System.Int32 _depthBufferBits
    [[deprecated("Use field access instead!")]] int& dyn__depthBufferBits();
    // Get instance field reference: private UnityEngine.Rendering.TextureDimension <dimension>k__BackingField
    [[deprecated("Use field access instead!")]] ::UnityEngine::Rendering::TextureDimension& dyn_$dimension$k__BackingField();
    // Get instance field reference: private UnityEngine.Rendering.ShadowSamplingMode <shadowSamplingMode>k__BackingField
    [[deprecated("Use field access instead!")]] ::UnityEngine::Rendering::ShadowSamplingMode& dyn_$shadowSamplingMode$k__BackingField();
    // Get instance field reference: private UnityEngine.VRTextureUsage <vrUsage>k__BackingField
    [[deprecated("Use field access instead!")]] ::UnityEngine::VRTextureUsage& dyn_$vrUsage$k__BackingField();
    // Get instance field reference: private UnityEngine.RenderTextureCreationFlags _flags
    [[deprecated("Use field access instead!")]] ::UnityEngine::RenderTextureCreationFlags& dyn__flags();
    // Get instance field reference: private UnityEngine.RenderTextureMemoryless <memoryless>k__BackingField
    [[deprecated("Use field access instead!")]] ::UnityEngine::RenderTextureMemoryless& dyn_$memoryless$k__BackingField();
    // public System.Int32 get_width()
    // Offset: 0x2111F68
    int get_width();
    // public System.Void set_width(System.Int32 value)
    // Offset: 0x2111F70
    void set_width(int value);
    // public System.Int32 get_height()
    // Offset: 0x2111F78
    int get_height();
    // public System.Void set_height(System.Int32 value)
    // Offset: 0x2111F80
    void set_height(int value);
    // public System.Int32 get_msaaSamples()
    // Offset: 0x2111F88
    int get_msaaSamples();
    // public System.Void set_msaaSamples(System.Int32 value)
    // Offset: 0x2111F90
    void set_msaaSamples(int value);
    // public System.Int32 get_volumeDepth()
    // Offset: 0x2111F98
    int get_volumeDepth();
    // public System.Void set_volumeDepth(System.Int32 value)
    // Offset: 0x2111FA0
    void set_volumeDepth(int value);
    // public System.Void set_mipCount(System.Int32 value)
    // Offset: 0x2111FA8
    void set_mipCount(int value);
    // public UnityEngine.Experimental.Rendering.GraphicsFormat get_graphicsFormat()
    // Offset: 0x2111BA0
    ::UnityEngine::Experimental::Rendering::GraphicsFormat get_graphicsFormat();
    // public System.Void set_graphicsFormat(UnityEngine.Experimental.Rendering.GraphicsFormat value)
    // Offset: 0x2111FB0
    void set_graphicsFormat(::UnityEngine::Experimental::Rendering::GraphicsFormat value);
    // public UnityEngine.RenderTextureFormat get_colorFormat()
    // Offset: 0x2112010
    ::UnityEngine::RenderTextureFormat get_colorFormat();
    // public System.Void set_colorFormat(UnityEngine.RenderTextureFormat value)
    // Offset: 0x211201C
    void set_colorFormat(::UnityEngine::RenderTextureFormat value);
    // public System.Boolean get_sRGB()
    // Offset: 0x2112088
    bool get_sRGB();
    // public System.Void set_sRGB(System.Boolean value)
    // Offset: 0x2112094
    void set_sRGB(bool value);
    // public System.Int32 get_depthBufferBits()
    // Offset: 0x2111BA8
    int get_depthBufferBits();
    // public System.Void set_depthBufferBits(System.Int32 value)
    // Offset: 0x21120F0
    void set_depthBufferBits(int value);
    // public System.Void set_dimension(UnityEngine.Rendering.TextureDimension value)
    // Offset: 0x211211C
    void set_dimension(::UnityEngine::Rendering::TextureDimension value);
    // public System.Void set_shadowSamplingMode(UnityEngine.Rendering.ShadowSamplingMode value)
    // Offset: 0x2112124
    void set_shadowSamplingMode(::UnityEngine::Rendering::ShadowSamplingMode value);
    // public System.Void set_vrUsage(UnityEngine.VRTextureUsage value)
    // Offset: 0x211212C
    void set_vrUsage(::UnityEngine::VRTextureUsage value);
    // public System.Void set_memoryless(UnityEngine.RenderTextureMemoryless value)
    // Offset: 0x2112134
    void set_memoryless(::UnityEngine::RenderTextureMemoryless value);
    // public System.Void set_useMipMap(System.Boolean value)
    // Offset: 0x211219C
    void set_useMipMap(bool value);
    // public System.Void set_autoGenerateMips(System.Boolean value)
    // Offset: 0x21121B8
    void set_autoGenerateMips(bool value);
    // public System.Void set_enableRandomWrite(System.Boolean value)
    // Offset: 0x21121D4
    void set_enableRandomWrite(bool value);
    // System.Void set_createdFromScript(System.Boolean value)
    // Offset: 0x2111CCC
    void set_createdFromScript(bool value);
    // public System.Void set_useDynamicScale(System.Boolean value)
    // Offset: 0x2111E28
    void set_useDynamicScale(bool value);
    // public System.Void .ctor(System.Int32 width, System.Int32 height, UnityEngine.RenderTextureFormat colorFormat, System.Int32 depthBufferBits)
    // Offset: 0x211213C
    RenderTextureDescriptor(int width, int height, ::UnityEngine::RenderTextureFormat colorFormat, int depthBufferBits);
    // public System.Void .ctor(System.Int32 width, System.Int32 height, UnityEngine.Experimental.Rendering.GraphicsFormat colorFormat, System.Int32 depthBufferBits)
    // Offset: 0x2111D88
    RenderTextureDescriptor(int width, int height, ::UnityEngine::Experimental::Rendering::GraphicsFormat colorFormat, int depthBufferBits);
    // public System.Void .ctor(System.Int32 width, System.Int32 height, UnityEngine.Experimental.Rendering.GraphicsFormat colorFormat, System.Int32 depthBufferBits, System.Int32 mipCount)
    // Offset: 0x21117D0
    RenderTextureDescriptor(int width, int height, ::UnityEngine::Experimental::Rendering::GraphicsFormat colorFormat, int depthBufferBits, int mipCount);
    // static private System.Void .cctor()
    // Offset: 0x21121F0
    static void _cctor();
    // private System.Void SetOrClearRenderTextureCreationFlag(System.Boolean value, UnityEngine.RenderTextureCreationFlags flag)
    // Offset: 0x2111FF4
    void SetOrClearRenderTextureCreationFlag(bool value, ::UnityEngine::RenderTextureCreationFlags flag);
  }; // UnityEngine.RenderTextureDescriptor
  #pragma pack(pop)
  static check_size<sizeof(RenderTextureDescriptor), 48 + sizeof(::UnityEngine::RenderTextureMemoryless)> __UnityEngine_RenderTextureDescriptorSizeCheck;
  static_assert(sizeof(RenderTextureDescriptor) == 0x34);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::RenderTextureDescriptor::get_width
// Il2CppName: get_width
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::RenderTextureDescriptor::*)()>(&UnityEngine::RenderTextureDescriptor::get_width)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::RenderTextureDescriptor), "get_width", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::RenderTextureDescriptor::set_width
// Il2CppName: set_width
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::RenderTextureDescriptor::*)(int)>(&UnityEngine::RenderTextureDescriptor::set_width)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::RenderTextureDescriptor), "set_width", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::RenderTextureDescriptor::get_height
// Il2CppName: get_height
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::RenderTextureDescriptor::*)()>(&UnityEngine::RenderTextureDescriptor::get_height)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::RenderTextureDescriptor), "get_height", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::RenderTextureDescriptor::set_height
// Il2CppName: set_height
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::RenderTextureDescriptor::*)(int)>(&UnityEngine::RenderTextureDescriptor::set_height)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::RenderTextureDescriptor), "set_height", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::RenderTextureDescriptor::get_msaaSamples
// Il2CppName: get_msaaSamples
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::RenderTextureDescriptor::*)()>(&UnityEngine::RenderTextureDescriptor::get_msaaSamples)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::RenderTextureDescriptor), "get_msaaSamples", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::RenderTextureDescriptor::set_msaaSamples
// Il2CppName: set_msaaSamples
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::RenderTextureDescriptor::*)(int)>(&UnityEngine::RenderTextureDescriptor::set_msaaSamples)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::RenderTextureDescriptor), "set_msaaSamples", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::RenderTextureDescriptor::get_volumeDepth
// Il2CppName: get_volumeDepth
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::RenderTextureDescriptor::*)()>(&UnityEngine::RenderTextureDescriptor::get_volumeDepth)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::RenderTextureDescriptor), "get_volumeDepth", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::RenderTextureDescriptor::set_volumeDepth
// Il2CppName: set_volumeDepth
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::RenderTextureDescriptor::*)(int)>(&UnityEngine::RenderTextureDescriptor::set_volumeDepth)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::RenderTextureDescriptor), "set_volumeDepth", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::RenderTextureDescriptor::set_mipCount
// Il2CppName: set_mipCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::RenderTextureDescriptor::*)(int)>(&UnityEngine::RenderTextureDescriptor::set_mipCount)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::RenderTextureDescriptor), "set_mipCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::RenderTextureDescriptor::get_graphicsFormat
// Il2CppName: get_graphicsFormat
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Experimental::Rendering::GraphicsFormat (UnityEngine::RenderTextureDescriptor::*)()>(&UnityEngine::RenderTextureDescriptor::get_graphicsFormat)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::RenderTextureDescriptor), "get_graphicsFormat", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::RenderTextureDescriptor::set_graphicsFormat
// Il2CppName: set_graphicsFormat
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::RenderTextureDescriptor::*)(::UnityEngine::Experimental::Rendering::GraphicsFormat)>(&UnityEngine::RenderTextureDescriptor::set_graphicsFormat)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.Experimental.Rendering", "GraphicsFormat")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::RenderTextureDescriptor), "set_graphicsFormat", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::RenderTextureDescriptor::get_colorFormat
// Il2CppName: get_colorFormat
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::RenderTextureFormat (UnityEngine::RenderTextureDescriptor::*)()>(&UnityEngine::RenderTextureDescriptor::get_colorFormat)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::RenderTextureDescriptor), "get_colorFormat", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::RenderTextureDescriptor::set_colorFormat
// Il2CppName: set_colorFormat
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::RenderTextureDescriptor::*)(::UnityEngine::RenderTextureFormat)>(&UnityEngine::RenderTextureDescriptor::set_colorFormat)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "RenderTextureFormat")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::RenderTextureDescriptor), "set_colorFormat", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::RenderTextureDescriptor::get_sRGB
// Il2CppName: get_sRGB
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::RenderTextureDescriptor::*)()>(&UnityEngine::RenderTextureDescriptor::get_sRGB)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::RenderTextureDescriptor), "get_sRGB", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::RenderTextureDescriptor::set_sRGB
// Il2CppName: set_sRGB
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::RenderTextureDescriptor::*)(bool)>(&UnityEngine::RenderTextureDescriptor::set_sRGB)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::RenderTextureDescriptor), "set_sRGB", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::RenderTextureDescriptor::get_depthBufferBits
// Il2CppName: get_depthBufferBits
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::RenderTextureDescriptor::*)()>(&UnityEngine::RenderTextureDescriptor::get_depthBufferBits)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::RenderTextureDescriptor), "get_depthBufferBits", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::RenderTextureDescriptor::set_depthBufferBits
// Il2CppName: set_depthBufferBits
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::RenderTextureDescriptor::*)(int)>(&UnityEngine::RenderTextureDescriptor::set_depthBufferBits)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::RenderTextureDescriptor), "set_depthBufferBits", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::RenderTextureDescriptor::set_dimension
// Il2CppName: set_dimension
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::RenderTextureDescriptor::*)(::UnityEngine::Rendering::TextureDimension)>(&UnityEngine::RenderTextureDescriptor::set_dimension)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering", "TextureDimension")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::RenderTextureDescriptor), "set_dimension", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::RenderTextureDescriptor::set_shadowSamplingMode
// Il2CppName: set_shadowSamplingMode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::RenderTextureDescriptor::*)(::UnityEngine::Rendering::ShadowSamplingMode)>(&UnityEngine::RenderTextureDescriptor::set_shadowSamplingMode)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering", "ShadowSamplingMode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::RenderTextureDescriptor), "set_shadowSamplingMode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::RenderTextureDescriptor::set_vrUsage
// Il2CppName: set_vrUsage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::RenderTextureDescriptor::*)(::UnityEngine::VRTextureUsage)>(&UnityEngine::RenderTextureDescriptor::set_vrUsage)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "VRTextureUsage")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::RenderTextureDescriptor), "set_vrUsage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::RenderTextureDescriptor::set_memoryless
// Il2CppName: set_memoryless
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::RenderTextureDescriptor::*)(::UnityEngine::RenderTextureMemoryless)>(&UnityEngine::RenderTextureDescriptor::set_memoryless)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "RenderTextureMemoryless")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::RenderTextureDescriptor), "set_memoryless", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::RenderTextureDescriptor::set_useMipMap
// Il2CppName: set_useMipMap
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::RenderTextureDescriptor::*)(bool)>(&UnityEngine::RenderTextureDescriptor::set_useMipMap)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::RenderTextureDescriptor), "set_useMipMap", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::RenderTextureDescriptor::set_autoGenerateMips
// Il2CppName: set_autoGenerateMips
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::RenderTextureDescriptor::*)(bool)>(&UnityEngine::RenderTextureDescriptor::set_autoGenerateMips)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::RenderTextureDescriptor), "set_autoGenerateMips", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::RenderTextureDescriptor::set_enableRandomWrite
// Il2CppName: set_enableRandomWrite
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::RenderTextureDescriptor::*)(bool)>(&UnityEngine::RenderTextureDescriptor::set_enableRandomWrite)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::RenderTextureDescriptor), "set_enableRandomWrite", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::RenderTextureDescriptor::set_createdFromScript
// Il2CppName: set_createdFromScript
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::RenderTextureDescriptor::*)(bool)>(&UnityEngine::RenderTextureDescriptor::set_createdFromScript)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::RenderTextureDescriptor), "set_createdFromScript", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::RenderTextureDescriptor::set_useDynamicScale
// Il2CppName: set_useDynamicScale
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::RenderTextureDescriptor::*)(bool)>(&UnityEngine::RenderTextureDescriptor::set_useDynamicScale)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::RenderTextureDescriptor), "set_useDynamicScale", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::RenderTextureDescriptor::RenderTextureDescriptor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::RenderTextureDescriptor::RenderTextureDescriptor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::RenderTextureDescriptor::RenderTextureDescriptor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::RenderTextureDescriptor::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::RenderTextureDescriptor::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::RenderTextureDescriptor), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::RenderTextureDescriptor::SetOrClearRenderTextureCreationFlag
// Il2CppName: SetOrClearRenderTextureCreationFlag
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::RenderTextureDescriptor::*)(bool, ::UnityEngine::RenderTextureCreationFlags)>(&UnityEngine::RenderTextureDescriptor::SetOrClearRenderTextureCreationFlag)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* flag = &::il2cpp_utils::GetClassFromName("UnityEngine", "RenderTextureCreationFlags")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::RenderTextureDescriptor), "SetOrClearRenderTextureCreationFlag", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value, flag});
  }
};
