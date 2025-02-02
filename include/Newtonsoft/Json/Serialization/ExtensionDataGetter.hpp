// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
// Including type: System.Collections.Generic.KeyValuePair`2
#include "System/Collections/Generic/KeyValuePair_2.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
// Type namespace: Newtonsoft.Json.Serialization
namespace Newtonsoft::Json::Serialization {
  // Forward declaring type: ExtensionDataGetter
  class ExtensionDataGetter;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Newtonsoft::Json::Serialization::ExtensionDataGetter);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Serialization::ExtensionDataGetter*, "Newtonsoft.Json.Serialization", "ExtensionDataGetter");
// Type namespace: Newtonsoft.Json.Serialization
namespace Newtonsoft::Json::Serialization {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: Newtonsoft.Json.Serialization.ExtensionDataGetter
  // [TokenAttribute] Offset: FFFFFFFF
  // [PreserveAttribute] Offset: FFFFFFFF
  class ExtensionDataGetter : public ::System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1E00EDC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ExtensionDataGetter* New_ctor(::Il2CppObject* object, ::System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Newtonsoft::Json::Serialization::ExtensionDataGetter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ExtensionDataGetter*, creationType>(object, method)));
    }
    // public System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>> Invoke(System.Object o)
    // Offset: 0x1E00EEC
    ::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::Il2CppObject*, ::Il2CppObject*>>* Invoke(::Il2CppObject* o);
    // public System.IAsyncResult BeginInvoke(System.Object o, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1E01288
    ::System::IAsyncResult* BeginInvoke(::Il2CppObject* o, ::System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>> EndInvoke(System.IAsyncResult result)
    // Offset: 0x1E012AC
    ::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::Il2CppObject*, ::Il2CppObject*>>* EndInvoke(::System::IAsyncResult* result);
  }; // Newtonsoft.Json.Serialization.ExtensionDataGetter
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Newtonsoft::Json::Serialization::ExtensionDataGetter::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Newtonsoft::Json::Serialization::ExtensionDataGetter::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::Il2CppObject*, ::Il2CppObject*>>* (Newtonsoft::Json::Serialization::ExtensionDataGetter::*)(::Il2CppObject*)>(&Newtonsoft::Json::Serialization::ExtensionDataGetter::Invoke)> {
  static const MethodInfo* get() {
    static auto* o = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Serialization::ExtensionDataGetter*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{o});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Serialization::ExtensionDataGetter::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (Newtonsoft::Json::Serialization::ExtensionDataGetter::*)(::Il2CppObject*, ::System::AsyncCallback*, ::Il2CppObject*)>(&Newtonsoft::Json::Serialization::ExtensionDataGetter::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* o = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Serialization::ExtensionDataGetter*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{o, callback, object});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Serialization::ExtensionDataGetter::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::Il2CppObject*, ::Il2CppObject*>>* (Newtonsoft::Json::Serialization::ExtensionDataGetter::*)(::System::IAsyncResult*)>(&Newtonsoft::Json::Serialization::ExtensionDataGetter::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Serialization::ExtensionDataGetter*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
