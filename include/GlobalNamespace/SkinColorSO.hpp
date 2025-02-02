// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: PersistentScriptableObject
#include "GlobalNamespace/PersistentScriptableObject.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: SkinColorSO
  class SkinColorSO;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::SkinColorSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SkinColorSO*, "", "SkinColorSO");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: SkinColorSO
  // [TokenAttribute] Offset: FFFFFFFF
  class SkinColorSO : public ::GlobalNamespace::PersistentScriptableObject {
    public:
    public:
    // private System.String _id
    // Size: 0x8
    // Offset: 0x18
    ::StringW id;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private UnityEngine.Color _color
    // Size: 0x10
    // Offset: 0x20
    ::UnityEngine::Color color;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color) == 0x10);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private System.String _id
    [[deprecated("Use field access instead!")]] ::StringW& dyn__id();
    // Get instance field reference: private UnityEngine.Color _color
    [[deprecated("Use field access instead!")]] ::UnityEngine::Color& dyn__color();
    // public System.String get_id()
    // Offset: 0x1420B04
    ::StringW get_id();
    // public UnityEngine.Color get_Color()
    // Offset: 0x1420B0C
    ::UnityEngine::Color get_Color();
    // public System.Void .ctor()
    // Offset: 0x1420B18
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SkinColorSO* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::SkinColorSO::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SkinColorSO*, creationType>()));
    }
  }; // SkinColorSO
  #pragma pack(pop)
  static check_size<sizeof(SkinColorSO), 32 + sizeof(::UnityEngine::Color)> __GlobalNamespace_SkinColorSOSizeCheck;
  static_assert(sizeof(SkinColorSO) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::SkinColorSO::get_id
// Il2CppName: get_id
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::SkinColorSO::*)()>(&GlobalNamespace::SkinColorSO::get_id)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SkinColorSO*), "get_id", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SkinColorSO::get_Color
// Il2CppName: get_Color
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (GlobalNamespace::SkinColorSO::*)()>(&GlobalNamespace::SkinColorSO::get_Color)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SkinColorSO*), "get_Color", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SkinColorSO::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
