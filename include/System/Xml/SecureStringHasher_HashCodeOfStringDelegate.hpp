// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Xml.SecureStringHasher
#include "System/Xml/SecureStringHasher.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
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
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: System.Xml.SecureStringHasher/HashCodeOfStringDelegate
  class SecureStringHasher::HashCodeOfStringDelegate : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: HashCodeOfStringDelegate
    HashCodeOfStringDelegate() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x19322EC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SecureStringHasher::HashCodeOfStringDelegate* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Xml::SecureStringHasher::HashCodeOfStringDelegate::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SecureStringHasher::HashCodeOfStringDelegate*, creationType>(object, method)));
    }
    // public System.Int32 Invoke(System.String s, System.Int32 sLen, System.Int64 additionalEntropy)
    // Offset: 0x1931E38
    int Invoke(::Il2CppString* s, int sLen, int64_t additionalEntropy);
    // public System.IAsyncResult BeginInvoke(System.String s, System.Int32 sLen, System.Int64 additionalEntropy, System.AsyncCallback callback, System.Object object)
    // Offset: 0x19322FC
    System::IAsyncResult* BeginInvoke(::Il2CppString* s, int sLen, int64_t additionalEntropy, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Int32 EndInvoke(System.IAsyncResult result)
    // Offset: 0x19323B4
    int EndInvoke(System::IAsyncResult* result);
  }; // System.Xml.SecureStringHasher/HashCodeOfStringDelegate
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(System::Xml::SecureStringHasher::HashCodeOfStringDelegate*, "System.Xml", "SecureStringHasher/HashCodeOfStringDelegate");
// Writing MetadataGetter for method: System::Xml::SecureStringHasher::HashCodeOfStringDelegate::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Xml::SecureStringHasher::HashCodeOfStringDelegate::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Xml::SecureStringHasher::HashCodeOfStringDelegate::*)(::Il2CppString*, int, int64_t)>(&System::Xml::SecureStringHasher::HashCodeOfStringDelegate::Invoke)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::SecureStringHasher::HashCodeOfStringDelegate*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>(), ::il2cpp_utils::ExtractIndependentType<int>(), ::il2cpp_utils::ExtractIndependentType<int64_t>()});
  }
};
// Writing MetadataGetter for method: System::Xml::SecureStringHasher::HashCodeOfStringDelegate::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult* (System::Xml::SecureStringHasher::HashCodeOfStringDelegate::*)(::Il2CppString*, int, int64_t, System::AsyncCallback*, ::Il2CppObject*)>(&System::Xml::SecureStringHasher::HashCodeOfStringDelegate::BeginInvoke)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::SecureStringHasher::HashCodeOfStringDelegate*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>(), ::il2cpp_utils::ExtractIndependentType<int>(), ::il2cpp_utils::ExtractIndependentType<int64_t>(), ::il2cpp_utils::ExtractIndependentType<System::AsyncCallback*>(), ::il2cpp_utils::ExtractIndependentType<::Il2CppObject*>()});
  }
};
// Writing MetadataGetter for method: System::Xml::SecureStringHasher::HashCodeOfStringDelegate::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Xml::SecureStringHasher::HashCodeOfStringDelegate::*)(System::IAsyncResult*)>(&System::Xml::SecureStringHasher::HashCodeOfStringDelegate::EndInvoke)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::SecureStringHasher::HashCodeOfStringDelegate*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::IAsyncResult*>()});
  }
};
