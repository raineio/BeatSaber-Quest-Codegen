// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: BeatmapData
#include "GlobalNamespace/BeatmapData.hpp"
// Including type: System.Collections.Generic.IEnumerable`1
#include "System/Collections/Generic/IEnumerable_1.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
#include "extern/beatsaber-hook/shared/utils/typedefs-array.hpp"
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
  // Size: 0x48
  #pragma pack(push, 1)
  // Autogenerated type: BeatmapData/<get_beatmapObjectsData>d__32
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class BeatmapData::$get_beatmapObjectsData$d__32 : public ::Il2CppObject/*, public System::Collections::Generic::IEnumerable_1<GlobalNamespace::BeatmapObjectData*>, public System::Collections::Generic::IEnumerator_1<GlobalNamespace::BeatmapObjectData*>*/ {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    private:
    #endif
    // private System.Int32 <>1__state
    // Size: 0x4
    // Offset: 0x10
    int $$1__state;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: $$1__state and: $$2__current
    char __padding0[0x4] = {};
    // private BeatmapObjectData <>2__current
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::BeatmapObjectData* $$2__current;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BeatmapObjectData*) == 0x8);
    // private System.Int32 <>l__initialThreadId
    // Size: 0x4
    // Offset: 0x20
    int $$l__initialThreadId;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: $$l__initialThreadId and: $$4__this
    char __padding2[0x4] = {};
    // public BeatmapData <>4__this
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::BeatmapData* $$4__this;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BeatmapData*) == 0x8);
    // private BeatmapLineData[] <beatmapLinesData>5__2
    // Size: 0x8
    // Offset: 0x30
    ::ArrayW<GlobalNamespace::BeatmapLineData*> $beatmapLinesData$5__2;
    // Field size check
    static_assert(sizeof(::ArrayW<GlobalNamespace::BeatmapLineData*>) == 0x8);
    // private System.Int32[] <idxs>5__3
    // Size: 0x8
    // Offset: 0x38
    ::ArrayW<int> $idxs$5__3;
    // Field size check
    static_assert(sizeof(::ArrayW<int>) == 0x8);
    // private BeatmapObjectData <minBeatmapObjectData>5__4
    // Size: 0x8
    // Offset: 0x40
    GlobalNamespace::BeatmapObjectData* $minBeatmapObjectData$5__4;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BeatmapObjectData*) == 0x8);
    public:
    // Creating interface conversion operator: operator System::Collections::Generic::IEnumerable_1<GlobalNamespace::BeatmapObjectData*>
    operator System::Collections::Generic::IEnumerable_1<GlobalNamespace::BeatmapObjectData*>() noexcept {
      return *reinterpret_cast<System::Collections::Generic::IEnumerable_1<GlobalNamespace::BeatmapObjectData*>*>(this);
    }
    // Creating interface conversion operator: operator System::Collections::Generic::IEnumerator_1<GlobalNamespace::BeatmapObjectData*>
    operator System::Collections::Generic::IEnumerator_1<GlobalNamespace::BeatmapObjectData*>() noexcept {
      return *reinterpret_cast<System::Collections::Generic::IEnumerator_1<GlobalNamespace::BeatmapObjectData*>*>(this);
    }
    // Get instance field reference: private System.Int32 <>1__state
    int& dyn_$$1__state();
    // Get instance field reference: private BeatmapObjectData <>2__current
    GlobalNamespace::BeatmapObjectData*& dyn_$$2__current();
    // Get instance field reference: private System.Int32 <>l__initialThreadId
    int& dyn_$$l__initialThreadId();
    // Get instance field reference: public BeatmapData <>4__this
    GlobalNamespace::BeatmapData*& dyn_$$4__this();
    // Get instance field reference: private BeatmapLineData[] <beatmapLinesData>5__2
    ::ArrayW<GlobalNamespace::BeatmapLineData*>& dyn_$beatmapLinesData$5__2();
    // Get instance field reference: private System.Int32[] <idxs>5__3
    ::ArrayW<int>& dyn_$idxs$5__3();
    // Get instance field reference: private BeatmapObjectData <minBeatmapObjectData>5__4
    GlobalNamespace::BeatmapObjectData*& dyn_$minBeatmapObjectData$5__4();
    // private BeatmapObjectData System.Collections.Generic.IEnumerator<BeatmapObjectData>.get_Current()
    // Offset: 0x12760A0
    GlobalNamespace::BeatmapObjectData* System_Collections_Generic_IEnumerator$BeatmapObjectData$_get_Current();
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0x1276108
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
    // public System.Void .ctor(System.Int32 <>1__state)
    // Offset: 0x1274310
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BeatmapData::$get_beatmapObjectsData$d__32* New_ctor(int $$1__state) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::BeatmapData::$get_beatmapObjectsData$d__32::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BeatmapData::$get_beatmapObjectsData$d__32*, creationType>($$1__state)));
    }
    // private System.Void System.IDisposable.Dispose()
    // Offset: 0x1275DD0
    void System_IDisposable_Dispose();
    // private System.Boolean MoveNext()
    // Offset: 0x1275DD4
    bool MoveNext();
    // private System.Void System.Collections.IEnumerator.Reset()
    // Offset: 0x12760A8
    void System_Collections_IEnumerator_Reset();
    // private System.Collections.Generic.IEnumerator`1<BeatmapObjectData> System.Collections.Generic.IEnumerable<BeatmapObjectData>.GetEnumerator()
    // Offset: 0x1276110
    System::Collections::Generic::IEnumerator_1<GlobalNamespace::BeatmapObjectData*>* System_Collections_Generic_IEnumerable$BeatmapObjectData$_GetEnumerator();
    // private System.Collections.IEnumerator System.Collections.IEnumerable.GetEnumerator()
    // Offset: 0x12761BC
    System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();
  }; // BeatmapData/<get_beatmapObjectsData>d__32
  #pragma pack(pop)
  static check_size<sizeof(BeatmapData::$get_beatmapObjectsData$d__32), 64 + sizeof(GlobalNamespace::BeatmapObjectData*)> __GlobalNamespace_BeatmapData_$get_beatmapObjectsData$d__32SizeCheck;
  static_assert(sizeof(BeatmapData::$get_beatmapObjectsData$d__32) == 0x48);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatmapData::$get_beatmapObjectsData$d__32*, "", "BeatmapData/<get_beatmapObjectsData>d__32");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BeatmapData::$get_beatmapObjectsData$d__32::System_Collections_Generic_IEnumerator$BeatmapObjectData$_get_Current
