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
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Object
  class Object;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IAvatarPart
  class IAvatarPart;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: AvatarPartCollection`1<T>
  template<typename T>
  class AvatarPartCollection_1;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(GlobalNamespace::AvatarPartCollection_1, "", "AvatarPartCollection`1");
// Type namespace: 
namespace GlobalNamespace {
  // WARNING Size may be invalid!
  // Autogenerated type: AvatarPartCollection`1
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename T>
  class AvatarPartCollection_1 : public ::Il2CppObject {
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
    // private readonly System.Collections.Generic.Dictionary`2<System.String,T> _partById
    // Size: 0x8
    // Offset: 0x0
    System::Collections::Generic::Dictionary_2<::StringW, T>* partById;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::Dictionary_2<::StringW, T>*) == 0x8);
    // private readonly System.Collections.Generic.Dictionary`2<System.String,System.Int32> _partIndexById
    // Size: 0x8
    // Offset: 0x0
    System::Collections::Generic::Dictionary_2<::StringW, int>* partIndexById;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::Dictionary_2<::StringW, int>*) == 0x8);
    // private readonly T[] _parts
    // Size: 0x8
    // Offset: 0x0
    ::ArrayW<T> parts;
    // Field size check
    static_assert(sizeof(::ArrayW<T>) == 0x8);
    public:
    // Autogenerated instance field getter
    // Get instance field: private readonly System.Collections.Generic.Dictionary`2<System.String,T> _partById
    System::Collections::Generic::Dictionary_2<::StringW, T>*& dyn__partById() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::AvatarPartCollection_1::dyn__partById");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "_partById"))->offset;
      return *reinterpret_cast<System::Collections::Generic::Dictionary_2<::StringW, T>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private readonly System.Collections.Generic.Dictionary`2<System.String,System.Int32> _partIndexById
    System::Collections::Generic::Dictionary_2<::StringW, int>*& dyn__partIndexById() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::AvatarPartCollection_1::dyn__partIndexById");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "_partIndexById"))->offset;
      return *reinterpret_cast<System::Collections::Generic::Dictionary_2<::StringW, int>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private readonly T[] _parts
    ::ArrayW<T>& dyn__parts() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::AvatarPartCollection_1::dyn__parts");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "_parts"))->offset;
      return *reinterpret_cast<::ArrayW<T>*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // public System.Int32 get_count()
    // Offset: 0xFFFFFFFF
    int get_count() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::AvatarPartCollection_1::get_count");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "get_count", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<int, false>(this, ___internal__method);
    }
    // public T[] get_parts()
    // Offset: 0xFFFFFFFF
    ::ArrayW<T> get_parts() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::AvatarPartCollection_1::get_parts");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "get_parts", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<::ArrayW<T>, false>(this, ___internal__method);
    }
    // public System.Void .ctor(T[] parts)
    // Offset: 0xFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AvatarPartCollection_1<T>* New_ctor(::ArrayW<T> parts) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::AvatarPartCollection_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AvatarPartCollection_1<T>*, creationType>(parts)));
    }
    // public T GetById(System.String id)
    // Offset: 0xFFFFFFFF
    T GetById(::StringW id) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::AvatarPartCollection_1::GetById");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "GetById", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(id)})));
      return ::il2cpp_utils::RunMethodRethrow<T, false>(this, ___internal__method, id);
    }
    // public T GetRandom()
    // Offset: 0xFFFFFFFF
    T GetRandom() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::AvatarPartCollection_1::GetRandom");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "GetRandom", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<T, false>(this, ___internal__method);
    }
    // public T GetByIndex(System.Int32 index)
    // Offset: 0xFFFFFFFF
    T GetByIndex(int index) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::AvatarPartCollection_1::GetByIndex");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "GetByIndex", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(index)})));
      return ::il2cpp_utils::RunMethodRethrow<T, false>(this, ___internal__method, index);
    }
    // public System.Int32 GetIndexById(System.String id)
    // Offset: 0xFFFFFFFF
    int GetIndexById(::StringW id) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::AvatarPartCollection_1::GetIndexById");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "GetIndexById", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(id)})));
      return ::il2cpp_utils::RunMethodRethrow<int, false>(this, ___internal__method, id);
    }
    // public T GetDefault()
    // Offset: 0xFFFFFFFF
    T GetDefault() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::AvatarPartCollection_1::GetDefault");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "GetDefault", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<T, false>(this, ___internal__method);
    }
  }; // AvatarPartCollection`1
  // Could not write size check! Type: AvatarPartCollection`1 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
