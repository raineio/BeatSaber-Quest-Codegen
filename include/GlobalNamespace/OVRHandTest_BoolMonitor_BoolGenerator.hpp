// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVRHandTest/BoolMonitor
#include "GlobalNamespace/OVRHandTest_BoolMonitor.hpp"
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
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: OVRHandTest/BoolMonitor/BoolGenerator
  class OVRHandTest::BoolMonitor::BoolGenerator : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: BoolGenerator
    BoolGenerator() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1510C74
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OVRHandTest::BoolMonitor::BoolGenerator* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::OVRHandTest::BoolMonitor::BoolGenerator::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OVRHandTest::BoolMonitor::BoolGenerator*, creationType>(object, method)));
    }
    // public System.Boolean Invoke()
    // Offset: 0x1511D00
    bool Invoke();
    // public System.IAsyncResult BeginInvoke(System.AsyncCallback callback, System.Object object)
    // Offset: 0x1511F18
    System::IAsyncResult* BeginInvoke(System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Boolean EndInvoke(System.IAsyncResult result)
    // Offset: 0x1511F44
    bool EndInvoke(System::IAsyncResult* result);
  }; // OVRHandTest/BoolMonitor/BoolGenerator
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRHandTest::BoolMonitor::BoolGenerator*, "", "OVRHandTest/BoolMonitor/BoolGenerator");
// Writing MetadataGetter for method: GlobalNamespace::OVRHandTest::BoolMonitor::BoolGenerator::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::OVRHandTest::BoolMonitor::BoolGenerator::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::OVRHandTest::BoolMonitor::BoolGenerator::*)()>(&GlobalNamespace::OVRHandTest::BoolMonitor::BoolGenerator::Invoke)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRHandTest::BoolMonitor::BoolGenerator*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRHandTest::BoolMonitor::BoolGenerator::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult* (GlobalNamespace::OVRHandTest::BoolMonitor::BoolGenerator::*)(System::AsyncCallback*, ::Il2CppObject*)>(&GlobalNamespace::OVRHandTest::BoolMonitor::BoolGenerator::BeginInvoke)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRHandTest::BoolMonitor::BoolGenerator*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::AsyncCallback*>(), ::il2cpp_utils::ExtractIndependentType<::Il2CppObject*>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRHandTest::BoolMonitor::BoolGenerator::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::OVRHandTest::BoolMonitor::BoolGenerator::*)(System::IAsyncResult*)>(&GlobalNamespace::OVRHandTest::BoolMonitor::BoolGenerator::EndInvoke)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRHandTest::BoolMonitor::BoolGenerator*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::IAsyncResult*>()});
  }
};
