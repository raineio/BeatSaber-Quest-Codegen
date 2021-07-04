// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include <initializer_list>
// Including type: System.IEquatable`1
#include "System/IEquatable_1.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
// Including type: UnityEngine.Keyframe
#include "UnityEngine/Keyframe.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x18
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.AnimationCurve
  // [NativeHeaderAttribute] Offset: D8DC80
  // [DefaultMemberAttribute] Offset: D8DC80
  // [RequiredByNativeCodeAttribute] Offset: D8DC80
  class AnimationCurve : public ::Il2CppObject/*, public System::IEquatable_1<UnityEngine::AnimationCurve*>*/ {
    public:
    // System.IntPtr m_Ptr
    // Size: 0x8
    // Offset: 0x10
    System::IntPtr m_Ptr;
    // Field size check
    static_assert(sizeof(System::IntPtr) == 0x8);
    // Creating value type constructor for type: AnimationCurve
    AnimationCurve(System::IntPtr m_Ptr_ = {}) noexcept : m_Ptr{m_Ptr_} {}
    // Creating interface conversion operator: operator System::IEquatable_1<UnityEngine::AnimationCurve*>
    operator System::IEquatable_1<UnityEngine::AnimationCurve*>() noexcept {
      return *reinterpret_cast<System::IEquatable_1<UnityEngine::AnimationCurve*>*>(this);
    }
    // Creating conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept {
      return m_Ptr;
    }
    // static private System.Void Internal_Destroy(System.IntPtr ptr)
    // Offset: 0x1B881E0
    static void Internal_Destroy(System::IntPtr ptr);
    // static private System.IntPtr Internal_Create(UnityEngine.Keyframe[] keys)
    // Offset: 0x1B88220
    static System::IntPtr Internal_Create(::Array<UnityEngine::Keyframe>* keys);
    // private System.Boolean Internal_Equals(System.IntPtr other)
    // Offset: 0x1B88260
    bool Internal_Equals(System::IntPtr other);
    // public System.Single Evaluate(System.Single time)
    // Offset: 0x1B8834C
    float Evaluate(float time);
    // public UnityEngine.Keyframe[] get_keys()
    // Offset: 0x1B8839C
    ::Array<UnityEngine::Keyframe>* get_keys();
    // public System.Void set_keys(UnityEngine.Keyframe[] value)
    // Offset: 0x1B8841C
    void set_keys(::Array<UnityEngine::Keyframe>* value);
    // public System.Int32 AddKey(System.Single time, System.Single value)
    // Offset: 0x1B884BC
    int AddKey(float time, float value);
    // public System.Int32 get_length()
    // Offset: 0x1B88514
    int get_length();
    // private System.Void SetKeys(UnityEngine.Keyframe[] keys)
    // Offset: 0x1B8846C
    void SetKeys(::Array<UnityEngine::Keyframe>* keys);
    // private UnityEngine.Keyframe[] GetKeys()
    // Offset: 0x1B883DC
    ::Array<UnityEngine::Keyframe>* GetKeys();
    // static public UnityEngine.AnimationCurve Linear(System.Single timeStart, System.Single valueStart, System.Single timeEnd, System.Single valueEnd)
    // Offset: 0x1B88554
    static UnityEngine::AnimationCurve* Linear(float timeStart, float valueStart, float timeEnd, float valueEnd);
    // static public UnityEngine.AnimationCurve EaseInOut(System.Single timeStart, System.Single valueStart, System.Single timeEnd, System.Single valueEnd)
    // Offset: 0x1B88714
    static UnityEngine::AnimationCurve* EaseInOut(float timeStart, float valueStart, float timeEnd, float valueEnd);
    // public System.Void .ctor(params UnityEngine.Keyframe[] keys)
    // Offset: 0x1B886A4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AnimationCurve* New_ctor(::Array<UnityEngine::Keyframe>* keys) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::AnimationCurve::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AnimationCurve*, creationType>(keys)));
    }
    // Creating initializer_list -> params proxy for: System.Void .ctor(params UnityEngine.Keyframe[] keys)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AnimationCurve* New_ctor(std::initializer_list<UnityEngine::Keyframe> keys) {
      return New_ctor<creationType>(::Array<UnityEngine::Keyframe>::New(keys));
    }
    // Creating TArgs -> initializer_list proxy for: System.Void .ctor(params UnityEngine.Keyframe[] keys)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary, class ...TParams>
    static AnimationCurve* New_ctor(TParams&&... keys) {
      return New_ctor<creationType>({keys...});
    }
    // public System.Boolean Equals(UnityEngine.AnimationCurve other)
    // Offset: 0x1B88974
    bool Equals(UnityEngine::AnimationCurve* other);
    // protected override System.Void Finalize()
    // Offset: 0x1B882B0
    // Implemented from: System.Object
    // Base method: System.Void Object::Finalize()
    void Finalize();
    // public System.Void .ctor()
    // Offset: 0x1B88848
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AnimationCurve* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::AnimationCurve::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AnimationCurve*, creationType>()));
    }
    // public override System.Boolean Equals(System.Object o)
    // Offset: 0x1B88898
    // Implemented from: System.Object
    // Base method: System.Boolean Object::Equals(System.Object o)
    bool Equals(::Il2CppObject* o);
    // public override System.Int32 GetHashCode()
    // Offset: 0x1B88A44
    // Implemented from: System.Object
    // Base method: System.Int32 Object::GetHashCode()
    int GetHashCode();
  }; // UnityEngine.AnimationCurve
  #pragma pack(pop)
  static check_size<sizeof(AnimationCurve), 16 + sizeof(System::IntPtr)> __UnityEngine_AnimationCurveSizeCheck;
  static_assert(sizeof(AnimationCurve) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::AnimationCurve*, "UnityEngine", "AnimationCurve");
