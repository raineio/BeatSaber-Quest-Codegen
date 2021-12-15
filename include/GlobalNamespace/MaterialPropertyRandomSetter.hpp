// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
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
  // Forward declaring type: MaterialPropertyRandomSetter
  class MaterialPropertyRandomSetter;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(GlobalNamespace::MaterialPropertyRandomSetter);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MaterialPropertyRandomSetter*, "", "MaterialPropertyRandomSetter");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x34
  #pragma pack(push, 1)
  // Autogenerated type: MaterialPropertyRandomSetter
  // [TokenAttribute] Offset: FFFFFFFF
  class MaterialPropertyRandomSetter : public UnityEngine::MonoBehaviour {
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
    // private MaterialPropertyBlockController _materialPropertyBlockController
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::MaterialPropertyBlockController* materialPropertyBlockController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MaterialPropertyBlockController*) == 0x8);
    // private System.String _propertyName
    // Size: 0x8
    // Offset: 0x20
    ::Il2CppString* propertyName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.Single _minValue
    // Size: 0x4
    // Offset: 0x28
    float minValue;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _maxValue
    // Size: 0x4
    // Offset: 0x2C
    float maxValue;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Int32 _propertyId
    // Size: 0x4
    // Offset: 0x30
    int propertyId;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get instance field reference: private MaterialPropertyBlockController _materialPropertyBlockController
    GlobalNamespace::MaterialPropertyBlockController*& dyn__materialPropertyBlockController();
    // Get instance field reference: private System.String _propertyName
    ::Il2CppString*& dyn__propertyName();
    // Get instance field reference: private System.Single _minValue
    float& dyn__minValue();
    // Get instance field reference: private System.Single _maxValue
    float& dyn__maxValue();
    // Get instance field reference: private System.Int32 _propertyId
    int& dyn__propertyId();
    // protected System.Void Start()
    // Offset: 0x1DB9E20
    void Start();
    // protected System.Void OnValidate()
    // Offset: 0x1DB9E88
    void OnValidate();
    // private System.Void RefreshPropertyId()
    // Offset: 0x1DB9F30
    void RefreshPropertyId();
    // private System.Void ApplyParams()
    // Offset: 0x1DB9E24
    void ApplyParams();
    // public System.Void .ctor()
    // Offset: 0x1DB9F5C
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MaterialPropertyRandomSetter* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MaterialPropertyRandomSetter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MaterialPropertyRandomSetter*, creationType>()));
    }
  }; // MaterialPropertyRandomSetter
  #pragma pack(pop)
  static check_size<sizeof(MaterialPropertyRandomSetter), 48 + sizeof(int)> __GlobalNamespace_MaterialPropertyRandomSetterSizeCheck;
  static_assert(sizeof(MaterialPropertyRandomSetter) == 0x34);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MaterialPropertyRandomSetter::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MaterialPropertyRandomSetter::*)()>(&GlobalNamespace::MaterialPropertyRandomSetter::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MaterialPropertyRandomSetter*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MaterialPropertyRandomSetter::OnValidate
// Il2CppName: OnValidate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MaterialPropertyRandomSetter::*)()>(&GlobalNamespace::MaterialPropertyRandomSetter::OnValidate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MaterialPropertyRandomSetter*), "OnValidate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MaterialPropertyRandomSetter::RefreshPropertyId
// Il2CppName: RefreshPropertyId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MaterialPropertyRandomSetter::*)()>(&GlobalNamespace::MaterialPropertyRandomSetter::RefreshPropertyId)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MaterialPropertyRandomSetter*), "RefreshPropertyId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MaterialPropertyRandomSetter::ApplyParams
// Il2CppName: ApplyParams
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MaterialPropertyRandomSetter::*)()>(&GlobalNamespace::MaterialPropertyRandomSetter::ApplyParams)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MaterialPropertyRandomSetter*), "ApplyParams", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MaterialPropertyRandomSetter::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
