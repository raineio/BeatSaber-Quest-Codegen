// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: LiteNetLib.Utils.INetImmutableSerializable`1
#include "LiteNetLib/Utils/INetImmutableSerializable_1.hpp"
// Including type: System.IComparable
#include "System/IComparable.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: LevelCompletionResults
  class LevelCompletionResults;
  // Skipping declaration: MultiplayerLevelEndState because it is already included!
}
// Forward declaring namespace: LiteNetLib::Utils
namespace LiteNetLib::Utils {
  // Forward declaring type: NetDataWriter
  class NetDataWriter;
  // Forward declaring type: NetDataReader
  class NetDataReader;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: MultiplayerLevelCompletionResults
  class MultiplayerLevelCompletionResults;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(GlobalNamespace::MultiplayerLevelCompletionResults);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerLevelCompletionResults*, "", "MultiplayerLevelCompletionResults");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: MultiplayerLevelCompletionResults
  // [TokenAttribute] Offset: FFFFFFFF
  class MultiplayerLevelCompletionResults : public ::Il2CppObject/*, public LiteNetLib::Utils::INetImmutableSerializable_1<GlobalNamespace::MultiplayerLevelCompletionResults*>, public System::IComparable*/ {
    public:
    // Nested type: GlobalNamespace::MultiplayerLevelCompletionResults::MultiplayerLevelEndState
    struct MultiplayerLevelEndState;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: MultiplayerLevelCompletionResults/MultiplayerLevelEndState
    // [TokenAttribute] Offset: FFFFFFFF
    struct MultiplayerLevelEndState/*, public System::Enum*/ {
      public:
      #ifdef USE_CODEGEN_FIELDS
      public:
      #else
      #ifdef CODEGEN_FIELD_ACCESSIBILITY
      CODEGEN_FIELD_ACCESSIBILITY:
      #else
      protected:
      #endif
      #endif
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      public:
      // Creating value type constructor for type: MultiplayerLevelEndState
      constexpr MultiplayerLevelEndState(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator System::Enum
      operator System::Enum() noexcept {
        return *reinterpret_cast<System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public MultiplayerLevelCompletionResults/MultiplayerLevelEndState Cleared
      static constexpr const int Cleared = 0;
      // Get static field: static public MultiplayerLevelCompletionResults/MultiplayerLevelEndState Cleared
      static GlobalNamespace::MultiplayerLevelCompletionResults::MultiplayerLevelEndState _get_Cleared();
      // Set static field: static public MultiplayerLevelCompletionResults/MultiplayerLevelEndState Cleared
      static void _set_Cleared(GlobalNamespace::MultiplayerLevelCompletionResults::MultiplayerLevelEndState value);
      // static field const value: static public MultiplayerLevelCompletionResults/MultiplayerLevelEndState Failed
      static constexpr const int Failed = 1;
      // Get static field: static public MultiplayerLevelCompletionResults/MultiplayerLevelEndState Failed
      static GlobalNamespace::MultiplayerLevelCompletionResults::MultiplayerLevelEndState _get_Failed();
      // Set static field: static public MultiplayerLevelCompletionResults/MultiplayerLevelEndState Failed
      static void _set_Failed(GlobalNamespace::MultiplayerLevelCompletionResults::MultiplayerLevelEndState value);
      // static field const value: static public MultiplayerLevelCompletionResults/MultiplayerLevelEndState GivenUp
      static constexpr const int GivenUp = 2;
      // Get static field: static public MultiplayerLevelCompletionResults/MultiplayerLevelEndState GivenUp
      static GlobalNamespace::MultiplayerLevelCompletionResults::MultiplayerLevelEndState _get_GivenUp();
      // Set static field: static public MultiplayerLevelCompletionResults/MultiplayerLevelEndState GivenUp
      static void _set_GivenUp(GlobalNamespace::MultiplayerLevelCompletionResults::MultiplayerLevelEndState value);
      // static field const value: static public MultiplayerLevelCompletionResults/MultiplayerLevelEndState WasInactive
      static constexpr const int WasInactive = 3;
      // Get static field: static public MultiplayerLevelCompletionResults/MultiplayerLevelEndState WasInactive
      static GlobalNamespace::MultiplayerLevelCompletionResults::MultiplayerLevelEndState _get_WasInactive();
      // Set static field: static public MultiplayerLevelCompletionResults/MultiplayerLevelEndState WasInactive
      static void _set_WasInactive(GlobalNamespace::MultiplayerLevelCompletionResults::MultiplayerLevelEndState value);
      // static field const value: static public MultiplayerLevelCompletionResults/MultiplayerLevelEndState StartupFailed
      static constexpr const int StartupFailed = 4;
      // Get static field: static public MultiplayerLevelCompletionResults/MultiplayerLevelEndState StartupFailed
      static GlobalNamespace::MultiplayerLevelCompletionResults::MultiplayerLevelEndState _get_StartupFailed();
      // Set static field: static public MultiplayerLevelCompletionResults/MultiplayerLevelEndState StartupFailed
      static void _set_StartupFailed(GlobalNamespace::MultiplayerLevelCompletionResults::MultiplayerLevelEndState value);
      // static field const value: static public MultiplayerLevelCompletionResults/MultiplayerLevelEndState HostEndedLevel
      static constexpr const int HostEndedLevel = 5;
      // Get static field: static public MultiplayerLevelCompletionResults/MultiplayerLevelEndState HostEndedLevel
      static GlobalNamespace::MultiplayerLevelCompletionResults::MultiplayerLevelEndState _get_HostEndedLevel();
      // Set static field: static public MultiplayerLevelCompletionResults/MultiplayerLevelEndState HostEndedLevel
      static void _set_HostEndedLevel(GlobalNamespace::MultiplayerLevelCompletionResults::MultiplayerLevelEndState value);
      // static field const value: static public MultiplayerLevelCompletionResults/MultiplayerLevelEndState ConnectedAfterLevelEnded
      static constexpr const int ConnectedAfterLevelEnded = 6;
      // Get static field: static public MultiplayerLevelCompletionResults/MultiplayerLevelEndState ConnectedAfterLevelEnded
      static GlobalNamespace::MultiplayerLevelCompletionResults::MultiplayerLevelEndState _get_ConnectedAfterLevelEnded();
      // Set static field: static public MultiplayerLevelCompletionResults/MultiplayerLevelEndState ConnectedAfterLevelEnded
      static void _set_ConnectedAfterLevelEnded(GlobalNamespace::MultiplayerLevelCompletionResults::MultiplayerLevelEndState value);
      // static field const value: static public MultiplayerLevelCompletionResults/MultiplayerLevelEndState Quit
      static constexpr const int Quit = 7;
      // Get static field: static public MultiplayerLevelCompletionResults/MultiplayerLevelEndState Quit
      static GlobalNamespace::MultiplayerLevelCompletionResults::MultiplayerLevelEndState _get_Quit();
      // Set static field: static public MultiplayerLevelCompletionResults/MultiplayerLevelEndState Quit
      static void _set_Quit(GlobalNamespace::MultiplayerLevelCompletionResults::MultiplayerLevelEndState value);
      // Get instance field reference: public System.Int32 value__
      int& dyn_value__();
    }; // MultiplayerLevelCompletionResults/MultiplayerLevelEndState
    #pragma pack(pop)
    static check_size<sizeof(MultiplayerLevelCompletionResults::MultiplayerLevelEndState), 0 + sizeof(int)> __GlobalNamespace_MultiplayerLevelCompletionResults_MultiplayerLevelEndStateSizeCheck;
    static_assert(sizeof(MultiplayerLevelCompletionResults::MultiplayerLevelEndState) == 0x4);
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // private readonly MultiplayerLevelCompletionResults/MultiplayerLevelEndState _levelEndState
    // Size: 0x4
    // Offset: 0x10
    GlobalNamespace::MultiplayerLevelCompletionResults::MultiplayerLevelEndState levelEndState;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MultiplayerLevelCompletionResults::MultiplayerLevelEndState) == 0x4);
    // Padding between fields: levelEndState and: levelCompletionResults
    char __padding0[0x4] = {};
    // private readonly LevelCompletionResults _levelCompletionResults
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::LevelCompletionResults* levelCompletionResults;
    // Field size check
    static_assert(sizeof(GlobalNamespace::LevelCompletionResults*) == 0x8);
    public:
    // Creating interface conversion operator: operator LiteNetLib::Utils::INetImmutableSerializable_1<GlobalNamespace::MultiplayerLevelCompletionResults*>
    operator LiteNetLib::Utils::INetImmutableSerializable_1<GlobalNamespace::MultiplayerLevelCompletionResults*>() noexcept {
      return *reinterpret_cast<LiteNetLib::Utils::INetImmutableSerializable_1<GlobalNamespace::MultiplayerLevelCompletionResults*>*>(this);
    }
    // Creating interface conversion operator: operator System::IComparable
    operator System::IComparable() noexcept {
      return *reinterpret_cast<System::IComparable*>(this);
    }
    // Get instance field reference: private readonly MultiplayerLevelCompletionResults/MultiplayerLevelEndState _levelEndState
    GlobalNamespace::MultiplayerLevelCompletionResults::MultiplayerLevelEndState& dyn__levelEndState();
    // Get instance field reference: private readonly LevelCompletionResults _levelCompletionResults
    GlobalNamespace::LevelCompletionResults*& dyn__levelCompletionResults();
    // public MultiplayerLevelCompletionResults/MultiplayerLevelEndState get_levelEndState()
    // Offset: 0x18060C8
    GlobalNamespace::MultiplayerLevelCompletionResults::MultiplayerLevelEndState get_levelEndState();
    // public LevelCompletionResults get_levelCompletionResults()
    // Offset: 0x18060D0
    GlobalNamespace::LevelCompletionResults* get_levelCompletionResults();
    // public System.Boolean get_hasAnyResults()
    // Offset: 0x18060D8
    bool get_hasAnyResults();
    // public System.Boolean get_failedOrGivenUp()
    // Offset: 0x18060E8
    bool get_failedOrGivenUp();
    // public System.Void .ctor(MultiplayerLevelCompletionResults/MultiplayerLevelEndState levelEndState)
    // Offset: 0x1806104
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MultiplayerLevelCompletionResults* New_ctor(GlobalNamespace::MultiplayerLevelCompletionResults::MultiplayerLevelEndState levelEndState) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MultiplayerLevelCompletionResults::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MultiplayerLevelCompletionResults*, creationType>(levelEndState)));
    }
    // public System.Void .ctor(LevelCompletionResults levelCompletionResults)
    // Offset: 0x1806134
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MultiplayerLevelCompletionResults* New_ctor(GlobalNamespace::LevelCompletionResults* levelCompletionResults) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MultiplayerLevelCompletionResults::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MultiplayerLevelCompletionResults*, creationType>(levelCompletionResults)));
    }
    // public System.Void Serialize(LiteNetLib.Utils.NetDataWriter writer)
    // Offset: 0x18061F0
    void Serialize(LiteNetLib::Utils::NetDataWriter* writer);
    // public MultiplayerLevelCompletionResults CreateFromSerializedData(LiteNetLib.Utils.NetDataReader reader)
    // Offset: 0x1806250
    GlobalNamespace::MultiplayerLevelCompletionResults* CreateFromSerializedData(LiteNetLib::Utils::NetDataReader* reader);
    // public System.Int32 CompareTo(System.Object obj)
    // Offset: 0x1806304
    int CompareTo(::Il2CppObject* obj);
    // public System.Void .ctor()
    // Offset: 0x18060FC
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MultiplayerLevelCompletionResults* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MultiplayerLevelCompletionResults::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MultiplayerLevelCompletionResults*, creationType>()));
    }
  }; // MultiplayerLevelCompletionResults
  #pragma pack(pop)
  static check_size<sizeof(MultiplayerLevelCompletionResults), 24 + sizeof(GlobalNamespace::LevelCompletionResults*)> __GlobalNamespace_MultiplayerLevelCompletionResultsSizeCheck;
  static_assert(sizeof(MultiplayerLevelCompletionResults) == 0x20);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerLevelCompletionResults::MultiplayerLevelEndState, "", "MultiplayerLevelCompletionResults/MultiplayerLevelEndState");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLevelCompletionResults::get_levelEndState
