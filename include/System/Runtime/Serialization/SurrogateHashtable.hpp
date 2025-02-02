// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Collections.Hashtable
#include "System/Collections/Hashtable.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: System.Runtime.Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: SurrogateHashtable
  class SurrogateHashtable;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Runtime::Serialization::SurrogateHashtable);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::SurrogateHashtable*, "System.Runtime.Serialization", "SurrogateHashtable");
// Type namespace: System.Runtime.Serialization
namespace System::Runtime::Serialization {
  // Size: 0x50
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.Serialization.SurrogateHashtable
  // [TokenAttribute] Offset: FFFFFFFF
  class SurrogateHashtable : public ::System::Collections::Hashtable {
    public:
    // System.Void .ctor(System.Int32 size)
    // Offset: 0x1698800
    // Implemented from: System.Collections.Hashtable
    // Base method: System.Void Hashtable::.ctor(System.Int32 size)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SurrogateHashtable* New_ctor(int size) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Runtime::Serialization::SurrogateHashtable::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SurrogateHashtable*, creationType>(size)));
    }
    // protected override System.Boolean KeyEquals(System.Object key, System.Object item)
    // Offset: 0x1698808
    // Implemented from: System.Collections.Hashtable
    // Base method: System.Boolean Hashtable::KeyEquals(System.Object key, System.Object item)
    bool KeyEquals(::Il2CppObject* key, ::Il2CppObject* item);
  }; // System.Runtime.Serialization.SurrogateHashtable
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Runtime::Serialization::SurrogateHashtable::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Runtime::Serialization::SurrogateHashtable::KeyEquals
// Il2CppName: KeyEquals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Runtime::Serialization::SurrogateHashtable::*)(::Il2CppObject*, ::Il2CppObject*)>(&System::Runtime::Serialization::SurrogateHashtable::KeyEquals)> {
  static const MethodInfo* get() {
    static auto* key = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* item = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::SurrogateHashtable*), "KeyEquals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{key, item});
  }
};
