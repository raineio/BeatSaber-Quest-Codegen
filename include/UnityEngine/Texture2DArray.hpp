// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.Texture
#include "UnityEngine/Texture.hpp"
// Including type: UnityEngine.Experimental.Rendering.DefaultFormat
#include "UnityEngine/Experimental/Rendering/DefaultFormat.hpp"
// Including type: UnityEngine.Experimental.Rendering.TextureCreationFlags
#include "UnityEngine/Experimental/Rendering/TextureCreationFlags.hpp"
// Including type: UnityEngine.Experimental.Rendering.GraphicsFormat
#include "UnityEngine/Experimental/Rendering/GraphicsFormat.hpp"
// Including type: UnityEngine.TextureFormat
#include "UnityEngine/TextureFormat.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Texture2DArray
  // [NativeHeaderAttribute] Offset: D8F2F4
  class Texture2DArray : public UnityEngine::Texture {
    public:
    // Creating value type constructor for type: Texture2DArray
    Texture2DArray() noexcept {}
    // static public System.Int32 get_allSlices()
    // Offset: 0x231BC58
    static int get_allSlices();
    // static private System.Boolean Internal_CreateImpl(UnityEngine.Texture2DArray mono, System.Int32 w, System.Int32 h, System.Int32 d, System.Int32 mipCount, UnityEngine.Experimental.Rendering.GraphicsFormat format, UnityEngine.Experimental.Rendering.TextureCreationFlags flags)
    // Offset: 0x231BCCC
    static bool Internal_CreateImpl(UnityEngine::Texture2DArray* mono, int w, int h, int d, int mipCount, UnityEngine::Experimental::Rendering::GraphicsFormat format, UnityEngine::Experimental::Rendering::TextureCreationFlags flags);
    // static private System.Void Internal_Create(UnityEngine.Texture2DArray mono, System.Int32 w, System.Int32 h, System.Int32 d, System.Int32 mipCount, UnityEngine.Experimental.Rendering.GraphicsFormat format, UnityEngine.Experimental.Rendering.TextureCreationFlags flags)
    // Offset: 0x231BD54
    static void Internal_Create(UnityEngine::Texture2DArray* mono, int w, int h, int d, int mipCount, UnityEngine::Experimental::Rendering::GraphicsFormat format, UnityEngine::Experimental::Rendering::TextureCreationFlags flags);
    // public System.Void .ctor(System.Int32 width, System.Int32 height, System.Int32 depth, UnityEngine.Experimental.Rendering.DefaultFormat format, UnityEngine.Experimental.Rendering.TextureCreationFlags flags)
    // Offset: 0x231BE40
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Texture2DArray* New_ctor(int width, int height, int depth, UnityEngine::Experimental::Rendering::DefaultFormat format, UnityEngine::Experimental::Rendering::TextureCreationFlags flags) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Texture2DArray::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Texture2DArray*, creationType>(width, height, depth, format, flags)));
    }
    // public System.Void .ctor(System.Int32 width, System.Int32 height, System.Int32 depth, UnityEngine.Experimental.Rendering.GraphicsFormat format, UnityEngine.Experimental.Rendering.TextureCreationFlags flags)
    // Offset: 0x231BEC8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Texture2DArray* New_ctor(int width, int height, int depth, UnityEngine::Experimental::Rendering::GraphicsFormat format, UnityEngine::Experimental::Rendering::TextureCreationFlags flags) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Texture2DArray::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Texture2DArray*, creationType>(width, height, depth, format, flags)));
    }
    // public System.Void .ctor(System.Int32 width, System.Int32 height, System.Int32 depth, UnityEngine.Experimental.Rendering.GraphicsFormat format, UnityEngine.Experimental.Rendering.TextureCreationFlags flags, System.Int32 mipCount)
    // Offset: 0x231BF78
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Texture2DArray* New_ctor(int width, int height, int depth, UnityEngine::Experimental::Rendering::GraphicsFormat format, UnityEngine::Experimental::Rendering::TextureCreationFlags flags, int mipCount) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Texture2DArray::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Texture2DArray*, creationType>(width, height, depth, format, flags, mipCount)));
    }
    // public System.Void .ctor(System.Int32 width, System.Int32 height, System.Int32 depth, UnityEngine.TextureFormat textureFormat, System.Int32 mipCount, System.Boolean linear)
    // Offset: 0x231C058
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Texture2DArray* New_ctor(int width, int height, int depth, UnityEngine::TextureFormat textureFormat, int mipCount, bool linear) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Texture2DArray::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Texture2DArray*, creationType>(width, height, depth, textureFormat, mipCount, linear)));
    }
    // public System.Void .ctor(System.Int32 width, System.Int32 height, System.Int32 depth, UnityEngine.TextureFormat textureFormat, System.Boolean mipChain, System.Boolean linear)
    // Offset: 0x231C168
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Texture2DArray* New_ctor(int width, int height, int depth, UnityEngine::TextureFormat textureFormat, bool mipChain, bool linear) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Texture2DArray::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Texture2DArray*, creationType>(width, height, depth, textureFormat, mipChain, linear)));
    }
    // public System.Void .ctor(System.Int32 width, System.Int32 height, System.Int32 depth, UnityEngine.TextureFormat textureFormat, System.Boolean mipChain)
    // Offset: 0x231C18C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Texture2DArray* New_ctor(int width, int height, int depth, UnityEngine::TextureFormat textureFormat, bool mipChain) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Texture2DArray::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Texture2DArray*, creationType>(width, height, depth, textureFormat, mipChain)));
    }
    // public override System.Boolean get_isReadable()
    // Offset: 0x231BC8C
    // Implemented from: UnityEngine.Texture
    // Base method: System.Boolean Texture::get_isReadable()
    bool get_isReadable();
  }; // UnityEngine.Texture2DArray
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Texture2DArray*, "UnityEngine", "Texture2DArray");
// Writing MetadataGetter for method: UnityEngine::Texture2DArray::get_allSlices
// Il2CppName: get_allSlices
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)()>(&UnityEngine::Texture2DArray::get_allSlices)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Texture2DArray*), "get_allSlices", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Texture2DArray::Internal_CreateImpl
// Il2CppName: Internal_CreateImpl
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(UnityEngine::Texture2DArray*, int, int, int, int, UnityEngine::Experimental::Rendering::GraphicsFormat, UnityEngine::Experimental::Rendering::TextureCreationFlags)>(&UnityEngine::Texture2DArray::Internal_CreateImpl)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Texture2DArray*), "Internal_CreateImpl", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::Texture2DArray*>(), ::il2cpp_utils::ExtractIndependentType<int>(), ::il2cpp_utils::ExtractIndependentType<int>(), ::il2cpp_utils::ExtractIndependentType<int>(), ::il2cpp_utils::ExtractIndependentType<int>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::Experimental::Rendering::GraphicsFormat>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::Experimental::Rendering::TextureCreationFlags>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::Texture2DArray::Internal_Create
// Il2CppName: Internal_Create
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::Texture2DArray*, int, int, int, int, UnityEngine::Experimental::Rendering::GraphicsFormat, UnityEngine::Experimental::Rendering::TextureCreationFlags)>(&UnityEngine::Texture2DArray::Internal_Create)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Texture2DArray*), "Internal_Create", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::Texture2DArray*>(), ::il2cpp_utils::ExtractIndependentType<int>(), ::il2cpp_utils::ExtractIndependentType<int>(), ::il2cpp_utils::ExtractIndependentType<int>(), ::il2cpp_utils::ExtractIndependentType<int>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::Experimental::Rendering::GraphicsFormat>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::Experimental::Rendering::TextureCreationFlags>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::Texture2DArray::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::Texture2DArray::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::Texture2DArray::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::Texture2DArray::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::Texture2DArray::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::Texture2DArray::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::Texture2DArray::get_isReadable
// Il2CppName: get_isReadable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Texture2DArray::*)()>(&UnityEngine::Texture2DArray::get_isReadable)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Texture2DArray*), "get_isReadable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
