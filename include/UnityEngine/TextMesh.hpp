// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Component
#include "UnityEngine/Component.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: TextAlignment
  struct TextAlignment;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: TextMesh
  class TextMesh;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(UnityEngine::TextMesh);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::TextMesh*, "UnityEngine", "TextMesh");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.TextMesh
  // [TokenAttribute] Offset: FFFFFFFF
  // [NativeClassAttribute] Offset: ECC360
  // [NativeHeaderAttribute] Offset: ECC360
  // [RequireComponent] Offset: ECC360
  class TextMesh : public UnityEngine::Component {
    public:
    // public System.Void set_text(System.String value)
    // Offset: 0x26C6894
    void set_text(::Il2CppString* value);
    // public UnityEngine.TextAlignment get_alignment()
    // Offset: 0x26C68E4
    UnityEngine::TextAlignment get_alignment();
    // public System.Void set_alignment(UnityEngine.TextAlignment value)
    // Offset: 0x26C6924
    void set_alignment(UnityEngine::TextAlignment value);
  }; // UnityEngine.TextMesh
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::TextMesh::set_text
// Il2CppName: set_text
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::TextMesh::*)(::Il2CppString*)>(&UnityEngine::TextMesh::set_text)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TextMesh*), "set_text", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::TextMesh::get_alignment
// Il2CppName: get_alignment
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::TextAlignment (UnityEngine::TextMesh::*)()>(&UnityEngine::TextMesh::get_alignment)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TextMesh*), "get_alignment", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::TextMesh::set_alignment
// Il2CppName: set_alignment
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::TextMesh::*)(UnityEngine::TextAlignment)>(&UnityEngine::TextMesh::set_alignment)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "TextAlignment")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TextMesh*), "set_alignment", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
