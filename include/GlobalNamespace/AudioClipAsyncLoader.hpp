// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IReferenceCountingCache`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class IReferenceCountingCache_2;
  // Forward declaring type: IMediaAsyncLoader
  class IMediaAsyncLoader;
  // Forward declaring type: IPreviewBeatmapLevel
  class IPreviewBeatmapLevel;
  // Forward declaring type: IBeatmapLevel
  class IBeatmapLevel;
  // Forward declaring type: IAssetSongPreviewAudioClipProvider
  class IAssetSongPreviewAudioClipProvider;
  // Forward declaring type: IAssetSongAudioClipProvider
  class IAssetSongAudioClipProvider;
  // Forward declaring type: IFilePathSongPreviewAudioClipProvider
  class IFilePathSongPreviewAudioClipProvider;
  // Forward declaring type: IFilePathSongAudioClipProvider
  class IFilePathSongAudioClipProvider;
}
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: Task`1<TResult>
  template<typename TResult>
  class Task_1;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AudioClip
  class AudioClip;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: AudioClipAsyncLoader
  class AudioClipAsyncLoader;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::AudioClipAsyncLoader);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::AudioClipAsyncLoader*, "", "AudioClipAsyncLoader");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: AudioClipAsyncLoader
  // [TokenAttribute] Offset: FFFFFFFF
  class AudioClipAsyncLoader : public ::Il2CppObject {
    public:
    // Nested type: ::GlobalNamespace::AudioClipAsyncLoader::LoadMethodDelegate
    class LoadMethodDelegate;
    // Nested type: ::GlobalNamespace::AudioClipAsyncLoader::$$c__DisplayClass16_0
    class $$c__DisplayClass16_0;
    // Nested type: ::GlobalNamespace::AudioClipAsyncLoader::$$c__DisplayClass17_0
    class $$c__DisplayClass17_0;
    // Nested type: ::GlobalNamespace::AudioClipAsyncLoader::$$c
    class $$c;
    // Nested type: ::GlobalNamespace::AudioClipAsyncLoader::$Unload$d__21
    struct $Unload$d__21;
    public:
    // private readonly IReferenceCountingCache`2<System.Int32,System.Threading.Tasks.Task`1<UnityEngine.AudioClip>> _cache
    // Size: 0x8
    // Offset: 0x10
    ::GlobalNamespace::IReferenceCountingCache_2<int, ::System::Threading::Tasks::Task_1<::UnityEngine::AudioClip*>*>* cache;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::IReferenceCountingCache_2<int, ::System::Threading::Tasks::Task_1<::UnityEngine::AudioClip*>*>*) == 0x8);
    // private readonly IMediaAsyncLoader _mediaAsyncLoader
    // Size: 0x8
    // Offset: 0x18
    ::GlobalNamespace::IMediaAsyncLoader* mediaAsyncLoader;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::IMediaAsyncLoader*) == 0x8);
    public:
    // Get instance field reference: private readonly IReferenceCountingCache`2<System.Int32,System.Threading.Tasks.Task`1<UnityEngine.AudioClip>> _cache
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::IReferenceCountingCache_2<int, ::System::Threading::Tasks::Task_1<::UnityEngine::AudioClip*>*>*& dyn__cache();
    // Get instance field reference: private readonly IMediaAsyncLoader _mediaAsyncLoader
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::IMediaAsyncLoader*& dyn__mediaAsyncLoader();
    // public System.Void .ctor(IReferenceCountingCache`2<System.Int32,System.Threading.Tasks.Task`1<UnityEngine.AudioClip>> cache, IMediaAsyncLoader mediaAsyncLoader)
    // Offset: 0x14EE438
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AudioClipAsyncLoader* New_ctor(::GlobalNamespace::IReferenceCountingCache_2<int, ::System::Threading::Tasks::Task_1<::UnityEngine::AudioClip*>*>* cache, ::GlobalNamespace::IMediaAsyncLoader* mediaAsyncLoader) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::AudioClipAsyncLoader::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AudioClipAsyncLoader*, creationType>(cache, mediaAsyncLoader)));
    }
    // public System.Threading.Tasks.Task`1<UnityEngine.AudioClip> LoadPreview(IPreviewBeatmapLevel beatmapLevel)
    // Offset: 0x14EE470
    ::System::Threading::Tasks::Task_1<::UnityEngine::AudioClip*>* LoadPreview(::GlobalNamespace::IPreviewBeatmapLevel* beatmapLevel);
    // public System.Threading.Tasks.Task`1<UnityEngine.AudioClip> LoadSong(IBeatmapLevel beatmapLevel)
    // Offset: 0x14EE7E4
    ::System::Threading::Tasks::Task_1<::UnityEngine::AudioClip*>* LoadSong(::GlobalNamespace::IBeatmapLevel* beatmapLevel);
    // public System.Void UnloadPreview(IPreviewBeatmapLevel beatmapLevel)
    // Offset: 0x14EEB58
    void UnloadPreview(::GlobalNamespace::IPreviewBeatmapLevel* beatmapLevel);
    // public System.Void UnloadSong(IBeatmapLevel beatmapLevel)
    // Offset: 0x14EEE9C
    void UnloadSong(::GlobalNamespace::IBeatmapLevel* beatmapLevel);
    // public System.Threading.Tasks.Task`1<UnityEngine.AudioClip> Load(IAssetSongPreviewAudioClipProvider source)
    // Offset: 0x14EE65C
    ::System::Threading::Tasks::Task_1<::UnityEngine::AudioClip*>* Load(::GlobalNamespace::IAssetSongPreviewAudioClipProvider* source);
    // public System.Threading.Tasks.Task`1<UnityEngine.AudioClip> Load(IAssetSongAudioClipProvider source)
    // Offset: 0x14EE9D0
    ::System::Threading::Tasks::Task_1<::UnityEngine::AudioClip*>* Load(::GlobalNamespace::IAssetSongAudioClipProvider* source);
    // public System.Threading.Tasks.Task`1<UnityEngine.AudioClip> Load(IFilePathSongPreviewAudioClipProvider source)
    // Offset: 0x14EE720
    ::System::Threading::Tasks::Task_1<::UnityEngine::AudioClip*>* Load(::GlobalNamespace::IFilePathSongPreviewAudioClipProvider* source);
    // public System.Threading.Tasks.Task`1<UnityEngine.AudioClip> Load(IFilePathSongAudioClipProvider source)
    // Offset: 0x14EEA94
    ::System::Threading::Tasks::Task_1<::UnityEngine::AudioClip*>* Load(::GlobalNamespace::IFilePathSongAudioClipProvider* source);
    // public System.Void Unload(IAssetSongPreviewAudioClipProvider source)
    // Offset: 0x14EED14
    void Unload(::GlobalNamespace::IAssetSongPreviewAudioClipProvider* source);
    // public System.Void Unload(IAssetSongAudioClipProvider source)
    // Offset: 0x14EF058
    void Unload(::GlobalNamespace::IAssetSongAudioClipProvider* source);
    // public System.Void Unload(IFilePathSongPreviewAudioClipProvider source)
    // Offset: 0x14EEDD8
    void Unload(::GlobalNamespace::IFilePathSongPreviewAudioClipProvider* source);
    // public System.Void Unload(IFilePathSongAudioClipProvider source)
    // Offset: 0x14EF11C
    void Unload(::GlobalNamespace::IFilePathSongAudioClipProvider* source);
    // private System.Threading.Tasks.Task`1<UnityEngine.AudioClip> Load(UnityEngine.AudioClip audioClip)
    // Offset: 0x14EF1E0
    ::System::Threading::Tasks::Task_1<::UnityEngine::AudioClip*>* Load(::UnityEngine::AudioClip* audioClip);
    // private System.Threading.Tasks.Task`1<UnityEngine.AudioClip> Load(System.String audioClipFilePath)
    // Offset: 0x14EF2A4
    ::System::Threading::Tasks::Task_1<::UnityEngine::AudioClip*>* Load(::StringW audioClipFilePath);
    // private System.Threading.Tasks.Task`1<UnityEngine.AudioClip> Load(System.Int32 cacheKey, AudioClipAsyncLoader/LoadMethodDelegate loadMethodDelegate)
    // Offset: 0x14EF564
    ::System::Threading::Tasks::Task_1<::UnityEngine::AudioClip*>* Load(int cacheKey, ::GlobalNamespace::AudioClipAsyncLoader::LoadMethodDelegate* loadMethodDelegate);
    // private System.Void Unload(UnityEngine.AudioClip audioClip)
    // Offset: 0x14EF368
    void Unload(::UnityEngine::AudioClip* audioClip);
    // private System.Void Unload(System.String audioClipFilePath)
    // Offset: 0x14EF480
    void Unload(::StringW audioClipFilePath);
    // public System.Void Unload(System.Int32 cacheKey, System.Action`1<UnityEngine.AudioClip> onDelete)
    // Offset: 0x14EF97C
    void Unload(int cacheKey, ::System::Action_1<::UnityEngine::AudioClip*>* onDelete);
    // public System.Int32 GetCacheKey(UnityEngine.AudioClip audioClip)
    // Offset: 0x14EF534
    int GetCacheKey(::UnityEngine::AudioClip* audioClip);
    // public System.Int32 GetCacheKey(System.String audioClipFilePath)
    // Offset: 0x14EF748
    int GetCacheKey(::StringW audioClipFilePath);
    // static public System.Void LogError(System.String message)
    // Offset: 0x14EFA4C
    static void LogError(::StringW message);
  }; // AudioClipAsyncLoader
  #pragma pack(pop)
  static check_size<sizeof(AudioClipAsyncLoader), 24 + sizeof(::GlobalNamespace::IMediaAsyncLoader*)> __GlobalNamespace_AudioClipAsyncLoaderSizeCheck;
  static_assert(sizeof(AudioClipAsyncLoader) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::AudioClipAsyncLoader::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::AudioClipAsyncLoader::LoadPreview
// Il2CppName: LoadPreview
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::UnityEngine::AudioClip*>* (GlobalNamespace::AudioClipAsyncLoader::*)(::GlobalNamespace::IPreviewBeatmapLevel*)>(&GlobalNamespace::AudioClipAsyncLoader::LoadPreview)> {
  static const MethodInfo* get() {
    static auto* beatmapLevel = &::il2cpp_utils::GetClassFromName("", "IPreviewBeatmapLevel")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AudioClipAsyncLoader*), "LoadPreview", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{beatmapLevel});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AudioClipAsyncLoader::LoadSong
// Il2CppName: LoadSong
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::UnityEngine::AudioClip*>* (GlobalNamespace::AudioClipAsyncLoader::*)(::GlobalNamespace::IBeatmapLevel*)>(&GlobalNamespace::AudioClipAsyncLoader::LoadSong)> {
  static const MethodInfo* get() {
    static auto* beatmapLevel = &::il2cpp_utils::GetClassFromName("", "IBeatmapLevel")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AudioClipAsyncLoader*), "LoadSong", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{beatmapLevel});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AudioClipAsyncLoader::UnloadPreview
// Il2CppName: UnloadPreview
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AudioClipAsyncLoader::*)(::GlobalNamespace::IPreviewBeatmapLevel*)>(&GlobalNamespace::AudioClipAsyncLoader::UnloadPreview)> {
  static const MethodInfo* get() {
    static auto* beatmapLevel = &::il2cpp_utils::GetClassFromName("", "IPreviewBeatmapLevel")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AudioClipAsyncLoader*), "UnloadPreview", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{beatmapLevel});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AudioClipAsyncLoader::UnloadSong
