// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Collections.EmptyReadOnlyDictionaryInternal
#include "System/Collections/EmptyReadOnlyDictionaryInternal.hpp"
// Including type: System.Collections.IDictionaryEnumerator
#include "System/Collections/IDictionaryEnumerator.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: DictionaryEntry
  struct DictionaryEntry;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Collections::EmptyReadOnlyDictionaryInternal::NodeEnumerator);
DEFINE_IL2CPP_ARG_TYPE(::System::Collections::EmptyReadOnlyDictionaryInternal::NodeEnumerator*, "System.Collections", "EmptyReadOnlyDictionaryInternal/NodeEnumerator");
// Type namespace: System.Collections
namespace System::Collections {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Collections.EmptyReadOnlyDictionaryInternal/System.Collections.NodeEnumerator
  // [TokenAttribute] Offset: FFFFFFFF
  class EmptyReadOnlyDictionaryInternal::NodeEnumerator : public ::Il2CppObject/*, public ::System::Collections::IDictionaryEnumerator*/ {
    public:
    // Creating interface conversion operator: operator ::System::Collections::IDictionaryEnumerator
    operator ::System::Collections::IDictionaryEnumerator() noexcept {
      return *reinterpret_cast<::System::Collections::IDictionaryEnumerator*>(this);
    }
    // public System.Object get_Current()
    // Offset: 0x1CF94AC
    ::Il2CppObject* get_Current();
    // public System.Object get_Key()
    // Offset: 0x1CF9530
    ::Il2CppObject* get_Key();
    // public System.Object get_Value()
    // Offset: 0x1CF95B0
    ::Il2CppObject* get_Value();
    // public System.Collections.DictionaryEntry get_Entry()
    // Offset: 0x1CF9630
    ::System::Collections::DictionaryEntry get_Entry();
    // public System.Boolean MoveNext()
    // Offset: 0x1CF94A4
    bool MoveNext();
    // public System.Void Reset()
    // Offset: 0x1CF952C
    void Reset();
    // public System.Void .ctor()
    // Offset: 0x1CF949C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static EmptyReadOnlyDictionaryInternal::NodeEnumerator* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Collections::EmptyReadOnlyDictionaryInternal::NodeEnumerator::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<EmptyReadOnlyDictionaryInternal::NodeEnumerator*, creationType>()));
    }
  }; // System.Collections.EmptyReadOnlyDictionaryInternal/System.Collections.NodeEnumerator
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Collections::EmptyReadOnlyDictionaryInternal::NodeEnumerator::get_Current
// Il2CppName: get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Collections::EmptyReadOnlyDictionaryInternal::NodeEnumerator::*)()>(&System::Collections::EmptyReadOnlyDictionaryInternal::NodeEnumerator::get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Collections::EmptyReadOnlyDictionaryInternal::NodeEnumerator*), "get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Collections::EmptyReadOnlyDictionaryInternal::NodeEnumerator::get_Key
// Il2CppName: get_Key
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Collections::EmptyReadOnlyDictionaryInternal::NodeEnumerator::*)()>(&System::Collections::EmptyReadOnlyDictionaryInternal::NodeEnumerator::get_Key)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Collections::EmptyReadOnlyDictionaryInternal::NodeEnumerator*), "get_Key", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Collections::EmptyReadOnlyDictionaryInternal::NodeEnumerator::get_Value
// Il2CppName: get_Value
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Collections::EmptyReadOnlyDictionaryInternal::NodeEnumerator::*)()>(&System::Collections::EmptyReadOnlyDictionaryInternal::NodeEnumerator::get_Value)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Collections::EmptyReadOnlyDictionaryInternal::NodeEnumerator*), "get_Value", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Collections::EmptyReadOnlyDictionaryInternal::NodeEnumerator::get_Entry
// Il2CppName: get_Entry
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::DictionaryEntry (System::Collections::EmptyReadOnlyDictionaryInternal::NodeEnumerator::*)()>(&System::Collections::EmptyReadOnlyDictionaryInternal::NodeEnumerator::get_Entry)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Collections::EmptyReadOnlyDictionaryInternal::NodeEnumerator*), "get_Entry", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Collections::EmptyReadOnlyDictionaryInternal::NodeEnumerator::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Collections::EmptyReadOnlyDictionaryInternal::NodeEnumerator::*)()>(&System::Collections::EmptyReadOnlyDictionaryInternal::NodeEnumerator::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Collections::EmptyReadOnlyDictionaryInternal::NodeEnumerator*), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Collections::EmptyReadOnlyDictionaryInternal::NodeEnumerator::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Collections::EmptyReadOnlyDictionaryInternal::NodeEnumerator::*)()>(&System::Collections::EmptyReadOnlyDictionaryInternal::NodeEnumerator::Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Collections::EmptyReadOnlyDictionaryInternal::NodeEnumerator*), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Collections::EmptyReadOnlyDictionaryInternal::NodeEnumerator::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
