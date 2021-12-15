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
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
  // Forward declaring type: Func`3<T1, T2, TResult>
  template<typename T1, typename T2, typename TResult>
  class Func_3;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Quaternion
  struct Quaternion;
  // Forward declaring type: Vector3
  struct Vector3;
  // Forward declaring type: Matrix4x4
  struct Matrix4x4;
}
// Forward declaring namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Forward declaring type: IEquivable`1<T>
  template<typename T>
  class IEquivable_1;
}
// Completed forward declares
// Type namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Forward declaring type: HEU_Extensions
  class HEU_Extensions;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(HoudiniEngineUnity::HEU_Extensions);
DEFINE_IL2CPP_ARG_TYPE(HoudiniEngineUnity::HEU_Extensions*, "HoudiniEngineUnity", "HEU_Extensions");
// Type namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: HoudiniEngineUnity.HEU_Extensions
  // [TokenAttribute] Offset: FFFFFFFF
  // [ExtensionAttribute] Offset: FFFFFFFF
  class HEU_Extensions : public ::Il2CppObject {
    public:
    // static public System.Collections.Generic.List`1<R> Map(System.Collections.Generic.IEnumerable`1<T> self, System.Func`2<T,R> selector)
    // Offset: 0xFFFFFFFF
    template<class T, class R>
    static System::Collections::Generic::List_1<R>* Map(System::Collections::Generic::IEnumerable_1<T>* self, System::Func_2<T, R>* selector) {
      static auto ___internal__logger = ::Logger::get().WithContext("HoudiniEngineUnity::HEU_Extensions::Map");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("HoudiniEngineUnity", "HEU_Extensions", "Map", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<R>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(self), ::il2cpp_utils::ExtractType(selector)})));
      static auto* ___generic__method = THROW_UNLESS((::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<R>::get()})));
      return ::il2cpp_utils::RunMethodThrow<System::Collections::Generic::List_1<R>*, false>(static_cast<Il2CppObject*>(nullptr), ___generic__method, self, selector);
    }
    // static public T Reduce(System.Collections.Generic.IEnumerable`1<T> self, System.Func`3<T,T,T> func)
    // Offset: 0xFFFFFFFF
    template<class T>
    static T Reduce(System::Collections::Generic::IEnumerable_1<T>* self, System::Func_3<T, T, T>* func) {
      static auto ___internal__logger = ::Logger::get().WithContext("HoudiniEngineUnity::HEU_Extensions::Reduce");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("HoudiniEngineUnity", "HEU_Extensions", "Reduce", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(self), ::il2cpp_utils::ExtractType(func)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodThrow<T, false>(static_cast<Il2CppObject*>(nullptr), ___generic__method, self, func);
    }
    // static public System.Collections.Generic.List`1<T> Filter(System.Collections.Generic.IEnumerable`1<T> self, System.Func`2<T,System.Boolean> predicate)
    // Offset: 0xFFFFFFFF
    template<class T>
    static System::Collections::Generic::List_1<T>* Filter(System::Collections::Generic::IEnumerable_1<T>* self, System::Func_2<T, bool>* predicate) {
      static auto ___internal__logger = ::Logger::get().WithContext("HoudiniEngineUnity::HEU_Extensions::Filter");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("HoudiniEngineUnity", "HEU_Extensions", "Filter", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(self), ::il2cpp_utils::ExtractType(predicate)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodThrow<System::Collections::Generic::List_1<T>*, false>(static_cast<Il2CppObject*>(nullptr), ___generic__method, self, predicate);
    }
    // static public System.Boolean IsValidIndex(System.Collections.Generic.List`1<T> self, System.Int32 index)
    // Offset: 0xFFFFFFFF
    template<class T>
    static bool IsValidIndex(System::Collections::Generic::List_1<T>* self, int index) {
      static auto ___internal__logger = ::Logger::get().WithContext("HoudiniEngineUnity::HEU_Extensions::IsValidIndex");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("HoudiniEngineUnity", "HEU_Extensions", "IsValidIndex", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(self), ::il2cpp_utils::ExtractType(index)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodThrow<bool, false>(static_cast<Il2CppObject*>(nullptr), ___generic__method, self, index);
    }
    // static public System.Boolean IsEquivalentList(System.Collections.Generic.List`1<T> self, System.Collections.Generic.List`1<T> other)
    // Offset: 0xFFFFFFFF
    template<class T>
    static bool IsEquivalentList(System::Collections::Generic::List_1<T>* self, System::Collections::Generic::List_1<T>* other) {
      static auto ___internal__logger = ::Logger::get().WithContext("HoudiniEngineUnity::HEU_Extensions::IsEquivalentList");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("HoudiniEngineUnity", "HEU_Extensions", "IsEquivalentList", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(self), ::il2cpp_utils::ExtractType(other)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodThrow<bool, false>(static_cast<Il2CppObject*>(nullptr), ___generic__method, self, other);
    }
    // static public System.Boolean ApproximatelyEquals(UnityEngine.Quaternion quatA, UnityEngine.Quaternion value)
    // Offset: 0x14D6E28
    static bool ApproximatelyEquals(UnityEngine::Quaternion quatA, UnityEngine::Quaternion value);
    // static public System.Collections.Generic.List`1<U> ConvertList(System.Collections.Generic.List`1<T> self)
    // Offset: 0xFFFFFFFF
    template<class T, class U>
    static System::Collections::Generic::List_1<U>* ConvertList(System::Collections::Generic::List_1<T>* self) {
      static auto ___internal__logger = ::Logger::get().WithContext("HoudiniEngineUnity::HEU_Extensions::ConvertList");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("HoudiniEngineUnity", "HEU_Extensions", "ConvertList", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<U>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(self)})));
      static auto* ___generic__method = THROW_UNLESS((::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<U>::get()})));
      return ::il2cpp_utils::RunMethodThrow<System::Collections::Generic::List_1<U>*, false>(static_cast<Il2CppObject*>(nullptr), ___generic__method, self);
    }
    // static public System.Collections.Generic.List`1<HoudiniEngineUnity.IEquivable`1<T>> ConvertListToEquivable(System.Collections.Generic.List`1<T> self)
    // Offset: 0xFFFFFFFF
    template<class T>
    static System::Collections::Generic::List_1<HoudiniEngineUnity::IEquivable_1<T>*>* ConvertListToEquivable(System::Collections::Generic::List_1<T>* self) {
      static auto ___internal__logger = ::Logger::get().WithContext("HoudiniEngineUnity::HEU_Extensions::ConvertListToEquivable");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("HoudiniEngineUnity", "HEU_Extensions", "ConvertListToEquivable", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(self)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodThrow<System::Collections::Generic::List_1<HoudiniEngineUnity::IEquivable_1<T>*>*, false>(static_cast<Il2CppObject*>(nullptr), ___generic__method, self);
    }
    // static public HoudiniEngineUnity.IEquivable`1<T>[] ConvertArrayToEquivable(T[] self)
    // Offset: 0xFFFFFFFF
    template<class T>
    static ::ArrayW<HoudiniEngineUnity::IEquivable_1<T>*> ConvertArrayToEquivable(::ArrayW<T> self) {
      static auto ___internal__logger = ::Logger::get().WithContext("HoudiniEngineUnity::HEU_Extensions::ConvertArrayToEquivable");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("HoudiniEngineUnity", "HEU_Extensions", "ConvertArrayToEquivable", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(self)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodThrow<::ArrayW<HoudiniEngineUnity::IEquivable_1<T>*>, false>(static_cast<Il2CppObject*>(nullptr), ___generic__method, self);
    }
    // static public System.Boolean ApproximatelyEquals(System.Single self, System.Single other, System.Single epsilon)
    // Offset: 0x14D6F2C
    static bool ApproximatelyEquals(float self, float other, float epsilon);
    // static public System.Byte[] AsByteArray(System.String self)
    // Offset: 0x14D6FB0
    static ::ArrayW<uint8_t> AsByteArray(::Il2CppString* self);
    // static public System.String AsString(System.Byte[] buffer)
    // Offset: 0x14D7030
    static ::Il2CppString* AsString(::ArrayW<uint8_t> buffer);
    // static public UnityEngine.Vector3 SwapXAndY(UnityEngine.Vector3 self)
    // Offset: 0x14D70B8
    static UnityEngine::Vector3 SwapXAndY(UnityEngine::Vector3 self);
    // static public UnityEngine.Vector3 SwapXAndZ(UnityEngine.Vector3 self)
    // Offset: 0x14D70C8
    static UnityEngine::Vector3 SwapXAndZ(UnityEngine::Vector3 self);
    // static public UnityEngine.Vector3 SwapYAndZ(UnityEngine.Vector3 self)
    // Offset: 0x14D70D8
    static UnityEngine::Vector3 SwapYAndZ(UnityEngine::Vector3 self);
    // static public UnityEngine.Vector3 DecomposeToPosition(UnityEngine.Matrix4x4 self)
    // Offset: 0x14D70E8
    static UnityEngine::Vector3 DecomposeToPosition(UnityEngine::Matrix4x4 self);
    // static public UnityEngine.Quaternion DecomposeToRotation(UnityEngine.Matrix4x4 self)
    // Offset: 0x14D718C
    static UnityEngine::Quaternion DecomposeToRotation(UnityEngine::Matrix4x4 self);
    // static public UnityEngine.Vector3 DecomposeToScale(UnityEngine.Matrix4x4 self)
    // Offset: 0x14D72A8
    static UnityEngine::Vector3 DecomposeToScale(UnityEngine::Matrix4x4 self);
  }; // HoudiniEngineUnity.HEU_Extensions
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_Extensions::Map
// Il2CppName: Map
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_Extensions::Reduce
// Il2CppName: Reduce
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_Extensions::Filter
// Il2CppName: Filter
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_Extensions::IsValidIndex
// Il2CppName: IsValidIndex
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_Extensions::IsEquivalentList
// Il2CppName: IsEquivalentList
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_Extensions::ApproximatelyEquals
// Il2CppName: ApproximatelyEquals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(UnityEngine::Quaternion, UnityEngine::Quaternion)>(&HoudiniEngineUnity::HEU_Extensions::ApproximatelyEquals)> {
  static const MethodInfo* get() {
    static auto* quatA = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_Extensions*), "ApproximatelyEquals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{quatA, value});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_Extensions::ConvertList
// Il2CppName: ConvertList
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_Extensions::ConvertListToEquivable
// Il2CppName: ConvertListToEquivable
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_Extensions::ConvertArrayToEquivable
// Il2CppName: ConvertArrayToEquivable
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_Extensions::ApproximatelyEquals
// Il2CppName: ApproximatelyEquals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(float, float, float)>(&HoudiniEngineUnity::HEU_Extensions::ApproximatelyEquals)> {
  static const MethodInfo* get() {
    static auto* self = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* other = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* epsilon = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_Extensions*), "ApproximatelyEquals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{self, other, epsilon});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_Extensions::AsByteArray
// Il2CppName: AsByteArray
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (*)(::Il2CppString*)>(&HoudiniEngineUnity::HEU_Extensions::AsByteArray)> {
  static const MethodInfo* get() {
    static auto* self = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_Extensions*), "AsByteArray", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{self});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_Extensions::AsString
// Il2CppName: AsString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (*)(::ArrayW<uint8_t>)>(&HoudiniEngineUnity::HEU_Extensions::AsString)> {
  static const MethodInfo* get() {
    static auto* buffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_Extensions*), "AsString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buffer});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_Extensions::SwapXAndY
// Il2CppName: SwapXAndY
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector3 (*)(UnityEngine::Vector3)>(&HoudiniEngineUnity::HEU_Extensions::SwapXAndY)> {
  static const MethodInfo* get() {
    static auto* self = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_Extensions*), "SwapXAndY", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{self});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_Extensions::SwapXAndZ
// Il2CppName: SwapXAndZ
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector3 (*)(UnityEngine::Vector3)>(&HoudiniEngineUnity::HEU_Extensions::SwapXAndZ)> {
  static const MethodInfo* get() {
    static auto* self = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_Extensions*), "SwapXAndZ", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{self});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_Extensions::SwapYAndZ
// Il2CppName: SwapYAndZ
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector3 (*)(UnityEngine::Vector3)>(&HoudiniEngineUnity::HEU_Extensions::SwapYAndZ)> {
  static const MethodInfo* get() {
    static auto* self = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_Extensions*), "SwapYAndZ", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{self});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_Extensions::DecomposeToPosition
// Il2CppName: DecomposeToPosition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector3 (*)(UnityEngine::Matrix4x4)>(&HoudiniEngineUnity::HEU_Extensions::DecomposeToPosition)> {
  static const MethodInfo* get() {
    static auto* self = &::il2cpp_utils::GetClassFromName("UnityEngine", "Matrix4x4")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_Extensions*), "DecomposeToPosition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{self});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_Extensions::DecomposeToRotation
// Il2CppName: DecomposeToRotation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Quaternion (*)(UnityEngine::Matrix4x4)>(&HoudiniEngineUnity::HEU_Extensions::DecomposeToRotation)> {
  static const MethodInfo* get() {
    static auto* self = &::il2cpp_utils::GetClassFromName("UnityEngine", "Matrix4x4")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_Extensions*), "DecomposeToRotation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{self});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_Extensions::DecomposeToScale
// Il2CppName: DecomposeToScale
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector3 (*)(UnityEngine::Matrix4x4)>(&HoudiniEngineUnity::HEU_Extensions::DecomposeToScale)> {
  static const MethodInfo* get() {
    static auto* self = &::il2cpp_utils::GetClassFromName("UnityEngine", "Matrix4x4")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_Extensions*), "DecomposeToScale", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{self});
  }
};