// Writing MetadataGetter for method: UnityEngine::AnimationCurve::Internal_Destroy
// Il2CppName: Internal_Destroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::IntPtr)>(&UnityEngine::AnimationCurve::Internal_Destroy)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AnimationCurve*), "Internal_Destroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::IntPtr>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::AnimationCurve::Internal_Create
// Il2CppName: Internal_Create
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IntPtr (*)(::Array<UnityEngine::Keyframe>*)>(&UnityEngine::AnimationCurve::Internal_Create)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AnimationCurve*), "Internal_Create", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Array<UnityEngine::Keyframe>*>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::AnimationCurve::Internal_Equals
// Il2CppName: Internal_Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::AnimationCurve::*)(System::IntPtr)>(&UnityEngine::AnimationCurve::Internal_Equals)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AnimationCurve*), "Internal_Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::IntPtr>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::AnimationCurve::Evaluate
// Il2CppName: Evaluate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::AnimationCurve::*)(float)>(&UnityEngine::AnimationCurve::Evaluate)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AnimationCurve*), "Evaluate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<float>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::AnimationCurve::get_keys
// Il2CppName: get_keys
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<UnityEngine::Keyframe>* (UnityEngine::AnimationCurve::*)()>(&UnityEngine::AnimationCurve::get_keys)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AnimationCurve*), "get_keys", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::AnimationCurve::set_keys
// Il2CppName: set_keys
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::AnimationCurve::*)(::Array<UnityEngine::Keyframe>*)>(&UnityEngine::AnimationCurve::set_keys)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AnimationCurve*), "set_keys", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Array<UnityEngine::Keyframe>*>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::AnimationCurve::AddKey
// Il2CppName: AddKey
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::AnimationCurve::*)(float, float)>(&UnityEngine::AnimationCurve::AddKey)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AnimationCurve*), "AddKey", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<float>(), ::il2cpp_utils::ExtractIndependentType<float>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::AnimationCurve::get_length
// Il2CppName: get_length
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::AnimationCurve::*)()>(&UnityEngine::AnimationCurve::get_length)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AnimationCurve*), "get_length", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::AnimationCurve::SetKeys
// Il2CppName: SetKeys
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::AnimationCurve::*)(::Array<UnityEngine::Keyframe>*)>(&UnityEngine::AnimationCurve::SetKeys)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AnimationCurve*), "SetKeys", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Array<UnityEngine::Keyframe>*>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::AnimationCurve::GetKeys
// Il2CppName: GetKeys
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<UnityEngine::Keyframe>* (UnityEngine::AnimationCurve::*)()>(&UnityEngine::AnimationCurve::GetKeys)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AnimationCurve*), "GetKeys", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::AnimationCurve::Linear
// Il2CppName: Linear
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::AnimationCurve* (*)(float, float, float, float)>(&UnityEngine::AnimationCurve::Linear)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AnimationCurve*), "Linear", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<float>(), ::il2cpp_utils::ExtractIndependentType<float>(), ::il2cpp_utils::ExtractIndependentType<float>(), ::il2cpp_utils::ExtractIndependentType<float>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::AnimationCurve::EaseInOut
// Il2CppName: EaseInOut
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::AnimationCurve* (*)(float, float, float, float)>(&UnityEngine::AnimationCurve::EaseInOut)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AnimationCurve*), "EaseInOut", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<float>(), ::il2cpp_utils::ExtractIndependentType<float>(), ::il2cpp_utils::ExtractIndependentType<float>(), ::il2cpp_utils::ExtractIndependentType<float>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::AnimationCurve::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::AnimationCurve::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::AnimationCurve::*)(UnityEngine::AnimationCurve*)>(&UnityEngine::AnimationCurve::Equals)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AnimationCurve*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::AnimationCurve*>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::AnimationCurve::Finalize
// Il2CppName: Finalize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::AnimationCurve::*)()>(&UnityEngine::AnimationCurve::Finalize)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AnimationCurve*), "Finalize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::AnimationCurve::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::AnimationCurve::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::AnimationCurve::*)(::Il2CppObject*)>(&UnityEngine::AnimationCurve::Equals)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AnimationCurve*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppObject*>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::AnimationCurve::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::AnimationCurve::*)()>(&UnityEngine::AnimationCurve::GetHashCode)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AnimationCurve*), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
