// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.RectTransform
#include "UnityEngine/RectTransform.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
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
// Type namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: ReapplyDrivenProperties
  class ReapplyDrivenProperties;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(UnityEngine::RectTransform::ReapplyDrivenProperties);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::RectTransform::ReapplyDrivenProperties*, "UnityEngine", "RectTransform/ReapplyDrivenProperties");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.RectTransform/UnityEngine.ReapplyDrivenProperties
  // [TokenAttribute] Offset: FFFFFFFF
  class RectTransform::ReapplyDrivenProperties : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1DF47DC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RectTransform::ReapplyDrivenProperties* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::RectTransform::ReapplyDrivenProperties::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RectTransform::ReapplyDrivenProperties*, creationType>(object, method)));
    }
    // public System.Void Invoke(UnityEngine.RectTransform driven)
    // Offset: 0x1DF4448
    void Invoke(UnityEngine::RectTransform* driven);
    // public System.IAsyncResult BeginInvoke(UnityEngine.RectTransform driven, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1DF47EC
    System::IAsyncResult* BeginInvoke(UnityEngine::RectTransform* driven, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0x1DF4810
    void EndInvoke(System::IAsyncResult* result);
  }; // UnityEngine.RectTransform/UnityEngine.ReapplyDrivenProperties
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::RectTransform::ReapplyDrivenProperties::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::RectTransform::ReapplyDrivenProperties::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::RectTransform::ReapplyDrivenProperties::*)(UnityEngine::RectTransform*)>(&UnityEngine::RectTransform::ReapplyDrivenProperties::Invoke)> {
  static const MethodInfo* get() {
    static auto* driven = &::il2cpp_utils::GetClassFromName("UnityEngine", "RectTransform")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::RectTransform::ReapplyDrivenProperties*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{driven});
  }
};
// Writing MetadataGetter for method: UnityEngine::RectTransform::ReapplyDrivenProperties::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult* (UnityEngine::RectTransform::ReapplyDrivenProperties::*)(UnityEngine::RectTransform*, System::AsyncCallback*, ::Il2CppObject*)>(&UnityEngine::RectTransform::ReapplyDrivenProperties::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* driven = &::il2cpp_utils::GetClassFromName("UnityEngine", "RectTransform")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::RectTransform::ReapplyDrivenProperties*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{driven, callback, object});
  }
};
// Writing MetadataGetter for method: UnityEngine::RectTransform::ReapplyDrivenProperties::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::RectTransform::ReapplyDrivenProperties::*)(System::IAsyncResult*)>(&UnityEngine::RectTransform::ReapplyDrivenProperties::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::RectTransform::ReapplyDrivenProperties*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
