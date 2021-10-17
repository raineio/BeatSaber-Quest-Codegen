// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: Zenject.IValidatable
#include "Zenject/IValidatable.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
  // Skipping declaration: <>c because it is already included!
  // Forward declaring type: DiContainer
  class DiContainer;
  // Forward declaring type: ConditionCopyNonLazyBinder
  class ConditionCopyNonLazyBinder;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
  // Forward declaring type: ICollection`1<T>
  template<typename T>
  class ICollection_1;
}
// Forward declaring namespace: ModestTree::Util
namespace ModestTree::Util {
  // Forward declaring type: ValuePair`2<T1, T2>
  template<typename T1, typename T2>
  class ValuePair_2;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Forward declaring type: KeyedFactoryBase`2<TBase, TKey>
  template<typename TBase, typename TKey>
  class KeyedFactoryBase_2;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::KeyedFactoryBase_2, "Zenject", "KeyedFactoryBase`2");
// Type namespace: Zenject
namespace Zenject {
  // WARNING Size may be invalid!
  // Autogenerated type: Zenject.KeyedFactoryBase`2
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename TBase, typename TKey>
  class KeyedFactoryBase_2 : public ::Il2CppObject/*, public Zenject::IValidatable*/ {
    public:
    // Nested type: Zenject::KeyedFactoryBase_2::$$c<TBase, TKey>
    class $$c;
    // WARNING Size may be invalid!
    // Autogenerated type: Zenject.KeyedFactoryBase`2/Zenject.<>c
    // [TokenAttribute] Offset: FFFFFFFF
    // [CompilerGeneratedAttribute] Offset: FFFFFFFF
    class $$c : public ::il2cpp_utils::il2cpp_type_check::NestedType, public ::Il2CppObject {
      public:
      using declaring_type = KeyedFactoryBase_2<TBase, TKey>*;
      static constexpr std::string_view NESTED_NAME = "<>c";
      static constexpr bool IS_VALUE_TYPE = false;
      // Autogenerated static field getter
      // Get static field: static public readonly Zenject.KeyedFactoryBase`2/Zenject.<>c<TBase,TKey> <>9
      static typename Zenject::KeyedFactoryBase_2<TBase, TKey>::$$c* _get_$$9() {
        static auto ___internal__logger = ::Logger::get().WithContext("Zenject::KeyedFactoryBase_2::$$c::_get_$$9");
        return THROW_UNLESS((il2cpp_utils::GetFieldValue<typename Zenject::KeyedFactoryBase_2<TBase, TKey>::$$c*>(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<typename KeyedFactoryBase_2<TBase, TKey>::$$c*>::get(), "<>9")));
      }
      // Autogenerated static field setter
      // Set static field: static public readonly Zenject.KeyedFactoryBase`2/Zenject.<>c<TBase,TKey> <>9
      static void _set_$$9(typename Zenject::KeyedFactoryBase_2<TBase, TKey>::$$c* value) {
        static auto ___internal__logger = ::Logger::get().WithContext("Zenject::KeyedFactoryBase_2::$$c::_set_$$9");
        THROW_UNLESS((il2cpp_utils::SetFieldValue(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<typename KeyedFactoryBase_2<TBase, TKey>::$$c*>::get(), "<>9", value)));
      }
      // Autogenerated static field getter
      // Get static field: static public System.Func`2<ModestTree.Util.ValuePair`2<TKey,System.Type>,TKey> <>9__12_0
      static System::Func_2<ModestTree::Util::ValuePair_2<TKey, System::Type*>*, TKey>* _get_$$9__12_0() {
        static auto ___internal__logger = ::Logger::get().WithContext("Zenject::KeyedFactoryBase_2::$$c::_get_$$9__12_0");
        return THROW_UNLESS((il2cpp_utils::GetFieldValue<System::Func_2<ModestTree::Util::ValuePair_2<TKey, System::Type*>*, TKey>*>(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<typename KeyedFactoryBase_2<TBase, TKey>::$$c*>::get(), "<>9__12_0")));
      }
      // Autogenerated static field setter
      // Set static field: static public System.Func`2<ModestTree.Util.ValuePair`2<TKey,System.Type>,TKey> <>9__12_0
      static void _set_$$9__12_0(System::Func_2<ModestTree::Util::ValuePair_2<TKey, System::Type*>*, TKey>* value) {
        static auto ___internal__logger = ::Logger::get().WithContext("Zenject::KeyedFactoryBase_2::$$c::_set_$$9__12_0");
        THROW_UNLESS((il2cpp_utils::SetFieldValue(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<typename KeyedFactoryBase_2<TBase, TKey>::$$c*>::get(), "<>9__12_0", value)));
      }
      // Autogenerated static field getter
      // Get static field: static public System.Func`2<ModestTree.Util.ValuePair`2<TKey,System.Type>,System.Type> <>9__12_1
      static System::Func_2<ModestTree::Util::ValuePair_2<TKey, System::Type*>*, System::Type*>* _get_$$9__12_1() {
        static auto ___internal__logger = ::Logger::get().WithContext("Zenject::KeyedFactoryBase_2::$$c::_get_$$9__12_1");
        return THROW_UNLESS((il2cpp_utils::GetFieldValue<System::Func_2<ModestTree::Util::ValuePair_2<TKey, System::Type*>*, System::Type*>*>(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<typename KeyedFactoryBase_2<TBase, TKey>::$$c*>::get(), "<>9__12_1")));
      }
      // Autogenerated static field setter
      // Set static field: static public System.Func`2<ModestTree.Util.ValuePair`2<TKey,System.Type>,System.Type> <>9__12_1
      static void _set_$$9__12_1(System::Func_2<ModestTree::Util::ValuePair_2<TKey, System::Type*>*, System::Type*>* value) {
        static auto ___internal__logger = ::Logger::get().WithContext("Zenject::KeyedFactoryBase_2::$$c::_set_$$9__12_1");
        THROW_UNLESS((il2cpp_utils::SetFieldValue(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<typename KeyedFactoryBase_2<TBase, TKey>::$$c*>::get(), "<>9__12_1", value)));
      }
      // static private System.Void .cctor()
      // Offset: 0xFFFFFFFF
      static void _cctor() {
        static auto ___internal__logger = ::Logger::get().WithContext("Zenject::KeyedFactoryBase_2::$$c::.cctor");
        static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<typename KeyedFactoryBase_2<TBase, TKey>::$$c*>::get(), ".cctor", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
        ::il2cpp_utils::RunMethodThrow<void, false>(static_cast<Il2CppObject*>(nullptr), ___internal__method);
      }
      // TKey <Initialize>b__12_0(ModestTree.Util.ValuePair`2<TKey,System.Type> x)
      // Offset: 0xFFFFFFFF
      TKey $Initialize$b__12_0(ModestTree::Util::ValuePair_2<TKey, System::Type*>* x) {
        static auto ___internal__logger = ::Logger::get().WithContext("Zenject::KeyedFactoryBase_2::$$c::<Initialize>b__12_0");
        static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "<Initialize>b__12_0", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(x)})));
        return ::il2cpp_utils::RunMethodThrow<TKey, false>(this, ___internal__method, x);
      }
      // System.Type <Initialize>b__12_1(ModestTree.Util.ValuePair`2<TKey,System.Type> x)
      // Offset: 0xFFFFFFFF
      System::Type* $Initialize$b__12_1(ModestTree::Util::ValuePair_2<TKey, System::Type*>* x) {
        static auto ___internal__logger = ::Logger::get().WithContext("Zenject::KeyedFactoryBase_2::$$c::<Initialize>b__12_1");
        static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "<Initialize>b__12_1", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(x)})));
        return ::il2cpp_utils::RunMethodThrow<System::Type*, false>(this, ___internal__method, x);
      }
      // public System.Void .ctor()
      // Offset: 0xFFFFFFFF
      // Implemented from: System.Object
      // Base method: System.Void Object::.ctor()
      template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
      static typename KeyedFactoryBase_2<TBase, TKey>::$$c* New_ctor() {
        static auto ___internal__logger = ::Logger::get().WithContext("Zenject::KeyedFactoryBase_2::$$c::.ctor");
        return THROW_UNLESS((::il2cpp_utils::New<typename KeyedFactoryBase_2<TBase, TKey>::$$c*, creationType>()));
      }
    }; // Zenject.KeyedFactoryBase`2/Zenject.<>c
    // Could not write size check! Type: Zenject.KeyedFactoryBase`2/Zenject.<>c is generic, or has no fields that are valid for size checks!
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    protected:
    #endif
    // [InjectAttribute] Offset: 0xEC642C
    // private readonly Zenject.DiContainer _container
    // Size: 0x8
    // Offset: 0x0
    Zenject::DiContainer* container;
    // Field size check
    static_assert(sizeof(Zenject::DiContainer*) == 0x8);
    // [InjectOptionalAttribute] Offset: 0xEC643C
    // private readonly System.Collections.Generic.List`1<ModestTree.Util.ValuePair`2<TKey,System.Type>> _typePairs
    // Size: 0x8
    // Offset: 0x0
    System::Collections::Generic::List_1<ModestTree::Util::ValuePair_2<TKey, System::Type*>*>* typePairs;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<ModestTree::Util::ValuePair_2<TKey, System::Type*>*>*) == 0x8);
    // private System.Collections.Generic.Dictionary`2<TKey,System.Type> _typeMap
    // Size: 0x8
    // Offset: 0x0
    System::Collections::Generic::Dictionary_2<TKey, System::Type*>* typeMap;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::Dictionary_2<TKey, System::Type*>*) == 0x8);
    // [InjectOptionalAttribute] Offset: 0xEC644C
    // private readonly System.Type _fallbackType
    // Size: 0x8
    // Offset: 0x0
    System::Type* fallbackType;
    // Field size check
    static_assert(sizeof(System::Type*) == 0x8);
    public:
    // Creating interface conversion operator: operator Zenject::IValidatable
    operator Zenject::IValidatable() noexcept {
      return *reinterpret_cast<Zenject::IValidatable*>(this);
    }
    // Autogenerated instance field getter
    // Get instance field: private readonly Zenject.DiContainer _container
    Zenject::DiContainer*& dyn__container() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::KeyedFactoryBase_2::dyn__container");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "_container"))->offset;
      return *reinterpret_cast<Zenject::DiContainer**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private readonly System.Collections.Generic.List`1<ModestTree.Util.ValuePair`2<TKey,System.Type>> _typePairs
    System::Collections::Generic::List_1<ModestTree::Util::ValuePair_2<TKey, System::Type*>*>*& dyn__typePairs() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::KeyedFactoryBase_2::dyn__typePairs");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "_typePairs"))->offset;
      return *reinterpret_cast<System::Collections::Generic::List_1<ModestTree::Util::ValuePair_2<TKey, System::Type*>*>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private System.Collections.Generic.Dictionary`2<TKey,System.Type> _typeMap
    System::Collections::Generic::Dictionary_2<TKey, System::Type*>*& dyn__typeMap() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::KeyedFactoryBase_2::dyn__typeMap");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "_typeMap"))->offset;
      return *reinterpret_cast<System::Collections::Generic::Dictionary_2<TKey, System::Type*>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private readonly System.Type _fallbackType
    System::Type*& dyn__fallbackType() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::KeyedFactoryBase_2::dyn__fallbackType");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "_fallbackType"))->offset;
      return *reinterpret_cast<System::Type**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // protected Zenject.DiContainer get_Container()
    // Offset: 0xFFFFFFFF
    Zenject::DiContainer* get_Container() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::KeyedFactoryBase_2::get_Container");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "get_Container", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodThrow<Zenject::DiContainer*, false>(this, ___internal__method);
    }
    // protected System.Collections.Generic.IEnumerable`1<System.Type> get_ProvidedTypes()
    // Offset: 0xFFFFFFFF
    System::Collections::Generic::IEnumerable_1<System::Type*>* get_ProvidedTypes() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::KeyedFactoryBase_2::get_ProvidedTypes");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "get_ProvidedTypes", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodThrow<System::Collections::Generic::IEnumerable_1<System::Type*>*, false>(this, ___internal__method);
    }
    // public System.Collections.Generic.ICollection`1<TKey> get_Keys()
    // Offset: 0xFFFFFFFF
    System::Collections::Generic::ICollection_1<TKey>* get_Keys() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::KeyedFactoryBase_2::get_Keys");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "get_Keys", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodThrow<System::Collections::Generic::ICollection_1<TKey>*, false>(this, ___internal__method);
    }
    // protected System.Collections.Generic.Dictionary`2<TKey,System.Type> get_TypeMap()
    // Offset: 0xFFFFFFFF
    System::Collections::Generic::Dictionary_2<TKey, System::Type*>* get_TypeMap() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::KeyedFactoryBase_2::get_TypeMap");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "get_TypeMap", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodThrow<System::Collections::Generic::Dictionary_2<TKey, System::Type*>*, false>(this, ___internal__method);
    }
    // public System.Void Initialize()
    // Offset: 0xFFFFFFFF
    void Initialize() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::KeyedFactoryBase_2::Initialize");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Initialize", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
    }
    // public System.Boolean HasKey(TKey key)
    // Offset: 0xFFFFFFFF
    bool HasKey(TKey key) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::KeyedFactoryBase_2::HasKey");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "HasKey", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(key)})));
      return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___internal__method, key);
    }
    // protected System.Type GetTypeForKey(TKey key)
    // Offset: 0xFFFFFFFF
    System::Type* GetTypeForKey(TKey key) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::KeyedFactoryBase_2::GetTypeForKey");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "GetTypeForKey", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(key)})));
      return ::il2cpp_utils::RunMethodThrow<System::Type*, false>(this, ___internal__method, key);
    }
    // public System.Void Validate()
    // Offset: 0xFFFFFFFF
    void Validate() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::KeyedFactoryBase_2::Validate");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Validate", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
    }
    // static protected Zenject.ConditionCopyNonLazyBinder AddBindingInternal(Zenject.DiContainer container, TKey key)
    // Offset: 0xFFFFFFFF
    template<class TDerived>
    static Zenject::ConditionCopyNonLazyBinder* AddBindingInternal(Zenject::DiContainer* container, TKey key) {
      static_assert(std::is_convertible_v<TDerived, TBase>);
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::KeyedFactoryBase_2::AddBindingInternal");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<KeyedFactoryBase_2<TBase, TKey>*>::get(), "AddBindingInternal", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TDerived>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(container), ::il2cpp_utils::ExtractType(key)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TDerived>::get()}));
      return ::il2cpp_utils::RunMethodThrow<Zenject::ConditionCopyNonLazyBinder*, false>(static_cast<Il2CppObject*>(nullptr), ___generic__method, container, key);
    }
    // protected System.Void .ctor()
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static KeyedFactoryBase_2<TBase, TKey>* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::KeyedFactoryBase_2::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<KeyedFactoryBase_2<TBase, TKey>*, creationType>()));
    }
  }; // Zenject.KeyedFactoryBase`2
  // Could not write size check! Type: Zenject.KeyedFactoryBase`2 is generic, or has no fields that are valid for size checks!
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
