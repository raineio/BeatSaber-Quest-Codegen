// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.ScriptableObject
#include "UnityEngine/ScriptableObject.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: TMPro
namespace TMPro {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: TMPro.TMP_InputValidator
  class TMP_InputValidator : public UnityEngine::ScriptableObject {
    public:
    // Creating value type constructor for type: TMP_InputValidator
    TMP_InputValidator() noexcept {}
    // public System.Char Validate(ref System.String text, ref System.Int32 pos, System.Char ch)
    // Offset: 0xFFFFFFFF
    ::Il2CppChar Validate(::Il2CppString*& text, int& pos, ::Il2CppChar ch);
    // protected System.Void .ctor()
    // Offset: 0x116840C
    // Implemented from: UnityEngine.ScriptableObject
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TMP_InputValidator* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("TMPro::TMP_InputValidator::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TMP_InputValidator*, creationType>()));
    }
  }; // TMPro.TMP_InputValidator
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(TMPro::TMP_InputValidator*, "TMPro", "TMP_InputValidator");
// Writing MetadataGetter for method: TMPro::TMP_InputValidator::Validate
// Il2CppName: Validate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppChar (TMPro::TMP_InputValidator::*)(::Il2CppString*&, int&, ::Il2CppChar)>(&TMPro::TMP_InputValidator::Validate)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_InputValidator*), "Validate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*&>(), ::il2cpp_utils::ExtractIndependentType<int&>(), ::il2cpp_utils::ExtractIndependentType<::Il2CppChar>()});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_InputValidator::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