// Il2CppName: System.Collections.Generic.IEnumerator<BeatmapObjectData>.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::BeatmapObjectData* (GlobalNamespace::BeatmapData::$get_beatmapObjectsData$d__32::*)()>(&GlobalNamespace::BeatmapData::$get_beatmapObjectsData$d__32::System_Collections_Generic_IEnumerator$BeatmapObjectData$_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapData::$get_beatmapObjectsData$d__32*), "System.Collections.Generic.IEnumerator<BeatmapObjectData>.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapData::$get_beatmapObjectsData$d__32::System_Collections_IEnumerator_get_Current
// Il2CppName: System.Collections.IEnumerator.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (GlobalNamespace::BeatmapData::$get_beatmapObjectsData$d__32::*)()>(&GlobalNamespace::BeatmapData::$get_beatmapObjectsData$d__32::System_Collections_IEnumerator_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapData::$get_beatmapObjectsData$d__32*), "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapData::$get_beatmapObjectsData$d__32::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::BeatmapData::$get_beatmapObjectsData$d__32::System_IDisposable_Dispose
// Il2CppName: System.IDisposable.Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapData::$get_beatmapObjectsData$d__32::*)()>(&GlobalNamespace::BeatmapData::$get_beatmapObjectsData$d__32::System_IDisposable_Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapData::$get_beatmapObjectsData$d__32*), "System.IDisposable.Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapData::$get_beatmapObjectsData$d__32::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::BeatmapData::$get_beatmapObjectsData$d__32::*)()>(&GlobalNamespace::BeatmapData::$get_beatmapObjectsData$d__32::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapData::$get_beatmapObjectsData$d__32*), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapData::$get_beatmapObjectsData$d__32::System_Collections_IEnumerator_Reset
// Il2CppName: System.Collections.IEnumerator.Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapData::$get_beatmapObjectsData$d__32::*)()>(&GlobalNamespace::BeatmapData::$get_beatmapObjectsData$d__32::System_Collections_IEnumerator_Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapData::$get_beatmapObjectsData$d__32*), "System.Collections.IEnumerator.Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapData::$get_beatmapObjectsData$d__32::System_Collections_Generic_IEnumerable$BeatmapObjectData$_GetEnumerator
// Il2CppName: System.Collections.Generic.IEnumerable<BeatmapObjectData>.GetEnumerator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::IEnumerator_1<GlobalNamespace::BeatmapObjectData*>* (GlobalNamespace::BeatmapData::$get_beatmapObjectsData$d__32::*)()>(&GlobalNamespace::BeatmapData::$get_beatmapObjectsData$d__32::System_Collections_Generic_IEnumerable$BeatmapObjectData$_GetEnumerator)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapData::$get_beatmapObjectsData$d__32*), "System.Collections.Generic.IEnumerable<BeatmapObjectData>.GetEnumerator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapData::$get_beatmapObjectsData$d__32::System_Collections_IEnumerable_GetEnumerator
// Il2CppName: System.Collections.IEnumerable.GetEnumerator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::IEnumerator* (GlobalNamespace::BeatmapData::$get_beatmapObjectsData$d__32::*)()>(&GlobalNamespace::BeatmapData::$get_beatmapObjectsData$d__32::System_Collections_IEnumerable_GetEnumerator)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapData::$get_beatmapObjectsData$d__32*), "System.Collections.IEnumerable.GetEnumerator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
