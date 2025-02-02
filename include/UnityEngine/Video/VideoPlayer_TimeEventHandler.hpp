// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Video.VideoPlayer
#include "UnityEngine/Video/VideoPlayer.hpp"
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
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Video::VideoPlayer::TimeEventHandler);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Video::VideoPlayer::TimeEventHandler*, "UnityEngine.Video", "VideoPlayer/TimeEventHandler");
// Type namespace: UnityEngine.Video
namespace UnityEngine::Video {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Video.VideoPlayer/UnityEngine.Video.TimeEventHandler
  // [TokenAttribute] Offset: FFFFFFFF
  class VideoPlayer::TimeEventHandler : public ::System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x2B9B024
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static VideoPlayer::TimeEventHandler* New_ctor(::Il2CppObject* object, ::System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Video::VideoPlayer::TimeEventHandler::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<VideoPlayer::TimeEventHandler*, creationType>(object, method)));
    }
    // public System.Void Invoke(UnityEngine.Video.VideoPlayer source, System.Double seconds)
    // Offset: 0x2B9AAE8
    void Invoke(::UnityEngine::Video::VideoPlayer* source, double seconds);
    // public System.IAsyncResult BeginInvoke(UnityEngine.Video.VideoPlayer source, System.Double seconds, System.AsyncCallback callback, System.Object object)
    // Offset: 0x2B9B034
    ::System::IAsyncResult* BeginInvoke(::UnityEngine::Video::VideoPlayer* source, double seconds, ::System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0x2B9B0D0
    void EndInvoke(::System::IAsyncResult* result);
  }; // UnityEngine.Video.VideoPlayer/UnityEngine.Video.TimeEventHandler
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Video::VideoPlayer::TimeEventHandler::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::Video::VideoPlayer::TimeEventHandler::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Video::VideoPlayer::TimeEventHandler::*)(::UnityEngine::Video::VideoPlayer*, double)>(&UnityEngine::Video::VideoPlayer::TimeEventHandler::Invoke)> {
  static const MethodInfo* get() {
    static auto* source = &::il2cpp_utils::GetClassFromName("UnityEngine.Video", "VideoPlayer")->byval_arg;
    static auto* seconds = &::il2cpp_utils::GetClassFromName("System", "Double")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Video::VideoPlayer::TimeEventHandler*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{source, seconds});
  }
};
// Writing MetadataGetter for method: UnityEngine::Video::VideoPlayer::TimeEventHandler::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (UnityEngine::Video::VideoPlayer::TimeEventHandler::*)(::UnityEngine::Video::VideoPlayer*, double, ::System::AsyncCallback*, ::Il2CppObject*)>(&UnityEngine::Video::VideoPlayer::TimeEventHandler::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* source = &::il2cpp_utils::GetClassFromName("UnityEngine.Video", "VideoPlayer")->byval_arg;
    static auto* seconds = &::il2cpp_utils::GetClassFromName("System", "Double")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Video::VideoPlayer::TimeEventHandler*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{source, seconds, callback, object});
  }
};
// Writing MetadataGetter for method: UnityEngine::Video::VideoPlayer::TimeEventHandler::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Video::VideoPlayer::TimeEventHandler::*)(::System::IAsyncResult*)>(&UnityEngine::Video::VideoPlayer::TimeEventHandler::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Video::VideoPlayer::TimeEventHandler*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
