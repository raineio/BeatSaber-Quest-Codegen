// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: BeatmapData
#include "GlobalNamespace/BeatmapData.hpp"
// Including type: System.Collections.Generic.IEnumerable`1
#include "System/Collections/Generic/IEnumerable_1.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: BeatmapObjectData
  class BeatmapObjectData;
  // Forward declaring type: BeatmapLineData
  class BeatmapLineData;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Skipping declaration: IEnumerator because it is already included!
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: BeatmapData/<get_beatmapObjectsData>d__28
  class BeatmapData::$get_beatmapObjectsData$d__28 : public ::Il2CppObject, public System::Collections::Generic::IEnumerable_1<GlobalNamespace::BeatmapObjectData*>, public System::Collections::Generic::IEnumerator_1<GlobalNamespace::BeatmapObjectData*> {
    public:
    // private System.Int32 <>1__state
    // Offset: 0x10
    int $$1__state;
    // private BeatmapObjectData <>2__current
    // Offset: 0x18
    GlobalNamespace::BeatmapObjectData* $$2__current;
    // private System.Int32 <>l__initialThreadId
    // Offset: 0x20
    int $$l__initialThreadId;
    // public BeatmapData <>4__this
    // Offset: 0x28
    GlobalNamespace::BeatmapData* $$4__this;
    // private BeatmapLineData[] <beatmapLinesData>5__2
    // Offset: 0x30
    ::Array<GlobalNamespace::BeatmapLineData*>* $beatmapLinesData$5__2;
    // private System.Int32[] <idxs>5__3
    // Offset: 0x38
    ::Array<int>* $idxs$5__3;
    // private BeatmapObjectData <minBeatmapObjectData>5__4
    // Offset: 0x40
    GlobalNamespace::BeatmapObjectData* $minBeatmapObjectData$5__4;
    // public System.Void .ctor(System.Int32 <>1__state)
    // Offset: 0x20C65EC
    static BeatmapData::$get_beatmapObjectsData$d__28* New_ctor(int $$1__state);
    // private System.Void System.IDisposable.Dispose()
    // Offset: 0x20C70C4
    // Implemented from: System.IDisposable
    // Base method: System.Void IDisposable::Dispose()
    void System_IDisposable_Dispose();
    // private System.Boolean MoveNext()
    // Offset: 0x20C70C8
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Boolean IEnumerator::MoveNext()
    bool MoveNext();
    // Creating proxy method: System_Collections_IEnumerator_MoveNext
    // Maps to method: MoveNext
    bool System_Collections_IEnumerator_MoveNext();
    // private BeatmapObjectData System.Collections.Generic.IEnumerator<BeatmapObjectData>.get_Current()
    // Offset: 0x20C73DC
    // Implemented from: System.Collections.Generic.IEnumerator`1
    // Base method: T IEnumerator_1::get_Current()
    GlobalNamespace::BeatmapObjectData* System_Collections_Generic_IEnumerator_1_get_Current();
    // private System.Void System.Collections.IEnumerator.Reset()
    // Offset: 0x20C73E4
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Void IEnumerator::Reset()
    void System_Collections_IEnumerator_Reset();
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0x20C7444
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Object IEnumerator::get_Current()
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
    // private System.Collections.Generic.IEnumerator`1<BeatmapObjectData> System.Collections.Generic.IEnumerable<BeatmapObjectData>.GetEnumerator()
    // Offset: 0x20C744C
    // Implemented from: System.Collections.Generic.IEnumerable`1
    // Base method: System.Collections.Generic.IEnumerator`1<T> IEnumerable_1::GetEnumerator()
    System::Collections::Generic::IEnumerator_1<GlobalNamespace::BeatmapObjectData*>* System_Collections_Generic_IEnumerable_1_GetEnumerator();
    // private System.Collections.IEnumerator System.Collections.IEnumerable.GetEnumerator()
    // Offset: 0x20C7500
    // Implemented from: System.Collections.IEnumerable
    // Base method: System.Collections.IEnumerator IEnumerable::GetEnumerator()
    System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();
  }; // BeatmapData/<get_beatmapObjectsData>d__28
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatmapData::$get_beatmapObjectsData$d__28*, "", "BeatmapData/<get_beatmapObjectsData>d__28");
#pragma pack(pop)
