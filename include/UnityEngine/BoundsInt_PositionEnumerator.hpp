// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.BoundsInt
#include "UnityEngine/BoundsInt.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
// Including type: UnityEngine.Vector3Int
#include "UnityEngine/Vector3Int.hpp"
// Completed includes
// Begin il2cpp-utils forward declares
struct Il2CppObject;
// Completed il2cpp-utils forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::BoundsInt::PositionEnumerator, "UnityEngine", "BoundsInt/PositionEnumerator");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x24
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.BoundsInt/UnityEngine.PositionEnumerator
  // [TokenAttribute] Offset: FFFFFFFF
  struct BoundsInt::PositionEnumerator/*, public ::System::ValueType, public ::System::Collections::Generic::IEnumerator_1<::UnityEngine::Vector3Int>*/ {
    public:
    public:
    // private readonly UnityEngine.Vector3Int _min
    // Size: 0xC
    // Offset: 0x0
    ::UnityEngine::Vector3Int min;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3Int) == 0xC);
    // private readonly UnityEngine.Vector3Int _max
    // Size: 0xC
    // Offset: 0xC
    ::UnityEngine::Vector3Int max;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3Int) == 0xC);
    // private UnityEngine.Vector3Int _current
    // Size: 0xC
    // Offset: 0x18
    ::UnityEngine::Vector3Int current;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3Int) == 0xC);
    public:
    // Creating value type constructor for type: PositionEnumerator
    constexpr PositionEnumerator(::UnityEngine::Vector3Int min_ = {}, ::UnityEngine::Vector3Int max_ = {}, ::UnityEngine::Vector3Int current_ = {}) noexcept : min{min_}, max{max_}, current{current_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: i_ValueType
    inline ::System::ValueType* i_ValueType() noexcept {
      return reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator ::System::Collections::Generic::IEnumerator_1<::UnityEngine::Vector3Int>
    operator ::System::Collections::Generic::IEnumerator_1<::UnityEngine::Vector3Int>() noexcept {
      return *reinterpret_cast<::System::Collections::Generic::IEnumerator_1<::UnityEngine::Vector3Int>*>(this);
    }
    // Creating interface conversion operator: i_Vector3Int
    inline ::System::Collections::Generic::IEnumerator_1<::UnityEngine::Vector3Int>* i_Vector3Int() noexcept {
      return reinterpret_cast<::System::Collections::Generic::IEnumerator_1<::UnityEngine::Vector3Int>*>(this);
    }
    // Get instance field reference: private readonly UnityEngine.Vector3Int _min
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3Int& dyn__min();
    // Get instance field reference: private readonly UnityEngine.Vector3Int _max
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3Int& dyn__max();
    // Get instance field reference: private UnityEngine.Vector3Int _current
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3Int& dyn__current();
    // public UnityEngine.Vector3Int get_Current()
    // Offset: 0x1FFF464
    ::UnityEngine::Vector3Int get_Current();
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0x1FFF474
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
    // public System.Void .ctor(UnityEngine.Vector3Int min, UnityEngine.Vector3Int max)
    // Offset: 0x1FFF208
    PositionEnumerator(::UnityEngine::Vector3Int min, ::UnityEngine::Vector3Int max);
    // public UnityEngine.BoundsInt/UnityEngine.PositionEnumerator GetEnumerator()
    // Offset: 0x1FFF298
    ::UnityEngine::BoundsInt::PositionEnumerator GetEnumerator();
    // public System.Boolean MoveNext()
    // Offset: 0x1FFF2AC
    bool MoveNext();
    // public System.Void Reset()
    // Offset: 0x1FFF254
    void Reset();
    // private System.Void System.IDisposable.Dispose()
    // Offset: 0x1FFF4E0
    void System_IDisposable_Dispose();
  }; // UnityEngine.BoundsInt/UnityEngine.PositionEnumerator
  #pragma pack(pop)
  static check_size<sizeof(BoundsInt::PositionEnumerator), 24 + sizeof(::UnityEngine::Vector3Int)> __UnityEngine_BoundsInt_PositionEnumeratorSizeCheck;
  static_assert(sizeof(BoundsInt::PositionEnumerator) == 0x24);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::BoundsInt::PositionEnumerator::get_Current
// Il2CppName: get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3Int (UnityEngine::BoundsInt::PositionEnumerator::*)()>(&UnityEngine::BoundsInt::PositionEnumerator::get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::BoundsInt::PositionEnumerator), "get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::BoundsInt::PositionEnumerator::System_Collections_IEnumerator_get_Current
// Il2CppName: System.Collections.IEnumerator.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (UnityEngine::BoundsInt::PositionEnumerator::*)()>(&UnityEngine::BoundsInt::PositionEnumerator::System_Collections_IEnumerator_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::BoundsInt::PositionEnumerator), "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::BoundsInt::PositionEnumerator::PositionEnumerator
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::BoundsInt::PositionEnumerator::GetEnumerator
// Il2CppName: GetEnumerator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::BoundsInt::PositionEnumerator (UnityEngine::BoundsInt::PositionEnumerator::*)()>(&UnityEngine::BoundsInt::PositionEnumerator::GetEnumerator)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::BoundsInt::PositionEnumerator), "GetEnumerator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::BoundsInt::PositionEnumerator::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::BoundsInt::PositionEnumerator::*)()>(&UnityEngine::BoundsInt::PositionEnumerator::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::BoundsInt::PositionEnumerator), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::BoundsInt::PositionEnumerator::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::BoundsInt::PositionEnumerator::*)()>(&UnityEngine::BoundsInt::PositionEnumerator::Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::BoundsInt::PositionEnumerator), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::BoundsInt::PositionEnumerator::System_IDisposable_Dispose
// Il2CppName: System.IDisposable.Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::BoundsInt::PositionEnumerator::*)()>(&UnityEngine::BoundsInt::PositionEnumerator::System_IDisposable_Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::BoundsInt::PositionEnumerator), "System.IDisposable.Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
