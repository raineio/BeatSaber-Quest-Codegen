// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Newtonsoft.Json.Serialization.DefaultContractResolver
#include "Newtonsoft/Json/Serialization/DefaultContractResolver.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Newtonsoft::Json::Serialization::DefaultContractResolver::$$c__DisplayClass65_0);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Serialization::DefaultContractResolver::$$c__DisplayClass65_0*, "Newtonsoft.Json.Serialization", "DefaultContractResolver/<>c__DisplayClass65_0");
// Type namespace: Newtonsoft.Json.Serialization
namespace Newtonsoft::Json::Serialization {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: Newtonsoft.Json.Serialization.DefaultContractResolver/Newtonsoft.Json.Serialization.<>c__DisplayClass65_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class DefaultContractResolver::$$c__DisplayClass65_0 : public ::Il2CppObject {
    public:
    public:
    // public System.Func`2<System.Object,System.Object> specifiedPropertyGet
    // Size: 0x8
    // Offset: 0x10
    ::System::Func_2<::Il2CppObject*, ::Il2CppObject*>* specifiedPropertyGet;
    // Field size check
    static_assert(sizeof(::System::Func_2<::Il2CppObject*, ::Il2CppObject*>*) == 0x8);
    public:
    // Creating conversion operator: operator ::System::Func_2<::Il2CppObject*, ::Il2CppObject*>*
    constexpr operator ::System::Func_2<::Il2CppObject*, ::Il2CppObject*>*() const noexcept {
      return specifiedPropertyGet;
    }
    // Get instance field reference: public System.Func`2<System.Object,System.Object> specifiedPropertyGet
    [[deprecated("Use field access instead!")]] ::System::Func_2<::Il2CppObject*, ::Il2CppObject*>*& dyn_specifiedPropertyGet();
    // public System.Void .ctor()
    // Offset: 0x1D51808
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DefaultContractResolver::$$c__DisplayClass65_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Newtonsoft::Json::Serialization::DefaultContractResolver::$$c__DisplayClass65_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DefaultContractResolver::$$c__DisplayClass65_0*, creationType>()));
    }
    // System.Boolean <SetIsSpecifiedActions>b__0(System.Object o)
    // Offset: 0x1D51810
    bool $SetIsSpecifiedActions$b__0(::Il2CppObject* o);
  }; // Newtonsoft.Json.Serialization.DefaultContractResolver/Newtonsoft.Json.Serialization.<>c__DisplayClass65_0
  #pragma pack(pop)
  static check_size<sizeof(DefaultContractResolver::$$c__DisplayClass65_0), 16 + sizeof(::System::Func_2<::Il2CppObject*, ::Il2CppObject*>*)> __Newtonsoft_Json_Serialization_DefaultContractResolver_$$c__DisplayClass65_0SizeCheck;
  static_assert(sizeof(DefaultContractResolver::$$c__DisplayClass65_0) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Newtonsoft::Json::Serialization::DefaultContractResolver::$$c__DisplayClass65_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Newtonsoft::Json::Serialization::DefaultContractResolver::$$c__DisplayClass65_0::$SetIsSpecifiedActions$b__0
// Il2CppName: <SetIsSpecifiedActions>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Newtonsoft::Json::Serialization::DefaultContractResolver::$$c__DisplayClass65_0::*)(::Il2CppObject*)>(&Newtonsoft::Json::Serialization::DefaultContractResolver::$$c__DisplayClass65_0::$SetIsSpecifiedActions$b__0)> {
  static const MethodInfo* get() {
    static auto* o = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Serialization::DefaultContractResolver::$$c__DisplayClass65_0*), "<SetIsSpecifiedActions>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{o});
  }
};
