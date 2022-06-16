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
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: ObjectiveValueFormatterSO
  class ObjectiveValueFormatterSO;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::ObjectiveValueFormatterSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ObjectiveValueFormatterSO*, "", "ObjectiveValueFormatterSO");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: ObjectiveValueFormatterSO
  // [TokenAttribute] Offset: FFFFFFFF
  class ObjectiveValueFormatterSO : public ::GlobalNamespace::PersistentScriptableObject {
    public:
    // public System.Void .ctor()
    // Offset: 0x14B6E94
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ObjectiveValueFormatterSO* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::ObjectiveValueFormatterSO::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ObjectiveValueFormatterSO*, creationType>()));
    }
    // public System.String FormatValue(System.Int32 value)
    // Offset: 0x14B6E6C
    ::StringW FormatValue(int value);
  }; // ObjectiveValueFormatterSO
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::ObjectiveValueFormatterSO::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::ObjectiveValueFormatterSO::FormatValue
// Il2CppName: FormatValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::ObjectiveValueFormatterSO::*)(int)>(&GlobalNamespace::ObjectiveValueFormatterSO::FormatValue)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ObjectiveValueFormatterSO*), "FormatValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
