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
  // Forward declaring type: Transform
  class Transform;
  // Forward declaring type: Object
  class Object;
}
// Completed forward declares
// Type namespace: RootMotion
namespace RootMotion {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: RootMotion.Hierarchy
  class Hierarchy : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: Hierarchy
    Hierarchy() noexcept {}
    // static public System.Boolean HierarchyIsValid(UnityEngine.Transform[] bones)
    // Offset: 0x1AAF760
    static bool HierarchyIsValid(::Array<UnityEngine::Transform*>* bones);
    // static public UnityEngine.Object ContainsDuplicate(UnityEngine.Object[] objects)
    // Offset: 0x1AAF960
    static UnityEngine::Object* ContainsDuplicate(::Array<UnityEngine::Object*>* objects);
    // static public System.Boolean IsAncestor(UnityEngine.Transform transform, UnityEngine.Transform ancestor)
    // Offset: 0x1AAF7F8
    static bool IsAncestor(UnityEngine::Transform* transform, UnityEngine::Transform* ancestor);
    // static public System.Boolean ContainsChild(UnityEngine.Transform transform, UnityEngine.Transform child)
    // Offset: 0x1AAFA84
    static bool ContainsChild(UnityEngine::Transform* transform, UnityEngine::Transform* child);
    // static public System.Void AddAncestors(UnityEngine.Transform transform, UnityEngine.Transform blocker, ref UnityEngine.Transform[] array)
    // Offset: 0x1AAFBA8
    static void AddAncestors(UnityEngine::Transform* transform, UnityEngine::Transform* blocker, ::Array<UnityEngine::Transform*>*& array);
    // static public UnityEngine.Transform GetAncestor(UnityEngine.Transform transform, System.Int32 minChildCount)
    // Offset: 0x1AAFE50
    static UnityEngine::Transform* GetAncestor(UnityEngine::Transform* transform, int minChildCount);
    // static public UnityEngine.Transform GetFirstCommonAncestor(UnityEngine.Transform t1, UnityEngine.Transform t2)
    // Offset: 0x1AAFF6C
    static UnityEngine::Transform* GetFirstCommonAncestor(UnityEngine::Transform* t1, UnityEngine::Transform* t2);
    // static public UnityEngine.Transform GetFirstCommonAncestor(UnityEngine.Transform[] transforms)
    // Offset: 0x1AB00F4
    static UnityEngine::Transform* GetFirstCommonAncestor(::Array<UnityEngine::Transform*>* transforms);
    // static public UnityEngine.Transform GetFirstCommonAncestorRecursive(UnityEngine.Transform transform, UnityEngine.Transform[] transforms)
    // Offset: 0x1AB0488
    static UnityEngine::Transform* GetFirstCommonAncestorRecursive(UnityEngine::Transform* transform, ::Array<UnityEngine::Transform*>* transforms);
    // static public System.Boolean IsCommonAncestor(UnityEngine.Transform transform, UnityEngine.Transform[] transforms)
    // Offset: 0x1AB0274
    static bool IsCommonAncestor(UnityEngine::Transform* transform, ::Array<UnityEngine::Transform*>* transforms);
    // public System.Void .ctor()
    // Offset: 0x1AB0628
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
DEFINE_IL2CPP_ARG_TYPE(RootMotion::Hierarchy*, "RootMotion", "Hierarchy");
// Writing MetadataGetter for method: RootMotion::Hierarchy::HierarchyIsValid
// Il2CppName: HierarchyIsValid
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Array<UnityEngine::Transform*>*)>(&RootMotion::Hierarchy::HierarchyIsValid)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::Hierarchy*), "HierarchyIsValid", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Array<UnityEngine::Transform*>*>()});
  }
};
// Writing MetadataGetter for method: RootMotion::Hierarchy::ContainsDuplicate
// Il2CppName: ContainsDuplicate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Object* (*)(::Array<UnityEngine::Object*>*)>(&RootMotion::Hierarchy::ContainsDuplicate)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::Hierarchy*), "ContainsDuplicate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Array<UnityEngine::Object*>*>()});
  }
};
// Writing MetadataGetter for method: RootMotion::Hierarchy::IsAncestor
// Il2CppName: IsAncestor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(UnityEngine::Transform*, UnityEngine::Transform*)>(&RootMotion::Hierarchy::IsAncestor)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::Hierarchy*), "IsAncestor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::Transform*>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::Transform*>()});
  }
};
// Writing MetadataGetter for method: RootMotion::Hierarchy::ContainsChild
// Il2CppName: ContainsChild
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(UnityEngine::Transform*, UnityEngine::Transform*)>(&RootMotion::Hierarchy::ContainsChild)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::Hierarchy*), "ContainsChild", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::Transform*>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::Transform*>()});
  }
};
// Writing MetadataGetter for method: RootMotion::Hierarchy::AddAncestors
// Il2CppName: AddAncestors
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::Transform*, UnityEngine::Transform*, ::Array<UnityEngine::Transform*>*&)>(&RootMotion::Hierarchy::AddAncestors)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::Hierarchy*), "AddAncestors", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::Transform*>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::Transform*>(), ::il2cpp_utils::ExtractIndependentType<::Array<UnityEngine::Transform*>*&>()});
  }
};
// Writing MetadataGetter for method: RootMotion::Hierarchy::GetAncestor
// Il2CppName: GetAncestor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Transform* (*)(UnityEngine::Transform*, int)>(&RootMotion::Hierarchy::GetAncestor)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::Hierarchy*), "GetAncestor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::Transform*>(), ::il2cpp_utils::ExtractIndependentType<int>()});
  }
};
// Writing MetadataGetter for method: RootMotion::Hierarchy::GetFirstCommonAncestor
// Il2CppName: GetFirstCommonAncestor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Transform* (*)(UnityEngine::Transform*, UnityEngine::Transform*)>(&RootMotion::Hierarchy::GetFirstCommonAncestor)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::Hierarchy*), "GetFirstCommonAncestor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::Transform*>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::Transform*>()});
  }
};
// Writing MetadataGetter for method: RootMotion::Hierarchy::GetFirstCommonAncestor
// Il2CppName: GetFirstCommonAncestor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Transform* (*)(::Array<UnityEngine::Transform*>*)>(&RootMotion::Hierarchy::GetFirstCommonAncestor)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::Hierarchy*), "GetFirstCommonAncestor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Array<UnityEngine::Transform*>*>()});
  }
};
// Writing MetadataGetter for method: RootMotion::Hierarchy::GetFirstCommonAncestorRecursive
// Il2CppName: GetFirstCommonAncestorRecursive
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Transform* (*)(UnityEngine::Transform*, ::Array<UnityEngine::Transform*>*)>(&RootMotion::Hierarchy::GetFirstCommonAncestorRecursive)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::Hierarchy*), "GetFirstCommonAncestorRecursive", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::Transform*>(), ::il2cpp_utils::ExtractIndependentType<::Array<UnityEngine::Transform*>*>()});
  }
};
// Writing MetadataGetter for method: RootMotion::Hierarchy::IsCommonAncestor
// Il2CppName: IsCommonAncestor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(UnityEngine::Transform*, ::Array<UnityEngine::Transform*>*)>(&RootMotion::Hierarchy::IsCommonAncestor)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::Hierarchy*), "IsCommonAncestor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::Transform*>(), ::il2cpp_utils::ExtractIndependentType<::Array<UnityEngine::Transform*>*>()});
  }
};
// Writing MetadataGetter for method: RootMotion::Hierarchy::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
