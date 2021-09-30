// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.ResourceManagement.ResourceProviders.TextDataProvider
#include "UnityEngine/ResourceManagement/ResourceProviders/TextDataProvider.hpp"
// Including type: UnityEngine.ResourceManagement.ResourceProviders.ProvideHandle
#include "UnityEngine/ResourceManagement/ResourceProviders/ProvideHandle.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Networking
namespace UnityEngine::Networking {
  // Forward declaring type: UnityWebRequestAsyncOperation
  class UnityWebRequestAsyncOperation;
}
// Forward declaring namespace: UnityEngine::ResourceManagement
namespace UnityEngine::ResourceManagement {
  // Forward declaring type: WebRequestQueueOperation
  class WebRequestQueueOperation;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AsyncOperation
  class AsyncOperation;
}
// Completed forward declares
// Type namespace: UnityEngine.ResourceManagement.ResourceProviders
namespace UnityEngine::ResourceManagement::ResourceProviders {
  // Size: 0x42
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ResourceManagement.ResourceProviders.TextDataProvider/UnityEngine.ResourceManagement.ResourceProviders.InternalOp
  // [TokenAttribute] Offset: FFFFFFFF
  class TextDataProvider::InternalOp : public ::Il2CppObject {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    private:
    #endif
    // private UnityEngine.ResourceManagement.ResourceProviders.TextDataProvider m_Provider
    // Size: 0x8
    // Offset: 0x10
    UnityEngine::ResourceManagement::ResourceProviders::TextDataProvider* m_Provider;
    // Field size check
    static_assert(sizeof(UnityEngine::ResourceManagement::ResourceProviders::TextDataProvider*) == 0x8);
    // private UnityEngine.Networking.UnityWebRequestAsyncOperation m_RequestOperation
    // Size: 0x8
    // Offset: 0x18
    UnityEngine::Networking::UnityWebRequestAsyncOperation* m_RequestOperation;
    // Field size check
    static_assert(sizeof(UnityEngine::Networking::UnityWebRequestAsyncOperation*) == 0x8);
    // private UnityEngine.ResourceManagement.WebRequestQueueOperation m_RequestQueueOperation
    // Size: 0x8
    // Offset: 0x20
    UnityEngine::ResourceManagement::WebRequestQueueOperation* m_RequestQueueOperation;
    // Field size check
    static_assert(sizeof(UnityEngine::ResourceManagement::WebRequestQueueOperation*) == 0x8);
    // private UnityEngine.ResourceManagement.ResourceProviders.ProvideHandle m_PI
    // Size: 0x18
    // Offset: 0x28
    UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle m_PI;
    // Field size check
    static_assert(sizeof(UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle) == 0x18);
    // private System.Boolean m_IgnoreFailures
    // Size: 0x1
    // Offset: 0x40
    bool m_IgnoreFailures;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean m_Complete
    // Size: 0x1
    // Offset: 0x41
    bool m_Complete;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get instance field reference: private UnityEngine.ResourceManagement.ResourceProviders.TextDataProvider m_Provider
    UnityEngine::ResourceManagement::ResourceProviders::TextDataProvider*& dyn_m_Provider();
    // Get instance field reference: private UnityEngine.Networking.UnityWebRequestAsyncOperation m_RequestOperation
    UnityEngine::Networking::UnityWebRequestAsyncOperation*& dyn_m_RequestOperation();
    // Get instance field reference: private UnityEngine.ResourceManagement.WebRequestQueueOperation m_RequestQueueOperation
    UnityEngine::ResourceManagement::WebRequestQueueOperation*& dyn_m_RequestQueueOperation();
    // Get instance field reference: private UnityEngine.ResourceManagement.ResourceProviders.ProvideHandle m_PI
    UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle& dyn_m_PI();
    // Get instance field reference: private System.Boolean m_IgnoreFailures
    bool& dyn_m_IgnoreFailures();
    // Get instance field reference: private System.Boolean m_Complete
    bool& dyn_m_Complete();
    // private System.Single GetPercentComplete()
    // Offset: 0x1B6D474
    float GetPercentComplete();
    // public System.Void Start(UnityEngine.ResourceManagement.ResourceProviders.ProvideHandle provideHandle, UnityEngine.ResourceManagement.ResourceProviders.TextDataProvider rawProvider, System.Boolean ignoreFailures)
    // Offset: 0x1B6CEDC
    void Start(UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle provideHandle, UnityEngine::ResourceManagement::ResourceProviders::TextDataProvider* rawProvider, bool ignoreFailures);
    // private System.Boolean WaitForCompletionHandler()
    // Offset: 0x1B6D75C
    bool WaitForCompletionHandler();
    // private System.Void RequestOperation_completed(UnityEngine.AsyncOperation op)
    // Offset: 0x1B6D5B8
    void RequestOperation_completed(UnityEngine::AsyncOperation* op);
    // private System.Object ConvertText(System.String text)
    // Offset: 0x1B6D48C
    ::Il2CppObject* ConvertText(::Il2CppString* text);
    // private System.Void <Start>b__7_0(UnityEngine.Networking.UnityWebRequestAsyncOperation asyncOperation)
    // Offset: 0x1B6D7DC
    void $Start$b__7_0(UnityEngine::Networking::UnityWebRequestAsyncOperation* asyncOperation);
    // public System.Void .ctor()
    // Offset: 0x1B6CED4
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TextDataProvider::InternalOp* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ResourceManagement::ResourceProviders::TextDataProvider::InternalOp::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TextDataProvider::InternalOp*, creationType>()));
    }
  }; // UnityEngine.ResourceManagement.ResourceProviders.TextDataProvider/UnityEngine.ResourceManagement.ResourceProviders.InternalOp
  #pragma pack(pop)
  static check_size<sizeof(TextDataProvider::InternalOp), 65 + sizeof(bool)> __UnityEngine_ResourceManagement_ResourceProviders_TextDataProvider_InternalOpSizeCheck;
  static_assert(sizeof(TextDataProvider::InternalOp) == 0x42);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ResourceManagement::ResourceProviders::TextDataProvider::InternalOp*, "UnityEngine.ResourceManagement.ResourceProviders", "TextDataProvider/InternalOp");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::ResourceProviders::TextDataProvider::InternalOp::GetPercentComplete