// Il2CppName: get_levelEndState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::MultiplayerLevelCompletionResults::MultiplayerLevelEndState (GlobalNamespace::MultiplayerLevelCompletionResults::*)()>(&GlobalNamespace::MultiplayerLevelCompletionResults::get_levelEndState)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLevelCompletionResults*), "get_levelEndState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLevelCompletionResults::get_levelCompletionResults
// Il2CppName: get_levelCompletionResults
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::LevelCompletionResults* (GlobalNamespace::MultiplayerLevelCompletionResults::*)()>(&GlobalNamespace::MultiplayerLevelCompletionResults::get_levelCompletionResults)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLevelCompletionResults*), "get_levelCompletionResults", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLevelCompletionResults::get_hasAnyResults
// Il2CppName: get_hasAnyResults
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::MultiplayerLevelCompletionResults::*)()>(&GlobalNamespace::MultiplayerLevelCompletionResults::get_hasAnyResults)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLevelCompletionResults*), "get_hasAnyResults", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLevelCompletionResults::get_failedOrGivenUp
// Il2CppName: get_failedOrGivenUp
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::MultiplayerLevelCompletionResults::*)()>(&GlobalNamespace::MultiplayerLevelCompletionResults::get_failedOrGivenUp)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLevelCompletionResults*), "get_failedOrGivenUp", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLevelCompletionResults::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLevelCompletionResults::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLevelCompletionResults::Serialize
// Il2CppName: Serialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLevelCompletionResults::*)(LiteNetLib::Utils::NetDataWriter*)>(&GlobalNamespace::MultiplayerLevelCompletionResults::Serialize)> {
  static const MethodInfo* get() {
    static auto* writer = &::il2cpp_utils::GetClassFromName("LiteNetLib.Utils", "NetDataWriter")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLevelCompletionResults*), "Serialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{writer});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLevelCompletionResults::CreateFromSerializedData
// Il2CppName: CreateFromSerializedData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::MultiplayerLevelCompletionResults* (GlobalNamespace::MultiplayerLevelCompletionResults::*)(LiteNetLib::Utils::NetDataReader*)>(&GlobalNamespace::MultiplayerLevelCompletionResults::CreateFromSerializedData)> {
  static const MethodInfo* get() {
    static auto* reader = &::il2cpp_utils::GetClassFromName("LiteNetLib.Utils", "NetDataReader")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLevelCompletionResults*), "CreateFromSerializedData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{reader});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLevelCompletionResults::CompareTo
// Il2CppName: CompareTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::MultiplayerLevelCompletionResults::*)(::Il2CppObject*)>(&GlobalNamespace::MultiplayerLevelCompletionResults::CompareTo)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLevelCompletionResults*), "CompareTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLevelCompletionResults::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