// Il2CppName: UnloadSong
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AudioClipAsyncLoader::*)(::GlobalNamespace::IBeatmapLevel*)>(&GlobalNamespace::AudioClipAsyncLoader::UnloadSong)> {
  static const MethodInfo* get() {
    static auto* beatmapLevel = &::il2cpp_utils::GetClassFromName("", "IBeatmapLevel")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AudioClipAsyncLoader*), "UnloadSong", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{beatmapLevel});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AudioClipAsyncLoader::Load
// Il2CppName: Load
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::UnityEngine::AudioClip*>* (GlobalNamespace::AudioClipAsyncLoader::*)(::GlobalNamespace::IAssetSongPreviewAudioClipProvider*)>(&GlobalNamespace::AudioClipAsyncLoader::Load)> {
  static const MethodInfo* get() {
    static auto* source = &::il2cpp_utils::GetClassFromName("", "IAssetSongPreviewAudioClipProvider")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AudioClipAsyncLoader*), "Load", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{source});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AudioClipAsyncLoader::Load
// Il2CppName: Load
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::UnityEngine::AudioClip*>* (GlobalNamespace::AudioClipAsyncLoader::*)(::GlobalNamespace::IAssetSongAudioClipProvider*)>(&GlobalNamespace::AudioClipAsyncLoader::Load)> {
  static const MethodInfo* get() {
    static auto* source = &::il2cpp_utils::GetClassFromName("", "IAssetSongAudioClipProvider")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AudioClipAsyncLoader*), "Load", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{source});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AudioClipAsyncLoader::Load
