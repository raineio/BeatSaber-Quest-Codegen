// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: UnityEngine.LayerMask
#include "UnityEngine/LayerMask.hpp"
// Completed includes
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x1C
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.ContactFilter2D
  // [TokenAttribute] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: E95398
  // [NativeClassAttribute] Offset: E95398
  // [RequiredByNativeCodeAttribute] Offset: E95398
  struct ContactFilter2D/*, public System::ValueType*/ {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    private:
    #endif
    // [NativeNameAttribute] Offset: 0xE956A0
    // public System.Boolean useTriggers
    // Size: 0x1
    // Offset: 0x0
    bool useTriggers;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // [NativeNameAttribute] Offset: 0xE956D8
    // public System.Boolean useLayerMask
    // Size: 0x1
    // Offset: 0x1
    bool useLayerMask;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // [NativeNameAttribute] Offset: 0xE95710
    // public System.Boolean useDepth
    // Size: 0x1
    // Offset: 0x2
    bool useDepth;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // [NativeNameAttribute] Offset: 0xE95748
    // public System.Boolean useOutsideDepth
    // Size: 0x1
    // Offset: 0x3
    bool useOutsideDepth;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // [NativeNameAttribute] Offset: 0xE95780
    // public System.Boolean useNormalAngle
    // Size: 0x1
    // Offset: 0x4
    bool useNormalAngle;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // [NativeNameAttribute] Offset: 0xE957B8
    // public System.Boolean useOutsideNormalAngle
    // Size: 0x1
    // Offset: 0x5
    bool useOutsideNormalAngle;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: useOutsideNormalAngle and: layerMask
    char __padding5[0x2] = {};
    // [NativeNameAttribute] Offset: 0xE957F0
    // public UnityEngine.LayerMask layerMask
    // Size: 0x4
    // Offset: 0x8
    UnityEngine::LayerMask layerMask;
    // Field size check
    static_assert(sizeof(UnityEngine::LayerMask) == 0x4);
    // [NativeNameAttribute] Offset: 0xE95828
    // public System.Single minDepth
    // Size: 0x4
    // Offset: 0xC
    float minDepth;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [NativeNameAttribute] Offset: 0xE95860
    // public System.Single maxDepth
    // Size: 0x4
    // Offset: 0x10
    float maxDepth;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [NativeNameAttribute] Offset: 0xE95898
    // public System.Single minNormalAngle
    // Size: 0x4
    // Offset: 0x14
    float minNormalAngle;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [NativeNameAttribute] Offset: 0xE958D0
    // public System.Single maxNormalAngle
    // Size: 0x4
    // Offset: 0x18
    float maxNormalAngle;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Creating value type constructor for type: ContactFilter2D
    constexpr ContactFilter2D(bool useTriggers_ = {}, bool useLayerMask_ = {}, bool useDepth_ = {}, bool useOutsideDepth_ = {}, bool useNormalAngle_ = {}, bool useOutsideNormalAngle_ = {}, UnityEngine::LayerMask layerMask_ = {}, float minDepth_ = {}, float maxDepth_ = {}, float minNormalAngle_ = {}, float maxNormalAngle_ = {}) noexcept : useTriggers{useTriggers_}, useLayerMask{useLayerMask_}, useDepth{useDepth_}, useOutsideDepth{useOutsideDepth_}, useNormalAngle{useNormalAngle_}, useOutsideNormalAngle{useOutsideNormalAngle_}, layerMask{layerMask_}, minDepth{minDepth_}, maxDepth{maxDepth_}, minNormalAngle{minNormalAngle_}, maxNormalAngle{maxNormalAngle_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Get instance field reference: public System.Boolean useTriggers
    bool& dyn_useTriggers();
    // Get instance field reference: public System.Boolean useLayerMask
    bool& dyn_useLayerMask();
    // Get instance field reference: public System.Boolean useDepth
    bool& dyn_useDepth();
    // Get instance field reference: public System.Boolean useOutsideDepth
    bool& dyn_useOutsideDepth();
    // Get instance field reference: public System.Boolean useNormalAngle
    bool& dyn_useNormalAngle();
    // Get instance field reference: public System.Boolean useOutsideNormalAngle
    bool& dyn_useOutsideNormalAngle();
    // Get instance field reference: public UnityEngine.LayerMask layerMask
    UnityEngine::LayerMask& dyn_layerMask();
    // Get instance field reference: public System.Single minDepth
    float& dyn_minDepth();
    // Get instance field reference: public System.Single maxDepth
    float& dyn_maxDepth();
    // Get instance field reference: public System.Single minNormalAngle
    float& dyn_minNormalAngle();
    // Get instance field reference: public System.Single maxNormalAngle
    float& dyn_maxNormalAngle();
    // private System.Void CheckConsistency()
    // Offset: 0x261D794
    void CheckConsistency();
    // public System.Void SetLayerMask(UnityEngine.LayerMask layerMask)
    // Offset: 0x261D814
    void SetLayerMask(UnityEngine::LayerMask layerMask);
    // public System.Void SetDepth(System.Single minDepth, System.Single maxDepth)
    // Offset: 0x261D824
    void SetDepth(float minDepth, float maxDepth);
    // static UnityEngine.ContactFilter2D CreateLegacyFilter(System.Int32 layerMask, System.Single minDepth, System.Single maxDepth)
    // Offset: 0x261D870
    static UnityEngine::ContactFilter2D CreateLegacyFilter(int layerMask, float minDepth, float maxDepth);
    // static private System.Void CheckConsistency_Injected(ref UnityEngine.ContactFilter2D _unity_self)
    // Offset: 0x261D7D4
    static void CheckConsistency_Injected(ByRef<UnityEngine::ContactFilter2D> _unity_self);
  }; // UnityEngine.ContactFilter2D
  #pragma pack(pop)
  static check_size<sizeof(ContactFilter2D), 24 + sizeof(float)> __UnityEngine_ContactFilter2DSizeCheck;
  static_assert(sizeof(ContactFilter2D) == 0x1C);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ContactFilter2D, "UnityEngine", "ContactFilter2D");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::ContactFilter2D::CheckConsistency
