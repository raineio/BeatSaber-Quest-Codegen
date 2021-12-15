// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Collections.ArrayList
#include "System/Collections/ArrayList.hpp"
// Including type: System.ICloneable
#include "System/ICloneable.hpp"
// Including type: System.Collections.IEnumerator
#include "System/Collections/IEnumerator.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(System::Collections::ArrayList::ArrayListEnumeratorSimple);
DEFINE_IL2CPP_ARG_TYPE(System::Collections::ArrayList::ArrayListEnumeratorSimple*, "System.Collections", "ArrayList/ArrayListEnumeratorSimple");
// Type namespace: System.Collections
namespace System::Collections {
  // Size: 0x29
  #pragma pack(push, 1)
  // Autogenerated type: System.Collections.ArrayList/System.Collections.ArrayListEnumeratorSimple
  // [TokenAttribute] Offset: FFFFFFFF
  class ArrayList::ArrayListEnumeratorSimple : public ::Il2CppObject/*, public System::ICloneable, public System::Collections::IEnumerator*/ {
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
    // private System.Collections.ArrayList list
    // Size: 0x8
    // Offset: 0x10
    System::Collections::ArrayList* list;
    // Field size check
    static_assert(sizeof(System::Collections::ArrayList*) == 0x8);
    // private System.Int32 index
    // Size: 0x4
    // Offset: 0x18
    int index;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 version
    // Size: 0x4
    // Offset: 0x1C
    int version;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Object currentElement
    // Size: 0x8
    // Offset: 0x20
    ::Il2CppObject* currentElement;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // private System.Boolean isArrayList
    // Size: 0x1
    // Offset: 0x28
    bool isArrayList;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Creating interface conversion operator: operator System::ICloneable
    operator System::ICloneable() noexcept {
      return *reinterpret_cast<System::ICloneable*>(this);
    }
    // Creating interface conversion operator: operator System::Collections::IEnumerator
    operator System::Collections::IEnumerator() noexcept {
      return *reinterpret_cast<System::Collections::IEnumerator*>(this);
    }
    // Get static field: static private System.Object dummyObject
    static ::Il2CppObject* _get_dummyObject();
    // Set static field: static private System.Object dummyObject
    static void _set_dummyObject(::Il2CppObject* value);
    // Get instance field reference: private System.Collections.ArrayList list
    System::Collections::ArrayList*& dyn_list();
    // Get instance field reference: private System.Int32 index
    int& dyn_index();
    // Get instance field reference: private System.Int32 version
    int& dyn_version();
    // Get instance field reference: private System.Object currentElement
    ::Il2CppObject*& dyn_currentElement();
    // Get instance field reference: private System.Boolean isArrayList
    bool& dyn_isArrayList();
    // public System.Object get_Current()
    // Offset: 0x199BB50
    ::Il2CppObject* get_Current();
    // System.Void .ctor(System.Collections.ArrayList list)
    // Offset: 0x199ACA4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ArrayList::ArrayListEnumeratorSimple* New_ctor(System::Collections::ArrayList* list) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Collections::ArrayList::ArrayListEnumeratorSimple::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ArrayList::ArrayListEnumeratorSimple*, creationType>(list)));
    }
    // static private System.Void .cctor()
    // Offset: 0x199BD20
    static void _cctor();
    // public System.Object Clone()
    // Offset: 0x199B950
    ::Il2CppObject* Clone();
    // public System.Boolean MoveNext()
    // Offset: 0x199B958
    bool MoveNext();
    // public System.Void Reset()
    // Offset: 0x199BC3C
    void Reset();
  }; // System.Collections.ArrayList/System.Collections.ArrayListEnumeratorSimple
  #pragma pack(pop)
  static check_size<sizeof(ArrayList::ArrayListEnumeratorSimple), 40 + sizeof(bool)> __System_Collections_ArrayList_ArrayListEnumeratorSimpleSizeCheck;
  static_assert(sizeof(ArrayList::ArrayListEnumeratorSimple) == 0x29);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Collections::ArrayList::ArrayListEnumeratorSimple::get_Current
// Il2CppName: get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Collections::ArrayList::ArrayListEnumeratorSimple::*)()>(&System::Collections::ArrayList::ArrayListEnumeratorSimple::get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Collections::ArrayList::ArrayListEnumeratorSimple*), "get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Collections::ArrayList::ArrayListEnumeratorSimple::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Collections::ArrayList::ArrayListEnumeratorSimple::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Collections::ArrayList::ArrayListEnumeratorSimple::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Collections::ArrayList::ArrayListEnumeratorSimple*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Collections::ArrayList::ArrayListEnumeratorSimple::Clone
// Il2CppName: Clone
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Collections::ArrayList::ArrayListEnumeratorSimple::*)()>(&System::Collections::ArrayList::ArrayListEnumeratorSimple::Clone)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Collections::ArrayList::ArrayListEnumeratorSimple*), "Clone", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Collections::ArrayList::ArrayListEnumeratorSimple::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Collections::ArrayList::ArrayListEnumeratorSimple::*)()>(&System::Collections::ArrayList::ArrayListEnumeratorSimple::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Collections::ArrayList::ArrayListEnumeratorSimple*), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Collections::ArrayList::ArrayListEnumeratorSimple::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Collections::ArrayList::ArrayListEnumeratorSimple::*)()>(&System::Collections::ArrayList::ArrayListEnumeratorSimple::Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Collections::ArrayList::ArrayListEnumeratorSimple*), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