// Il2CppName: Load
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::UnityEngine::AudioClip*>* (GlobalNamespace::AudioClipAsyncLoader::*)(::GlobalNamespace::IFilePathSongPreviewAudioClipProvider*)>(&GlobalNamespace::AudioClipAsyncLoader::Load)> {
  static const MethodInfo* get() {
    static auto* source = &::il2cpp_utils::GetClassFromName("", "IFilePathSongPreviewAudioClipProvider")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AudioClipAsyncLoader*), "Load", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{source});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AudioClipAsyncLoader::Load
// Il2CppName: Load
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::UnityEngine::AudioClip*>* (GlobalNamespace::AudioClipAsyncLoader::*)(::GlobalNamespace::IFilePathSongAudioClipProvider*)>(&GlobalNamespace::AudioClipAsyncLoader::Load)> {
  static const MethodInfo* get() {
    static auto* source = &::il2cpp_utils::GetClassFromName("", "IFilePathSongAudioClipProvider")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AudioClipAsyncLoader*), "Load", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{source});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AudioClipAsyncLoader::Unload
// Il2CppName: Unload
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AudioClipAsyncLoader::*)(::GlobalNamespace::IAssetSongPreviewAudioClipProvider*)>(&GlobalNamespace::AudioClipAsyncLoader::Unload)> {
  static const MethodInfo* get() {
    static auto* source = &::il2cpp_utils::GetClassFromName("", "IAssetSongPreviewAudioClipProvider")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AudioClipAsyncLoader*), "Unload", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{source});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AudioClipAsyncLoader::Unload
