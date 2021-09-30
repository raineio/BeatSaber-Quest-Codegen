// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: BTSStarTextEventEffect
#include "GlobalNamespace/BTSStarTextEventEffect.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: BTSStarTextEventEffect/StartTextPosition
  // [TokenAttribute] Offset: FFFFFFFF
  class BTSStarTextEventEffect::StartTextPosition : public ::Il2CppObject {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    private:
    #endif
    // private System.Int32 _id
    // Size: 0x4
    // Offset: 0x10
    int id;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: id and: transform
    char __padding0[0x4] = {};
    // private UnityEngine.Transform _transform
    // Size: 0x8
    // Offset: 0x18
    UnityEngine::Transform* transform;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    public:
    // Get instance field reference: private System.Int32 _id
    int& dyn__id();
    // Get instance field reference: private UnityEngine.Transform _transform
    UnityEngine::Transform*& dyn__transform();
    // public System.Int32 get_id()
    // Offset: 0x1268FE4
    int get_id();
    // public UnityEngine.Transform get_transform()
    // Offset: 0x1268FEC
    UnityEngine::Transform* get_transform();
    // public System.Void .ctor()
    // Offset: 0x1268FF4
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BTSStarTextEventEffect::StartTextPosition* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::BTSStarTextEventEffect::StartTextPosition::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BTSStarTextEventEffect::StartTextPosition*, creationType>()));
    }
  }; // BTSStarTextEventEffect/StartTextPosition
  #pragma pack(pop)
  static check_size<sizeof(BTSStarTextEventEffect::StartTextPosition), 24 + sizeof(UnityEngine::Transform*)> __GlobalNamespace_BTSStarTextEventEffect_StartTextPositionSizeCheck;
  static_assert(sizeof(BTSStarTextEventEffect::StartTextPosition) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BTSStarTextEventEffect::StartTextPosition*, "", "BTSStarTextEventEffect/StartTextPosition");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BTSStarTextEventEffect::StartTextPosition::get_id
// Il2CppName: get_id
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::BTSStarTextEventEffect::StartTextPosition::*)()>(&GlobalNamespace::BTSStarTextEventEffect::StartTextPosition::get_id)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BTSStarTextEventEffect::StartTextPosition*), "get_id", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BTSStarTextEventEffect::StartTextPosition::get_transform
// Il2CppName: get_transform
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Transform* (GlobalNamespace::BTSStarTextEventEffect::StartTextPosition::*)()>(&GlobalNamespace::BTSStarTextEventEffect::StartTextPosition::get_transform)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BTSStarTextEventEffect::StartTextPosition*), "get_transform", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BTSStarTextEventEffect::StartTextPosition::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
