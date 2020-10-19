// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: CentralLeaderboardViewController
#include "GlobalNamespace/CentralLeaderboardViewController.hpp"
// Including type: OnlineServices.ScoresScope
#include "OnlineServices/ScoresScope.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Sprite
  class Sprite;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: CentralLeaderboardViewController/ScoreScopeInfo
  class CentralLeaderboardViewController::ScoreScopeInfo : public ::Il2CppObject {
    public:
    // public OnlineServices.ScoresScope scoreScope
    // Offset: 0x10
    OnlineServices::ScoresScope scoreScope;
    // public System.String localizedTitle
    // Offset: 0x18
    ::Il2CppString* localizedTitle;
    // public UnityEngine.Sprite icon
    // Offset: 0x20
    UnityEngine::Sprite* icon;
    // public System.Int32 playerScorePos
    // Offset: 0x28
    int playerScorePos;
    // public System.Void .ctor(OnlineServices.ScoresScope scoreScope, UnityEngine.Sprite icon, System.String localizedTitle)
    // Offset: 0x1FB1BAC
    static CentralLeaderboardViewController::ScoreScopeInfo* New_ctor(OnlineServices::ScoresScope scoreScope, UnityEngine::Sprite* icon, ::Il2CppString* localizedTitle);
  }; // CentralLeaderboardViewController/ScoreScopeInfo
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::CentralLeaderboardViewController::ScoreScopeInfo*, "", "CentralLeaderboardViewController/ScoreScopeInfo");
#pragma pack(pop)
