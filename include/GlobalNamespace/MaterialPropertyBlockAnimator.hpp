// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
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
  // Forward declaring type: MaterialPropertyBlockController
  class MaterialPropertyBlockController;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x2D
  #pragma pack(push, 1)
  // Autogenerated type: MaterialPropertyBlockAnimator
  // [ExecuteAlways] Offset: DF5A60
  class MaterialPropertyBlockAnimator : public UnityEngine::MonoBehaviour {
    public:
    // private System.String _property
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* property;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // protected MaterialPropertyBlockController _materialPropertyBlockController
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::MaterialPropertyBlockController* materialPropertyBlockController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MaterialPropertyBlockController*) == 0x8);
    // protected System.Int32 propertyId
    // Size: 0x4
    // Offset: 0x28
    int propertyId;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Boolean _isInitialized
    // Size: 0x1
    // Offset: 0x2C
    bool isInitialized;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: MaterialPropertyBlockAnimator
    MaterialPropertyBlockAnimator(::Il2CppString* property_ = {}, GlobalNamespace::MaterialPropertyBlockController* materialPropertyBlockController_ = {}, int propertyId_ = {}, bool isInitialized_ = {}) noexcept : property{property_}, materialPropertyBlockController{materialPropertyBlockController_}, propertyId{propertyId_}, isInitialized{isInitialized_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public MaterialPropertyBlockController get_materialPropertyBlockController()
    // Offset: 0x1D8EB30
    GlobalNamespace::MaterialPropertyBlockController* get_materialPropertyBlockController();
    // public System.Void set_materialPropertyBlockController(MaterialPropertyBlockController value)
    // Offset: 0x1D8EB38
    void set_materialPropertyBlockController(GlobalNamespace::MaterialPropertyBlockController* value);
    // protected System.Void SetProperty()
    // Offset: 0x1D8EBC4
    void SetProperty();
    // protected System.Void Awake()
    // Offset: 0x1D8EBC8
    void Awake();
    // protected System.Void Update()
    // Offset: 0x1D8ECA8
    void Update();
    // private System.Void LazyInit()
    // Offset: 0x1D8EC68
    void LazyInit();
    // public System.Void .ctor()
    // Offset: 0x1D8EDB4
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MaterialPropertyBlockAnimator* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MaterialPropertyBlockAnimator::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MaterialPropertyBlockAnimator*, creationType>()));
    }
  }; // MaterialPropertyBlockAnimator
  #pragma pack(pop)
  static check_size<sizeof(MaterialPropertyBlockAnimator), 44 + sizeof(bool)> __GlobalNamespace_MaterialPropertyBlockAnimatorSizeCheck;
  static_assert(sizeof(MaterialPropertyBlockAnimator) == 0x2D);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MaterialPropertyBlockAnimator*, "", "MaterialPropertyBlockAnimator");
// Writing MetadataGetter for method: GlobalNamespace::MaterialPropertyBlockAnimator::get_materialPropertyBlockController
// Il2CppName: get_materialPropertyBlockController
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::MaterialPropertyBlockController* (GlobalNamespace::MaterialPropertyBlockAnimator::*)()>(&GlobalNamespace::MaterialPropertyBlockAnimator::get_materialPropertyBlockController)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MaterialPropertyBlockAnimator*), "get_materialPropertyBlockController", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MaterialPropertyBlockAnimator::set_materialPropertyBlockController
// Il2CppName: set_materialPropertyBlockController
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MaterialPropertyBlockAnimator::*)(GlobalNamespace::MaterialPropertyBlockController*)>(&GlobalNamespace::MaterialPropertyBlockAnimator::set_materialPropertyBlockController)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MaterialPropertyBlockAnimator*), "set_materialPropertyBlockController", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<GlobalNamespace::MaterialPropertyBlockController*>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MaterialPropertyBlockAnimator::SetProperty
// Il2CppName: SetProperty
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MaterialPropertyBlockAnimator::*)()>(&GlobalNamespace::MaterialPropertyBlockAnimator::SetProperty)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MaterialPropertyBlockAnimator*), "SetProperty", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MaterialPropertyBlockAnimator::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MaterialPropertyBlockAnimator::*)()>(&GlobalNamespace::MaterialPropertyBlockAnimator::Awake)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MaterialPropertyBlockAnimator*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MaterialPropertyBlockAnimator::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MaterialPropertyBlockAnimator::*)()>(&GlobalNamespace::MaterialPropertyBlockAnimator::Update)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MaterialPropertyBlockAnimator*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MaterialPropertyBlockAnimator::LazyInit
// Il2CppName: LazyInit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MaterialPropertyBlockAnimator::*)()>(&GlobalNamespace::MaterialPropertyBlockAnimator::LazyInit)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MaterialPropertyBlockAnimator*), "LazyInit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MaterialPropertyBlockAnimator::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
