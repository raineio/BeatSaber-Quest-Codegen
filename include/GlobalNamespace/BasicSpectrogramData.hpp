// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: System.Int32
#include "System/Int32.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
#include "extern/beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AudioSource
  class AudioSource;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: BasicSpectrogramData
  // [TokenAttribute] Offset: FFFFFFFF
  class BasicSpectrogramData : public UnityEngine::MonoBehaviour {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    private:
    #endif
    // private UnityEngine.AudioSource _audioSource
    // Size: 0x8
    // Offset: 0x18
    UnityEngine::AudioSource* audioSource;
    // Field size check
    static_assert(sizeof(UnityEngine::AudioSource*) == 0x8);
    // private System.Single _instantChangeThreshold
    // Size: 0x4
    // Offset: 0x20
    float instantChangeThreshold;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Boolean _hasData
    // Size: 0x1
    // Offset: 0x24
    bool hasData;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _hasProcessedData
    // Size: 0x1
    // Offset: 0x25
    bool hasProcessedData;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: hasProcessedData and: samples
    char __padding3[0x2] = {};
    // private System.Single[] _samples
    // Size: 0x8
    // Offset: 0x28
    ::ArrayW<float> samples;
    // Field size check
    static_assert(sizeof(::ArrayW<float>) == 0x8);
    // private System.Collections.Generic.List`1<System.Single> _processedSamples
    // Size: 0x8
    // Offset: 0x30
    System::Collections::Generic::List_1<float>* processedSamples;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<float>*) == 0x8);
    public:
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // static field const value: static public System.Int32 kNumberOfSamples
    static constexpr const int kNumberOfSamples = 64;
    // Get static field: static public System.Int32 kNumberOfSamples
    static int _get_kNumberOfSamples();
    // Set static field: static public System.Int32 kNumberOfSamples
    static void _set_kNumberOfSamples(int value);
    // Get instance field reference: private UnityEngine.AudioSource _audioSource
    UnityEngine::AudioSource*& dyn__audioSource();
    // Get instance field reference: private System.Single _instantChangeThreshold
    float& dyn__instantChangeThreshold();
    // Get instance field reference: private System.Boolean _hasData
    bool& dyn__hasData();
    // Get instance field reference: private System.Boolean _hasProcessedData
    bool& dyn__hasProcessedData();
    // Get instance field reference: private System.Single[] _samples
    ::ArrayW<float>& dyn__samples();
    // Get instance field reference: private System.Collections.Generic.List`1<System.Single> _processedSamples
    System::Collections::Generic::List_1<float>*& dyn__processedSamples();
    // public System.Single[] get_Samples()
    // Offset: 0x126D4B0
    ::ArrayW<float> get_Samples();
    // public System.Collections.Generic.List`1<System.Single> get_ProcessedSamples()
    // Offset: 0x126D558
    System::Collections::Generic::List_1<float>* get_ProcessedSamples();
    // protected System.Void Awake()
    // Offset: 0x126D7B8
    void Awake();
    // protected System.Void LateUpdate()
    // Offset: 0x126D834
    void LateUpdate();
    // private System.Void ProcessSamples(System.Single[] sourceSamples, System.Collections.Generic.List`1<System.Single> processedSamples)
    // Offset: 0x126D5AC
    void ProcessSamples(::ArrayW<float> sourceSamples, System::Collections::Generic::List_1<float>* processedSamples);
    // public System.Void .ctor()
    // Offset: 0x126D83C
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BasicSpectrogramData* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::BasicSpectrogramData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BasicSpectrogramData*, creationType>()));
    }
  }; // BasicSpectrogramData
  #pragma pack(pop)
  static check_size<sizeof(BasicSpectrogramData), 48 + sizeof(System::Collections::Generic::List_1<float>*)> __GlobalNamespace_BasicSpectrogramDataSizeCheck;
  static_assert(sizeof(BasicSpectrogramData) == 0x38);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BasicSpectrogramData*, "", "BasicSpectrogramData");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BasicSpectrogramData::get_Samples
// Il2CppName: get_Samples
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<float> (GlobalNamespace::BasicSpectrogramData::*)()>(&GlobalNamespace::BasicSpectrogramData::get_Samples)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BasicSpectrogramData*), "get_Samples", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BasicSpectrogramData::get_ProcessedSamples
// Il2CppName: get_ProcessedSamples
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::List_1<float>* (GlobalNamespace::BasicSpectrogramData::*)()>(&GlobalNamespace::BasicSpectrogramData::get_ProcessedSamples)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BasicSpectrogramData*), "get_ProcessedSamples", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BasicSpectrogramData::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BasicSpectrogramData::*)()>(&GlobalNamespace::BasicSpectrogramData::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BasicSpectrogramData*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BasicSpectrogramData::LateUpdate
// Il2CppName: LateUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BasicSpectrogramData::*)()>(&GlobalNamespace::BasicSpectrogramData::LateUpdate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BasicSpectrogramData*), "LateUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BasicSpectrogramData::ProcessSamples
// Il2CppName: ProcessSamples
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BasicSpectrogramData::*)(::ArrayW<float>, System::Collections::Generic::List_1<float>*)>(&GlobalNamespace::BasicSpectrogramData::ProcessSamples)> {
  static const MethodInfo* get() {
    static auto* sourceSamples = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Single"), 1)->byval_arg;
    static auto* processedSamples = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Single")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BasicSpectrogramData*), "ProcessSamples", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sourceSamples, processedSamples});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BasicSpectrogramData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
