// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Int32
#include "System/Int32.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: String
  class String;
  // Forward declaring type: IntPtr
  struct IntPtr;
}
// Forward declaring namespace: UnityOpus
namespace UnityOpus {
  // Forward declaring type: SamplingFrequency
  struct SamplingFrequency;
  // Forward declaring type: NumChannels
  struct NumChannels;
  // Forward declaring type: OpusApplication
  struct OpusApplication;
  // Forward declaring type: ErrorCode
  struct ErrorCode;
  // Forward declaring type: OpusSignal
  struct OpusSignal;
}
// Completed forward declares
// Type namespace: UnityOpus
namespace UnityOpus {
  // Forward declaring type: Library
  class Library;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityOpus::Library);
DEFINE_IL2CPP_ARG_TYPE(::UnityOpus::Library*, "UnityOpus", "Library");
// Type namespace: UnityOpus
namespace UnityOpus {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityOpus.Library
  // [TokenAttribute] Offset: FFFFFFFF
  class Library : public ::Il2CppObject {
    public:
    // static field const value: static public System.Int32 maximumPacketDuration
    static constexpr const int maximumPacketDuration = 5760;
    // Get static field: static public System.Int32 maximumPacketDuration
    static int _get_maximumPacketDuration();
    // Set static field: static public System.Int32 maximumPacketDuration
    static void _set_maximumPacketDuration(int value);
    // static field const value: static private System.String dllName
    static constexpr const char* dllName = "unityopus";
    // Get static field: static private System.String dllName
    static ::StringW _get_dllName();
    // Set static field: static private System.String dllName
    static void _set_dllName(::StringW value);
    // public System.Void .ctor()
    // Offset: 0x1656C98
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Library* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityOpus::Library::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Library*, creationType>()));
    }
    // static public System.IntPtr OpusEncoderCreate(UnityOpus.SamplingFrequency samplingFrequency, UnityOpus.NumChannels channels, UnityOpus.OpusApplication application, out UnityOpus.ErrorCode error)
    // Offset: 0x1656718
    static ::System::IntPtr OpusEncoderCreate(::UnityOpus::SamplingFrequency samplingFrequency, ::UnityOpus::NumChannels channels, ::UnityOpus::OpusApplication application, ByRef<::UnityOpus::ErrorCode> error);
    // static public System.Int32 OpusEncode(System.IntPtr encoder, System.Int16[] pcm, System.Int32 frameSize, System.Byte[] data, System.Int32 maxDataBytes)
    // Offset: 0x1656B08
    static int OpusEncode(::System::IntPtr encoder, ::ArrayW<int16_t> pcm, int frameSize, ::ArrayW<uint8_t> data, int maxDataBytes);
    // static public System.Int32 OpusEncodeFloat(System.IntPtr encoder, System.Single[] pcm, System.Int32 frameSize, System.Byte[] data, System.Int32 maxDataBytes)
    // Offset: 0x1656868
    static int OpusEncodeFloat(::System::IntPtr encoder, ::ArrayW<float> pcm, int frameSize, ::ArrayW<uint8_t> data, int maxDataBytes);
    // static public System.Void OpusEncoderDestroy(System.IntPtr encoder)
    // Offset: 0x1656998
    static void OpusEncoderDestroy(::System::IntPtr encoder);
    // static public System.Int32 OpusEncoderSetBitrate(System.IntPtr encoder, System.Int32 bitrate)
    // Offset: 0x16563E0
    static int OpusEncoderSetBitrate(::System::IntPtr encoder, int bitrate);
    // static public System.Int32 OpusEncoderSetComplexity(System.IntPtr encoder, System.Int32 complexity)
    // Offset: 0x16564A4
    static int OpusEncoderSetComplexity(::System::IntPtr encoder, int complexity);
    // static public System.Int32 OpusEncoderSetSignal(System.IntPtr encoder, UnityOpus.OpusSignal signal)
    // Offset: 0x1656568
    static int OpusEncoderSetSignal(::System::IntPtr encoder, ::UnityOpus::OpusSignal signal);
    // static public System.IntPtr OpusDecoderCreate(UnityOpus.SamplingFrequency samplingFrequency, UnityOpus.NumChannels channels, out UnityOpus.ErrorCode error)
    // Offset: 0x1655EE8
    static ::System::IntPtr OpusDecoderCreate(::UnityOpus::SamplingFrequency samplingFrequency, ::UnityOpus::NumChannels channels, ByRef<::UnityOpus::ErrorCode> error);
    // static public System.Int32 OpusDecode(System.IntPtr decoder, System.Byte[] data, System.Int32 len, System.Int16[] pcm, System.Int32 frameSize, System.Int32 decodeFec)
    // Offset: 0x1656BC8
    static int OpusDecode(::System::IntPtr decoder, ::ArrayW<uint8_t> data, int len, ::ArrayW<int16_t> pcm, int frameSize, int decodeFec);
    // static public System.Int32 OpusDecodeFloat(System.IntPtr decoder, System.Byte[] data, System.Int32 len, System.Single[] pcm, System.Int32 frameSize, System.Int32 decodeFec)
    // Offset: 0x1656044
    static int OpusDecodeFloat(::System::IntPtr decoder, ::ArrayW<uint8_t> data, int len, ::ArrayW<float> pcm, int frameSize, int decodeFec);
    // static public System.Void OpusDecoderDestroy(System.IntPtr decoder)
    // Offset: 0x165623C
    static void OpusDecoderDestroy(::System::IntPtr decoder);
    // static public System.Void OpusPcmSoftClip(System.Single[] pcm, System.Int32 frameSize, UnityOpus.NumChannels channels, System.Single[] softclipMem)
    // Offset: 0x1656114
    static void OpusPcmSoftClip(::ArrayW<float> pcm, int frameSize, ::UnityOpus::NumChannels channels, ::ArrayW<float> softclipMem);
  }; // UnityOpus.Library
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityOpus::Library::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityOpus::Library::OpusEncoderCreate
// Il2CppName: OpusEncoderCreate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (*)(::UnityOpus::SamplingFrequency, ::UnityOpus::NumChannels, ::UnityOpus::OpusApplication, ByRef<::UnityOpus::ErrorCode>)>(&UnityOpus::Library::OpusEncoderCreate)> {
  static const MethodInfo* get() {
    static auto* samplingFrequency = &::il2cpp_utils::GetClassFromName("UnityOpus", "SamplingFrequency")->byval_arg;
    static auto* channels = &::il2cpp_utils::GetClassFromName("UnityOpus", "NumChannels")->byval_arg;
    static auto* application = &::il2cpp_utils::GetClassFromName("UnityOpus", "OpusApplication")->byval_arg;
    static auto* error = &::il2cpp_utils::GetClassFromName("UnityOpus", "ErrorCode")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityOpus::Library*), "OpusEncoderCreate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{samplingFrequency, channels, application, error});
  }
};
// Writing MetadataGetter for method: UnityOpus::Library::OpusEncode
// Il2CppName: OpusEncode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::System::IntPtr, ::ArrayW<int16_t>, int, ::ArrayW<uint8_t>, int)>(&UnityOpus::Library::OpusEncode)> {
  static const MethodInfo* get() {
    static auto* encoder = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* pcm = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Int16"), 1)->byval_arg;
    static auto* frameSize = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* data = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* maxDataBytes = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityOpus::Library*), "OpusEncode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{encoder, pcm, frameSize, data, maxDataBytes});
  }
};
// Writing MetadataGetter for method: UnityOpus::Library::OpusEncodeFloat
// Il2CppName: OpusEncodeFloat
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::System::IntPtr, ::ArrayW<float>, int, ::ArrayW<uint8_t>, int)>(&UnityOpus::Library::OpusEncodeFloat)> {
  static const MethodInfo* get() {
    static auto* encoder = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* pcm = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Single"), 1)->byval_arg;
    static auto* frameSize = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* data = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* maxDataBytes = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityOpus::Library*), "OpusEncodeFloat", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{encoder, pcm, frameSize, data, maxDataBytes});
  }
};
// Writing MetadataGetter for method: UnityOpus::Library::OpusEncoderDestroy
// Il2CppName: OpusEncoderDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IntPtr)>(&UnityOpus::Library::OpusEncoderDestroy)> {
  static const MethodInfo* get() {
    static auto* encoder = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityOpus::Library*), "OpusEncoderDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{encoder});
  }
};
// Writing MetadataGetter for method: UnityOpus::Library::OpusEncoderSetBitrate
// Il2CppName: OpusEncoderSetBitrate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::System::IntPtr, int)>(&UnityOpus::Library::OpusEncoderSetBitrate)> {
  static const MethodInfo* get() {
    static auto* encoder = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* bitrate = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityOpus::Library*), "OpusEncoderSetBitrate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{encoder, bitrate});
  }
};
// Writing MetadataGetter for method: UnityOpus::Library::OpusEncoderSetComplexity
// Il2CppName: OpusEncoderSetComplexity
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::System::IntPtr, int)>(&UnityOpus::Library::OpusEncoderSetComplexity)> {
  static const MethodInfo* get() {
    static auto* encoder = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* complexity = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityOpus::Library*), "OpusEncoderSetComplexity", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{encoder, complexity});
  }
};
// Writing MetadataGetter for method: UnityOpus::Library::OpusEncoderSetSignal
// Il2CppName: OpusEncoderSetSignal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::System::IntPtr, ::UnityOpus::OpusSignal)>(&UnityOpus::Library::OpusEncoderSetSignal)> {
  static const MethodInfo* get() {
    static auto* encoder = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* signal = &::il2cpp_utils::GetClassFromName("UnityOpus", "OpusSignal")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityOpus::Library*), "OpusEncoderSetSignal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{encoder, signal});
  }
};
// Writing MetadataGetter for method: UnityOpus::Library::OpusDecoderCreate
// Il2CppName: OpusDecoderCreate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (*)(::UnityOpus::SamplingFrequency, ::UnityOpus::NumChannels, ByRef<::UnityOpus::ErrorCode>)>(&UnityOpus::Library::OpusDecoderCreate)> {
  static const MethodInfo* get() {
    static auto* samplingFrequency = &::il2cpp_utils::GetClassFromName("UnityOpus", "SamplingFrequency")->byval_arg;
    static auto* channels = &::il2cpp_utils::GetClassFromName("UnityOpus", "NumChannels")->byval_arg;
    static auto* error = &::il2cpp_utils::GetClassFromName("UnityOpus", "ErrorCode")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityOpus::Library*), "OpusDecoderCreate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{samplingFrequency, channels, error});
  }
};
// Writing MetadataGetter for method: UnityOpus::Library::OpusDecode
// Il2CppName: OpusDecode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::System::IntPtr, ::ArrayW<uint8_t>, int, ::ArrayW<int16_t>, int, int)>(&UnityOpus::Library::OpusDecode)> {
  static const MethodInfo* get() {
    static auto* decoder = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* data = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* len = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* pcm = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Int16"), 1)->byval_arg;
    static auto* frameSize = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* decodeFec = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityOpus::Library*), "OpusDecode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{decoder, data, len, pcm, frameSize, decodeFec});
  }
};
// Writing MetadataGetter for method: UnityOpus::Library::OpusDecodeFloat
// Il2CppName: OpusDecodeFloat
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::System::IntPtr, ::ArrayW<uint8_t>, int, ::ArrayW<float>, int, int)>(&UnityOpus::Library::OpusDecodeFloat)> {
  static const MethodInfo* get() {
    static auto* decoder = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* data = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* len = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* pcm = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Single"), 1)->byval_arg;
    static auto* frameSize = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* decodeFec = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityOpus::Library*), "OpusDecodeFloat", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{decoder, data, len, pcm, frameSize, decodeFec});
  }
};
// Writing MetadataGetter for method: UnityOpus::Library::OpusDecoderDestroy
// Il2CppName: OpusDecoderDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IntPtr)>(&UnityOpus::Library::OpusDecoderDestroy)> {
  static const MethodInfo* get() {
    static auto* decoder = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityOpus::Library*), "OpusDecoderDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{decoder});
  }
};
// Writing MetadataGetter for method: UnityOpus::Library::OpusPcmSoftClip
// Il2CppName: OpusPcmSoftClip
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<float>, int, ::UnityOpus::NumChannels, ::ArrayW<float>)>(&UnityOpus::Library::OpusPcmSoftClip)> {
  static const MethodInfo* get() {
    static auto* pcm = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Single"), 1)->byval_arg;
    static auto* frameSize = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* channels = &::il2cpp_utils::GetClassFromName("UnityOpus", "NumChannels")->byval_arg;
    static auto* softclipMem = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Single"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityOpus::Library*), "OpusPcmSoftClip", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pcm, frameSize, channels, softclipMem});
  }
};
