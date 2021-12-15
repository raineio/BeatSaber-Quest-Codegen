// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "extern/beatsaber-hook/shared/utils/typedefs-array.hpp"
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
// Type namespace: RootMotion
namespace RootMotion {
  // Forward declaring type: Hierarchy
  class Hierarchy;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(RootMotion::Hierarchy);
DEFINE_IL2CPP_ARG_TYPE(RootMotion::Hierarchy*, "RootMotion", "Hierarchy");
// Type namespace: RootMotion
namespace RootMotion {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: RootMotion.Hierarchy
  // [TokenAttribute] Offset: FFFFFFFF
  class Hierarchy : public ::Il2CppObject {
    public:
    // static public System.Boolean HierarchyIsValid(UnityEngine.Transform[] bones)
    // Offset: 0x1CA72A8
    static bool HierarchyIsValid(::ArrayW<UnityEngine::Transform*> bones);
    // static public UnityEngine.Object ContainsDuplicate(UnityEngine.Object[] objects)
    // Offset: 0x1CA74A8
    static UnityEngine::Object* ContainsDuplicate(::ArrayW<UnityEngine::Object*> objects);
    // static public System.Boolean IsAncestor(UnityEngine.Transform transform, UnityEngine.Transform ancestor)
    // Offset: 0x1CA7340
    static bool IsAncestor(UnityEngine::Transform* transform, UnityEngine::Transform* ancestor);
    // static public System.Boolean ContainsChild(UnityEngine.Transform transform, UnityEngine.Transform child)
    // Offset: 0x1CA75CC
    static bool ContainsChild(UnityEngine::Transform* transform, UnityEngine::Transform* child);
    // static public System.Void AddAncestors(UnityEngine.Transform transform, UnityEngine.Transform blocker, ref UnityEngine.Transform[] array)
    // Offset: 0x1CA76F0
    static void AddAncestors(UnityEngine::Transform* transform, UnityEngine::Transform* blocker, ByRef<::ArrayW<UnityEngine::Transform*>> array);
    // static public UnityEngine.Transform GetAncestor(UnityEngine.Transform transform, System.Int32 minChildCount)
    // Offset: 0x1CA7998
    static UnityEngine::Transform* GetAncestor(UnityEngine::Transform* transform, int minChildCount);
    // static public UnityEngine.Transform GetFirstCommonAncestor(UnityEngine.Transform t1, UnityEngine.Transform t2)
    // Offset: 0x1CA7AB4
    static UnityEngine::Transform* GetFirstCommonAncestor(UnityEngine::Transform* t1, UnityEngine::Transform* t2);
    // static public UnityEngine.Transform GetFirstCommonAncestor(UnityEngine.Transform[] transforms)
    // Offset: 0x1CA7C3C
    static UnityEngine::Transform* GetFirstCommonAncestor(::ArrayW<UnityEngine::Transform*> transforms);
    // static public UnityEngine.Transform GetFirstCommonAncestorRecursive(UnityEngine.Transform transform, UnityEngine.Transform[] transforms)
    // Offset: 0x1CA7FD0
    static UnityEngine::Transform* GetFirstCommonAncestorRecursive(UnityEngine::Transform* transform, ::ArrayW<UnityEngine::Transform*> transforms);
    // static public System.Boolean IsCommonAncestor(UnityEngine.Transform transform, UnityEngine.Transform[] transforms)
    // Offset: 0x1CA7DBC
    static bool IsCommonAncestor(UnityEngine::Transform* transform, ::ArrayW<UnityEngine::Transform*> transforms);
    // public System.Void .ctor()
    // Offset: 0x1CA8170
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Hierarchy* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("RootMotion::Hierarchy::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Hierarchy*, creationType>()));
    }
  }; // RootMotion.Hierarchy
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: RootMotion::Hierarchy::HierarchyIsValid
// Il2CppName: HierarchyIsValid
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::ArrayW<UnityEngine::Transform*>)>(&RootMotion::Hierarchy::HierarchyIsValid)> {
  static const MethodInfo* get() {
    static auto* bones = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "Transform"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::Hierarchy*), "HierarchyIsValid", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bones});
  }
};
// Writing MetadataGetter for method: RootMotion::Hierarchy::ContainsDuplicate
// Il2CppName: ContainsDuplicate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Object* (*)(::ArrayW<UnityEngine::Object*>)>(&RootMotion::Hierarchy::ContainsDuplicate)> {
  static const MethodInfo* get() {
    static auto* objects = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "Object"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::Hierarchy*), "ContainsDuplicate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{objects});
  }
};
// Writing MetadataGetter for method: RootMotion::Hierarchy::IsAncestor
// Il2CppName: IsAncestor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(UnityEngine::Transform*, UnityEngine::Transform*)>(&RootMotion::Hierarchy::IsAncestor)> {
  static const MethodInfo* get() {
    static auto* transform = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    static auto* ancestor = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::Hierarchy*), "IsAncestor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{transform, ancestor});
  }
};
// Writing MetadataGetter for method: RootMotion::Hierarchy::ContainsChild
// Il2CppName: ContainsChild
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(UnityEngine::Transform*, UnityEngine::Transform*)>(&RootMotion::Hierarchy::ContainsChild)> {
  static const MethodInfo* get() {
    static auto* transform = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    static auto* child = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::Hierarchy*), "ContainsChild", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{transform, child});
  }
};
// Writing MetadataGetter for method: RootMotion::Hierarchy::AddAncestors
// Il2CppName: AddAncestors
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::Transform*, UnityEngine::Transform*, ByRef<::ArrayW<UnityEngine::Transform*>>)>(&RootMotion::Hierarchy::AddAncestors)> {
  static const MethodInfo* get() {
    static auto* transform = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    static auto* blocker = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    static auto* array = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "Transform"), 1)->this_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::Hierarchy*), "AddAncestors", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{transform, blocker, array});
  }
};
// Writing MetadataGetter for method: RootMotion::Hierarchy::GetAncestor
// Il2CppName: GetAncestor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Transform* (*)(UnityEngine::Transform*, int)>(&RootMotion::Hierarchy::GetAncestor)> {
  static const MethodInfo* get() {
    static auto* transform = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    static auto* minChildCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::Hierarchy*), "GetAncestor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{transform, minChildCount});
  }
};
// Writing MetadataGetter for method: RootMotion::Hierarchy::GetFirstCommonAncestor
// Il2CppName: GetFirstCommonAncestor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Transform* (*)(UnityEngine::Transform*, UnityEngine::Transform*)>(&RootMotion::Hierarchy::GetFirstCommonAncestor)> {
  static const MethodInfo* get() {
    static auto* t1 = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    static auto* t2 = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::Hierarchy*), "GetFirstCommonAncestor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{t1, t2});
  }
};
// Writing MetadataGetter for method: RootMotion::Hierarchy::GetFirstCommonAncestor
// Il2CppName: GetFirstCommonAncestor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Transform* (*)(::ArrayW<UnityEngine::Transform*>)>(&RootMotion::Hierarchy::GetFirstCommonAncestor)> {
  static const MethodInfo* get() {
    static auto* transforms = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "Transform"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::Hierarchy*), "GetFirstCommonAncestor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{transforms});
  }
};
// Writing MetadataGetter for method: RootMotion::Hierarchy::GetFirstCommonAncestorRecursive
// Il2CppName: GetFirstCommonAncestorRecursive
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Transform* (*)(UnityEngine::Transform*, ::ArrayW<UnityEngine::Transform*>)>(&RootMotion::Hierarchy::GetFirstCommonAncestorRecursive)> {
  static const MethodInfo* get() {
    static auto* transform = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    static auto* transforms = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "Transform"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::Hierarchy*), "GetFirstCommonAncestorRecursive", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{transform, transforms});
  }
};
// Writing MetadataGetter for method: RootMotion::Hierarchy::IsCommonAncestor
// Il2CppName: IsCommonAncestor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(UnityEngine::Transform*, ::ArrayW<UnityEngine::Transform*>)>(&RootMotion::Hierarchy::IsCommonAncestor)> {
  static const MethodInfo* get() {
    static auto* transform = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    static auto* transforms = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "Transform"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::Hierarchy*), "IsCommonAncestor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{transform, transforms});
  }
};
// Writing MetadataGetter for method: RootMotion::Hierarchy::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
