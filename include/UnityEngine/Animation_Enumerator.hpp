// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Animation
#include "UnityEngine/Animation.hpp"
// Including type: System.Collections.IEnumerator
#include "System/Collections/IEnumerator.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Enumerator
  class Enumerator;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(UnityEngine::Animation::Enumerator);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Animation::Enumerator*, "UnityEngine", "Animation/Enumerator");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x1C
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Animation/UnityEngine.Enumerator
  // [TokenAttribute] Offset: FFFFFFFF
  class Animation::Enumerator : public ::Il2CppObject/*, public System::Collections::IEnumerator*/ {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // private UnityEngine.Animation m_Outer
    // Size: 0x8
    // Offset: 0x10
    UnityEngine::Animation* m_Outer;
    // Field size check
    static_assert(sizeof(UnityEngine::Animation*) == 0x8);
    // private System.Int32 m_CurrentIndex
    // Size: 0x4
    // Offset: 0x18
    int m_CurrentIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating interface conversion operator: operator System::Collections::IEnumerator
    operator System::Collections::IEnumerator() noexcept {
      return *reinterpret_cast<System::Collections::IEnumerator*>(this);
    }
    // Get instance field reference: private UnityEngine.Animation m_Outer
    UnityEngine::Animation*& dyn_m_Outer();
    // Get instance field reference: private System.Int32 m_CurrentIndex
    int& dyn_m_CurrentIndex();
    // public System.Object get_Current()
    // Offset: 0x2633724
    ::Il2CppObject* get_Current();
    // System.Void .ctor(UnityEngine.Animation outer)
    // Offset: 0x2633620
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Animation::Enumerator* New_ctor(UnityEngine::Animation* outer) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Animation::Enumerator::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Animation::Enumerator*, creationType>(outer)));
    }
    // public System.Boolean MoveNext()
    // Offset: 0x263377C
    bool MoveNext();
    // public System.Void Reset()
    // Offset: 0x26337E8
    void Reset();
  }; // UnityEngine.Animation/UnityEngine.Enumerator
  #pragma pack(pop)
  static check_size<sizeof(Animation::Enumerator), 24 + sizeof(int)> __UnityEngine_Animation_EnumeratorSizeCheck;
  static_assert(sizeof(Animation::Enumerator) == 0x1C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Animation::Enumerator::get_Current
// Il2CppName: get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (UnityEngine::Animation::Enumerator::*)()>(&UnityEngine::Animation::Enumerator::get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animation::Enumerator*), "get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animation::Enumerator::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::Animation::Enumerator::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Animation::Enumerator::*)()>(&UnityEngine::Animation::Enumerator::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animation::Enumerator*), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animation::Enumerator::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Animation::Enumerator::*)()>(&UnityEngine::Animation::Enumerator::Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animation::Enumerator*), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
