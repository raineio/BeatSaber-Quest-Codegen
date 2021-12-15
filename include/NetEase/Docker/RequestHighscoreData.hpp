// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Begin il2cpp-utils forward declares
struct Il2CppString;
// Completed il2cpp-utils forward declares
// Type namespace: NetEase.Docker
namespace NetEase::Docker {
  // Forward declaring type: RequestHighscoreData
  struct RequestHighscoreData;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(NetEase::Docker::RequestHighscoreData, "NetEase.Docker", "RequestHighscoreData");
// Type namespace: NetEase.Docker
namespace NetEase::Docker {
  // Size: 0x10
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: NetEase.Docker.RequestHighscoreData
  // [TokenAttribute] Offset: FFFFFFFF
  struct RequestHighscoreData/*, public System::ValueType*/ {
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
    // [DebuggerBrowsableAttribute] Offset: 0xF2EA44
    // private System.String <Track>k__BackingField
    // Size: 0x8
    // Offset: 0x0
    ::Il2CppString* Track;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // [DebuggerBrowsableAttribute] Offset: 0xF2EA80
    // private System.String <HighscoreType>k__BackingField
    // Size: 0x8
    // Offset: 0x8
    ::Il2CppString* HighscoreType;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    public:
    // Creating value type constructor for type: RequestHighscoreData
    constexpr RequestHighscoreData(::Il2CppString* Track_ = {}, ::Il2CppString* HighscoreType_ = {}) noexcept : Track{Track_}, HighscoreType{HighscoreType_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Get instance field reference: private System.String <Track>k__BackingField
    ::Il2CppString*& dyn_$Track$k__BackingField();
    // Get instance field reference: private System.String <HighscoreType>k__BackingField
    ::Il2CppString*& dyn_$HighscoreType$k__BackingField();
    // public System.String get_Track()
    // Offset: 0x26CAB04
    ::Il2CppString* get_Track();
    // public System.Void set_Track(System.String value)
    // Offset: 0x26CAB0C
    void set_Track(::Il2CppString* value);
    // public System.Void set_HighscoreType(System.String value)
    // Offset: 0x26CAB14
    void set_HighscoreType(::Il2CppString* value);
  }; // NetEase.Docker.RequestHighscoreData
  #pragma pack(pop)
  static check_size<sizeof(RequestHighscoreData), 8 + sizeof(::Il2CppString*)> __NetEase_Docker_RequestHighscoreDataSizeCheck;
  static_assert(sizeof(RequestHighscoreData) == 0x10);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: NetEase::Docker::RequestHighscoreData::get_Track
// Il2CppName: get_Track
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (NetEase::Docker::RequestHighscoreData::*)()>(&NetEase::Docker::RequestHighscoreData::get_Track)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NetEase::Docker::RequestHighscoreData), "get_Track", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NetEase::Docker::RequestHighscoreData::set_Track
// Il2CppName: set_Track
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (NetEase::Docker::RequestHighscoreData::*)(::Il2CppString*)>(&NetEase::Docker::RequestHighscoreData::set_Track)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NetEase::Docker::RequestHighscoreData), "set_Track", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: NetEase::Docker::RequestHighscoreData::set_HighscoreType
// Il2CppName: set_HighscoreType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (NetEase::Docker::RequestHighscoreData::*)(::Il2CppString*)>(&NetEase::Docker::RequestHighscoreData::set_HighscoreType)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NetEase::Docker::RequestHighscoreData), "set_HighscoreType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
