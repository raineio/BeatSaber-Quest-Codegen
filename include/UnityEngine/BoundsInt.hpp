// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.IEquatable`1
#include "System/IEquatable_1.hpp"
// Including type: UnityEngine.Vector3Int
#include "UnityEngine/Vector3Int.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct Il2CppObject;
// Completed il2cpp-utils forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: BoundsInt
  struct BoundsInt;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::BoundsInt, "UnityEngine", "BoundsInt");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x18
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.BoundsInt
  // [TokenAttribute] Offset: FFFFFFFF
  // [UsedByNativeCodeAttribute] Offset: 10441F4
  struct BoundsInt/*, public ::System::ValueType, public ::System::IEquatable_1<::UnityEngine::BoundsInt>*/ {
    public:
    // Nested type: ::UnityEngine::BoundsInt::PositionEnumerator
    struct PositionEnumerator;
    public:
    // private UnityEngine.Vector3Int m_Position
    // Size: 0xC
    // Offset: 0x0
    ::UnityEngine::Vector3Int m_Position;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3Int) == 0xC);
    // private UnityEngine.Vector3Int m_Size
    // Size: 0xC
    // Offset: 0xC
    ::UnityEngine::Vector3Int m_Size;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3Int) == 0xC);
    public:
    // Creating value type constructor for type: BoundsInt
    constexpr BoundsInt(::UnityEngine::Vector3Int m_Position_ = {}, ::UnityEngine::Vector3Int m_Size_ = {}) noexcept : m_Position{m_Position_}, m_Size{m_Size_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator ::System::IEquatable_1<::UnityEngine::BoundsInt>
    operator ::System::IEquatable_1<::UnityEngine::BoundsInt>() noexcept {
      return *reinterpret_cast<::System::IEquatable_1<::UnityEngine::BoundsInt>*>(this);
    }
    // Get instance field reference: private UnityEngine.Vector3Int m_Position
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3Int& dyn_m_Position();
    // Get instance field reference: private UnityEngine.Vector3Int m_Size
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3Int& dyn_m_Size();
    // public UnityEngine.Vector3Int get_min()
    // Offset: 0x1F8DFA0
    ::UnityEngine::Vector3Int get_min();
    // public System.Void set_min(UnityEngine.Vector3Int value)
    // Offset: 0x1F8E208
    void set_min(::UnityEngine::Vector3Int value);
    // public UnityEngine.Vector3Int get_max()
    // Offset: 0x1F8E390
    ::UnityEngine::Vector3Int get_max();
    // public System.Void set_max(UnityEngine.Vector3Int value)
    // Offset: 0x1F8E5F8
    void set_max(::UnityEngine::Vector3Int value);
    // public System.Int32 get_xMin()
    // Offset: 0x1F8E010
    int get_xMin();
    // public System.Void set_xMin(System.Int32 value)
    // Offset: 0x1F8E27C
    void set_xMin(int value);
    // public System.Int32 get_yMin()
    // Offset: 0x1F8E0B8
    int get_yMin();
    // public System.Void set_yMin(System.Int32 value)
    // Offset: 0x1F8E2D8
    void set_yMin(int value);
    // public System.Int32 get_zMin()
    // Offset: 0x1F8E160
    int get_zMin();
    // public System.Void set_zMin(System.Int32 value)
    // Offset: 0x1F8E334
    void set_zMin(int value);
    // public System.Int32 get_xMax()
    // Offset: 0x1F8E400
    int get_xMax();
    // public System.Void set_xMax(System.Int32 value)
    // Offset: 0x1F8E6B4
    void set_xMax(int value);
    // public System.Int32 get_yMax()
    // Offset: 0x1F8E4A8
    int get_yMax();
    // public System.Void set_yMax(System.Int32 value)
    // Offset: 0x1F8E6E8
    void set_yMax(int value);
    // public System.Int32 get_zMax()
    // Offset: 0x1F8E550
    int get_zMax();
    // public System.Void set_zMax(System.Int32 value)
    // Offset: 0x1F8E71C
    void set_zMax(int value);
    // public UnityEngine.Vector3Int get_size()
    // Offset: 0x1F8E750
    ::UnityEngine::Vector3Int get_size();
    // public UnityEngine.BoundsInt/UnityEngine.PositionEnumerator get_allPositionsWithin()
    // Offset: 0x1F8E9D4
    ::UnityEngine::BoundsInt::PositionEnumerator get_allPositionsWithin();
    // public System.Void .ctor(UnityEngine.Vector3Int position, UnityEngine.Vector3Int size)
    // Offset: 0x1F8E760
    // ABORTED: conflicts with another method.  BoundsInt(::UnityEngine::Vector3Int position, ::UnityEngine::Vector3Int size);
    // public System.Boolean Equals(UnityEngine.BoundsInt other)
    // Offset: 0x1F8E948
    bool Equals(::UnityEngine::BoundsInt other);
    // public override System.String ToString()
    // Offset: 0x1F8E774
    // Implemented from: System.ValueType
    // Base method: System.String ValueType::ToString()
    ::StringW ToString();
    // public override System.Boolean Equals(System.Object other)
    // Offset: 0x1F8E8A8
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object other)
    bool Equals(::Il2CppObject* other);
    // public override System.Int32 GetHashCode()
    // Offset: 0x1F8E99C
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
  }; // UnityEngine.BoundsInt
  #pragma pack(pop)
  static check_size<sizeof(BoundsInt), 12 + sizeof(::UnityEngine::Vector3Int)> __UnityEngine_BoundsIntSizeCheck;
  static_assert(sizeof(BoundsInt) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::BoundsInt::get_min
// Il2CppName: get_min
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3Int (UnityEngine::BoundsInt::*)()>(&UnityEngine::BoundsInt::get_min)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::BoundsInt), "get_min", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::BoundsInt::set_min
// Il2CppName: set_min
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::BoundsInt::*)(::UnityEngine::Vector3Int)>(&UnityEngine::BoundsInt::set_min)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3Int")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::BoundsInt), "set_min", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::BoundsInt::get_max
// Il2CppName: get_max
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3Int (UnityEngine::BoundsInt::*)()>(&UnityEngine::BoundsInt::get_max)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::BoundsInt), "get_max", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::BoundsInt::set_max
// Il2CppName: set_max
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::BoundsInt::*)(::UnityEngine::Vector3Int)>(&UnityEngine::BoundsInt::set_max)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3Int")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::BoundsInt), "set_max", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::BoundsInt::get_xMin
// Il2CppName: get_xMin
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::BoundsInt::*)()>(&UnityEngine::BoundsInt::get_xMin)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::BoundsInt), "get_xMin", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::BoundsInt::set_xMin
// Il2CppName: set_xMin
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::BoundsInt::*)(int)>(&UnityEngine::BoundsInt::set_xMin)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::BoundsInt), "set_xMin", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::BoundsInt::get_yMin
// Il2CppName: get_yMin
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::BoundsInt::*)()>(&UnityEngine::BoundsInt::get_yMin)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::BoundsInt), "get_yMin", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::BoundsInt::set_yMin
// Il2CppName: set_yMin
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::BoundsInt::*)(int)>(&UnityEngine::BoundsInt::set_yMin)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::BoundsInt), "set_yMin", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::BoundsInt::get_zMin
// Il2CppName: get_zMin
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::BoundsInt::*)()>(&UnityEngine::BoundsInt::get_zMin)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::BoundsInt), "get_zMin", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::BoundsInt::set_zMin
// Il2CppName: set_zMin
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::BoundsInt::*)(int)>(&UnityEngine::BoundsInt::set_zMin)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::BoundsInt), "set_zMin", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::BoundsInt::get_xMax
// Il2CppName: get_xMax
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::BoundsInt::*)()>(&UnityEngine::BoundsInt::get_xMax)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::BoundsInt), "get_xMax", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::BoundsInt::set_xMax
// Il2CppName: set_xMax
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::BoundsInt::*)(int)>(&UnityEngine::BoundsInt::set_xMax)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::BoundsInt), "set_xMax", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::BoundsInt::get_yMax
// Il2CppName: get_yMax
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::BoundsInt::*)()>(&UnityEngine::BoundsInt::get_yMax)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::BoundsInt), "get_yMax", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::BoundsInt::set_yMax
// Il2CppName: set_yMax
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::BoundsInt::*)(int)>(&UnityEngine::BoundsInt::set_yMax)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::BoundsInt), "set_yMax", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::BoundsInt::get_zMax
// Il2CppName: get_zMax
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::BoundsInt::*)()>(&UnityEngine::BoundsInt::get_zMax)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::BoundsInt), "get_zMax", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::BoundsInt::set_zMax
// Il2CppName: set_zMax
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::BoundsInt::*)(int)>(&UnityEngine::BoundsInt::set_zMax)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::BoundsInt), "set_zMax", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::BoundsInt::get_size
// Il2CppName: get_size
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3Int (UnityEngine::BoundsInt::*)()>(&UnityEngine::BoundsInt::get_size)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::BoundsInt), "get_size", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::BoundsInt::get_allPositionsWithin
// Il2CppName: get_allPositionsWithin
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::BoundsInt::PositionEnumerator (UnityEngine::BoundsInt::*)()>(&UnityEngine::BoundsInt::get_allPositionsWithin)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::BoundsInt), "get_allPositionsWithin", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::BoundsInt::BoundsInt
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::BoundsInt::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::BoundsInt::*)(::UnityEngine::BoundsInt)>(&UnityEngine::BoundsInt::Equals)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("UnityEngine", "BoundsInt")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::BoundsInt), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: UnityEngine::BoundsInt::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::BoundsInt::*)()>(&UnityEngine::BoundsInt::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::BoundsInt), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::BoundsInt::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::BoundsInt::*)(::Il2CppObject*)>(&UnityEngine::BoundsInt::Equals)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::BoundsInt), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: UnityEngine::BoundsInt::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::BoundsInt::*)()>(&UnityEngine::BoundsInt::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::BoundsInt), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
