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
// Begin forward declares
// Forward declaring namespace: System::ComponentModel
namespace System::ComponentModel {
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEqualityComparer
  class IEqualityComparer;
}
// Completed forward declares
// Type namespace: System.ComponentModel
namespace System::ComponentModel {
  // Forward declaring type: WeakHashtable
  class WeakHashtable;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::ComponentModel::WeakHashtable);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::WeakHashtable*, "System.ComponentModel", "WeakHashtable");
// Type namespace: System.ComponentModel
namespace System::ComponentModel {
  // Size: 0x50
  #pragma pack(push, 1)
  // Autogenerated type: System.ComponentModel.WeakHashtable
  // [TokenAttribute] Offset: FFFFFFFF
  class WeakHashtable : public ::System::Collections::Hashtable {
    public:
    // Nested type: ::System::ComponentModel::WeakHashtable::WeakKeyComparer
    class WeakKeyComparer;
    // Get static field: static private System.Collections.IEqualityComparer _comparer
    static ::System::Collections::IEqualityComparer* _get__comparer();
    // Set static field: static private System.Collections.IEqualityComparer _comparer
    static void _set__comparer(::System::Collections::IEqualityComparer* value);
    // System.Void .ctor()
    // Offset: 0x1CE1EBC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static WeakHashtable* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::ComponentModel::WeakHashtable::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<WeakHashtable*, creationType>()));
    }
    // static private System.Void .cctor()
    // Offset: 0x1CE1F40
    static void _cctor();
    // public override System.Void Clear()
    // Offset: 0x1CE1F30
    // Implemented from: System.Collections.Hashtable
    // Base method: System.Void Hashtable::Clear()
    void Clear();
    // public override System.Void Remove(System.Object key)
    // Offset: 0x1CE1F38
    // Implemented from: System.Collections.Hashtable
    // Base method: System.Void Hashtable::Remove(System.Object key)
    void Remove(::Il2CppObject* key);
  }; // System.ComponentModel.WeakHashtable
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::ComponentModel::WeakHashtable::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::ComponentModel::WeakHashtable::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::ComponentModel::WeakHashtable::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::WeakHashtable*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::WeakHashtable::Clear
// Il2CppName: Clear
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::ComponentModel::WeakHashtable::*)()>(&System::ComponentModel::WeakHashtable::Clear)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::WeakHashtable*), "Clear", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::WeakHashtable::Remove
// Il2CppName: Remove
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::ComponentModel::WeakHashtable::*)(::Il2CppObject*)>(&System::ComponentModel::WeakHashtable::Remove)> {
  static const MethodInfo* get() {
    static auto* key = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::WeakHashtable*), "Remove", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{key});
  }
};
