// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: ISaberSwingRatingCounterDidChangeReceiver
#include "GlobalNamespace/ISaberSwingRatingCounterDidChangeReceiver.hpp"
// Including type: ISaberSwingRatingCounterDidFinishReceiver
#include "GlobalNamespace/ISaberSwingRatingCounterDidFinishReceiver.hpp"
// Including type: IReadonlyCutScoreBuffer
#include "GlobalNamespace/IReadonlyCutScoreBuffer.hpp"
// Including type: NoteCutInfo
#include "GlobalNamespace/NoteCutInfo.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: SaberSwingRatingCounter
  class SaberSwingRatingCounter;
  // Forward declaring type: LazyCopyHashSet`1<T>
  template<typename T>
  class LazyCopyHashSet_1;
  // Forward declaring type: ICutScoreBufferDidFinishReceiver
  class ICutScoreBufferDidFinishReceiver;
  // Forward declaring type: ICutScoreBufferDidChangeReceiver
  class ICutScoreBufferDidChangeReceiver;
  // Forward declaring type: ISaberSwingRatingCounter
  class ISaberSwingRatingCounter;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: CutScoreBuffer
  class CutScoreBuffer;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::CutScoreBuffer);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::CutScoreBuffer*, "", "CutScoreBuffer");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0xD0
  #pragma pack(push, 1)
  // Autogenerated type: CutScoreBuffer
  // [TokenAttribute] Offset: FFFFFFFF
  class CutScoreBuffer : public ::Il2CppObject/*, public ::GlobalNamespace::ISaberSwingRatingCounterDidChangeReceiver, public ::GlobalNamespace::ISaberSwingRatingCounterDidFinishReceiver, public ::GlobalNamespace::IReadonlyCutScoreBuffer*/ {
    public:
    public:
    // private readonly SaberSwingRatingCounter _saberSwingRatingCounter
    // Size: 0x8
    // Offset: 0x10
    ::GlobalNamespace::SaberSwingRatingCounter* saberSwingRatingCounter;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::SaberSwingRatingCounter*) == 0x8);
    // private NoteCutInfo _noteCutInfo
    // Size: 0x90
    // Offset: 0x18
    ::GlobalNamespace::NoteCutInfo noteCutInfo;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::NoteCutInfo) == 0x90);
    // private ScoreModel/NoteScoreDefinition _noteScoreDefinition
    // Size: 0x8
    // Offset: 0xA8
    ::GlobalNamespace::ScoreModel::NoteScoreDefinition* noteScoreDefinition;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::ScoreModel::NoteScoreDefinition*) == 0x8);
    // private System.Int32 _afterCutScore
    // Size: 0x4
    // Offset: 0xB0
    int afterCutScore;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 _beforeCutScore
    // Size: 0x4
    // Offset: 0xB4
    int beforeCutScore;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 _centerDistanceCutScore
    // Size: 0x4
    // Offset: 0xB8
    int centerDistanceCutScore;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Boolean _initialized
    // Size: 0x1
    // Offset: 0xBC
    bool initialized;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _isFinished
    // Size: 0x1
    // Offset: 0xBD
    bool isFinished;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: isFinished and: didFinishEvent
    char __padding7[0x2] = {};
    // private readonly LazyCopyHashSet`1<ICutScoreBufferDidFinishReceiver> _didFinishEvent
    // Size: 0x8
    // Offset: 0xC0
    ::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::ICutScoreBufferDidFinishReceiver*>* didFinishEvent;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::ICutScoreBufferDidFinishReceiver*>*) == 0x8);
    // private readonly LazyCopyHashSet`1<ICutScoreBufferDidChangeReceiver> _didChangeEvent
    // Size: 0x8
    // Offset: 0xC8
    ::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::ICutScoreBufferDidChangeReceiver*>* didChangeEvent;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::ICutScoreBufferDidChangeReceiver*>*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::GlobalNamespace::ISaberSwingRatingCounterDidChangeReceiver
    operator ::GlobalNamespace::ISaberSwingRatingCounterDidChangeReceiver() noexcept {
      return *reinterpret_cast<::GlobalNamespace::ISaberSwingRatingCounterDidChangeReceiver*>(this);
    }
    // Creating interface conversion operator: i_ISaberSwingRatingCounterDidChangeReceiver
    inline ::GlobalNamespace::ISaberSwingRatingCounterDidChangeReceiver* i_ISaberSwingRatingCounterDidChangeReceiver() noexcept {
      return reinterpret_cast<::GlobalNamespace::ISaberSwingRatingCounterDidChangeReceiver*>(this);
    }
    // Creating interface conversion operator: operator ::GlobalNamespace::ISaberSwingRatingCounterDidFinishReceiver
    operator ::GlobalNamespace::ISaberSwingRatingCounterDidFinishReceiver() noexcept {
      return *reinterpret_cast<::GlobalNamespace::ISaberSwingRatingCounterDidFinishReceiver*>(this);
    }
    // Creating interface conversion operator: i_ISaberSwingRatingCounterDidFinishReceiver
    inline ::GlobalNamespace::ISaberSwingRatingCounterDidFinishReceiver* i_ISaberSwingRatingCounterDidFinishReceiver() noexcept {
      return reinterpret_cast<::GlobalNamespace::ISaberSwingRatingCounterDidFinishReceiver*>(this);
    }
    // Creating interface conversion operator: operator ::GlobalNamespace::IReadonlyCutScoreBuffer
    operator ::GlobalNamespace::IReadonlyCutScoreBuffer() noexcept {
      return *reinterpret_cast<::GlobalNamespace::IReadonlyCutScoreBuffer*>(this);
    }
    // Creating interface conversion operator: i_IReadonlyCutScoreBuffer
    inline ::GlobalNamespace::IReadonlyCutScoreBuffer* i_IReadonlyCutScoreBuffer() noexcept {
      return reinterpret_cast<::GlobalNamespace::IReadonlyCutScoreBuffer*>(this);
    }
    // Get instance field reference: private readonly SaberSwingRatingCounter _saberSwingRatingCounter
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::SaberSwingRatingCounter*& dyn__saberSwingRatingCounter();
    // Get instance field reference: private NoteCutInfo _noteCutInfo
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::NoteCutInfo& dyn__noteCutInfo();
    // Get instance field reference: private ScoreModel/NoteScoreDefinition _noteScoreDefinition
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::ScoreModel::NoteScoreDefinition*& dyn__noteScoreDefinition();
    // Get instance field reference: private System.Int32 _afterCutScore
    [[deprecated("Use field access instead!")]] int& dyn__afterCutScore();
    // Get instance field reference: private System.Int32 _beforeCutScore
    [[deprecated("Use field access instead!")]] int& dyn__beforeCutScore();
    // Get instance field reference: private System.Int32 _centerDistanceCutScore
    [[deprecated("Use field access instead!")]] int& dyn__centerDistanceCutScore();
    // Get instance field reference: private System.Boolean _initialized
    [[deprecated("Use field access instead!")]] bool& dyn__initialized();
    // Get instance field reference: private System.Boolean _isFinished
    [[deprecated("Use field access instead!")]] bool& dyn__isFinished();
    // Get instance field reference: private readonly LazyCopyHashSet`1<ICutScoreBufferDidFinishReceiver> _didFinishEvent
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::ICutScoreBufferDidFinishReceiver*>*& dyn__didFinishEvent();
    // Get instance field reference: private readonly LazyCopyHashSet`1<ICutScoreBufferDidChangeReceiver> _didChangeEvent
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::ICutScoreBufferDidChangeReceiver*>*& dyn__didChangeEvent();
    // public System.Int32 get_executionOrder()
    // Offset: 0x14438A4
    int get_executionOrder();
    // public System.Int32 get_maxPossibleCutScore()
    // Offset: 0x14438C0
    int get_maxPossibleCutScore();
    // public System.Boolean get_isFinished()
    // Offset: 0x14438DC
    bool get_isFinished();
    // public System.Int32 get_cutScore()
    // Offset: 0x14438E4
    int get_cutScore();
    // public System.Int32 get_beforeCutScore()
    // Offset: 0x1443914
    int get_beforeCutScore();
    // public System.Int32 get_centerDistanceCutScore()
    // Offset: 0x144391C
    int get_centerDistanceCutScore();
    // public System.Int32 get_afterCutScore()
    // Offset: 0x1443924
    int get_afterCutScore();
    // public ScoreModel/NoteScoreDefinition get_noteScoreDefinition()
    // Offset: 0x144392C
    ::GlobalNamespace::ScoreModel::NoteScoreDefinition* get_noteScoreDefinition();
    // public NoteCutInfo get_noteCutInfo()
    // Offset: 0x1443934
    ::GlobalNamespace::NoteCutInfo get_noteCutInfo();
    // public System.Single get_beforeCutSwingRating()
    // Offset: 0x1443944
    float get_beforeCutSwingRating();
    // public System.Single get_afterCutSwingRating()
    // Offset: 0x1443960
    float get_afterCutSwingRating();
    // public System.Void .ctor()
    // Offset: 0x14441C4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CutScoreBuffer* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::CutScoreBuffer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CutScoreBuffer*, creationType>()));
    }
    // public System.Void RegisterDidChangeReceiver(ICutScoreBufferDidChangeReceiver receiver)
    // Offset: 0x144397C
    void RegisterDidChangeReceiver(::GlobalNamespace::ICutScoreBufferDidChangeReceiver* receiver);
    // public System.Void RegisterDidFinishReceiver(ICutScoreBufferDidFinishReceiver receiver)
    // Offset: 0x14439E4
    void RegisterDidFinishReceiver(::GlobalNamespace::ICutScoreBufferDidFinishReceiver* receiver);
    // public System.Void UnregisterDidChangeReceiver(ICutScoreBufferDidChangeReceiver receiver)
    // Offset: 0x1443A4C
    void UnregisterDidChangeReceiver(::GlobalNamespace::ICutScoreBufferDidChangeReceiver* receiver);
    // public System.Void UnregisterDidFinishReceiver(ICutScoreBufferDidFinishReceiver receiver)
    // Offset: 0x1443AB4
    void UnregisterDidFinishReceiver(::GlobalNamespace::ICutScoreBufferDidFinishReceiver* receiver);
    // public System.Boolean Init(in NoteCutInfo noteCutInfo)
    // Offset: 0x1443B1C
    bool Init(ByRef<::GlobalNamespace::NoteCutInfo> noteCutInfo);
    // private System.Void RefreshScores()
    // Offset: 0x1443CFC
    void RefreshScores();
    // public System.Void HandleSaberSwingRatingCounterDidChange(ISaberSwingRatingCounter swingRatingCounter, System.Single rating)
    // Offset: 0x1443DDC
    void HandleSaberSwingRatingCounterDidChange(::GlobalNamespace::ISaberSwingRatingCounter* swingRatingCounter, float rating);
    // public System.Void HandleSaberSwingRatingCounterDidFinish(ISaberSwingRatingCounter swingRatingCounter)
    // Offset: 0x1443F5C
    void HandleSaberSwingRatingCounterDidFinish(::GlobalNamespace::ISaberSwingRatingCounter* swingRatingCounter);
  }; // CutScoreBuffer
  #pragma pack(pop)
  static check_size<sizeof(CutScoreBuffer), 200 + sizeof(::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::ICutScoreBufferDidChangeReceiver*>*)> __GlobalNamespace_CutScoreBufferSizeCheck;
  static_assert(sizeof(CutScoreBuffer) == 0xD0);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::CutScoreBuffer::get_executionOrder
