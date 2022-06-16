// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: ColorType
#include "GlobalNamespace/ColorType.hpp"
// Including type: System.Single
#include "System/Single.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: NoteData
  class NoteData;
  // Forward declaring type: BeatmapDataItem
  class BeatmapDataItem;
  // Forward declaring type: SliderData
  class SliderData;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: BeatmapObjectsInTimeRowProcessor
  class BeatmapObjectsInTimeRowProcessor;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::BeatmapObjectsInTimeRowProcessor);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapObjectsInTimeRowProcessor*, "", "BeatmapObjectsInTimeRowProcessor");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x3C
  #pragma pack(push, 1)
  // Autogenerated type: BeatmapObjectsInTimeRowProcessor
  // [TokenAttribute] Offset: FFFFFFFF
  class BeatmapObjectsInTimeRowProcessor : public ::Il2CppObject {
    public:
    // Nested type: ::GlobalNamespace::BeatmapObjectsInTimeRowProcessor::TimeSliceContainer_1<T>
    template<typename T>
    class TimeSliceContainer_1;
    // Nested type: ::GlobalNamespace::BeatmapObjectsInTimeRowProcessor::SliderTailData
    class SliderTailData;
    // Nested type: ::GlobalNamespace::BeatmapObjectsInTimeRowProcessor::$$c__DisplayClass17_0
    class $$c__DisplayClass17_0;
    // Nested type: ::GlobalNamespace::BeatmapObjectsInTimeRowProcessor::$$c
    class $$c;
    public:
    // private readonly BeatmapObjectsInTimeRowProcessor/TimeSliceContainer`1<NoteData> _currentTimeSliceColorNotes
    // Size: 0x8
    // Offset: 0x10
    ::GlobalNamespace::BeatmapObjectsInTimeRowProcessor::TimeSliceContainer_1<::GlobalNamespace::NoteData*>* currentTimeSliceColorNotes;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::BeatmapObjectsInTimeRowProcessor::TimeSliceContainer_1<::GlobalNamespace::NoteData*>*) == 0x8);
    // private readonly BeatmapObjectsInTimeRowProcessor/TimeSliceContainer`1<BeatmapDataItem> _currentTimeSliceAllNotesAndSliders
    // Size: 0x8
    // Offset: 0x18
    ::GlobalNamespace::BeatmapObjectsInTimeRowProcessor::TimeSliceContainer_1<::GlobalNamespace::BeatmapDataItem*>* currentTimeSliceAllNotesAndSliders;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::BeatmapObjectsInTimeRowProcessor::TimeSliceContainer_1<::GlobalNamespace::BeatmapDataItem*>*) == 0x8);
    // private readonly System.Collections.Generic.Dictionary`2<ColorType,BeatmapObjectsInTimeRowProcessor/TimeSliceContainer`1<NoteData>> _currentTimeSliceNotesByColorType
    // Size: 0x8
    // Offset: 0x20
    ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::ColorType, ::GlobalNamespace::BeatmapObjectsInTimeRowProcessor::TimeSliceContainer_1<::GlobalNamespace::NoteData*>*>* currentTimeSliceNotesByColorType;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::ColorType, ::GlobalNamespace::BeatmapObjectsInTimeRowProcessor::TimeSliceContainer_1<::GlobalNamespace::NoteData*>*>*) == 0x8);
    // private readonly System.Collections.Generic.List`1<SliderData> _unprocessedSliderTails
    // Size: 0x8
    // Offset: 0x28
    ::System::Collections::Generic::List_1<::GlobalNamespace::SliderData*>* unprocessedSliderTails;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::GlobalNamespace::SliderData*>*) == 0x8);
    // private readonly System.Collections.Generic.List`1<NoteData>[] _notesInColumnsReusableProcessingListOfLists
    // Size: 0x8
    // Offset: 0x30
    ::ArrayW<::System::Collections::Generic::List_1<::GlobalNamespace::NoteData*>*> notesInColumnsReusableProcessingListOfLists;
    // Field size check
    static_assert(sizeof(::ArrayW<::System::Collections::Generic::List_1<::GlobalNamespace::NoteData*>*>) == 0x8);
    // private readonly System.Int32 _numberOfLines
    // Size: 0x4
    // Offset: 0x38
    int numberOfLines;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // static field const value: static private System.Single kTimeRowEpsilon
    static constexpr const float kTimeRowEpsilon = 0.001;
    // Get static field: static private System.Single kTimeRowEpsilon
    static float _get_kTimeRowEpsilon();
    // Set static field: static private System.Single kTimeRowEpsilon
    static void _set_kTimeRowEpsilon(float value);
    // static field const value: static private System.Single kMaxNotesAlignmentAngle
    static constexpr const float kMaxNotesAlignmentAngle = 40;
    // Get static field: static private System.Single kMaxNotesAlignmentAngle
    static float _get_kMaxNotesAlignmentAngle();
    // Set static field: static private System.Single kMaxNotesAlignmentAngle
    static void _set_kMaxNotesAlignmentAngle(float value);
    // Get instance field reference: private readonly BeatmapObjectsInTimeRowProcessor/TimeSliceContainer`1<NoteData> _currentTimeSliceColorNotes
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::BeatmapObjectsInTimeRowProcessor::TimeSliceContainer_1<::GlobalNamespace::NoteData*>*& dyn__currentTimeSliceColorNotes();
    // Get instance field reference: private readonly BeatmapObjectsInTimeRowProcessor/TimeSliceContainer`1<BeatmapDataItem> _currentTimeSliceAllNotesAndSliders
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::BeatmapObjectsInTimeRowProcessor::TimeSliceContainer_1<::GlobalNamespace::BeatmapDataItem*>*& dyn__currentTimeSliceAllNotesAndSliders();
    // Get instance field reference: private readonly System.Collections.Generic.Dictionary`2<ColorType,BeatmapObjectsInTimeRowProcessor/TimeSliceContainer`1<NoteData>> _currentTimeSliceNotesByColorType
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::ColorType, ::GlobalNamespace::BeatmapObjectsInTimeRowProcessor::TimeSliceContainer_1<::GlobalNamespace::NoteData*>*>*& dyn__currentTimeSliceNotesByColorType();
    // Get instance field reference: private readonly System.Collections.Generic.List`1<SliderData> _unprocessedSliderTails
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::GlobalNamespace::SliderData*>*& dyn__unprocessedSliderTails();
    // Get instance field reference: private readonly System.Collections.Generic.List`1<NoteData>[] _notesInColumnsReusableProcessingListOfLists
    [[deprecated("Use field access instead!")]] ::ArrayW<::System::Collections::Generic::List_1<::GlobalNamespace::NoteData*>*>& dyn__notesInColumnsReusableProcessingListOfLists();
    // Get instance field reference: private readonly System.Int32 _numberOfLines
    [[deprecated("Use field access instead!")]] int& dyn__numberOfLines();
    // public System.Void .ctor(System.Int32 numberOfLines)
    // Offset: 0x2821DB4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BeatmapObjectsInTimeRowProcessor* New_ctor(int numberOfLines) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::BeatmapObjectsInTimeRowProcessor::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BeatmapObjectsInTimeRowProcessor*, creationType>(numberOfLines)));
    }
    // public System.Void ProcessNote(NoteData noteData)
    // Offset: 0x2822258
    void ProcessNote(::GlobalNamespace::NoteData* noteData);
    // public System.Void ProcessSlider(SliderData sliderData)
    // Offset: 0x282232C
    void ProcessSlider(::GlobalNamespace::SliderData* sliderData);
    // public System.Void ProcessAllRemainingData()
    // Offset: 0x2822434
    void ProcessAllRemainingData();
    // private System.Void HandleCurrentTimeSliceColorNotesDidAddItem(BeatmapObjectsInTimeRowProcessor/TimeSliceContainer`1<NoteData> timeSliceContainer, NoteData noteData)
    // Offset: 0x28225A0
    void HandleCurrentTimeSliceColorNotesDidAddItem(::GlobalNamespace::BeatmapObjectsInTimeRowProcessor::TimeSliceContainer_1<::GlobalNamespace::NoteData*>* timeSliceContainer, ::GlobalNamespace::NoteData* noteData);
    // private System.Void HandleCurrentNewTimeSliceAllNotesAndSlidersDidStartNewTimeSlice(BeatmapObjectsInTimeRowProcessor/TimeSliceContainer`1<BeatmapDataItem> allObjectsTimeSlice)
    // Offset: 0x2822610
    void HandleCurrentNewTimeSliceAllNotesAndSlidersDidStartNewTimeSlice(::GlobalNamespace::BeatmapObjectsInTimeRowProcessor::TimeSliceContainer_1<::GlobalNamespace::BeatmapDataItem*>* allObjectsTimeSlice);
    // private System.Void HandleCurrentTimeSliceAllNotesAndSlidersDidFinishTimeSlice(BeatmapObjectsInTimeRowProcessor/TimeSliceContainer`1<BeatmapDataItem> allObjectsTimeSlice, System.Single nextTimeSliceTime)
    // Offset: 0x2822804
    void HandleCurrentTimeSliceAllNotesAndSlidersDidFinishTimeSlice(::GlobalNamespace::BeatmapObjectsInTimeRowProcessor::TimeSliceContainer_1<::GlobalNamespace::BeatmapDataItem*>* allObjectsTimeSlice, float nextTimeSliceTime);
    // private System.Void HandleCurrentTimeSliceColorNotesDidFinishTimeSlice(BeatmapObjectsInTimeRowProcessor/TimeSliceContainer`1<NoteData> currentTimeSlice, System.Single nextTimeSliceTime)
    // Offset: 0x28239F4
    void HandleCurrentTimeSliceColorNotesDidFinishTimeSlice(::GlobalNamespace::BeatmapObjectsInTimeRowProcessor::TimeSliceContainer_1<::GlobalNamespace::NoteData*>* currentTimeSlice, float nextTimeSliceTime);
    // private System.Void HandlePerColorTypeTimeSliceContainerDidFinishTimeSlice(BeatmapObjectsInTimeRowProcessor/TimeSliceContainer`1<NoteData> timeSliceContainer, System.Single nextTimeSliceTime)
    // Offset: 0x2824030
    void HandlePerColorTypeTimeSliceContainerDidFinishTimeSlice(::GlobalNamespace::BeatmapObjectsInTimeRowProcessor::TimeSliceContainer_1<::GlobalNamespace::NoteData*>* timeSliceContainer, float nextTimeSliceTime);
    // static private System.Boolean SliderHeadPositionOverlapsWithNote(SliderData slider, NoteData note)
    // Offset: 0x28237B0
    static bool SliderHeadPositionOverlapsWithNote(::GlobalNamespace::SliderData* slider, ::GlobalNamespace::NoteData* note);
    // static private System.Boolean SliderTailPositionOverlapsWithNote(SliderData slider, NoteData note)
    // Offset: 0x2823990
    static bool SliderTailPositionOverlapsWithNote(::GlobalNamespace::SliderData* slider, ::GlobalNamespace::NoteData* note);
  }; // BeatmapObjectsInTimeRowProcessor
  #pragma pack(pop)
  static check_size<sizeof(BeatmapObjectsInTimeRowProcessor), 56 + sizeof(int)> __GlobalNamespace_BeatmapObjectsInTimeRowProcessorSizeCheck;
  static_assert(sizeof(BeatmapObjectsInTimeRowProcessor) == 0x3C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BeatmapObjectsInTimeRowProcessor::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::BeatmapObjectsInTimeRowProcessor::ProcessNote
// Il2CppName: ProcessNote
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapObjectsInTimeRowProcessor::*)(::GlobalNamespace::NoteData*)>(&GlobalNamespace::BeatmapObjectsInTimeRowProcessor::ProcessNote)> {
  static const MethodInfo* get() {
    static auto* noteData = &::il2cpp_utils::GetClassFromName("", "NoteData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapObjectsInTimeRowProcessor*), "ProcessNote", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{noteData});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapObjectsInTimeRowProcessor::ProcessSlider
// Il2CppName: ProcessSlider
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapObjectsInTimeRowProcessor::*)(::GlobalNamespace::SliderData*)>(&GlobalNamespace::BeatmapObjectsInTimeRowProcessor::ProcessSlider)> {
  static const MethodInfo* get() {
    static auto* sliderData = &::il2cpp_utils::GetClassFromName("", "SliderData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapObjectsInTimeRowProcessor*), "ProcessSlider", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sliderData});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapObjectsInTimeRowProcessor::ProcessAllRemainingData
// Il2CppName: ProcessAllRemainingData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapObjectsInTimeRowProcessor::*)()>(&GlobalNamespace::BeatmapObjectsInTimeRowProcessor::ProcessAllRemainingData)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapObjectsInTimeRowProcessor*), "ProcessAllRemainingData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapObjectsInTimeRowProcessor::HandleCurrentTimeSliceColorNotesDidAddItem
// Il2CppName: HandleCurrentTimeSliceColorNotesDidAddItem
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapObjectsInTimeRowProcessor::*)(::GlobalNamespace::BeatmapObjectsInTimeRowProcessor::TimeSliceContainer_1<::GlobalNamespace::NoteData*>*, ::GlobalNamespace::NoteData*)>(&GlobalNamespace::BeatmapObjectsInTimeRowProcessor::HandleCurrentTimeSliceColorNotesDidAddItem)> {
  static const MethodInfo* get() {
    static auto* timeSliceContainer = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("", "BeatmapObjectsInTimeRowProcessor/TimeSliceContainer`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "NoteData")})->byval_arg;
    static auto* noteData = &::il2cpp_utils::GetClassFromName("", "NoteData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapObjectsInTimeRowProcessor*), "HandleCurrentTimeSliceColorNotesDidAddItem", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{timeSliceContainer, noteData});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapObjectsInTimeRowProcessor::HandleCurrentNewTimeSliceAllNotesAndSlidersDidStartNewTimeSlice
// Il2CppName: HandleCurrentNewTimeSliceAllNotesAndSlidersDidStartNewTimeSlice
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapObjectsInTimeRowProcessor::*)(::GlobalNamespace::BeatmapObjectsInTimeRowProcessor::TimeSliceContainer_1<::GlobalNamespace::BeatmapDataItem*>*)>(&GlobalNamespace::BeatmapObjectsInTimeRowProcessor::HandleCurrentNewTimeSliceAllNotesAndSlidersDidStartNewTimeSlice)> {
  static const MethodInfo* get() {
    static auto* allObjectsTimeSlice = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("", "BeatmapObjectsInTimeRowProcessor/TimeSliceContainer`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "BeatmapDataItem")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapObjectsInTimeRowProcessor*), "HandleCurrentNewTimeSliceAllNotesAndSlidersDidStartNewTimeSlice", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{allObjectsTimeSlice});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapObjectsInTimeRowProcessor::HandleCurrentTimeSliceAllNotesAndSlidersDidFinishTimeSlice
// Il2CppName: HandleCurrentTimeSliceAllNotesAndSlidersDidFinishTimeSlice
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapObjectsInTimeRowProcessor::*)(::GlobalNamespace::BeatmapObjectsInTimeRowProcessor::TimeSliceContainer_1<::GlobalNamespace::BeatmapDataItem*>*, float)>(&GlobalNamespace::BeatmapObjectsInTimeRowProcessor::HandleCurrentTimeSliceAllNotesAndSlidersDidFinishTimeSlice)> {
  static const MethodInfo* get() {
    static auto* allObjectsTimeSlice = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("", "BeatmapObjectsInTimeRowProcessor/TimeSliceContainer`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "BeatmapDataItem")})->byval_arg;
    static auto* nextTimeSliceTime = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapObjectsInTimeRowProcessor*), "HandleCurrentTimeSliceAllNotesAndSlidersDidFinishTimeSlice", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{allObjectsTimeSlice, nextTimeSliceTime});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapObjectsInTimeRowProcessor::HandleCurrentTimeSliceColorNotesDidFinishTimeSlice
// Il2CppName: HandleCurrentTimeSliceColorNotesDidFinishTimeSlice
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapObjectsInTimeRowProcessor::*)(::GlobalNamespace::BeatmapObjectsInTimeRowProcessor::TimeSliceContainer_1<::GlobalNamespace::NoteData*>*, float)>(&GlobalNamespace::BeatmapObjectsInTimeRowProcessor::HandleCurrentTimeSliceColorNotesDidFinishTimeSlice)> {
  static const MethodInfo* get() {
    static auto* currentTimeSlice = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("", "BeatmapObjectsInTimeRowProcessor/TimeSliceContainer`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "NoteData")})->byval_arg;
    static auto* nextTimeSliceTime = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapObjectsInTimeRowProcessor*), "HandleCurrentTimeSliceColorNotesDidFinishTimeSlice", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{currentTimeSlice, nextTimeSliceTime});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapObjectsInTimeRowProcessor::HandlePerColorTypeTimeSliceContainerDidFinishTimeSlice
// Il2CppName: HandlePerColorTypeTimeSliceContainerDidFinishTimeSlice
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapObjectsInTimeRowProcessor::*)(::GlobalNamespace::BeatmapObjectsInTimeRowProcessor::TimeSliceContainer_1<::GlobalNamespace::NoteData*>*, float)>(&GlobalNamespace::BeatmapObjectsInTimeRowProcessor::HandlePerColorTypeTimeSliceContainerDidFinishTimeSlice)> {
  static const MethodInfo* get() {
    static auto* timeSliceContainer = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("", "BeatmapObjectsInTimeRowProcessor/TimeSliceContainer`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "NoteData")})->byval_arg;
    static auto* nextTimeSliceTime = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapObjectsInTimeRowProcessor*), "HandlePerColorTypeTimeSliceContainerDidFinishTimeSlice", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{timeSliceContainer, nextTimeSliceTime});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapObjectsInTimeRowProcessor::SliderHeadPositionOverlapsWithNote
// Il2CppName: SliderHeadPositionOverlapsWithNote
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::GlobalNamespace::SliderData*, ::GlobalNamespace::NoteData*)>(&GlobalNamespace::BeatmapObjectsInTimeRowProcessor::SliderHeadPositionOverlapsWithNote)> {
  static const MethodInfo* get() {
    static auto* slider = &::il2cpp_utils::GetClassFromName("", "SliderData")->byval_arg;
    static auto* note = &::il2cpp_utils::GetClassFromName("", "NoteData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapObjectsInTimeRowProcessor*), "SliderHeadPositionOverlapsWithNote", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{slider, note});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapObjectsInTimeRowProcessor::SliderTailPositionOverlapsWithNote
// Il2CppName: SliderTailPositionOverlapsWithNote
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::GlobalNamespace::SliderData*, ::GlobalNamespace::NoteData*)>(&GlobalNamespace::BeatmapObjectsInTimeRowProcessor::SliderTailPositionOverlapsWithNote)> {
  static const MethodInfo* get() {
    static auto* slider = &::il2cpp_utils::GetClassFromName("", "SliderData")->byval_arg;
    static auto* note = &::il2cpp_utils::GetClassFromName("", "NoteData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapObjectsInTimeRowProcessor*), "SliderTailPositionOverlapsWithNote", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{slider, note});
  }
};
