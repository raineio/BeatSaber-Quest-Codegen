// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Forward declaring type: JSONNode
  class JSONNode;
}
// Completed forward declares
// Type namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Forward declaring type: JSON
  class JSON;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::HoudiniEngineUnity::JSON);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::JSON*, "HoudiniEngineUnity", "JSON");
// Type namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: HoudiniEngineUnity.JSON
  // [TokenAttribute] Offset: FFFFFFFF
  class JSON : public ::Il2CppObject {
    public:
    // static public HoudiniEngineUnity.JSONNode Parse(System.String aJSON)
    // Offset: 0x1A1306C
    static ::HoudiniEngineUnity::JSONNode* Parse(::StringW aJSON);
  }; // HoudiniEngineUnity.JSON
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: HoudiniEngineUnity::JSON::Parse
// Il2CppName: Parse
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::JSONNode* (*)(::StringW)>(&HoudiniEngineUnity::JSON::Parse)> {
  static const MethodInfo* get() {
    static auto* aJSON = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::JSON*), "Parse", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{aJSON});
  }
};
