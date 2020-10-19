// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: IAnalyticsModel
#include "GlobalNamespace/IAnalyticsModel.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: OculusAnalyticsModel
  class OculusAnalyticsModel : public ::Il2CppObject, public GlobalNamespace::IAnalyticsModel {
    public:
    // public System.Boolean get_supportsOpenDataPrivacyPage()
    // Offset: 0x20FEA7C
    // Implemented from: IAnalyticsModel
    // Base method: System.Boolean IAnalyticsModel::get_supportsOpenDataPrivacyPage()
    bool get_supportsOpenDataPrivacyPage();
    // public System.Void OpenDataPrivacyPage()
    // Offset: 0x20FEA84
    // Implemented from: IAnalyticsModel
    // Base method: System.Void IAnalyticsModel::OpenDataPrivacyPage()
    void OpenDataPrivacyPage();
    // public System.Void LogEvent(System.String eventType, System.Collections.Generic.Dictionary`2<System.String,System.String> eventData)
    // Offset: 0x20FEA88
    // Implemented from: IAnalyticsModel
    // Base method: System.Void IAnalyticsModel::LogEvent(System.String eventType, System.Collections.Generic.Dictionary`2<System.String,System.String> eventData)
    void LogEvent(::Il2CppString* eventType, System::Collections::Generic::Dictionary_2<::Il2CppString*, ::Il2CppString*>* eventData);
    // public System.Void .ctor()
    // Offset: 0x20FEB34
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static OculusAnalyticsModel* New_ctor();
  }; // OculusAnalyticsModel
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OculusAnalyticsModel*, "", "OculusAnalyticsModel");
#pragma pack(pop)
