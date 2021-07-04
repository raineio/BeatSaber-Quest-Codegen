// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: BeatmapEventData
  class BeatmapEventData;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: BeatmapEventCallback
  class BeatmapEventCallback : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: BeatmapEventCallback
    BeatmapEventCallback() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x11C8014
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BeatmapEventCallback* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::BeatmapEventCallback::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BeatmapEventCallback*, creationType>(object, method)));
    }
    // public System.Void Invoke(BeatmapEventData eventData)
    // Offset: 0x11C8024
    void Invoke(GlobalNamespace::BeatmapEventData* eventData);
    // public System.IAsyncResult BeginInvoke(BeatmapEventData eventData, System.AsyncCallback callback, System.Object object)
    // Offset: 0x11C83B8
    System::IAsyncResult* BeginInvoke(GlobalNamespace::BeatmapEventData* eventData, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0x11C83DC
    void EndInvoke(System::IAsyncResult* result);
  }; // BeatmapEventCallback
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatmapEventCallback*, "", "BeatmapEventCallback");
// Writing MetadataGetter for method: GlobalNamespace::BeatmapEventCallback::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::BeatmapEventCallback::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapEventCallback::*)(GlobalNamespace::BeatmapEventData*)>(&GlobalNamespace::BeatmapEventCallback::Invoke)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapEventCallback*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<GlobalNamespace::BeatmapEventData*>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapEventCallback::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult* (GlobalNamespace::BeatmapEventCallback::*)(GlobalNamespace::BeatmapEventData*, System::AsyncCallback*, ::Il2CppObject*)>(&GlobalNamespace::BeatmapEventCallback::BeginInvoke)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapEventCallback*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<GlobalNamespace::BeatmapEventData*>(), ::il2cpp_utils::ExtractIndependentType<System::AsyncCallback*>(), ::il2cpp_utils::ExtractIndependentType<::Il2CppObject*>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapEventCallback::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapEventCallback::*)(System::IAsyncResult*)>(&GlobalNamespace::BeatmapEventCallback::EndInvoke)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapEventCallback*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::IAsyncResult*>()});
  }
};
