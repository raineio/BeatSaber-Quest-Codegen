// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: PersistentScriptableObject
#include "GlobalNamespace/PersistentScriptableObject.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: PS4LeaderboardIdsModelSO
  class PS4LeaderboardIdsModelSO;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(GlobalNamespace::PS4LeaderboardIdsModelSO);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PS4LeaderboardIdsModelSO*, "", "PS4LeaderboardIdsModelSO");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: PS4LeaderboardIdsModelSO
  // [TokenAttribute] Offset: FFFFFFFF
  class PS4LeaderboardIdsModelSO : public GlobalNamespace::PersistentScriptableObject {
    public:
    // Nested type: GlobalNamespace::PS4LeaderboardIdsModelSO::LeaderboardIdData
    class LeaderboardIdData;
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // private System.Collections.Generic.List`1<PS4LeaderboardIdsModelSO/LeaderboardIdData> _leaderboardIds
    // Size: 0x8
    // Offset: 0x18
    System::Collections::Generic::List_1<GlobalNamespace::PS4LeaderboardIdsModelSO::LeaderboardIdData*>* leaderboardIds;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<GlobalNamespace::PS4LeaderboardIdsModelSO::LeaderboardIdData*>*) == 0x8);
    // private System.Collections.Generic.Dictionary`2<System.String,System.UInt32> _leaderboardIdToPs4Id
    // Size: 0x8
    // Offset: 0x20
    System::Collections::Generic::Dictionary_2<::Il2CppString*, uint>* leaderboardIdToPs4Id;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::Dictionary_2<::Il2CppString*, uint>*) == 0x8);
    public:
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get instance field reference: private System.Collections.Generic.List`1<PS4LeaderboardIdsModelSO/LeaderboardIdData> _leaderboardIds
    System::Collections::Generic::List_1<GlobalNamespace::PS4LeaderboardIdsModelSO::LeaderboardIdData*>*& dyn__leaderboardIds();
    // Get instance field reference: private System.Collections.Generic.Dictionary`2<System.String,System.UInt32> _leaderboardIdToPs4Id
    System::Collections::Generic::Dictionary_2<::Il2CppString*, uint>*& dyn__leaderboardIdToPs4Id();
    // public System.Collections.Generic.List`1<PS4LeaderboardIdsModelSO/LeaderboardIdData> get_leaderboardIds()
    // Offset: 0x11477DC
    System::Collections::Generic::List_1<GlobalNamespace::PS4LeaderboardIdsModelSO::LeaderboardIdData*>* get_leaderboardIds();
    // public System.Boolean GetPS4LeaderboardId(System.String leaderboardId, out System.UInt32 ps4LeaderboardId)
    // Offset: 0x1147928
    bool GetPS4LeaderboardId(::Il2CppString* leaderboardId, ByRef<uint> ps4LeaderboardId);
    // public System.Void .ctor()
    // Offset: 0x114799C
    // Implemented from: PersistentScriptableObject
    // Base method: System.Void PersistentScriptableObject::.ctor()
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PS4LeaderboardIdsModelSO* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::PS4LeaderboardIdsModelSO::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PS4LeaderboardIdsModelSO*, creationType>()));
    }
    // protected override System.Void OnEnable()
    // Offset: 0x11477E4
    // Implemented from: PersistentScriptableObject
    // Base method: System.Void PersistentScriptableObject::OnEnable()
    void OnEnable();
  }; // PS4LeaderboardIdsModelSO
  #pragma pack(pop)
  static check_size<sizeof(PS4LeaderboardIdsModelSO), 32 + sizeof(System::Collections::Generic::Dictionary_2<::Il2CppString*, uint>*)> __GlobalNamespace_PS4LeaderboardIdsModelSOSizeCheck;
  static_assert(sizeof(PS4LeaderboardIdsModelSO) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::PS4LeaderboardIdsModelSO::get_leaderboardIds
// Il2CppName: get_leaderboardIds
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::List_1<GlobalNamespace::PS4LeaderboardIdsModelSO::LeaderboardIdData*>* (GlobalNamespace::PS4LeaderboardIdsModelSO::*)()>(&GlobalNamespace::PS4LeaderboardIdsModelSO::get_leaderboardIds)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PS4LeaderboardIdsModelSO*), "get_leaderboardIds", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PS4LeaderboardIdsModelSO::GetPS4LeaderboardId
// Il2CppName: GetPS4LeaderboardId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::PS4LeaderboardIdsModelSO::*)(::Il2CppString*, ByRef<uint>)>(&GlobalNamespace::PS4LeaderboardIdsModelSO::GetPS4LeaderboardId)> {
  static const MethodInfo* get() {
    static auto* leaderboardId = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* ps4LeaderboardId = &::il2cpp_utils::GetClassFromName("System", "UInt32")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PS4LeaderboardIdsModelSO*), "GetPS4LeaderboardId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{leaderboardId, ps4LeaderboardId});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PS4LeaderboardIdsModelSO::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::PS4LeaderboardIdsModelSO::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PS4LeaderboardIdsModelSO::*)()>(&GlobalNamespace::PS4LeaderboardIdsModelSO::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PS4LeaderboardIdsModelSO*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
