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
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Uri
  class Uri;
  // Forward declaring type: Type
  class Type;
}
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: Task`1<TResult>
  template<typename TResult>
  class Task_1;
}
// Completed forward declares
// Type namespace: System.Xml
namespace System::Xml {
  // Forward declaring type: XmlResolver
  class XmlResolver;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Xml::XmlResolver);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::XmlResolver*, "System.Xml", "XmlResolver");
// Type namespace: System.Xml
namespace System::Xml {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Xml.XmlResolver
  // [TokenAttribute] Offset: FFFFFFFF
  class XmlResolver : public ::Il2CppObject {
    public:
    // protected System.Void .ctor()
    // Offset: 0x163E2F0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static XmlResolver* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Xml::XmlResolver::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<XmlResolver*, creationType>()));
    }
    // public System.Object GetEntity(System.Uri absoluteUri, System.String role, System.Type ofObjectToReturn)
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::Il2CppObject* GetEntity(::System::Uri* absoluteUri, ::StringW role, ::System::Type* ofObjectToReturn);
    // public System.Uri ResolveUri(System.Uri baseUri, System.String relativeUri)
    // Offset: 0x163DF74
    ::System::Uri* ResolveUri(::System::Uri* baseUri, ::StringW relativeUri);
    // public System.Boolean SupportsType(System.Uri absoluteUri, System.Type type)
    // Offset: 0x163E150
    bool SupportsType(::System::Uri* absoluteUri, ::System::Type* type);
    // public System.Threading.Tasks.Task`1<System.Object> GetEntityAsync(System.Uri absoluteUri, System.String role, System.Type ofObjectToReturn)
    // Offset: 0x163E290
    ::System::Threading::Tasks::Task_1<::Il2CppObject*>* GetEntityAsync(::System::Uri* absoluteUri, ::StringW role, ::System::Type* ofObjectToReturn);
  }; // System.Xml.XmlResolver
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Xml::XmlResolver::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Xml::XmlResolver::GetEntity
// Il2CppName: GetEntity
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Xml::XmlResolver::*)(::System::Uri*, ::StringW, ::System::Type*)>(&System::Xml::XmlResolver::GetEntity)> {
  static const MethodInfo* get() {
    static auto* absoluteUri = &::il2cpp_utils::GetClassFromName("System", "Uri")->byval_arg;
    static auto* role = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* ofObjectToReturn = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlResolver*), "GetEntity", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{absoluteUri, role, ofObjectToReturn});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlResolver::ResolveUri
// Il2CppName: ResolveUri
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Uri* (System::Xml::XmlResolver::*)(::System::Uri*, ::StringW)>(&System::Xml::XmlResolver::ResolveUri)> {
  static const MethodInfo* get() {
    static auto* baseUri = &::il2cpp_utils::GetClassFromName("System", "Uri")->byval_arg;
    static auto* relativeUri = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlResolver*), "ResolveUri", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{baseUri, relativeUri});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlResolver::SupportsType
// Il2CppName: SupportsType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::XmlResolver::*)(::System::Uri*, ::System::Type*)>(&System::Xml::XmlResolver::SupportsType)> {
  static const MethodInfo* get() {
    static auto* absoluteUri = &::il2cpp_utils::GetClassFromName("System", "Uri")->byval_arg;
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlResolver*), "SupportsType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{absoluteUri, type});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlResolver::GetEntityAsync
// Il2CppName: GetEntityAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::Il2CppObject*>* (System::Xml::XmlResolver::*)(::System::Uri*, ::StringW, ::System::Type*)>(&System::Xml::XmlResolver::GetEntityAsync)> {
  static const MethodInfo* get() {
    static auto* absoluteUri = &::il2cpp_utils::GetClassFromName("System", "Uri")->byval_arg;
    static auto* role = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* ofObjectToReturn = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlResolver*), "GetEntityAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{absoluteUri, role, ofObjectToReturn});
  }
};
