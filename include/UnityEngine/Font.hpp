// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Object
#include "UnityEngine/Object.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Material
  class Material;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Font
  class Font;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(UnityEngine::Font);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Font*, "UnityEngine", "Font");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Font
  // [TokenAttribute] Offset: FFFFFFFF
  // [NativeClassAttribute] Offset: ECC458
  // [StaticAccessorAttribute] Offset: ECC458
  // [NativeHeaderAttribute] Offset: ECC458
  // [NativeHeaderAttribute] Offset: ECC458
  class Font : public UnityEngine::Object {
    public:
    // Nested type: UnityEngine::Font::FontTextureRebuildCallback
    class FontTextureRebuildCallback;
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // [DebuggerBrowsableAttribute] Offset: 0xECC540
    // private UnityEngine.Font/UnityEngine.FontTextureRebuildCallback m_FontTextureRebuildCallback
    // Size: 0x8
    // Offset: 0x18
    UnityEngine::Font::FontTextureRebuildCallback* m_FontTextureRebuildCallback;
    // Field size check
    static_assert(sizeof(UnityEngine::Font::FontTextureRebuildCallback*) == 0x8);
    public:
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // [DebuggerBrowsableAttribute] Offset: 0xECC504
    // Get static field: static private System.Action`1<UnityEngine.Font> textureRebuilt
    static System::Action_1<UnityEngine::Font*>* _get_textureRebuilt();
    // Set static field: static private System.Action`1<UnityEngine.Font> textureRebuilt
    static void _set_textureRebuilt(System::Action_1<UnityEngine::Font*>* value);
    // Get instance field reference: private UnityEngine.Font/UnityEngine.FontTextureRebuildCallback m_FontTextureRebuildCallback
    UnityEngine::Font::FontTextureRebuildCallback*& dyn_m_FontTextureRebuildCallback();
    // public UnityEngine.Material get_material()
    // Offset: 0x26C4BB4
    UnityEngine::Material* get_material();
    // public System.Boolean get_dynamic()
    // Offset: 0x26C4BF4
    bool get_dynamic();
    // public System.Int32 get_fontSize()
    // Offset: 0x26C4C34
    int get_fontSize();
    // static public System.Void add_textureRebuilt(System.Action`1<UnityEngine.Font> value)
    // Offset: 0x26C4A4C
    static void add_textureRebuilt(System::Action_1<UnityEngine::Font*>* value);
    // static public System.Void remove_textureRebuilt(System.Action`1<UnityEngine.Font> value)
    // Offset: 0x26C4B00
    static void remove_textureRebuilt(System::Action_1<UnityEngine::Font*>* value);
    // static System.Void InvokeTextureRebuilt_Internal(UnityEngine.Font font)
    // Offset: 0x26C4D58
    static void InvokeTextureRebuilt_Internal(UnityEngine::Font* font);
    // public System.Boolean HasCharacter(System.Char c)
    // Offset: 0x26C4FEC
    bool HasCharacter(::Il2CppChar c);
    // private System.Boolean HasCharacter(System.Int32 c)
    // Offset: 0x26C503C
    bool HasCharacter(int c);
    // static private System.Void Internal_CreateFont(UnityEngine.Font self, System.String name)
    // Offset: 0x26C4D08
    static void Internal_CreateFont(UnityEngine::Font* self, ::StringW name);
    // public System.Void .ctor()
    // Offset: 0x26C4C74
    // Implemented from: UnityEngine.Object
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Font* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Font::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Font*, creationType>()));
    }
  }; // UnityEngine.Font
  #pragma pack(pop)
  static check_size<sizeof(Font), 24 + sizeof(UnityEngine::Font::FontTextureRebuildCallback*)> __UnityEngine_FontSizeCheck;
  static_assert(sizeof(Font) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Font::get_material
// Il2CppName: get_material
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Material* (UnityEngine::Font::*)()>(&UnityEngine::Font::get_material)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Font*), "get_material", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Font::get_dynamic
// Il2CppName: get_dynamic
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Font::*)()>(&UnityEngine::Font::get_dynamic)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Font*), "get_dynamic", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Font::get_fontSize
// Il2CppName: get_fontSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::Font::*)()>(&UnityEngine::Font::get_fontSize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Font*), "get_fontSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Font::add_textureRebuilt
// Il2CppName: add_textureRebuilt
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::Action_1<UnityEngine::Font*>*)>(&UnityEngine::Font::add_textureRebuilt)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine", "Font")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Font*), "add_textureRebuilt", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Font::remove_textureRebuilt
// Il2CppName: remove_textureRebuilt
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::Action_1<UnityEngine::Font*>*)>(&UnityEngine::Font::remove_textureRebuilt)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine", "Font")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Font*), "remove_textureRebuilt", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Font::InvokeTextureRebuilt_Internal
// Il2CppName: InvokeTextureRebuilt_Internal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::Font*)>(&UnityEngine::Font::InvokeTextureRebuilt_Internal)> {
  static const MethodInfo* get() {
    static auto* font = &::il2cpp_utils::GetClassFromName("UnityEngine", "Font")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Font*), "InvokeTextureRebuilt_Internal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{font});
  }
};
// Writing MetadataGetter for method: UnityEngine::Font::HasCharacter
// Il2CppName: HasCharacter
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Font::*)(::Il2CppChar)>(&UnityEngine::Font::HasCharacter)> {
  static const MethodInfo* get() {
    static auto* c = &::il2cpp_utils::GetClassFromName("System", "Char")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Font*), "HasCharacter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{c});
  }
};
// Writing MetadataGetter for method: UnityEngine::Font::HasCharacter
// Il2CppName: HasCharacter
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Font::*)(int)>(&UnityEngine::Font::HasCharacter)> {
  static const MethodInfo* get() {
    static auto* c = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Font*), "HasCharacter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{c});
  }
};
// Writing MetadataGetter for method: UnityEngine::Font::Internal_CreateFont
// Il2CppName: Internal_CreateFont
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::Font*, ::StringW)>(&UnityEngine::Font::Internal_CreateFont)> {
  static const MethodInfo* get() {
    static auto* self = &::il2cpp_utils::GetClassFromName("UnityEngine", "Font")->byval_arg;
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Font*), "Internal_CreateFont", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{self, name});
  }
};
// Writing MetadataGetter for method: UnityEngine::Font::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
