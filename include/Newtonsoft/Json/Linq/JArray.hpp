// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include <initializer_list>
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Newtonsoft.Json.Linq.JContainer
#include "Newtonsoft/Json/Linq/JContainer.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: IEnumerator`1<T>
  template<typename T>
  class IEnumerator_1;
  // Skipping declaration: IList`1 because it is already included!
}
// Forward declaring namespace: Newtonsoft::Json::Linq
namespace Newtonsoft::Json::Linq {
  // Skipping declaration: JToken because it is already included!
  // Forward declaring type: JsonLoadSettings
  class JsonLoadSettings;
  // Skipping declaration: JTokenType because it is already included!
}
// Forward declaring namespace: Newtonsoft::Json
namespace Newtonsoft::Json {
  // Forward declaring type: JsonReader
  class JsonReader;
  // Forward declaring type: JsonWriter
  class JsonWriter;
  // Forward declaring type: JsonConverter
  class JsonConverter;
}
// Completed forward declares
// Type namespace: Newtonsoft.Json.Linq
namespace Newtonsoft::Json::Linq {
  // Forward declaring type: JArray
  class JArray;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Newtonsoft::Json::Linq::JArray);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Linq::JArray*, "Newtonsoft.Json.Linq", "JArray");
// Type namespace: Newtonsoft.Json.Linq
namespace Newtonsoft::Json::Linq {
  // Size: 0x50
  #pragma pack(push, 1)
  // Autogenerated type: Newtonsoft.Json.Linq.JArray
  // [TokenAttribute] Offset: FFFFFFFF
  // [PreserveAttribute] Offset: FFFFFFFF
  // [DefaultMemberAttribute] Offset: 10F9918
  class JArray : public ::Newtonsoft::Json::Linq::JContainer {
    public:
    // Writing base type padding for base size: 0x41 to desired offset: 0x48
    char ___base_padding[0x7] = {};
    public:
    // private readonly System.Collections.Generic.List`1<Newtonsoft.Json.Linq.JToken> _values
    // Size: 0x8
    // Offset: 0x48
    ::System::Collections::Generic::List_1<::Newtonsoft::Json::Linq::JToken*>* values;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::Newtonsoft::Json::Linq::JToken*>*) == 0x8);
    public:
    // Creating conversion operator: operator ::System::Collections::Generic::List_1<::Newtonsoft::Json::Linq::JToken*>*
    constexpr operator ::System::Collections::Generic::List_1<::Newtonsoft::Json::Linq::JToken*>*() const noexcept {
      return values;
    }
    // Get instance field reference: private readonly System.Collections.Generic.List`1<Newtonsoft.Json.Linq.JToken> _values
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::Newtonsoft::Json::Linq::JToken*>*& dyn__values();
    // public Newtonsoft.Json.Linq.JToken get_Item(System.Int32 index)
    // Offset: 0x179A7AC
    ::Newtonsoft::Json::Linq::JToken* get_Item(int index);
    // public System.Void set_Item(System.Int32 index, Newtonsoft.Json.Linq.JToken value)
    // Offset: 0x179A7BC
    void set_Item(int index, ::Newtonsoft::Json::Linq::JToken* value);
    // public System.Boolean get_IsReadOnly()
    // Offset: 0x179A918
    bool get_IsReadOnly();
    // public System.Void .ctor(Newtonsoft.Json.Linq.JArray other)
    // Offset: 0x1799A5C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static JArray* New_ctor(::Newtonsoft::Json::Linq::JArray* other) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Newtonsoft::Json::Linq::JArray::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<JArray*, creationType>(other)));
    }
    // public System.Void .ctor(System.Object content)
    // Offset: 0x1799D68
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static JArray* New_ctor(::Il2CppObject* content) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Newtonsoft::Json::Linq::JArray::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<JArray*, creationType>(content)));
    }
    // static public Newtonsoft.Json.Linq.JArray Load(Newtonsoft.Json.JsonReader reader)
    // Offset: 0x179A1D4
    static ::Newtonsoft::Json::Linq::JArray* Load(::Newtonsoft::Json::JsonReader* reader);
    // static public Newtonsoft.Json.Linq.JArray Load(Newtonsoft.Json.JsonReader reader, Newtonsoft.Json.Linq.JsonLoadSettings settings)
    // Offset: 0x179A1DC
    static ::Newtonsoft::Json::Linq::JArray* Load(::Newtonsoft::Json::JsonReader* reader, ::Newtonsoft::Json::Linq::JsonLoadSettings* settings);
    // public System.Int32 IndexOf(Newtonsoft.Json.Linq.JToken item)
    // Offset: 0x179A82C
    int IndexOf(::Newtonsoft::Json::Linq::JToken* item);
    // public System.Void Insert(System.Int32 index, Newtonsoft.Json.Linq.JToken item)
    // Offset: 0x179A83C
    void Insert(int index, ::Newtonsoft::Json::Linq::JToken* item);
    // public System.Void RemoveAt(System.Int32 index)
    // Offset: 0x179A850
    void RemoveAt(int index);
    // public System.Collections.Generic.IEnumerator`1<Newtonsoft.Json.Linq.JToken> GetEnumerator()
    // Offset: 0x179A860
    ::System::Collections::Generic::IEnumerator_1<::Newtonsoft::Json::Linq::JToken*>* GetEnumerator();
    // public System.Void Add(Newtonsoft.Json.Linq.JToken item)
    // Offset: 0x179A8D8
    void Add(::Newtonsoft::Json::Linq::JToken* item);
    // public System.Void Clear()
    // Offset: 0x179A8E8
    void Clear();
    // public System.Boolean Contains(Newtonsoft.Json.Linq.JToken item)
    // Offset: 0x179A8F8
    bool Contains(::Newtonsoft::Json::Linq::JToken* item);
    // public System.Void CopyTo(Newtonsoft.Json.Linq.JToken[] array, System.Int32 arrayIndex)
    // Offset: 0x179A908
    void CopyTo(::ArrayW<::Newtonsoft::Json::Linq::JToken*> array, int arrayIndex);
    // public System.Boolean Remove(Newtonsoft.Json.Linq.JToken item)
    // Offset: 0x179A920
    bool Remove(::Newtonsoft::Json::Linq::JToken* item);
    // protected override System.Collections.Generic.IList`1<Newtonsoft.Json.Linq.JToken> get_ChildrenTokens()
    // Offset: 0x1799978
    // Implemented from: Newtonsoft.Json.Linq.JContainer
    // Base method: System.Collections.Generic.IList`1<Newtonsoft.Json.Linq.JToken> JContainer::get_ChildrenTokens()
    ::System::Collections::Generic::IList_1<::Newtonsoft::Json::Linq::JToken*>* get_ChildrenTokens();
    // public override Newtonsoft.Json.Linq.JTokenType get_Type()
    // Offset: 0x1799980
    // Implemented from: Newtonsoft.Json.Linq.JToken
    // Base method: Newtonsoft.Json.Linq.JTokenType JToken::get_Type()
    ::Newtonsoft::Json::Linq::JTokenType get_Type();
    // public System.Void .ctor()
    // Offset: 0x1799988
    // Implemented from: Newtonsoft.Json.Linq.JContainer
    // Base method: System.Void JContainer::.ctor()
    // Base method: System.Void JToken::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static JArray* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Newtonsoft::Json::Linq::JArray::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<JArray*, creationType>()));
    }
    // override System.Boolean DeepEquals(Newtonsoft.Json.Linq.JToken node)
    // Offset: 0x1799DF8
    // Implemented from: Newtonsoft.Json.Linq.JToken
    // Base method: System.Boolean JToken::DeepEquals(Newtonsoft.Json.Linq.JToken node)
    bool DeepEquals(::Newtonsoft::Json::Linq::JToken* node);
    // override Newtonsoft.Json.Linq.JToken CloneToken()
    // Offset: 0x179A174
    // Implemented from: Newtonsoft.Json.Linq.JToken
    // Base method: Newtonsoft.Json.Linq.JToken JToken::CloneToken()
    ::Newtonsoft::Json::Linq::JToken* CloneToken();
    // public override System.Void WriteTo(Newtonsoft.Json.JsonWriter writer, params Newtonsoft.Json.JsonConverter[] converters)
    // Offset: 0x179A6D4
    // Implemented from: Newtonsoft.Json.Linq.JToken
    // Base method: System.Void JToken::WriteTo(Newtonsoft.Json.JsonWriter writer, params Newtonsoft.Json.JsonConverter[] converters)
    void WriteTo(::Newtonsoft::Json::JsonWriter* writer, ::ArrayW<::Newtonsoft::Json::JsonConverter*> converters);
    // override System.Int32 IndexOfItem(Newtonsoft.Json.Linq.JToken item)
    // Offset: 0x179A7CC
    // Implemented from: Newtonsoft.Json.Linq.JContainer
    // Base method: System.Int32 JContainer::IndexOfItem(Newtonsoft.Json.Linq.JToken item)
    int IndexOfItem(::Newtonsoft::Json::Linq::JToken* item);
    // override System.Int32 GetDeepHashCode()
    // Offset: 0x179A930
    // Implemented from: Newtonsoft.Json.Linq.JToken
    // Base method: System.Int32 JToken::GetDeepHashCode()
    int GetDeepHashCode();
  }; // Newtonsoft.Json.Linq.JArray
  #pragma pack(pop)
  static check_size<sizeof(JArray), 72 + sizeof(::System::Collections::Generic::List_1<::Newtonsoft::Json::Linq::JToken*>*)> __Newtonsoft_Json_Linq_JArraySizeCheck;
  static_assert(sizeof(JArray) == 0x50);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Newtonsoft::Json::Linq::JArray::get_Item
