// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Object
#include "UnityEngine/Object.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: UnityEngine.Video
namespace UnityEngine::Video {
  // Forward declaring type: VideoClip
  class VideoClip;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Video::VideoClip);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Video::VideoClip*, "UnityEngine.Video", "VideoClip");
// Type namespace: UnityEngine.Video
namespace UnityEngine::Video {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Video.VideoClip
  // [TokenAttribute] Offset: FFFFFFFF
  // [RequiredByNativeCodeAttribute] Offset: 10E8EA8
  // [NativeHeaderAttribute] Offset: 10E8EA8
  class VideoClip : public ::UnityEngine::Object {
    public:
    // public System.String get_originalPath()
    // Offset: 0x2B997CC
    ::StringW get_originalPath();
    // public System.UInt64 get_frameCount()
    // Offset: 0x2B9980C
    uint64_t get_frameCount();
    // public System.Double get_frameRate()
    // Offset: 0x2B9984C
    double get_frameRate();
    // public System.Double get_length()
    // Offset: 0x2B9988C
    double get_length();
    // public System.UInt32 get_width()
    // Offset: 0x2B998CC
    uint get_width();
    // public System.UInt32 get_height()
    // Offset: 0x2B9990C
    uint get_height();
    // public System.UInt32 get_pixelAspectRatioNumerator()
    // Offset: 0x2B9994C
    uint get_pixelAspectRatioNumerator();
    // public System.UInt32 get_pixelAspectRatioDenominator()
    // Offset: 0x2B9998C
    uint get_pixelAspectRatioDenominator();
    // public System.Boolean get_sRGB()
    // Offset: 0x2B999CC
    bool get_sRGB();
    // public System.UInt16 get_audioTrackCount()
    // Offset: 0x2B99A0C
    uint16_t get_audioTrackCount();
    // private System.Void .ctor()
    // Offset: 0x2B99764
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static VideoClip* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Video::VideoClip::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<VideoClip*, creationType>()));
    }
    // public System.UInt16 GetAudioChannelCount(System.UInt16 audioTrackIdx)
    // Offset: 0x2B99A4C
    uint16_t GetAudioChannelCount(uint16_t audioTrackIdx);
    // public System.UInt32 GetAudioSampleRate(System.UInt16 audioTrackIdx)
    // Offset: 0x2B99A9C
    uint GetAudioSampleRate(uint16_t audioTrackIdx);
    // public System.String GetAudioLanguage(System.UInt16 audioTrackIdx)
    // Offset: 0x2B99AEC
    ::StringW GetAudioLanguage(uint16_t audioTrackIdx);
  }; // UnityEngine.Video.VideoClip
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Video::VideoClip::get_originalPath
// Il2CppName: get_originalPath
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::Video::VideoClip::*)()>(&UnityEngine::Video::VideoClip::get_originalPath)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Video::VideoClip*), "get_originalPath", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Video::VideoClip::get_frameCount
// Il2CppName: get_frameCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (UnityEngine::Video::VideoClip::*)()>(&UnityEngine::Video::VideoClip::get_frameCount)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Video::VideoClip*), "get_frameCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Video::VideoClip::get_frameRate
// Il2CppName: get_frameRate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double (UnityEngine::Video::VideoClip::*)()>(&UnityEngine::Video::VideoClip::get_frameRate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Video::VideoClip*), "get_frameRate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Video::VideoClip::get_length
// Il2CppName: get_length
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double (UnityEngine::Video::VideoClip::*)()>(&UnityEngine::Video::VideoClip::get_length)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Video::VideoClip*), "get_length", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Video::VideoClip::get_width
// Il2CppName: get_width
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (UnityEngine::Video::VideoClip::*)()>(&UnityEngine::Video::VideoClip::get_width)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Video::VideoClip*), "get_width", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Video::VideoClip::get_height
// Il2CppName: get_height
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (UnityEngine::Video::VideoClip::*)()>(&UnityEngine::Video::VideoClip::get_height)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Video::VideoClip*), "get_height", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Video::VideoClip::get_pixelAspectRatioNumerator
// Il2CppName: get_pixelAspectRatioNumerator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (UnityEngine::Video::VideoClip::*)()>(&UnityEngine::Video::VideoClip::get_pixelAspectRatioNumerator)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Video::VideoClip*), "get_pixelAspectRatioNumerator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Video::VideoClip::get_pixelAspectRatioDenominator
// Il2CppName: get_pixelAspectRatioDenominator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (UnityEngine::Video::VideoClip::*)()>(&UnityEngine::Video::VideoClip::get_pixelAspectRatioDenominator)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Video::VideoClip*), "get_pixelAspectRatioDenominator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Video::VideoClip::get_sRGB
// Il2CppName: get_sRGB
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Video::VideoClip::*)()>(&UnityEngine::Video::VideoClip::get_sRGB)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Video::VideoClip*), "get_sRGB", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Video::VideoClip::get_audioTrackCount
// Il2CppName: get_audioTrackCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint16_t (UnityEngine::Video::VideoClip::*)()>(&UnityEngine::Video::VideoClip::get_audioTrackCount)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Video::VideoClip*), "get_audioTrackCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Video::VideoClip::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::Video::VideoClip::GetAudioChannelCount
// Il2CppName: GetAudioChannelCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint16_t (UnityEngine::Video::VideoClip::*)(uint16_t)>(&UnityEngine::Video::VideoClip::GetAudioChannelCount)> {
  static const MethodInfo* get() {
    static auto* audioTrackIdx = &::il2cpp_utils::GetClassFromName("System", "UInt16")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Video::VideoClip*), "GetAudioChannelCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{audioTrackIdx});
  }
};
// Writing MetadataGetter for method: UnityEngine::Video::VideoClip::GetAudioSampleRate
// Il2CppName: GetAudioSampleRate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (UnityEngine::Video::VideoClip::*)(uint16_t)>(&UnityEngine::Video::VideoClip::GetAudioSampleRate)> {
  static const MethodInfo* get() {
    static auto* audioTrackIdx = &::il2cpp_utils::GetClassFromName("System", "UInt16")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Video::VideoClip*), "GetAudioSampleRate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{audioTrackIdx});
  }
};
// Writing MetadataGetter for method: UnityEngine::Video::VideoClip::GetAudioLanguage
// Il2CppName: GetAudioLanguage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::Video::VideoClip::*)(uint16_t)>(&UnityEngine::Video::VideoClip::GetAudioLanguage)> {
  static const MethodInfo* get() {
    static auto* audioTrackIdx = &::il2cpp_utils::GetClassFromName("System", "UInt16")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Video::VideoClip*), "GetAudioLanguage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{audioTrackIdx});
  }
};
