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
  // Forward declaring type: Vector2
  struct Vector2;
  // Forward declaring type: Quaternion
  struct Quaternion;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: NoteCutDirection
  struct NoteCutDirection;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: NoteCutDirectionExtensions
  class NoteCutDirectionExtensions;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(GlobalNamespace::NoteCutDirectionExtensions);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::NoteCutDirectionExtensions*, "", "NoteCutDirectionExtensions");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: NoteCutDirectionExtensions
  // [TokenAttribute] Offset: FFFFFFFF
  // [ExtensionAttribute] Offset: FFFFFFFF
  class NoteCutDirectionExtensions : public ::Il2CppObject {
    public:
    // static public UnityEngine.Vector2 Direction(NoteCutDirection cutDirection)
    // Offset: 0x26BE3A8
    static UnityEngine::Vector2 Direction(GlobalNamespace::NoteCutDirection cutDirection);
    // static public System.Single RotationAngle(NoteCutDirection cutDirection)
    // Offset: 0x26BE48C
    static float RotationAngle(GlobalNamespace::NoteCutDirection cutDirection);
    // static public UnityEngine.Quaternion Rotation(NoteCutDirection cutDirection, System.Single offset)
    // Offset: 0x26BE4AC
    static UnityEngine::Quaternion Rotation(GlobalNamespace::NoteCutDirection cutDirection, float offset);
    // static public System.Boolean IsMainDirection(NoteCutDirection cutDirection)
    // Offset: 0x26BE540
    static bool IsMainDirection(GlobalNamespace::NoteCutDirection cutDirection);
    // static public NoteCutDirection MainNoteCutDirectionFromCutDirAngle(System.Single angle)
    // Offset: 0x26BE54C
    static GlobalNamespace::NoteCutDirection MainNoteCutDirectionFromCutDirAngle(float angle);
    // static public NoteCutDirection Mirrored(NoteCutDirection cutDirection)
    // Offset: 0x26BE5D0
    static GlobalNamespace::NoteCutDirection Mirrored(GlobalNamespace::NoteCutDirection cutDirection);
    // static public System.Boolean IsOnSamePlane(NoteCutDirection noteCutDirection1, NoteCutDirection noteCutDirection2)
    // Offset: 0x26BE5EC
    static bool IsOnSamePlane(GlobalNamespace::NoteCutDirection noteCutDirection1, GlobalNamespace::NoteCutDirection noteCutDirection2);
  }; // NoteCutDirectionExtensions
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::NoteCutDirectionExtensions::Direction
// Il2CppName: Direction
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector2 (*)(GlobalNamespace::NoteCutDirection)>(&GlobalNamespace::NoteCutDirectionExtensions::Direction)> {
  static const MethodInfo* get() {
    static auto* cutDirection = &::il2cpp_utils::GetClassFromName("", "NoteCutDirection")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NoteCutDirectionExtensions*), "Direction", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{cutDirection});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NoteCutDirectionExtensions::RotationAngle
// Il2CppName: RotationAngle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)(GlobalNamespace::NoteCutDirection)>(&GlobalNamespace::NoteCutDirectionExtensions::RotationAngle)> {
  static const MethodInfo* get() {
    static auto* cutDirection = &::il2cpp_utils::GetClassFromName("", "NoteCutDirection")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NoteCutDirectionExtensions*), "RotationAngle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{cutDirection});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NoteCutDirectionExtensions::Rotation
// Il2CppName: Rotation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Quaternion (*)(GlobalNamespace::NoteCutDirection, float)>(&GlobalNamespace::NoteCutDirectionExtensions::Rotation)> {
  static const MethodInfo* get() {
    static auto* cutDirection = &::il2cpp_utils::GetClassFromName("", "NoteCutDirection")->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NoteCutDirectionExtensions*), "Rotation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{cutDirection, offset});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NoteCutDirectionExtensions::IsMainDirection
// Il2CppName: IsMainDirection
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(GlobalNamespace::NoteCutDirection)>(&GlobalNamespace::NoteCutDirectionExtensions::IsMainDirection)> {
  static const MethodInfo* get() {
    static auto* cutDirection = &::il2cpp_utils::GetClassFromName("", "NoteCutDirection")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NoteCutDirectionExtensions*), "IsMainDirection", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{cutDirection});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NoteCutDirectionExtensions::MainNoteCutDirectionFromCutDirAngle
// Il2CppName: MainNoteCutDirectionFromCutDirAngle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::NoteCutDirection (*)(float)>(&GlobalNamespace::NoteCutDirectionExtensions::MainNoteCutDirectionFromCutDirAngle)> {
  static const MethodInfo* get() {
    static auto* angle = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NoteCutDirectionExtensions*), "MainNoteCutDirectionFromCutDirAngle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{angle});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NoteCutDirectionExtensions::Mirrored
// Il2CppName: Mirrored
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::NoteCutDirection (*)(GlobalNamespace::NoteCutDirection)>(&GlobalNamespace::NoteCutDirectionExtensions::Mirrored)> {
  static const MethodInfo* get() {
    static auto* cutDirection = &::il2cpp_utils::GetClassFromName("", "NoteCutDirection")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NoteCutDirectionExtensions*), "Mirrored", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{cutDirection});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NoteCutDirectionExtensions::IsOnSamePlane
// Il2CppName: IsOnSamePlane
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(GlobalNamespace::NoteCutDirection, GlobalNamespace::NoteCutDirection)>(&GlobalNamespace::NoteCutDirectionExtensions::IsOnSamePlane)> {
  static const MethodInfo* get() {
    static auto* noteCutDirection1 = &::il2cpp_utils::GetClassFromName("", "NoteCutDirection")->byval_arg;
    static auto* noteCutDirection2 = &::il2cpp_utils::GetClassFromName("", "NoteCutDirection")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NoteCutDirectionExtensions*), "IsOnSamePlane", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{noteCutDirection1, noteCutDirection2});
  }
};
