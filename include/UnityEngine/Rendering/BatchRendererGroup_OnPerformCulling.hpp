// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.Rendering.BatchRendererGroup
#include "UnityEngine/Rendering/BatchRendererGroup.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Unity::Jobs
namespace Unity::Jobs {
  // Forward declaring type: JobHandle
  struct JobHandle;
}
// Forward declaring namespace: UnityEngine::Rendering
namespace UnityEngine::Rendering {
  // Forward declaring type: BatchCullingContext
  struct BatchCullingContext;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
// Type namespace: UnityEngine.Rendering
namespace UnityEngine::Rendering {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Rendering.BatchRendererGroup/OnPerformCulling
  class BatchRendererGroup::OnPerformCulling : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: OnPerformCulling
    OnPerformCulling() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1B2CD88
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BatchRendererGroup::OnPerformCulling* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Rendering::BatchRendererGroup::OnPerformCulling::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BatchRendererGroup::OnPerformCulling*, creationType>(object, method)));
    }
    // public Unity.Jobs.JobHandle Invoke(UnityEngine.Rendering.BatchRendererGroup rendererGroup, UnityEngine.Rendering.BatchCullingContext cullingContext)
    // Offset: 0x1B2C800
    Unity::Jobs::JobHandle Invoke(UnityEngine::Rendering::BatchRendererGroup* rendererGroup, UnityEngine::Rendering::BatchCullingContext cullingContext);
    // public System.IAsyncResult BeginInvoke(UnityEngine.Rendering.BatchRendererGroup rendererGroup, UnityEngine.Rendering.BatchCullingContext cullingContext, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1B2CD98
    System::IAsyncResult* BeginInvoke(UnityEngine::Rendering::BatchRendererGroup* rendererGroup, UnityEngine::Rendering::BatchCullingContext cullingContext, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public Unity.Jobs.JobHandle EndInvoke(System.IAsyncResult result)
    // Offset: 0x1B2CE34
    Unity::Jobs::JobHandle EndInvoke(System::IAsyncResult* result);
  }; // UnityEngine.Rendering.BatchRendererGroup/OnPerformCulling
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Rendering::BatchRendererGroup::OnPerformCulling*, "UnityEngine.Rendering", "BatchRendererGroup/OnPerformCulling");
// Writing MetadataGetter for method: UnityEngine::Rendering::BatchRendererGroup::OnPerformCulling::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::Rendering::BatchRendererGroup::OnPerformCulling::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Unity::Jobs::JobHandle (UnityEngine::Rendering::BatchRendererGroup::OnPerformCulling::*)(UnityEngine::Rendering::BatchRendererGroup*, UnityEngine::Rendering::BatchCullingContext)>(&UnityEngine::Rendering::BatchRendererGroup::OnPerformCulling::Invoke)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::BatchRendererGroup::OnPerformCulling*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::Rendering::BatchRendererGroup*>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::Rendering::BatchCullingContext>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::BatchRendererGroup::OnPerformCulling::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult* (UnityEngine::Rendering::BatchRendererGroup::OnPerformCulling::*)(UnityEngine::Rendering::BatchRendererGroup*, UnityEngine::Rendering::BatchCullingContext, System::AsyncCallback*, ::Il2CppObject*)>(&UnityEngine::Rendering::BatchRendererGroup::OnPerformCulling::BeginInvoke)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::BatchRendererGroup::OnPerformCulling*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::Rendering::BatchRendererGroup*>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::Rendering::BatchCullingContext>(), ::il2cpp_utils::ExtractIndependentType<System::AsyncCallback*>(), ::il2cpp_utils::ExtractIndependentType<::Il2CppObject*>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::BatchRendererGroup::OnPerformCulling::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Unity::Jobs::JobHandle (UnityEngine::Rendering::BatchRendererGroup::OnPerformCulling::*)(System::IAsyncResult*)>(&UnityEngine::Rendering::BatchRendererGroup::OnPerformCulling::EndInvoke)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::BatchRendererGroup::OnPerformCulling*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::IAsyncResult*>()});
  }
};