// Il2CppName: get_Item
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::Linq::JToken* (Newtonsoft::Json::Linq::JArray::*)(int)>(&Newtonsoft::Json::Linq::JArray::get_Item)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Linq::JArray*), "get_Item", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Linq::JArray::set_Item
// Il2CppName: set_Item
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Newtonsoft::Json::Linq::JArray::*)(int, ::Newtonsoft::Json::Linq::JToken*)>(&Newtonsoft::Json::Linq::JArray::set_Item)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("Newtonsoft.Json.Linq", "JToken")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Linq::JArray*), "set_Item", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index, value});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Linq::JArray::get_IsReadOnly
// Il2CppName: get_IsReadOnly
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Newtonsoft::Json::Linq::JArray::*)()>(&Newtonsoft::Json::Linq::JArray::get_IsReadOnly)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Linq::JArray*), "get_IsReadOnly", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Linq::JArray::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Newtonsoft::Json::Linq::JArray::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Newtonsoft::Json::Linq::JArray::Load
// Il2CppName: Load
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::Linq::JArray* (*)(::Newtonsoft::Json::JsonReader*)>(&Newtonsoft::Json::Linq::JArray::Load)> {
  static const MethodInfo* get() {
    static auto* reader = &::il2cpp_utils::GetClassFromName("Newtonsoft.Json", "JsonReader")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Linq::JArray*), "Load", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{reader});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Linq::JArray::Load
