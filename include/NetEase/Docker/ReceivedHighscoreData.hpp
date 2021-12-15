// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: NetEase.Docker.ScoreData
#include "NetEase/Docker/ScoreData.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct Il2CppString;
// Completed il2cpp-utils forward declares
// Type namespace: NetEase.Docker
namespace NetEase::Docker {
  // Forward declaring type: ReceivedHighscoreData
  struct ReceivedHighscoreData;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(NetEase::Docker::ReceivedHighscoreData, "NetEase.Docker", "ReceivedHighscoreData");
// Type namespace: NetEase.Docker
namespace NetEase::Docker {
  // Size: 0x18
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: NetEase.Docker.ReceivedHighscoreData
  // [TokenAttribute] Offset: FFFFFFFF
  struct ReceivedHighscoreData/*, public System::ValueType*/ {
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
    // [DebuggerBrowsableAttribute] Offset: 0xF2E8A0
    // private System.Boolean <FetchingSuccessful>k__BackingField
    // Size: 0x1
    // Offset: 0x0
    bool FetchingSuccessful;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: FetchingSuccessful and: HighscoreCode
    char __padding0[0x3] = {};
    // [DebuggerBrowsableAttribute] Offset: 0xF2E8DC
    // private System.Int32 <HighscoreCode>k__BackingField
    // Size: 0x4
    // Offset: 0x4
    int HighscoreCode;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // [DebuggerBrowsableAttribute] Offset: 0xF2E918
    // private System.String <Track>k__BackingField
    // Size: 0x8
    // Offset: 0x8
    ::Il2CppString* Track;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // [DebuggerBrowsableAttribute] Offset: 0xF2E954
    // private System.Collections.Generic.List`1<NetEase.Docker.ScoreData> <Scores>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    System::Collections::Generic::List_1<NetEase::Docker::ScoreData>* Scores;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<NetEase::Docker::ScoreData>*) == 0x8);
    public:
    // Creating value type constructor for type: ReceivedHighscoreData
    constexpr ReceivedHighscoreData(bool FetchingSuccessful_ = {}, int HighscoreCode_ = {}, ::Il2CppString* Track_ = {}, System::Collections::Generic::List_1<NetEase::Docker::ScoreData>* Scores_ = {}) noexcept : FetchingSuccessful{FetchingSuccessful_}, HighscoreCode{HighscoreCode_}, Track{Track_}, Scores{Scores_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Get instance field reference: private System.Boolean <FetchingSuccessful>k__BackingField
    bool& dyn_$FetchingSuccessful$k__BackingField();
    // Get instance field reference: private System.Int32 <HighscoreCode>k__BackingField
    int& dyn_$HighscoreCode$k__BackingField();
    // Get instance field reference: private System.String <Track>k__BackingField
    ::Il2CppString*& dyn_$Track$k__BackingField();
    // Get instance field reference: private System.Collections.Generic.List`1<NetEase.Docker.ScoreData> <Scores>k__BackingField
    System::Collections::Generic::List_1<NetEase::Docker::ScoreData>*& dyn_$Scores$k__BackingField();
    // public System.Boolean get_FetchingSuccessful()
    // Offset: 0x26CAAC8
    bool get_FetchingSuccessful();
    // public System.Void set_FetchingSuccessful(System.Boolean value)
    // Offset: 0x26CAAD0
    void set_FetchingSuccessful(bool value);
    // public System.Void set_HighscoreCode(System.Int32 value)
    // Offset: 0x26CAADC
    void set_HighscoreCode(int value);
    // public System.String get_Track()
    // Offset: 0x26CAAE4
    ::Il2CppString* get_Track();
    // public System.Void set_Track(System.String value)
    // Offset: 0x26CAAEC
    void set_Track(::Il2CppString* value);
    // public System.Collections.Generic.List`1<NetEase.Docker.ScoreData> get_Scores()
    // Offset: 0x26CAAF4
    System::Collections::Generic::List_1<NetEase::Docker::ScoreData>* get_Scores();
    // public System.Void set_Scores(System.Collections.Generic.List`1<NetEase.Docker.ScoreData> value)
    // Offset: 0x26CAAFC
    void set_Scores(System::Collections::Generic::List_1<NetEase::Docker::ScoreData>* value);
  }; // NetEase.Docker.ReceivedHighscoreData
  #pragma pack(pop)
  static check_size<sizeof(ReceivedHighscoreData), 16 + sizeof(System::Collections::Generic::List_1<NetEase::Docker::ScoreData>*)> __NetEase_Docker_ReceivedHighscoreDataSizeCheck;
  static_assert(sizeof(ReceivedHighscoreData) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: NetEase::Docker::ReceivedHighscoreData::get_FetchingSuccessful
// Il2CppName: get_FetchingSuccessful
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (NetEase::Docker::ReceivedHighscoreData::*)()>(&NetEase::Docker::ReceivedHighscoreData::get_FetchingSuccessful)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NetEase::Docker::ReceivedHighscoreData), "get_FetchingSuccessful", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NetEase::Docker::ReceivedHighscoreData::set_FetchingSuccessful
// Il2CppName: set_FetchingSuccessful
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (NetEase::Docker::ReceivedHighscoreData::*)(bool)>(&NetEase::Docker::ReceivedHighscoreData::set_FetchingSuccessful)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NetEase::Docker::ReceivedHighscoreData), "set_FetchingSuccessful", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: NetEase::Docker::ReceivedHighscoreData::set_HighscoreCode
// Il2CppName: set_HighscoreCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (NetEase::Docker::ReceivedHighscoreData::*)(int)>(&NetEase::Docker::ReceivedHighscoreData::set_HighscoreCode)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NetEase::Docker::ReceivedHighscoreData), "set_HighscoreCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: NetEase::Docker::ReceivedHighscoreData::get_Track
// Il2CppName: get_Track
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (NetEase::Docker::ReceivedHighscoreData::*)()>(&NetEase::Docker::ReceivedHighscoreData::get_Track)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NetEase::Docker::ReceivedHighscoreData), "get_Track", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NetEase::Docker::ReceivedHighscoreData::set_Track
// Il2CppName: set_Track
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (NetEase::Docker::ReceivedHighscoreData::*)(::Il2CppString*)>(&NetEase::Docker::ReceivedHighscoreData::set_Track)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NetEase::Docker::ReceivedHighscoreData), "set_Track", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: NetEase::Docker::ReceivedHighscoreData::get_Scores
// Il2CppName: get_Scores
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::List_1<NetEase::Docker::ScoreData>* (NetEase::Docker::ReceivedHighscoreData::*)()>(&NetEase::Docker::ReceivedHighscoreData::get_Scores)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NetEase::Docker::ReceivedHighscoreData), "get_Scores", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NetEase::Docker::ReceivedHighscoreData::set_Scores
// Il2CppName: set_Scores
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (NetEase::Docker::ReceivedHighscoreData::*)(System::Collections::Generic::List_1<NetEase::Docker::ScoreData>*)>(&NetEase::Docker::ReceivedHighscoreData::set_Scores)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("NetEase.Docker", "ScoreData")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NetEase::Docker::ReceivedHighscoreData), "set_Scores", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
