// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: BeatmapObjectsInTimeRowProcessor
#include "GlobalNamespace/BeatmapObjectsInTimeRowProcessor.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: BeatmapDataItem
  class BeatmapDataItem;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::BeatmapObjectsInTimeRowProcessor::$$c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapObjectsInTimeRowProcessor::$$c*, "", "BeatmapObjectsInTimeRowProcessor/<>c");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: BeatmapObjectsInTimeRowProcessor/<>c
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class BeatmapObjectsInTimeRowProcessor::$$c : public ::Il2CppObject {
    public:
    // Get static field: static public readonly BeatmapObjectsInTimeRowProcessor/<>c <>9
    static ::GlobalNamespace::BeatmapObjectsInTimeRowProcessor::$$c* _get_$$9();
    // Set static field: static public readonly BeatmapObjectsInTimeRowProcessor/<>c <>9
    static void _set_$$9(::GlobalNamespace::BeatmapObjectsInTimeRowProcessor::$$c* value);
    // Get static field: static public System.Func`2<BeatmapDataItem,System.Boolean> <>9__17_0
    static ::System::Func_2<::GlobalNamespace::BeatmapDataItem*, bool>* _get_$$9__17_0();
    // Set static field: static public System.Func`2<BeatmapDataItem,System.Boolean> <>9__17_0
    static void _set_$$9__17_0(::System::Func_2<::GlobalNamespace::BeatmapDataItem*, bool>* value);
    // static private System.Void .cctor()
    // Offset: 0x286AEC8
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0x286AF2C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BeatmapObjectsInTimeRowProcessor::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::BeatmapObjectsInTimeRowProcessor::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BeatmapObjectsInTimeRowProcessor::$$c*, creationType>()));
    }
    // System.Boolean <HandleCurrentTimeSliceColorNotesDidFinishTimeSlice>b__17_0(BeatmapDataItem item)
    // Offset: 0x286AF34
    bool $HandleCurrentTimeSliceColorNotesDidFinishTimeSlice$b__17_0(::GlobalNamespace::BeatmapDataItem* item);
  }; // BeatmapObjectsInTimeRowProcessor/<>c
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BeatmapObjectsInTimeRowProcessor::$$c::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::BeatmapObjectsInTimeRowProcessor::$$c::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapObjectsInTimeRowProcessor::$$c*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapObjectsInTimeRowProcessor::$$c::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::BeatmapObjectsInTimeRowProcessor::$$c::$HandleCurrentTimeSliceColorNotesDidFinishTimeSlice$b__17_0
// Il2CppName: <HandleCurrentTimeSliceColorNotesDidFinishTimeSlice>b__17_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::BeatmapObjectsInTimeRowProcessor::$$c::*)(::GlobalNamespace::BeatmapDataItem*)>(&GlobalNamespace::BeatmapObjectsInTimeRowProcessor::$$c::$HandleCurrentTimeSliceColorNotesDidFinishTimeSlice$b__17_0)> {
  static const MethodInfo* get() {
    static auto* item = &::il2cpp_utils::GetClassFromName("", "BeatmapDataItem")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapObjectsInTimeRowProcessor::$$c*), "<HandleCurrentTimeSliceColorNotesDidFinishTimeSlice>b__17_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{item});
  }
};