// Il2CppName: Unload
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AudioClipAsyncLoader::*)(::GlobalNamespace::IAssetSongAudioClipProvider*)>(&GlobalNamespace::AudioClipAsyncLoader::Unload)> {
  static const MethodInfo* get() {
    static auto* source = &::il2cpp_utils::GetClassFromName("", "IAssetSongAudioClipProvider")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AudioClipAsyncLoader*), "Unload", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{source});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AudioClipAsyncLoader::Unload
// Il2CppName: Unload
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AudioClipAsyncLoader::*)(::GlobalNamespace::IFilePathSongPreviewAudioClipProvider*)>(&GlobalNamespace::AudioClipAsyncLoader::Unload)> {
  static const MethodInfo* get() {
    static auto* source = &::il2cpp_utils::GetClassFromName("", "IFilePathSongPreviewAudioClipProvider")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AudioClipAsyncLoader*), "Unload", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{source});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AudioClipAsyncLoader::Unload
// Il2CppName: Unload
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AudioClipAsyncLoader::*)(::GlobalNamespace::IFilePathSongAudioClipProvider*)>(&GlobalNamespace::AudioClipAsyncLoader::Unload)> {
  static const MethodInfo* get() {
    static auto* source = &::il2cpp_utils::GetClassFromName("", "IFilePathSongAudioClipProvider")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AudioClipAsyncLoader*), "Unload", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{source});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AudioClipAsyncLoader::Load
