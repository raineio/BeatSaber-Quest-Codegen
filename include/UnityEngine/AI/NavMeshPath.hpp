// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::AI
namespace UnityEngine::AI {
  // Forward declaring type: NavMeshPathStatus
  struct NavMeshPathStatus;
}
// Completed forward declares
// Type namespace: UnityEngine.AI
namespace UnityEngine::AI {
  // Size: 0x20
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.AI.NavMeshPath
  // [NativeHeaderAttribute] Offset: DE7960
  // [MovedFromAttribute] Offset: DE7960
  class NavMeshPath : public ::Il2CppObject {
    public:
    // System.IntPtr m_Ptr
    // Size: 0x8
    // Offset: 0x10
    System::IntPtr m_Ptr;
    // Field size check
    static_assert(sizeof(System::IntPtr) == 0x8);
    // UnityEngine.Vector3[] m_Corners
    // Size: 0x8
    // Offset: 0x18
    ::Array<UnityEngine::Vector3>* m_Corners;
    // Field size check
    static_assert(sizeof(::Array<UnityEngine::Vector3>*) == 0x8);
    // Creating value type constructor for type: NavMeshPath
    NavMeshPath(System::IntPtr m_Ptr_ = {}, ::Array<UnityEngine::Vector3>* m_Corners_ = {}) noexcept : m_Ptr{m_Ptr_}, m_Corners{m_Corners_} {}
    // static private System.IntPtr InitializeNavMeshPath()
    // Offset: 0x23F2A0C
    static System::IntPtr InitializeNavMeshPath();
    // static private System.Void DestroyNavMeshPath(System.IntPtr ptr)
    // Offset: 0x23F2B04
    static void DestroyNavMeshPath(System::IntPtr ptr);
    // private UnityEngine.Vector3[] CalculateCornersInternal()
    // Offset: 0x23F2B44
    ::Array<UnityEngine::Vector3>* CalculateCornersInternal();
    // private System.Void ClearCornersInternal()
    // Offset: 0x23F2B84
    void ClearCornersInternal();
    // public System.Void ClearCorners()
    // Offset: 0x23F2760
    void ClearCorners();
    // private System.Void CalculateCorners()
    // Offset: 0x23F2BC4
    void CalculateCorners();
    // public UnityEngine.Vector3[] get_corners()
    // Offset: 0x23F2C18
    ::Array<UnityEngine::Vector3>* get_corners();
    // public UnityEngine.AI.NavMeshPathStatus get_status()
    // Offset: 0x23F2C68
    UnityEngine::AI::NavMeshPathStatus get_status();
    // public System.Void .ctor()
    // Offset: 0x23F29C0
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NavMeshPath* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::AI::NavMeshPath::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NavMeshPath*, creationType>()));
    }
    // protected override System.Void Finalize()
    // Offset: 0x23F2A40
    // Implemented from: System.Object
    // Base method: System.Void Object::Finalize()
    void Finalize();
  }; // UnityEngine.AI.NavMeshPath
  #pragma pack(pop)
  static check_size<sizeof(NavMeshPath), 24 + sizeof(::Array<UnityEngine::Vector3>*)> __UnityEngine_AI_NavMeshPathSizeCheck;
  static_assert(sizeof(NavMeshPath) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::AI::NavMeshPath*, "UnityEngine.AI", "NavMeshPath");
// Writing MetadataGetter for method: UnityEngine::AI::NavMeshPath::InitializeNavMeshPath
// Il2CppName: InitializeNavMeshPath
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IntPtr (*)()>(&UnityEngine::AI::NavMeshPath::InitializeNavMeshPath)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AI::NavMeshPath*), "InitializeNavMeshPath", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::AI::NavMeshPath::DestroyNavMeshPath
// Il2CppName: DestroyNavMeshPath
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::IntPtr)>(&UnityEngine::AI::NavMeshPath::DestroyNavMeshPath)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AI::NavMeshPath*), "DestroyNavMeshPath", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::IntPtr>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::AI::NavMeshPath::CalculateCornersInternal
// Il2CppName: CalculateCornersInternal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<UnityEngine::Vector3>* (UnityEngine::AI::NavMeshPath::*)()>(&UnityEngine::AI::NavMeshPath::CalculateCornersInternal)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AI::NavMeshPath*), "CalculateCornersInternal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::AI::NavMeshPath::ClearCornersInternal
// Il2CppName: ClearCornersInternal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::AI::NavMeshPath::*)()>(&UnityEngine::AI::NavMeshPath::ClearCornersInternal)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AI::NavMeshPath*), "ClearCornersInternal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::AI::NavMeshPath::ClearCorners
// Il2CppName: ClearCorners
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::AI::NavMeshPath::*)()>(&UnityEngine::AI::NavMeshPath::ClearCorners)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AI::NavMeshPath*), "ClearCorners", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::AI::NavMeshPath::CalculateCorners
// Il2CppName: CalculateCorners
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::AI::NavMeshPath::*)()>(&UnityEngine::AI::NavMeshPath::CalculateCorners)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AI::NavMeshPath*), "CalculateCorners", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::AI::NavMeshPath::get_corners
// Il2CppName: get_corners
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<UnityEngine::Vector3>* (UnityEngine::AI::NavMeshPath::*)()>(&UnityEngine::AI::NavMeshPath::get_corners)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AI::NavMeshPath*), "get_corners", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::AI::NavMeshPath::get_status
// Il2CppName: get_status
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::AI::NavMeshPathStatus (UnityEngine::AI::NavMeshPath::*)()>(&UnityEngine::AI::NavMeshPath::get_status)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AI::NavMeshPath*), "get_status", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::AI::NavMeshPath::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::AI::NavMeshPath::Finalize
// Il2CppName: Finalize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::AI::NavMeshPath::*)()>(&UnityEngine::AI::NavMeshPath::Finalize)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AI::NavMeshPath*), "Finalize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