// Il2CppName: GetPercentComplete
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::ResourceManagement::ResourceProviders::TextDataProvider::InternalOp::*)()>(&UnityEngine::ResourceManagement::ResourceProviders::TextDataProvider::InternalOp::GetPercentComplete)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::ResourceProviders::TextDataProvider::InternalOp*), "GetPercentComplete", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::ResourceProviders::TextDataProvider::InternalOp::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::ResourceProviders::TextDataProvider::InternalOp::*)(UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle, UnityEngine::ResourceManagement::ResourceProviders::TextDataProvider*, bool)>(&UnityEngine::ResourceManagement::ResourceProviders::TextDataProvider::InternalOp::Start)> {
  static const MethodInfo* get() {
    static auto* provideHandle = &::il2cpp_utils::GetClassFromName("UnityEngine.ResourceManagement.ResourceProviders", "ProvideHandle")->byval_arg;
    static auto* rawProvider = &::il2cpp_utils::GetClassFromName("UnityEngine.ResourceManagement.ResourceProviders", "TextDataProvider")->byval_arg;
    static auto* ignoreFailures = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::ResourceProviders::TextDataProvider::InternalOp*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{provideHandle, rawProvider, ignoreFailures});
  }
};
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::ResourceProviders::TextDataProvider::InternalOp::WaitForCompletionHandler
// Il2CppName: WaitForCompletionHandler
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::ResourceManagement::ResourceProviders::TextDataProvider::InternalOp::*)()>(&UnityEngine::ResourceManagement::ResourceProviders::TextDataProvider::InternalOp::WaitForCompletionHandler)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::ResourceProviders::TextDataProvider::InternalOp*), "WaitForCompletionHandler", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::ResourceProviders::TextDataProvider::InternalOp::RequestOperation_completed
// Il2CppName: RequestOperation_completed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::ResourceProviders::TextDataProvider::InternalOp::*)(UnityEngine::AsyncOperation*)>(&UnityEngine::ResourceManagement::ResourceProviders::TextDataProvider::InternalOp::RequestOperation_completed)> {
  static const MethodInfo* get() {
    static auto* op = &::il2cpp_utils::GetClassFromName("UnityEngine", "AsyncOperation")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::ResourceProviders::TextDataProvider::InternalOp*), "RequestOperation_completed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{op});
  }
};
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::ResourceProviders::TextDataProvider::InternalOp::ConvertText
// Il2CppName: ConvertText
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (UnityEngine::ResourceManagement::ResourceProviders::TextDataProvider::InternalOp::*)(::Il2CppString*)>(&UnityEngine::ResourceManagement::ResourceProviders::TextDataProvider::InternalOp::ConvertText)> {
  static const MethodInfo* get() {
    static auto* text = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::ResourceProviders::TextDataProvider::InternalOp*), "ConvertText", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{text});
  }
};
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::ResourceProviders::TextDataProvider::InternalOp::$Start$b__7_0
// Il2CppName: <Start>b__7_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::ResourceProviders::TextDataProvider::InternalOp::*)(UnityEngine::Networking::UnityWebRequestAsyncOperation*)>(&UnityEngine::ResourceManagement::ResourceProviders::TextDataProvider::InternalOp::$Start$b__7_0)> {
  static const MethodInfo* get() {
    static auto* asyncOperation = &::il2cpp_utils::GetClassFromName("UnityEngine.Networking", "UnityWebRequestAsyncOperation")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::ResourceProviders::TextDataProvider::InternalOp*), "<Start>b__7_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{asyncOperation});
  }
};
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::ResourceProviders::TextDataProvider::InternalOp::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
