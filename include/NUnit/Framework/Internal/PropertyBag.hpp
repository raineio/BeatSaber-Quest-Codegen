// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: NUnit.Framework.Interfaces.IPropertyBag
#include "NUnit/Framework/Interfaces/IPropertyBag.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
  // Forward declaring type: ICollection`1<T>
  template<typename T>
  class ICollection_1;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IList
  class IList;
}
// Forward declaring namespace: NUnit::Framework::Interfaces
namespace NUnit::Framework::Interfaces {
  // Forward declaring type: TNode
  class TNode;
}
// Completed forward declares
// Type namespace: NUnit.Framework.Internal
namespace NUnit::Framework::Internal {
  // Forward declaring type: PropertyBag
  class PropertyBag;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::NUnit::Framework::Internal::PropertyBag);
DEFINE_IL2CPP_ARG_TYPE(::NUnit::Framework::Internal::PropertyBag*, "NUnit.Framework.Internal", "PropertyBag");
// Type namespace: NUnit.Framework.Internal
namespace NUnit::Framework::Internal {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: NUnit.Framework.Internal.PropertyBag
  // [TokenAttribute] Offset: FFFFFFFF
  // [DefaultMemberAttribute] Offset: 10CAC3C
  class PropertyBag : public ::Il2CppObject/*, public ::NUnit::Framework::Interfaces::IPropertyBag*/ {
    public:
    public:
    // private System.Collections.Generic.Dictionary`2<System.String,System.Collections.IList> inner
    // Size: 0x8
    // Offset: 0x10
    ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::IList*>* inner;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::IList*>*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::NUnit::Framework::Interfaces::IPropertyBag
    operator ::NUnit::Framework::Interfaces::IPropertyBag() noexcept {
      return *reinterpret_cast<::NUnit::Framework::Interfaces::IPropertyBag*>(this);
    }
    // Creating interface conversion operator: i_IPropertyBag
    inline ::NUnit::Framework::Interfaces::IPropertyBag* i_IPropertyBag() noexcept {
      return reinterpret_cast<::NUnit::Framework::Interfaces::IPropertyBag*>(this);
    }
    // Creating conversion operator: operator ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::IList*>*
    constexpr operator ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::IList*>*() const noexcept {
      return inner;
    }
    // Get instance field reference: private System.Collections.Generic.Dictionary`2<System.String,System.Collections.IList> inner
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::IList*>*& dyn_inner();
    // public System.Collections.Generic.ICollection`1<System.String> get_Keys()
    // Offset: 0x2A06548
    ::System::Collections::Generic::ICollection_1<::StringW>* get_Keys();
    // public System.Collections.IList get_Item(System.String key)
    // Offset: 0x2A065A0
    ::System::Collections::IList* get_Item(::StringW key);
    // public System.Void .ctor()
    // Offset: 0x2A06CF4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PropertyBag* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::NUnit::Framework::Internal::PropertyBag::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PropertyBag*, creationType>()));
    }
    // public System.Void Add(System.String key, System.Object value)
    // Offset: 0x2A060F4
    void Add(::StringW key, ::Il2CppObject* value);
    // public System.Void Set(System.String key, System.Object value)
    // Offset: 0x2A06238
    void Set(::StringW key, ::Il2CppObject* value);
    // public System.Object Get(System.String key)
    // Offset: 0x2A06370
    ::Il2CppObject* Get(::StringW key);
    // public System.Boolean ContainsKey(System.String key)
    // Offset: 0x2A064E0
    bool ContainsKey(::StringW key);
    // public NUnit.Framework.Interfaces.TNode ToXml(System.Boolean recursive)
    // Offset: 0x2A06664
    ::NUnit::Framework::Interfaces::TNode* ToXml(bool recursive);
    // public NUnit.Framework.Interfaces.TNode AddToXml(NUnit.Framework.Interfaces.TNode parentNode, System.Boolean recursive)
    // Offset: 0x2A066D8
    ::NUnit::Framework::Interfaces::TNode* AddToXml(::NUnit::Framework::Interfaces::TNode* parentNode, bool recursive);
  }; // NUnit.Framework.Internal.PropertyBag
  #pragma pack(pop)
  static check_size<sizeof(PropertyBag), 16 + sizeof(::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::IList*>*)> __NUnit_Framework_Internal_PropertyBagSizeCheck;
  static_assert(sizeof(PropertyBag) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: NUnit::Framework::Internal::PropertyBag::get_Keys
// Il2CppName: get_Keys
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::ICollection_1<::StringW>* (NUnit::Framework::Internal::PropertyBag::*)()>(&NUnit::Framework::Internal::PropertyBag::get_Keys)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::PropertyBag*), "get_Keys", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::PropertyBag::get_Item
// Il2CppName: get_Item
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IList* (NUnit::Framework::Internal::PropertyBag::*)(::StringW)>(&NUnit::Framework::Internal::PropertyBag::get_Item)> {
  static const MethodInfo* get() {
    static auto* key = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::PropertyBag*), "get_Item", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{key});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::PropertyBag::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: NUnit::Framework::Internal::PropertyBag::Add
// Il2CppName: Add
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (NUnit::Framework::Internal::PropertyBag::*)(::StringW, ::Il2CppObject*)>(&NUnit::Framework::Internal::PropertyBag::Add)> {
  static const MethodInfo* get() {
    static auto* key = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::PropertyBag*), "Add", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{key, value});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::PropertyBag::Set
// Il2CppName: Set
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (NUnit::Framework::Internal::PropertyBag::*)(::StringW, ::Il2CppObject*)>(&NUnit::Framework::Internal::PropertyBag::Set)> {
  static const MethodInfo* get() {
    static auto* key = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::PropertyBag*), "Set", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{key, value});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::PropertyBag::Get
// Il2CppName: Get
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (NUnit::Framework::Internal::PropertyBag::*)(::StringW)>(&NUnit::Framework::Internal::PropertyBag::Get)> {
  static const MethodInfo* get() {
    static auto* key = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::PropertyBag*), "Get", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{key});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::PropertyBag::ContainsKey
// Il2CppName: ContainsKey
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (NUnit::Framework::Internal::PropertyBag::*)(::StringW)>(&NUnit::Framework::Internal::PropertyBag::ContainsKey)> {
  static const MethodInfo* get() {
    static auto* key = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::PropertyBag*), "ContainsKey", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{key});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::PropertyBag::ToXml
// Il2CppName: ToXml
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::NUnit::Framework::Interfaces::TNode* (NUnit::Framework::Internal::PropertyBag::*)(bool)>(&NUnit::Framework::Internal::PropertyBag::ToXml)> {
  static const MethodInfo* get() {
    static auto* recursive = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::PropertyBag*), "ToXml", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{recursive});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::PropertyBag::AddToXml
// Il2CppName: AddToXml
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::NUnit::Framework::Interfaces::TNode* (NUnit::Framework::Internal::PropertyBag::*)(::NUnit::Framework::Interfaces::TNode*, bool)>(&NUnit::Framework::Internal::PropertyBag::AddToXml)> {
  static const MethodInfo* get() {
    static auto* parentNode = &::il2cpp_utils::GetClassFromName("NUnit.Framework.Interfaces", "TNode")->byval_arg;
    static auto* recursive = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::PropertyBag*), "AddToXml", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{parentNode, recursive});
  }
};