// Il2CppName: Load
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::Linq::JArray* (*)(::Newtonsoft::Json::JsonReader*, ::Newtonsoft::Json::Linq::JsonLoadSettings*)>(&Newtonsoft::Json::Linq::JArray::Load)> {
  static const MethodInfo* get() {
    static auto* reader = &::il2cpp_utils::GetClassFromName("Newtonsoft.Json", "JsonReader")->byval_arg;
    static auto* settings = &::il2cpp_utils::GetClassFromName("Newtonsoft.Json.Linq", "JsonLoadSettings")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Linq::JArray*), "Load", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{reader, settings});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Linq::JArray::IndexOf
// Il2CppName: IndexOf
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Newtonsoft::Json::Linq::JArray::*)(::Newtonsoft::Json::Linq::JToken*)>(&Newtonsoft::Json::Linq::JArray::IndexOf)> {
  static const MethodInfo* get() {
    static auto* item = &::il2cpp_utils::GetClassFromName("Newtonsoft.Json.Linq", "JToken")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Linq::JArray*), "IndexOf", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{item});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Linq::JArray::Insert
// Il2CppName: Insert
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Newtonsoft::Json::Linq::JArray::*)(int, ::Newtonsoft::Json::Linq::JToken*)>(&Newtonsoft::Json::Linq::JArray::Insert)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* item = &::il2cpp_utils::GetClassFromName("Newtonsoft.Json.Linq", "JToken")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Linq::JArray*), "Insert", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index, item});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Linq::JArray::RemoveAt
// Il2CppName: RemoveAt
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Newtonsoft::Json::Linq::JArray::*)(int)>(&Newtonsoft::Json::Linq::JArray::RemoveAt)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Linq::JArray*), "RemoveAt", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Linq::JArray::GetEnumerator
// Il2CppName: GetEnumerator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerator_1<::Newtonsoft::Json::Linq::JToken*>* (Newtonsoft::Json::Linq::JArray::*)()>(&Newtonsoft::Json::Linq::JArray::GetEnumerator)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Linq::JArray*), "GetEnumerator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Linq::JArray::Add
// Il2CppName: Add
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Newtonsoft::Json::Linq::JArray::*)(::Newtonsoft::Json::Linq::JToken*)>(&Newtonsoft::Json::Linq::JArray::Add)> {
  static const MethodInfo* get() {
    static auto* item = &::il2cpp_utils::GetClassFromName("Newtonsoft.Json.Linq", "JToken")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Linq::JArray*), "Add", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{item});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Linq::JArray::Clear
