// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include <initializer_list>
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
  // Forward declaring type: IList`1<T>
  template<typename T>
  class IList_1;
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
  // Forward declaring type: Func`1<TResult>
  template<typename TResult>
  class Func_1;
  // Forward declaring type: Action
  class Action;
  // Forward declaring type: Exception
  class Exception;
}
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: ZenjectException
  class ZenjectException;
}
// Completed forward declares
// Type namespace: ModestTree
namespace ModestTree {
  // Forward declaring type: Assert
  class _Assert;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(ModestTree::_Assert);
DEFINE_IL2CPP_ARG_TYPE(ModestTree::_Assert*, "ModestTree", "Assert");
// Type namespace: ModestTree
namespace ModestTree {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: ModestTree.Assert
  // [TokenAttribute] Offset: FFFFFFFF
  class _Assert : public ::Il2CppObject {
    public:
    // static public System.Void That(System.Boolean condition)
    // Offset: 0x14ED0D0
    static void That(bool condition);
    // static public System.Void IsNotEmpty(System.String str)
    // Offset: 0x14ED198
    static void IsNotEmpty(::Il2CppString* str);
    // static public System.Void IsEmpty(System.Collections.Generic.IList`1<T> list)
    // Offset: 0xFFFFFFFF
    template<class T>
    static void IsEmpty(System::Collections::Generic::IList_1<T>* list) {
      static auto ___internal__logger = ::Logger::get().WithContext("ModestTree::_Assert::IsEmpty");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("ModestTree", "Assert", "IsEmpty", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(list)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      ::il2cpp_utils::RunMethodThrow<void, false>(static_cast<Il2CppObject*>(nullptr), ___generic__method, list);
    }
    // static public System.Void IsEmpty(System.Collections.Generic.IEnumerable`1<T> sequence)
    // Offset: 0xFFFFFFFF
    template<class T>
    static void IsEmpty(System::Collections::Generic::IEnumerable_1<T>* sequence) {
      static auto ___internal__logger = ::Logger::get().WithContext("ModestTree::_Assert::IsEmpty");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("ModestTree", "Assert", "IsEmpty", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(sequence)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      ::il2cpp_utils::RunMethodThrow<void, false>(static_cast<Il2CppObject*>(nullptr), ___generic__method, sequence);
    }
    // static public System.Void IsType(System.Object obj)
    // Offset: 0xFFFFFFFF
    template<class T>
    static void IsType(::Il2CppObject* obj) {
      static auto ___internal__logger = ::Logger::get().WithContext("ModestTree::_Assert::IsType");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("ModestTree", "Assert", "IsType", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(obj)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      ::il2cpp_utils::RunMethodThrow<void, false>(static_cast<Il2CppObject*>(nullptr), ___generic__method, obj);
    }
    // static public System.Void IsType(System.Object obj, System.String message)
    // Offset: 0xFFFFFFFF
    template<class T>
    static void IsType(::Il2CppObject* obj, ::Il2CppString* message) {
      static auto ___internal__logger = ::Logger::get().WithContext("ModestTree::_Assert::IsType");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("ModestTree", "Assert", "IsType", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(obj), ::il2cpp_utils::ExtractType(message)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      ::il2cpp_utils::RunMethodThrow<void, false>(static_cast<Il2CppObject*>(nullptr), ___generic__method, obj, message);
    }
    // static public System.Void DerivesFrom(System.Type type)
    // Offset: 0xFFFFFFFF
    template<class T>
    static void DerivesFrom(System::Type* type) {
      static auto ___internal__logger = ::Logger::get().WithContext("ModestTree::_Assert::DerivesFrom");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("ModestTree", "Assert", "DerivesFrom", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(type)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      ::il2cpp_utils::RunMethodThrow<void, false>(static_cast<Il2CppObject*>(nullptr), ___generic__method, type);
    }
    // static public System.Void DerivesFromOrEqual(System.Type type)
    // Offset: 0xFFFFFFFF
    template<class T>
    static void DerivesFromOrEqual(System::Type* type) {
      static auto ___internal__logger = ::Logger::get().WithContext("ModestTree::_Assert::DerivesFromOrEqual");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("ModestTree", "Assert", "DerivesFromOrEqual", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(type)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      ::il2cpp_utils::RunMethodThrow<void, false>(static_cast<Il2CppObject*>(nullptr), ___generic__method, type);
    }
    // static public System.Void DerivesFrom(System.Type childType, System.Type parentType)
    // Offset: 0x14ED208
    static void DerivesFrom(System::Type* childType, System::Type* parentType);
    // static public System.Void DerivesFromOrEqual(System.Type childType, System.Type parentType)
    // Offset: 0x14ED480
    static void DerivesFromOrEqual(System::Type* childType, System::Type* parentType);
    // static public System.Void IsEqual(System.Object left, System.Object right)
    // Offset: 0x14ED668
    static void IsEqual(::Il2CppObject* left, ::Il2CppObject* right);
    // static public System.Void IsEqual(System.Object left, System.Object right, System.Func`1<System.String> messageGenerator)
    // Offset: 0x14ED7EC
    static void IsEqual(::Il2CppObject* left, ::Il2CppObject* right, System::Func_1<::Il2CppString*>* messageGenerator);
    // static public System.Void IsApproximately(System.Single left, System.Single right, System.Single epsilon)
    // Offset: 0x14ED938
    static void IsApproximately(float left, float right, float epsilon);
    // static public System.Void IsEqual(System.Object left, System.Object right, System.String message)
    // Offset: 0x14ED6C8
    static void IsEqual(::Il2CppObject* left, ::Il2CppObject* right, ::Il2CppString* message);
    // static public System.Void IsNotEqual(System.Object left, System.Object right)
    // Offset: 0x14EDA80
    static void IsNotEqual(::Il2CppObject* left, ::Il2CppObject* right);
    // static public System.Void IsNotEqual(System.Object left, System.Object right, System.Func`1<System.String> messageGenerator)
    // Offset: 0x14EDBD8
    static void IsNotEqual(::Il2CppObject* left, ::Il2CppObject* right, System::Func_1<::Il2CppString*>* messageGenerator);
    // static public System.Void IsNull(System.Object val)
    // Offset: 0x14EDD24
    static void IsNull(::Il2CppObject* val);
    // static public System.Void IsNull(System.Object val, System.String message)
    // Offset: 0x14EDDC4
    static void IsNull(::Il2CppObject* val, ::Il2CppString* message);
    // static public System.Void IsNull(System.Object val, System.String message, System.Object p1)
    // Offset: 0x14EDE70
    static void IsNull(::Il2CppObject* val, ::Il2CppString* message, ::Il2CppObject* p1);
    // static public System.Void IsNotNull(System.Object val)
    // Offset: 0x14EE11C
    static void IsNotNull(::Il2CppObject* val);
    // static public System.Void IsNotNull(System.Object val, System.String message)
    // Offset: 0x14EE180
    static void IsNotNull(::Il2CppObject* val, ::Il2CppString* message);
    // static public System.Void IsNotNull(System.Object val, System.String message, System.Object p1)
    // Offset: 0x14EE22C
    static void IsNotNull(::Il2CppObject* val, ::Il2CppString* message, ::Il2CppObject* p1);
    // static public System.Void IsNotNull(System.Object val, System.String message, System.Object p1, System.Object p2)
    // Offset: 0x14EE324
    static void IsNotNull(::Il2CppObject* val, ::Il2CppString* message, ::Il2CppObject* p1, ::Il2CppObject* p2);
    // static public System.Void IsNotEmpty(System.Collections.Generic.IEnumerable`1<T> val, System.String message)
    // Offset: 0xFFFFFFFF
    template<class T>
    static void IsNotEmpty(System::Collections::Generic::IEnumerable_1<T>* val, ::Il2CppString* message) {
      static auto ___internal__logger = ::Logger::get().WithContext("ModestTree::_Assert::IsNotEmpty");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("ModestTree", "Assert", "IsNotEmpty", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(val), ::il2cpp_utils::ExtractType(message)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      ::il2cpp_utils::RunMethodThrow<void, false>(static_cast<Il2CppObject*>(nullptr), ___generic__method, val, message);
    }
    // static public System.Void IsNotEqual(System.Object left, System.Object right, System.String message)
    // Offset: 0x14EDAE0
    static void IsNotEqual(::Il2CppObject* left, ::Il2CppObject* right, ::Il2CppString* message);
    // static public System.Void Warn(System.Boolean condition)
    // Offset: 0x14EE44C
    static void Warn(bool condition);
    // static public System.Void Warn(System.Boolean condition, System.Func`1<System.String> messageGenerator)
    // Offset: 0x14EE5BC
    static void Warn(bool condition, System::Func_1<::Il2CppString*>* messageGenerator);
    // static public System.Void That(System.Boolean condition, System.String message)
    // Offset: 0x14EE6E8
    static void That(bool condition, ::Il2CppString* message);
    // static public System.Void That(System.Boolean condition, System.String message, System.Object p1)
    // Offset: 0x14EE764
    static void That(bool condition, ::Il2CppString* message, ::Il2CppObject* p1);
    // static public System.Void That(System.Boolean condition, System.String message, System.Object p1, System.Object p2)
    // Offset: 0x14EE82C
    static void That(bool condition, ::Il2CppString* message, ::Il2CppObject* p1, ::Il2CppObject* p2);
    // static public System.Void That(System.Boolean condition, System.String message, System.Object p1, System.Object p2, System.Object p3)
    // Offset: 0x14EE924
    static void That(bool condition, ::Il2CppString* message, ::Il2CppObject* p1, ::Il2CppObject* p2, ::Il2CppObject* p3);
    // static public System.Void Warn(System.Boolean condition, System.String message)
    // Offset: 0x14EEA44
    static void Warn(bool condition, ::Il2CppString* message);
    // static public System.Void Throws(System.Action action)
    // Offset: 0x14EEB50
    static void Throws(System::Action* action);
    // static public System.Void Throws(System.Action action)
    // Offset: 0xFFFFFFFF
    template<class TException>
    static void Throws(System::Action* action) {
      static_assert(std::is_convertible_v<TException, System::Exception*>);
      static auto ___internal__logger = ::Logger::get().WithContext("ModestTree::_Assert::Throws");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("ModestTree", "Assert", "Throws", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TException>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(action)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TException>::get()}));
      ::il2cpp_utils::RunMethodThrow<void, false>(static_cast<Il2CppObject*>(nullptr), ___generic__method, action);
    }
    // static public Zenject.ZenjectException CreateException()
    // Offset: 0x14EEBA0
    static Zenject::ZenjectException* CreateException();
    // static public Zenject.ZenjectException CreateException(System.String message)
    // Offset: 0x14ED134
    static Zenject::ZenjectException* CreateException(::Il2CppString* message);
    // static public Zenject.ZenjectException CreateException(System.String message, params System.Object[] parameters)
    // Offset: 0x14ED3FC
    static Zenject::ZenjectException* CreateException(::Il2CppString* message, ::ArrayW<::Il2CppObject*> parameters);
    // static public Zenject.ZenjectException CreateException(System.Exception innerException, System.String message, params System.Object[] parameters)
    // Offset: 0x14EEC08
    static Zenject::ZenjectException* CreateException(System::Exception* innerException, ::Il2CppString* message, ::ArrayW<::Il2CppObject*> parameters);
  }; // ModestTree.Assert
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: ModestTree::_Assert::That
// Il2CppName: That
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(bool)>(&ModestTree::_Assert::That)> {
  static const MethodInfo* get() {
    static auto* condition = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(ModestTree::_Assert*), "That", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{condition});
  }
};
// Writing MetadataGetter for method: ModestTree::_Assert::IsNotEmpty
// Il2CppName: IsNotEmpty
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Il2CppString*)>(&ModestTree::_Assert::IsNotEmpty)> {
  static const MethodInfo* get() {
    static auto* str = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(ModestTree::_Assert*), "IsNotEmpty", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{str});
  }
};
// Writing MetadataGetter for method: ModestTree::_Assert::IsEmpty
// Il2CppName: IsEmpty
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: ModestTree::_Assert::IsEmpty
// Il2CppName: IsEmpty
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: ModestTree::_Assert::IsType
// Il2CppName: IsType
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: ModestTree::_Assert::IsType
// Il2CppName: IsType
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: ModestTree::_Assert::DerivesFrom
// Il2CppName: DerivesFrom
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: ModestTree::_Assert::DerivesFromOrEqual
// Il2CppName: DerivesFromOrEqual
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: ModestTree::_Assert::DerivesFrom
// Il2CppName: DerivesFrom
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::Type*, System::Type*)>(&ModestTree::_Assert::DerivesFrom)> {
  static const MethodInfo* get() {
    static auto* childType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* parentType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(ModestTree::_Assert*), "DerivesFrom", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{childType, parentType});
  }
};
// Writing MetadataGetter for method: ModestTree::_Assert::DerivesFromOrEqual
// Il2CppName: DerivesFromOrEqual
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::Type*, System::Type*)>(&ModestTree::_Assert::DerivesFromOrEqual)> {
  static const MethodInfo* get() {
    static auto* childType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* parentType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(ModestTree::_Assert*), "DerivesFromOrEqual", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{childType, parentType});
  }
};
// Writing MetadataGetter for method: ModestTree::_Assert::IsEqual
// Il2CppName: IsEqual
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Il2CppObject*, ::Il2CppObject*)>(&ModestTree::_Assert::IsEqual)> {
  static const MethodInfo* get() {
    static auto* left = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* right = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(ModestTree::_Assert*), "IsEqual", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{left, right});
  }
};
// Writing MetadataGetter for method: ModestTree::_Assert::IsEqual
// Il2CppName: IsEqual
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Il2CppObject*, ::Il2CppObject*, System::Func_1<::Il2CppString*>*)>(&ModestTree::_Assert::IsEqual)> {
  static const MethodInfo* get() {
    static auto* left = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* right = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* messageGenerator = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Func`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "String")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(ModestTree::_Assert*), "IsEqual", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{left, right, messageGenerator});
  }
};
// Writing MetadataGetter for method: ModestTree::_Assert::IsApproximately
// Il2CppName: IsApproximately
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(float, float, float)>(&ModestTree::_Assert::IsApproximately)> {
  static const MethodInfo* get() {
    static auto* left = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* right = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* epsilon = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(ModestTree::_Assert*), "IsApproximately", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{left, right, epsilon});
  }
};
// Writing MetadataGetter for method: ModestTree::_Assert::IsEqual
// Il2CppName: IsEqual
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Il2CppObject*, ::Il2CppObject*, ::Il2CppString*)>(&ModestTree::_Assert::IsEqual)> {
  static const MethodInfo* get() {
    static auto* left = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* right = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* message = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(ModestTree::_Assert*), "IsEqual", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{left, right, message});
  }
};
// Writing MetadataGetter for method: ModestTree::_Assert::IsNotEqual
// Il2CppName: IsNotEqual
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Il2CppObject*, ::Il2CppObject*)>(&ModestTree::_Assert::IsNotEqual)> {
  static const MethodInfo* get() {
    static auto* left = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* right = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(ModestTree::_Assert*), "IsNotEqual", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{left, right});
  }
};
// Writing MetadataGetter for method: ModestTree::_Assert::IsNotEqual
// Il2CppName: IsNotEqual
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Il2CppObject*, ::Il2CppObject*, System::Func_1<::Il2CppString*>*)>(&ModestTree::_Assert::IsNotEqual)> {
  static const MethodInfo* get() {
    static auto* left = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* right = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* messageGenerator = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Func`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "String")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(ModestTree::_Assert*), "IsNotEqual", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{left, right, messageGenerator});
  }
};
// Writing MetadataGetter for method: ModestTree::_Assert::IsNull
// Il2CppName: IsNull
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Il2CppObject*)>(&ModestTree::_Assert::IsNull)> {
  static const MethodInfo* get() {
    static auto* val = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(ModestTree::_Assert*), "IsNull", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{val});
  }
};
// Writing MetadataGetter for method: ModestTree::_Assert::IsNull
// Il2CppName: IsNull
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Il2CppObject*, ::Il2CppString*)>(&ModestTree::_Assert::IsNull)> {
  static const MethodInfo* get() {
    static auto* val = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* message = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(ModestTree::_Assert*), "IsNull", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{val, message});
  }
};
// Writing MetadataGetter for method: ModestTree::_Assert::IsNull
// Il2CppName: IsNull
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Il2CppObject*, ::Il2CppString*, ::Il2CppObject*)>(&ModestTree::_Assert::IsNull)> {
  static const MethodInfo* get() {
    static auto* val = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* message = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* p1 = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(ModestTree::_Assert*), "IsNull", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{val, message, p1});
  }
};
// Writing MetadataGetter for method: ModestTree::_Assert::IsNotNull
// Il2CppName: IsNotNull
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Il2CppObject*)>(&ModestTree::_Assert::IsNotNull)> {
  static const MethodInfo* get() {
    static auto* val = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(ModestTree::_Assert*), "IsNotNull", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{val});
  }
};
// Writing MetadataGetter for method: ModestTree::_Assert::IsNotNull
// Il2CppName: IsNotNull
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Il2CppObject*, ::Il2CppString*)>(&ModestTree::_Assert::IsNotNull)> {
  static const MethodInfo* get() {
    static auto* val = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* message = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(ModestTree::_Assert*), "IsNotNull", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{val, message});
  }
};
// Writing MetadataGetter for method: ModestTree::_Assert::IsNotNull
// Il2CppName: IsNotNull
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Il2CppObject*, ::Il2CppString*, ::Il2CppObject*)>(&ModestTree::_Assert::IsNotNull)> {
  static const MethodInfo* get() {
    static auto* val = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* message = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* p1 = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(ModestTree::_Assert*), "IsNotNull", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{val, message, p1});
  }
};
// Writing MetadataGetter for method: ModestTree::_Assert::IsNotNull
// Il2CppName: IsNotNull
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Il2CppObject*, ::Il2CppString*, ::Il2CppObject*, ::Il2CppObject*)>(&ModestTree::_Assert::IsNotNull)> {
  static const MethodInfo* get() {
    static auto* val = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* message = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* p1 = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* p2 = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(ModestTree::_Assert*), "IsNotNull", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{val, message, p1, p2});
  }
};
// Writing MetadataGetter for method: ModestTree::_Assert::IsNotEmpty
// Il2CppName: IsNotEmpty
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: ModestTree::_Assert::IsNotEqual
// Il2CppName: IsNotEqual
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Il2CppObject*, ::Il2CppObject*, ::Il2CppString*)>(&ModestTree::_Assert::IsNotEqual)> {
  static const MethodInfo* get() {
    static auto* left = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* right = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* message = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(ModestTree::_Assert*), "IsNotEqual", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{left, right, message});
  }
};
// Writing MetadataGetter for method: ModestTree::_Assert::Warn
// Il2CppName: Warn
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(bool)>(&ModestTree::_Assert::Warn)> {
  static const MethodInfo* get() {
    static auto* condition = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(ModestTree::_Assert*), "Warn", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{condition});
  }
};
// Writing MetadataGetter for method: ModestTree::_Assert::Warn
// Il2CppName: Warn
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(bool, System::Func_1<::Il2CppString*>*)>(&ModestTree::_Assert::Warn)> {
  static const MethodInfo* get() {
    static auto* condition = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* messageGenerator = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Func`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "String")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(ModestTree::_Assert*), "Warn", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{condition, messageGenerator});
  }
};
// Writing MetadataGetter for method: ModestTree::_Assert::That
// Il2CppName: That
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(bool, ::Il2CppString*)>(&ModestTree::_Assert::That)> {
  static const MethodInfo* get() {
    static auto* condition = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* message = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(ModestTree::_Assert*), "That", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{condition, message});
  }
};
// Writing MetadataGetter for method: ModestTree::_Assert::That
// Il2CppName: That
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(bool, ::Il2CppString*, ::Il2CppObject*)>(&ModestTree::_Assert::That)> {
  static const MethodInfo* get() {
    static auto* condition = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* message = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* p1 = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(ModestTree::_Assert*), "That", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{condition, message, p1});
  }
};
// Writing MetadataGetter for method: ModestTree::_Assert::That
// Il2CppName: That
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(bool, ::Il2CppString*, ::Il2CppObject*, ::Il2CppObject*)>(&ModestTree::_Assert::That)> {
  static const MethodInfo* get() {
    static auto* condition = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* message = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* p1 = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* p2 = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(ModestTree::_Assert*), "That", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{condition, message, p1, p2});
  }
};
// Writing MetadataGetter for method: ModestTree::_Assert::That
// Il2CppName: That
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(bool, ::Il2CppString*, ::Il2CppObject*, ::Il2CppObject*, ::Il2CppObject*)>(&ModestTree::_Assert::That)> {
  static const MethodInfo* get() {
    static auto* condition = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* message = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* p1 = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* p2 = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* p3 = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(ModestTree::_Assert*), "That", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{condition, message, p1, p2, p3});
  }
};
// Writing MetadataGetter for method: ModestTree::_Assert::Warn
// Il2CppName: Warn
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(bool, ::Il2CppString*)>(&ModestTree::_Assert::Warn)> {
  static const MethodInfo* get() {
    static auto* condition = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* message = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(ModestTree::_Assert*), "Warn", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{condition, message});
  }
};
// Writing MetadataGetter for method: ModestTree::_Assert::Throws
// Il2CppName: Throws
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::Action*)>(&ModestTree::_Assert::Throws)> {
  static const MethodInfo* get() {
    static auto* action = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(ModestTree::_Assert*), "Throws", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{action});
  }
};
// Writing MetadataGetter for method: ModestTree::_Assert::Throws
// Il2CppName: Throws
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: ModestTree::_Assert::CreateException
// Il2CppName: CreateException
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Zenject::ZenjectException* (*)()>(&ModestTree::_Assert::CreateException)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(ModestTree::_Assert*), "CreateException", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: ModestTree::_Assert::CreateException
// Il2CppName: CreateException
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Zenject::ZenjectException* (*)(::Il2CppString*)>(&ModestTree::_Assert::CreateException)> {
  static const MethodInfo* get() {
    static auto* message = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(ModestTree::_Assert*), "CreateException", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{message});
  }
};
// Writing MetadataGetter for method: ModestTree::_Assert::CreateException
// Il2CppName: CreateException
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Zenject::ZenjectException* (*)(::Il2CppString*, ::ArrayW<::Il2CppObject*>)>(&ModestTree::_Assert::CreateException)> {
  static const MethodInfo* get() {
    static auto* message = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* parameters = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(ModestTree::_Assert*), "CreateException", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{message, parameters});
  }
};
// Writing MetadataGetter for method: ModestTree::_Assert::CreateException
// Il2CppName: CreateException
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Zenject::ZenjectException* (*)(System::Exception*, ::Il2CppString*, ::ArrayW<::Il2CppObject*>)>(&ModestTree::_Assert::CreateException)> {
  static const MethodInfo* get() {
    static auto* innerException = &::il2cpp_utils::GetClassFromName("System", "Exception")->byval_arg;
    static auto* message = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* parameters = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(ModestTree::_Assert*), "CreateException", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{innerException, message, parameters});
  }
};
