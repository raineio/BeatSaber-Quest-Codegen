// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Collections.Generic.EqualityComparer`1
#include "System/Collections/Generic/EqualityComparer_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "extern/beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Type namespace: System.Collections.Generic
namespace System::Collections::Generic {
  // Forward declaring type: InternalStringComparer
  class InternalStringComparer;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(System::Collections::Generic::InternalStringComparer);
DEFINE_IL2CPP_ARG_TYPE(System::Collections::Generic::InternalStringComparer*, "System.Collections.Generic", "InternalStringComparer");
// Type namespace: System.Collections.Generic
namespace System::Collections::Generic {
  // WARNING Size may be invalid!
  // Autogenerated type: System.Collections.Generic.InternalStringComparer
  // [TokenAttribute] Offset: FFFFFFFF
  class InternalStringComparer : public System::Collections::Generic::EqualityComparer_1<::Il2CppString*> {
    public:
    // public System.Int32 GetHashCode(System.String obj)
    // Offset: 0x199EEA4
    int GetHashCode(::Il2CppString* obj);
    // public System.Boolean Equals(System.String x, System.String y)
    // Offset: 0x199EEC4
    bool Equals(::Il2CppString* x, ::Il2CppString* y);
    // System.Int32 IndexOf(System.String[] array, System.String value, System.Int32 startIndex, System.Int32 count)
    // Offset: 0x199EEF4
    int IndexOf(::ArrayW<::Il2CppString*> array, ::Il2CppString* value, int startIndex, int count);
    // public System.Void .ctor()
    // Offset: 0x199EF5C
    // Implemented from: System.Collections.Generic.EqualityComparer`1
    // Base method: System.Void EqualityComparer_1::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static InternalStringComparer* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Collections::Generic::InternalStringComparer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<InternalStringComparer*, creationType>()));
    }
  }; // System.Collections.Generic.InternalStringComparer
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Collections::Generic::InternalStringComparer::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Collections::Generic::InternalStringComparer::*)(::Il2CppString*)>(&System::Collections::Generic::InternalStringComparer::GetHashCode)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Collections::Generic::InternalStringComparer*), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: System::Collections::Generic::InternalStringComparer::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Collections::Generic::InternalStringComparer::*)(::Il2CppString*, ::Il2CppString*)>(&System::Collections::Generic::InternalStringComparer::Equals)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* y = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Collections::Generic::InternalStringComparer*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, y});
  }
};
// Writing MetadataGetter for method: System::Collections::Generic::InternalStringComparer::IndexOf
// Il2CppName: IndexOf
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Collections::Generic::InternalStringComparer::*)(::ArrayW<::Il2CppString*>, ::Il2CppString*, int, int)>(&System::Collections::Generic::InternalStringComparer::IndexOf)> {
  static const MethodInfo* get() {
    static auto* array = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "String"), 1)->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* startIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Collections::Generic::InternalStringComparer*), "IndexOf", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{array, value, startIndex, count});
  }
};
// Writing MetadataGetter for method: System::Collections::Generic::InternalStringComparer::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
