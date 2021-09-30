// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: AvatarDataFileManagerSO
  class AvatarDataFileManagerSO;
  // Forward declaring type: AvatarPartsModel
  class AvatarPartsModel;
  // Forward declaring type: AvatarData
  class AvatarData;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: AvatarDataModel
  // [TokenAttribute] Offset: FFFFFFFF
  class AvatarDataModel : public UnityEngine::MonoBehaviour {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    private:
    #endif
    // private AvatarDataFileManagerSO _avatarDataFileManager
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::AvatarDataFileManagerSO* avatarDataFileManager;
    // Field size check
    static_assert(sizeof(GlobalNamespace::AvatarDataFileManagerSO*) == 0x8);
    // [InjectAttribute] Offset: 0xF03DDC
    // private readonly AvatarPartsModel _avatarPartsModel
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::AvatarPartsModel* avatarPartsModel;
    // Field size check
    static_assert(sizeof(GlobalNamespace::AvatarPartsModel*) == 0x8);
    // private AvatarData <avatarData>k__BackingField
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::AvatarData* avatarData;
    // Field size check
    static_assert(sizeof(GlobalNamespace::AvatarData*) == 0x8);
    public:
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get instance field reference: private AvatarDataFileManagerSO _avatarDataFileManager
    GlobalNamespace::AvatarDataFileManagerSO*& dyn__avatarDataFileManager();
    // Get instance field reference: private readonly AvatarPartsModel _avatarPartsModel
    GlobalNamespace::AvatarPartsModel*& dyn__avatarPartsModel();
    // Get instance field reference: private AvatarData <avatarData>k__BackingField
    GlobalNamespace::AvatarData*& dyn_$avatarData$k__BackingField();
    // public AvatarData get_avatarData()
    // Offset: 0x124A594
    GlobalNamespace::AvatarData* get_avatarData();
    // public System.Void set_avatarData(AvatarData value)
    // Offset: 0x124A59C
    void set_avatarData(GlobalNamespace::AvatarData* value);
    // protected System.Void OnEnable()
    // Offset: 0x124A5A4
    void OnEnable();
    // public System.Void Randomize()
    // Offset: 0x124A5E4
    void Randomize();
    // public System.Void Save()
    // Offset: 0x124A708
    void Save();
    // public System.Void Load()
    // Offset: 0x124A5A8
    void Load();
    // private AvatarData CreateDefaultAvatarData()
    // Offset: 0x124A608
    GlobalNamespace::AvatarData* CreateDefaultAvatarData();
    // public System.Void .ctor()
    // Offset: 0x124A778
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AvatarDataModel* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::AvatarDataModel::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AvatarDataModel*, creationType>()));
    }
  }; // AvatarDataModel
  #pragma pack(pop)
  static check_size<sizeof(AvatarDataModel), 40 + sizeof(GlobalNamespace::AvatarData*)> __GlobalNamespace_AvatarDataModelSizeCheck;
  static_assert(sizeof(AvatarDataModel) == 0x30);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::AvatarDataModel*, "", "AvatarDataModel");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::AvatarDataModel::get_avatarData
// Il2CppName: get_avatarData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::AvatarData* (GlobalNamespace::AvatarDataModel::*)()>(&GlobalNamespace::AvatarDataModel::get_avatarData)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AvatarDataModel*), "get_avatarData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AvatarDataModel::set_avatarData
// Il2CppName: set_avatarData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AvatarDataModel::*)(GlobalNamespace::AvatarData*)>(&GlobalNamespace::AvatarDataModel::set_avatarData)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("", "AvatarData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AvatarDataModel*), "set_avatarData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AvatarDataModel::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AvatarDataModel::*)()>(&GlobalNamespace::AvatarDataModel::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AvatarDataModel*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AvatarDataModel::Randomize
// Il2CppName: Randomize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AvatarDataModel::*)()>(&GlobalNamespace::AvatarDataModel::Randomize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AvatarDataModel*), "Randomize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AvatarDataModel::Save
// Il2CppName: Save
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AvatarDataModel::*)()>(&GlobalNamespace::AvatarDataModel::Save)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AvatarDataModel*), "Save", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AvatarDataModel::Load
// Il2CppName: Load
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AvatarDataModel::*)()>(&GlobalNamespace::AvatarDataModel::Load)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AvatarDataModel*), "Load", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AvatarDataModel::CreateDefaultAvatarData
// Il2CppName: CreateDefaultAvatarData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::AvatarData* (GlobalNamespace::AvatarDataModel::*)()>(&GlobalNamespace::AvatarDataModel::CreateDefaultAvatarData)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AvatarDataModel*), "CreateDefaultAvatarData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AvatarDataModel::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