// Il2CppName: Load
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::UnityEngine::AudioClip*>* (GlobalNamespace::AudioClipAsyncLoader::*)(::UnityEngine::AudioClip*)>(&GlobalNamespace::AudioClipAsyncLoader::Load)> {
  static const MethodInfo* get() {
    static auto* audioClip = &::il2cpp_utils::GetClassFromName("UnityEngine", "AudioClip")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AudioClipAsyncLoader*), "Load", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{audioClip});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AudioClipAsyncLoader::Load
// Il2CppName: Load
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::UnityEngine::AudioClip*>* (GlobalNamespace::AudioClipAsyncLoader::*)(::StringW)>(&GlobalNamespace::AudioClipAsyncLoader::Load)> {
  static const MethodInfo* get() {
    static auto* audioClipFilePath = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AudioClipAsyncLoader*), "Load", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{audioClipFilePath});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AudioClipAsyncLoader::Load
// Il2CppName: Load
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::UnityEngine::AudioClip*>* (GlobalNamespace::AudioClipAsyncLoader::*)(int, ::GlobalNamespace::AudioClipAsyncLoader::LoadMethodDelegate*)>(&GlobalNamespace::AudioClipAsyncLoader::Load)> {
  static const MethodInfo* get() {
    static auto* cacheKey = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* loadMethodDelegate = &::il2cpp_utils::GetClassFromName("", "AudioClipAsyncLoader/LoadMethodDelegate")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AudioClipAsyncLoader*), "Load", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{cacheKey, loadMethodDelegate});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AudioClipAsyncLoader::Unload
// Il2CppName: Unload
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AudioClipAsyncLoader::*)(::UnityEngine::AudioClip*)>(&GlobalNamespace::AudioClipAsyncLoader::Unload)> {
  static const MethodInfo* get() {
    static auto* audioClip = &::il2cpp_utils::GetClassFromName("UnityEngine", "AudioClip")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AudioClipAsyncLoader*), "Unload", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{audioClip});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AudioClipAsyncLoader::Unload
// Il2CppName: Unload
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AudioClipAsyncLoader::*)(::StringW)>(&GlobalNamespace::AudioClipAsyncLoader::Unload)> {
  static const MethodInfo* get() {
    static auto* audioClipFilePath = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AudioClipAsyncLoader*), "Unload", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{audioClipFilePath});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AudioClipAsyncLoader::Unload
// Il2CppName: Unload
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AudioClipAsyncLoader::*)(int, ::System::Action_1<::UnityEngine::AudioClip*>*)>(&GlobalNamespace::AudioClipAsyncLoader::Unload)> {
  static const MethodInfo* get() {
    static auto* cacheKey = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* onDelete = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine", "AudioClip")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AudioClipAsyncLoader*), "Unload", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{cacheKey, onDelete});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AudioClipAsyncLoader::GetCacheKey
// Il2CppName: GetCacheKey
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::AudioClipAsyncLoader::*)(::UnityEngine::AudioClip*)>(&GlobalNamespace::AudioClipAsyncLoader::GetCacheKey)> {
  static const MethodInfo* get() {
    static auto* audioClip = &::il2cpp_utils::GetClassFromName("UnityEngine", "AudioClip")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AudioClipAsyncLoader*), "GetCacheKey", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{audioClip});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AudioClipAsyncLoader::GetCacheKey
// Il2CppName: GetCacheKey
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::AudioClipAsyncLoader::*)(::StringW)>(&GlobalNamespace::AudioClipAsyncLoader::GetCacheKey)> {
  static const MethodInfo* get() {
    static auto* audioClipFilePath = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AudioClipAsyncLoader*), "GetCacheKey", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{audioClipFilePath});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AudioClipAsyncLoader::LogError
// Il2CppName: LogError
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW)>(&GlobalNamespace::AudioClipAsyncLoader::LogError)> {
  static const MethodInfo* get() {
    static auto* message = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AudioClipAsyncLoader*), "LogError", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{message});
  }
};
