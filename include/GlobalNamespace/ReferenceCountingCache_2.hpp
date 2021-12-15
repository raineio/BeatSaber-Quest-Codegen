// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: IReferenceCountingCache`2
#include "GlobalNamespace/IReferenceCountingCache_2.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: ReferenceCountingCache`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class ReferenceCountingCache_2;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(GlobalNamespace::ReferenceCountingCache_2, "", "ReferenceCountingCache`2");
// Type namespace: 
namespace GlobalNamespace {
  // WARNING Size may be invalid!
  // Autogenerated type: ReferenceCountingCache`2
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename TKey, typename TValue>
  class ReferenceCountingCache_2 : public ::Il2CppObject/*, public GlobalNamespace::IReferenceCountingCache_2<TKey, TValue>*/ {
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
    // private readonly System.Collections.Generic.Dictionary`2<TKey,TValue> _items
    // Size: 0x8
    // Offset: 0x0
    System::Collections::Generic::Dictionary_2<TKey, TValue>* items;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::Dictionary_2<TKey, TValue>*) == 0x8);
    // private readonly System.Collections.Generic.Dictionary`2<TKey,System.Int32> _referencesCount
    // Size: 0x8
    // Offset: 0x0
    System::Collections::Generic::Dictionary_2<TKey, int>* referencesCount;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::Dictionary_2<TKey, int>*) == 0x8);
    public:
    // Creating interface conversion operator: operator GlobalNamespace::IReferenceCountingCache_2<TKey, TValue>
    operator GlobalNamespace::IReferenceCountingCache_2<TKey, TValue>() noexcept {
      return *reinterpret_cast<GlobalNamespace::IReferenceCountingCache_2<TKey, TValue>*>(this);
    }
    // Autogenerated instance field getter
    // Get instance field: private readonly System.Collections.Generic.Dictionary`2<TKey,TValue> _items
    System::Collections::Generic::Dictionary_2<TKey, TValue>*& dyn__items() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::ReferenceCountingCache_2::dyn__items");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "_items"))->offset;
      return *reinterpret_cast<System::Collections::Generic::Dictionary_2<TKey, TValue>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private readonly System.Collections.Generic.Dictionary`2<TKey,System.Int32> _referencesCount
    System::Collections::Generic::Dictionary_2<TKey, int>*& dyn__referencesCount() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::ReferenceCountingCache_2::dyn__referencesCount");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "_referencesCount"))->offset;
      return *reinterpret_cast<System::Collections::Generic::Dictionary_2<TKey, int>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // public System.Int32 Insert(TKey key, TValue item)
    // Offset: 0xFFFFFFFF
    int Insert(TKey key, TValue item) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::ReferenceCountingCache_2::Insert");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Insert", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(key), ::il2cpp_utils::ExtractType(item)})));
      return ::il2cpp_utils::RunMethodThrow<int, false>(this, ___internal__method, key, item);
    }
    // public System.Int32 AddReference(TKey key)
    // Offset: 0xFFFFFFFF
    int AddReference(TKey key) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::ReferenceCountingCache_2::AddReference");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "AddReference", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(key)})));
      return ::il2cpp_utils::RunMethodThrow<int, false>(this, ___internal__method, key);
    }
    // public System.Int32 RemoveReference(TKey key)
    // Offset: 0xFFFFFFFF
    int RemoveReference(TKey key) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::ReferenceCountingCache_2::RemoveReference");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "RemoveReference", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(key)})));
      return ::il2cpp_utils::RunMethodThrow<int, false>(this, ___internal__method, key);
    }
    // public System.Int32 GetReferenceCount(TKey key)
    // Offset: 0xFFFFFFFF
    int GetReferenceCount(TKey key) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::ReferenceCountingCache_2::GetReferenceCount");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "GetReferenceCount", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(key)})));
      return ::il2cpp_utils::RunMethodThrow<int, false>(this, ___internal__method, key);
    }
    // public System.Boolean TryGet(TKey key, out TValue result)
    // Offset: 0xFFFFFFFF
    bool TryGet(TKey key, ByRef<TValue> result) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::ReferenceCountingCache_2::TryGet");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "TryGet", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(key), ::il2cpp_utils::ExtractIndependentType<TValue&>()})));
      return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___internal__method, key, byref(result));
    }
    // static private System.Void LogError(System.String message)
    // Offset: 0xFFFFFFFF
    static void LogError(::Il2CppString* message) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::ReferenceCountingCache_2::LogError");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ReferenceCountingCache_2<TKey, TValue>*>::get(), "LogError", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(message)})));
      ::il2cpp_utils::RunMethodThrow<void, false>(static_cast<Il2CppObject*>(nullptr), ___internal__method, message);
    }
    // public System.Void .ctor()
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ReferenceCountingCache_2<TKey, TValue>* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::ReferenceCountingCache_2::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ReferenceCountingCache_2<TKey, TValue>*, creationType>()));
    }
  }; // ReferenceCountingCache`2
  // Could not write size check! Type: ReferenceCountingCache`2 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
