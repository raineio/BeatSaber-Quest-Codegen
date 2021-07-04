// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Texture
  class Texture;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x28
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.GUIContent
  // [RequiredByNativeCodeAttribute] Offset: DAD8E8
  // [NativeHeaderAttribute] Offset: DAD8E8
  class GUIContent : public ::Il2CppObject {
    public:
    // private System.String m_Text
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* m_Text;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private UnityEngine.Texture m_Image
    // Size: 0x8
    // Offset: 0x18
    UnityEngine::Texture* m_Image;
    // Field size check
    static_assert(sizeof(UnityEngine::Texture*) == 0x8);
    // private System.String m_Tooltip
    // Size: 0x8
    // Offset: 0x20
    ::Il2CppString* m_Tooltip;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // Creating value type constructor for type: GUIContent
    GUIContent(::Il2CppString* m_Text_ = {}, UnityEngine::Texture* m_Image_ = {}, ::Il2CppString* m_Tooltip_ = {}) noexcept : m_Text{m_Text_}, m_Image{m_Image_}, m_Tooltip{m_Tooltip_} {}
    // Get static field: static private readonly UnityEngine.GUIContent s_Text
    static UnityEngine::GUIContent* _get_s_Text();
    // Set static field: static private readonly UnityEngine.GUIContent s_Text
    static void _set_s_Text(UnityEngine::GUIContent* value);
    // Get static field: static private readonly UnityEngine.GUIContent s_Image
    static UnityEngine::GUIContent* _get_s_Image();
    // Set static field: static private readonly UnityEngine.GUIContent s_Image
    static void _set_s_Image(UnityEngine::GUIContent* value);
    // Get static field: static private readonly UnityEngine.GUIContent s_TextImage
    static UnityEngine::GUIContent* _get_s_TextImage();
    // Set static field: static private readonly UnityEngine.GUIContent s_TextImage
    static void _set_s_TextImage(UnityEngine::GUIContent* value);
    // Get static field: static public UnityEngine.GUIContent none
    static UnityEngine::GUIContent* _get_none();
    // Set static field: static public UnityEngine.GUIContent none
    static void _set_none(UnityEngine::GUIContent* value);
    // public System.String get_text()
    // Offset: 0x1A86144
    ::Il2CppString* get_text();
    // public System.Void set_text(System.String value)
    // Offset: 0x1A8614C
    void set_text(::Il2CppString* value);
    // public System.Void set_image(UnityEngine.Texture value)
    // Offset: 0x1A8C21C
    void set_image(UnityEngine::Texture* value);
    // public System.String get_tooltip()
    // Offset: 0x1A88368
    ::Il2CppString* get_tooltip();
    // public System.Void set_tooltip(System.String value)
    // Offset: 0x1A8C224
    void set_tooltip(::Il2CppString* value);
    // public System.Void .ctor(System.String text)
    // Offset: 0x1A8C298
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GUIContent* New_ctor(::Il2CppString* text) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::GUIContent::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GUIContent*, creationType>(text)));
    }
    // public System.Void .ctor(System.String text, UnityEngine.Texture image, System.String tooltip)
    // Offset: 0x1A8C304
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GUIContent* New_ctor(::Il2CppString* text, UnityEngine::Texture* image, ::Il2CppString* tooltip) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::GUIContent::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GUIContent*, creationType>(text, image, tooltip)));
    }
    // public System.Void .ctor(UnityEngine.GUIContent src)
    // Offset: 0x1A8C398
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GUIContent* New_ctor(UnityEngine::GUIContent* src) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::GUIContent::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GUIContent*, creationType>(src)));
    }
    // static UnityEngine.GUIContent Temp(System.String t)
    // Offset: 0x1A8C434
    static UnityEngine::GUIContent* Temp(::Il2CppString* t);
    // static UnityEngine.GUIContent Temp(UnityEngine.Texture i)
    // Offset: 0x1A8C4D8
    static UnityEngine::GUIContent* Temp(UnityEngine::Texture* i);
    // static System.Void ClearStaticCache()
    // Offset: 0x1A8C57C
    static void ClearStaticCache();
    // static private System.Void .cctor()
    // Offset: 0x1A8C65C
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0x1A8C22C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GUIContent* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::GUIContent::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GUIContent*, creationType>()));
    }
  }; // UnityEngine.GUIContent
  #pragma pack(pop)
  static check_size<sizeof(GUIContent), 32 + sizeof(::Il2CppString*)> __UnityEngine_GUIContentSizeCheck;
  static_assert(sizeof(GUIContent) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::GUIContent*, "UnityEngine", "GUIContent");
// Writing MetadataGetter for method: UnityEngine::GUIContent::get_text
// Il2CppName: get_text
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (UnityEngine::GUIContent::*)()>(&UnityEngine::GUIContent::get_text)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::GUIContent*), "get_text", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::GUIContent::set_text
// Il2CppName: set_text
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::GUIContent::*)(::Il2CppString*)>(&UnityEngine::GUIContent::set_text)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::GUIContent*), "set_text", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::GUIContent::set_image
// Il2CppName: set_image
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::GUIContent::*)(UnityEngine::Texture*)>(&UnityEngine::GUIContent::set_image)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::GUIContent*), "set_image", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::Texture*>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::GUIContent::get_tooltip
// Il2CppName: get_tooltip
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (UnityEngine::GUIContent::*)()>(&UnityEngine::GUIContent::get_tooltip)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::GUIContent*), "get_tooltip", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::GUIContent::set_tooltip
// Il2CppName: set_tooltip
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::GUIContent::*)(::Il2CppString*)>(&UnityEngine::GUIContent::set_tooltip)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::GUIContent*), "set_tooltip", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::GUIContent::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::GUIContent::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::GUIContent::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::GUIContent::Temp
// Il2CppName: Temp
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::GUIContent* (*)(::Il2CppString*)>(&UnityEngine::GUIContent::Temp)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::GUIContent*), "Temp", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::GUIContent::Temp
// Il2CppName: Temp
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::GUIContent* (*)(UnityEngine::Texture*)>(&UnityEngine::GUIContent::Temp)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::GUIContent*), "Temp", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::Texture*>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::GUIContent::ClearStaticCache
// Il2CppName: ClearStaticCache
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::GUIContent::ClearStaticCache)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::GUIContent*), "ClearStaticCache", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::GUIContent::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::GUIContent::_cctor)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::GUIContent*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::GUIContent::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