// Il2CppName: get_executionOrder
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::CutScoreBuffer::*)()>(&GlobalNamespace::CutScoreBuffer::get_executionOrder)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CutScoreBuffer*), "get_executionOrder", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CutScoreBuffer::get_maxPossibleCutScore
// Il2CppName: get_maxPossibleCutScore
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::CutScoreBuffer::*)()>(&GlobalNamespace::CutScoreBuffer::get_maxPossibleCutScore)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CutScoreBuffer*), "get_maxPossibleCutScore", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CutScoreBuffer::get_isFinished
// Il2CppName: get_isFinished
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::CutScoreBuffer::*)()>(&GlobalNamespace::CutScoreBuffer::get_isFinished)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CutScoreBuffer*), "get_isFinished", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CutScoreBuffer::get_cutScore
// Il2CppName: get_cutScore
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::CutScoreBuffer::*)()>(&GlobalNamespace::CutScoreBuffer::get_cutScore)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CutScoreBuffer*), "get_cutScore", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CutScoreBuffer::get_beforeCutScore
// Il2CppName: get_beforeCutScore
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::CutScoreBuffer::*)()>(&GlobalNamespace::CutScoreBuffer::get_beforeCutScore)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CutScoreBuffer*), "get_beforeCutScore", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CutScoreBuffer::get_centerDistanceCutScore
// Il2CppName: get_centerDistanceCutScore
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::CutScoreBuffer::*)()>(&GlobalNamespace::CutScoreBuffer::get_centerDistanceCutScore)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CutScoreBuffer*), "get_centerDistanceCutScore", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CutScoreBuffer::get_afterCutScore
// Il2CppName: get_afterCutScore
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::CutScoreBuffer::*)()>(&GlobalNamespace::CutScoreBuffer::get_afterCutScore)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CutScoreBuffer*), "get_afterCutScore", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CutScoreBuffer::get_noteScoreDefinition
// Il2CppName: get_noteScoreDefinition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::ScoreModel::NoteScoreDefinition* (GlobalNamespace::CutScoreBuffer::*)()>(&GlobalNamespace::CutScoreBuffer::get_noteScoreDefinition)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CutScoreBuffer*), "get_noteScoreDefinition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CutScoreBuffer::get_noteCutInfo
// Il2CppName: get_noteCutInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::NoteCutInfo (GlobalNamespace::CutScoreBuffer::*)()>(&GlobalNamespace::CutScoreBuffer::get_noteCutInfo)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CutScoreBuffer*), "get_noteCutInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CutScoreBuffer::get_beforeCutSwingRating
// Il2CppName: get_beforeCutSwingRating
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::CutScoreBuffer::*)()>(&GlobalNamespace::CutScoreBuffer::get_beforeCutSwingRating)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CutScoreBuffer*), "get_beforeCutSwingRating", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CutScoreBuffer::get_afterCutSwingRating
// Il2CppName: get_afterCutSwingRating
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::CutScoreBuffer::*)()>(&GlobalNamespace::CutScoreBuffer::get_afterCutSwingRating)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CutScoreBuffer*), "get_afterCutSwingRating", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CutScoreBuffer::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::CutScoreBuffer::RegisterDidChangeReceiver
// Il2CppName: RegisterDidChangeReceiver
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::CutScoreBuffer::*)(::GlobalNamespace::ICutScoreBufferDidChangeReceiver*)>(&GlobalNamespace::CutScoreBuffer::RegisterDidChangeReceiver)> {
  static const MethodInfo* get() {
    static auto* receiver = &::il2cpp_utils::GetClassFromName("", "ICutScoreBufferDidChangeReceiver")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CutScoreBuffer*), "RegisterDidChangeReceiver", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{receiver});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CutScoreBuffer::RegisterDidFinishReceiver
