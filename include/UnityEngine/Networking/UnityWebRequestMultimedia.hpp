// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Networking
namespace UnityEngine::Networking {
  // Forward declaring type: UnityWebRequest
  class UnityWebRequest;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AudioType
  struct AudioType;
}
// Completed forward declares
// Type namespace: UnityEngine.Networking
namespace UnityEngine::Networking {
  // Forward declaring type: UnityWebRequestMultimedia
  class UnityWebRequestMultimedia;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Networking::UnityWebRequestMultimedia);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Networking::UnityWebRequestMultimedia*, "UnityEngine.Networking", "UnityWebRequestMultimedia");
// Type namespace: UnityEngine.Networking
namespace UnityEngine::Networking {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Networking.UnityWebRequestMultimedia
  // [TokenAttribute] Offset: FFFFFFFF
  class UnityWebRequestMultimedia : public ::Il2CppObject {
    public:
    // static public UnityEngine.Networking.UnityWebRequest GetAudioClip(System.String uri, UnityEngine.AudioType audioType)
    // Offset: 0x2BA13E4
    static ::UnityEngine::Networking::UnityWebRequest* GetAudioClip(::StringW uri, ::UnityEngine::AudioType audioType);
  }; // UnityEngine.Networking.UnityWebRequestMultimedia
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Networking::UnityWebRequestMultimedia::GetAudioClip
// Il2CppName: GetAudioClip
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Networking::UnityWebRequest* (*)(::StringW, ::UnityEngine::AudioType)>(&UnityEngine::Networking::UnityWebRequestMultimedia::GetAudioClip)> {
  static const MethodInfo* get() {
    static auto* uri = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* audioType = &::il2cpp_utils::GetClassFromName("UnityEngine", "AudioType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Networking::UnityWebRequestMultimedia*), "GetAudioClip", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{uri, audioType});
  }
};