// Il2CppName: CheckConsistency
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ContactFilter2D::*)()>(&UnityEngine::ContactFilter2D::CheckConsistency)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ContactFilter2D), "CheckConsistency", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ContactFilter2D::SetLayerMask
// Il2CppName: SetLayerMask
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ContactFilter2D::*)(UnityEngine::LayerMask)>(&UnityEngine::ContactFilter2D::SetLayerMask)> {
  static const MethodInfo* get() {
    static auto* layerMask = &::il2cpp_utils::GetClassFromName("UnityEngine", "LayerMask")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ContactFilter2D), "SetLayerMask", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{layerMask});
  }
};
// Writing MetadataGetter for method: UnityEngine::ContactFilter2D::SetDepth
// Il2CppName: SetDepth
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ContactFilter2D::*)(float, float)>(&UnityEngine::ContactFilter2D::SetDepth)> {
  static const MethodInfo* get() {
    static auto* minDepth = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* maxDepth = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ContactFilter2D), "SetDepth", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{minDepth, maxDepth});
  }
};
// Writing MetadataGetter for method: UnityEngine::ContactFilter2D::CreateLegacyFilter
// Il2CppName: CreateLegacyFilter
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::ContactFilter2D (*)(int, float, float)>(&UnityEngine::ContactFilter2D::CreateLegacyFilter)> {
  static const MethodInfo* get() {
    static auto* layerMask = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* minDepth = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* maxDepth = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ContactFilter2D), "CreateLegacyFilter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{layerMask, minDepth, maxDepth});
  }
};
// Writing MetadataGetter for method: UnityEngine::ContactFilter2D::CheckConsistency_Injected
// Il2CppName: CheckConsistency_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<UnityEngine::ContactFilter2D>)>(&UnityEngine::ContactFilter2D::CheckConsistency_Injected)> {
  static const MethodInfo* get() {
    static auto* _unity_self = &::il2cpp_utils::GetClassFromName("UnityEngine", "ContactFilter2D")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ContactFilter2D), "CheckConsistency_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{_unity_self});
  }
};
