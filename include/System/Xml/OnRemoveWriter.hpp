// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Xml
namespace System::Xml {
  // Forward declaring type: XmlRawWriter
  class XmlRawWriter;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
// Type namespace: System.Xml
namespace System::Xml {
  // Forward declaring type: OnRemoveWriter
  class OnRemoveWriter;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(System::Xml::OnRemoveWriter);
DEFINE_IL2CPP_ARG_TYPE(System::Xml::OnRemoveWriter*, "System.Xml", "OnRemoveWriter");
// Type namespace: System.Xml
namespace System::Xml {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: System.Xml.OnRemoveWriter
  // [TokenAttribute] Offset: FFFFFFFF
  class OnRemoveWriter : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1B606E4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OnRemoveWriter* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Xml::OnRemoveWriter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OnRemoveWriter*, creationType>(object, method)));
    }
    // public System.Void Invoke(System.Xml.XmlRawWriter writer)
    // Offset: 0x1B606F4
    void Invoke(System::Xml::XmlRawWriter* writer);
    // public System.IAsyncResult BeginInvoke(System.Xml.XmlRawWriter writer, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1B60A88
    System::IAsyncResult* BeginInvoke(System::Xml::XmlRawWriter* writer, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0x1B60AAC
    void EndInvoke(System::IAsyncResult* result);
  }; // System.Xml.OnRemoveWriter
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Xml::OnRemoveWriter::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Xml::OnRemoveWriter::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::OnRemoveWriter::*)(System::Xml::XmlRawWriter*)>(&System::Xml::OnRemoveWriter::Invoke)> {
  static const MethodInfo* get() {
    static auto* writer = &::il2cpp_utils::GetClassFromName("System.Xml", "XmlRawWriter")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::OnRemoveWriter*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{writer});
  }
};
// Writing MetadataGetter for method: System::Xml::OnRemoveWriter::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult* (System::Xml::OnRemoveWriter::*)(System::Xml::XmlRawWriter*, System::AsyncCallback*, ::Il2CppObject*)>(&System::Xml::OnRemoveWriter::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* writer = &::il2cpp_utils::GetClassFromName("System.Xml", "XmlRawWriter")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::OnRemoveWriter*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{writer, callback, object});
  }
};
// Writing MetadataGetter for method: System::Xml::OnRemoveWriter::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::OnRemoveWriter::*)(System::IAsyncResult*)>(&System::Xml::OnRemoveWriter::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::OnRemoveWriter*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
