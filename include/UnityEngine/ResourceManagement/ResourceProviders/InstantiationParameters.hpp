// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
// Including type: UnityEngine.Quaternion
#include "UnityEngine/Quaternion.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
  // Forward declaring type: Object
  class Object;
}
// Completed forward declares
// Type namespace: UnityEngine.ResourceManagement.ResourceProviders
namespace UnityEngine::ResourceManagement::ResourceProviders {
  // Forward declaring type: InstantiationParameters
  struct InstantiationParameters;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ResourceManagement::ResourceProviders::InstantiationParameters, "UnityEngine.ResourceManagement.ResourceProviders", "InstantiationParameters");
// Type namespace: UnityEngine.ResourceManagement.ResourceProviders
namespace UnityEngine::ResourceManagement::ResourceProviders {
  // Size: 0x2A
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.ResourceManagement.ResourceProviders.InstantiationParameters
  // [TokenAttribute] Offset: FFFFFFFF
  struct InstantiationParameters/*, public ::System::ValueType*/ {
    public:
    public:
    // private UnityEngine.Vector3 m_Position
    // Size: 0xC
    // Offset: 0x0
    ::UnityEngine::Vector3 m_Position;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Quaternion m_Rotation
    // Size: 0x10
    // Offset: 0xC
    ::UnityEngine::Quaternion m_Rotation;
    // Field size check
    static_assert(sizeof(::UnityEngine::Quaternion) == 0x10);
    // Padding between fields: m_Rotation and: m_Parent
    char __padding1[0x4] = {};
    // private UnityEngine.Transform m_Parent
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::Transform* m_Parent;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    // private System.Boolean m_InstantiateInWorldPosition
    // Size: 0x1
    // Offset: 0x28
    bool m_InstantiateInWorldPosition;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean m_SetPositionRotation
    // Size: 0x1
    // Offset: 0x29
    bool m_SetPositionRotation;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Creating value type constructor for type: InstantiationParameters
    constexpr InstantiationParameters(::UnityEngine::Vector3 m_Position_ = {}, ::UnityEngine::Quaternion m_Rotation_ = {}, ::UnityEngine::Transform* m_Parent_ = {}, bool m_InstantiateInWorldPosition_ = {}, bool m_SetPositionRotation_ = {}) noexcept : m_Position{m_Position_}, m_Rotation{m_Rotation_}, m_Parent{m_Parent_}, m_InstantiateInWorldPosition{m_InstantiateInWorldPosition_}, m_SetPositionRotation{m_SetPositionRotation_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: private UnityEngine.Vector3 m_Position
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_m_Position();
    // Get instance field reference: private UnityEngine.Quaternion m_Rotation
    [[deprecated("Use field access instead!")]] ::UnityEngine::Quaternion& dyn_m_Rotation();
    // Get instance field reference: private UnityEngine.Transform m_Parent
    [[deprecated("Use field access instead!")]] ::UnityEngine::Transform*& dyn_m_Parent();
    // Get instance field reference: private System.Boolean m_InstantiateInWorldPosition
    [[deprecated("Use field access instead!")]] bool& dyn_m_InstantiateInWorldPosition();
    // Get instance field reference: private System.Boolean m_SetPositionRotation
    [[deprecated("Use field access instead!")]] bool& dyn_m_SetPositionRotation();
    // public UnityEngine.Vector3 get_Position()
    // Offset: 0x1EED834
    ::UnityEngine::Vector3 get_Position();
    // public UnityEngine.Quaternion get_Rotation()
    // Offset: 0x1EED840
    ::UnityEngine::Quaternion get_Rotation();
    // public UnityEngine.Transform get_Parent()
    // Offset: 0x1EED84C
    ::UnityEngine::Transform* get_Parent();
    // public System.Boolean get_InstantiateInWorldPosition()
    // Offset: 0x1EED854
    bool get_InstantiateInWorldPosition();
    // public System.Boolean get_SetPositionRotation()
    // Offset: 0x1EED85C
    bool get_SetPositionRotation();
    // public System.Void .ctor(UnityEngine.Transform parent, System.Boolean instantiateInWorldSpace)
    // Offset: 0x1EED864
    InstantiationParameters(::UnityEngine::Transform* parent, bool instantiateInWorldSpace);
    // public System.Void .ctor(UnityEngine.Vector3 position, UnityEngine.Quaternion rotation, UnityEngine.Transform parent)
    // Offset: 0x1EED924
    InstantiationParameters(::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation, ::UnityEngine::Transform* parent);
    // public TObject Instantiate(TObject source)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class TObject>
    TObject Instantiate(TObject source) {
      static_assert(std::is_convertible_v<TObject, ::UnityEngine::Object*>);
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::ResourceManagement::ResourceProviders::InstantiationParameters::Instantiate");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "Instantiate", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TObject>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(source)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TObject>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<TObject, false>(this, ___generic__method, source);
    }
  }; // UnityEngine.ResourceManagement.ResourceProviders.InstantiationParameters
  #pragma pack(pop)
  static check_size<sizeof(InstantiationParameters), 41 + sizeof(bool)> __UnityEngine_ResourceManagement_ResourceProviders_InstantiationParametersSizeCheck;
  static_assert(sizeof(InstantiationParameters) == 0x2A);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::ResourceProviders::InstantiationParameters::get_Position
// Il2CppName: get_Position
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (UnityEngine::ResourceManagement::ResourceProviders::InstantiationParameters::*)()>(&UnityEngine::ResourceManagement::ResourceProviders::InstantiationParameters::get_Position)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::ResourceProviders::InstantiationParameters), "get_Position", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::ResourceProviders::InstantiationParameters::get_Rotation
// Il2CppName: get_Rotation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Quaternion (UnityEngine::ResourceManagement::ResourceProviders::InstantiationParameters::*)()>(&UnityEngine::ResourceManagement::ResourceProviders::InstantiationParameters::get_Rotation)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::ResourceProviders::InstantiationParameters), "get_Rotation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::ResourceProviders::InstantiationParameters::get_Parent
// Il2CppName: get_Parent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Transform* (UnityEngine::ResourceManagement::ResourceProviders::InstantiationParameters::*)()>(&UnityEngine::ResourceManagement::ResourceProviders::InstantiationParameters::get_Parent)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::ResourceProviders::InstantiationParameters), "get_Parent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::ResourceProviders::InstantiationParameters::get_InstantiateInWorldPosition
// Il2CppName: get_InstantiateInWorldPosition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::ResourceManagement::ResourceProviders::InstantiationParameters::*)()>(&UnityEngine::ResourceManagement::ResourceProviders::InstantiationParameters::get_InstantiateInWorldPosition)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::ResourceProviders::InstantiationParameters), "get_InstantiateInWorldPosition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::ResourceProviders::InstantiationParameters::get_SetPositionRotation
// Il2CppName: get_SetPositionRotation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::ResourceManagement::ResourceProviders::InstantiationParameters::*)()>(&UnityEngine::ResourceManagement::ResourceProviders::InstantiationParameters::get_SetPositionRotation)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::ResourceProviders::InstantiationParameters), "get_SetPositionRotation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::ResourceProviders::InstantiationParameters::InstantiationParameters
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::ResourceProviders::InstantiationParameters::InstantiationParameters
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::ResourceProviders::InstantiationParameters::Instantiate
// Il2CppName: Instantiate
// Cannot write MetadataGetter for generic methods!