// Il2CppName: RegisterDidFinishReceiver
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::CutScoreBuffer::*)(::GlobalNamespace::ICutScoreBufferDidFinishReceiver*)>(&GlobalNamespace::CutScoreBuffer::RegisterDidFinishReceiver)> {
  static const MethodInfo* get() {
    static auto* receiver = &::il2cpp_utils::GetClassFromName("", "ICutScoreBufferDidFinishReceiver")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CutScoreBuffer*), "RegisterDidFinishReceiver", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{receiver});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CutScoreBuffer::UnregisterDidChangeReceiver
// Il2CppName: UnregisterDidChangeReceiver
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::CutScoreBuffer::*)(::GlobalNamespace::ICutScoreBufferDidChangeReceiver*)>(&GlobalNamespace::CutScoreBuffer::UnregisterDidChangeReceiver)> {
  static const MethodInfo* get() {
    static auto* receiver = &::il2cpp_utils::GetClassFromName("", "ICutScoreBufferDidChangeReceiver")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CutScoreBuffer*), "UnregisterDidChangeReceiver", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{receiver});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CutScoreBuffer::UnregisterDidFinishReceiver
// Il2CppName: UnregisterDidFinishReceiver
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::CutScoreBuffer::*)(::GlobalNamespace::ICutScoreBufferDidFinishReceiver*)>(&GlobalNamespace::CutScoreBuffer::UnregisterDidFinishReceiver)> {
  static const MethodInfo* get() {
    static auto* receiver = &::il2cpp_utils::GetClassFromName("", "ICutScoreBufferDidFinishReceiver")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CutScoreBuffer*), "UnregisterDidFinishReceiver", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{receiver});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CutScoreBuffer::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::CutScoreBuffer::*)(ByRef<::GlobalNamespace::NoteCutInfo>)>(&GlobalNamespace::CutScoreBuffer::Init)> {
  static const MethodInfo* get() {
    static auto* noteCutInfo = &::il2cpp_utils::GetClassFromName("", "NoteCutInfo")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CutScoreBuffer*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{noteCutInfo});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CutScoreBuffer::RefreshScores
// Il2CppName: RefreshScores
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::CutScoreBuffer::*)()>(&GlobalNamespace::CutScoreBuffer::RefreshScores)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CutScoreBuffer*), "RefreshScores", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CutScoreBuffer::HandleSaberSwingRatingCounterDidChange
// Il2CppName: HandleSaberSwingRatingCounterDidChange
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::CutScoreBuffer::*)(::GlobalNamespace::ISaberSwingRatingCounter*, float)>(&GlobalNamespace::CutScoreBuffer::HandleSaberSwingRatingCounterDidChange)> {
  static const MethodInfo* get() {
    static auto* swingRatingCounter = &::il2cpp_utils::GetClassFromName("", "ISaberSwingRatingCounter")->byval_arg;
    static auto* rating = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CutScoreBuffer*), "HandleSaberSwingRatingCounterDidChange", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{swingRatingCounter, rating});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CutScoreBuffer::HandleSaberSwingRatingCounterDidFinish
// Il2CppName: HandleSaberSwingRatingCounterDidFinish
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::CutScoreBuffer::*)(::GlobalNamespace::ISaberSwingRatingCounter*)>(&GlobalNamespace::CutScoreBuffer::HandleSaberSwingRatingCounterDidFinish)> {
  static const MethodInfo* get() {
    static auto* swingRatingCounter = &::il2cpp_utils::GetClassFromName("", "ISaberSwingRatingCounter")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CutScoreBuffer*), "HandleSaberSwingRatingCounterDidFinish", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{swingRatingCounter});
  }
};