// Il2CppName: Clear
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Newtonsoft::Json::Linq::JArray::*)()>(&Newtonsoft::Json::Linq::JArray::Clear)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Linq::JArray*), "Clear", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Linq::JArray::Contains
// Il2CppName: Contains
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Newtonsoft::Json::Linq::JArray::*)(::Newtonsoft::Json::Linq::JToken*)>(&Newtonsoft::Json::Linq::JArray::Contains)> {
  static const MethodInfo* get() {
    static auto* item = &::il2cpp_utils::GetClassFromName("Newtonsoft.Json.Linq", "JToken")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Linq::JArray*), "Contains", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{item});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Linq::JArray::CopyTo
// Il2CppName: CopyTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Newtonsoft::Json::Linq::JArray::*)(::ArrayW<::Newtonsoft::Json::Linq::JToken*>, int)>(&Newtonsoft::Json::Linq::JArray::CopyTo)> {
  static const MethodInfo* get() {
    static auto* array = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("Newtonsoft.Json.Linq", "JToken"), 1)->byval_arg;
    static auto* arrayIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Linq::JArray*), "CopyTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{array, arrayIndex});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Linq::JArray::Remove
// Il2CppName: Remove
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Newtonsoft::Json::Linq::JArray::*)(::Newtonsoft::Json::Linq::JToken*)>(&Newtonsoft::Json::Linq::JArray::Remove)> {
  static const MethodInfo* get() {
    static auto* item = &::il2cpp_utils::GetClassFromName("Newtonsoft.Json.Linq", "JToken")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Linq::JArray*), "Remove", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{item});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Linq::JArray::get_ChildrenTokens
// Il2CppName: get_ChildrenTokens
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IList_1<::Newtonsoft::Json::Linq::JToken*>* (Newtonsoft::Json::Linq::JArray::*)()>(&Newtonsoft::Json::Linq::JArray::get_ChildrenTokens)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Linq::JArray*), "get_ChildrenTokens", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Linq::JArray::get_Type
// Il2CppName: get_Type
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::Linq::JTokenType (Newtonsoft::Json::Linq::JArray::*)()>(&Newtonsoft::Json::Linq::JArray::get_Type)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Linq::JArray*), "get_Type", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Linq::JArray::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Newtonsoft::Json::Linq::JArray::DeepEquals
// Il2CppName: DeepEquals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Newtonsoft::Json::Linq::JArray::*)(::Newtonsoft::Json::Linq::JToken*)>(&Newtonsoft::Json::Linq::JArray::DeepEquals)> {
  static const MethodInfo* get() {
    static auto* node = &::il2cpp_utils::GetClassFromName("Newtonsoft.Json.Linq", "JToken")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Linq::JArray*), "DeepEquals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{node});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Linq::JArray::CloneToken
// Il2CppName: CloneToken
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::Linq::JToken* (Newtonsoft::Json::Linq::JArray::*)()>(&Newtonsoft::Json::Linq::JArray::CloneToken)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Linq::JArray*), "CloneToken", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Linq::JArray::WriteTo
// Il2CppName: WriteTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Newtonsoft::Json::Linq::JArray::*)(::Newtonsoft::Json::JsonWriter*, ::ArrayW<::Newtonsoft::Json::JsonConverter*>)>(&Newtonsoft::Json::Linq::JArray::WriteTo)> {
  static const MethodInfo* get() {
    static auto* writer = &::il2cpp_utils::GetClassFromName("Newtonsoft.Json", "JsonWriter")->byval_arg;
    static auto* converters = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("Newtonsoft.Json", "JsonConverter"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Linq::JArray*), "WriteTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{writer, converters});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Linq::JArray::IndexOfItem
// Il2CppName: IndexOfItem
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Newtonsoft::Json::Linq::JArray::*)(::Newtonsoft::Json::Linq::JToken*)>(&Newtonsoft::Json::Linq::JArray::IndexOfItem)> {
  static const MethodInfo* get() {
    static auto* item = &::il2cpp_utils::GetClassFromName("Newtonsoft.Json.Linq", "JToken")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Linq::JArray*), "IndexOfItem", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{item});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Linq::JArray::GetDeepHashCode
// Il2CppName: GetDeepHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Newtonsoft::Json::Linq::JArray::*)()>(&Newtonsoft::Json::Linq::JArray::GetDeepHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Linq::JArray*), "GetDeepHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
