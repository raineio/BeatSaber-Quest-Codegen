// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Newtonsoft.Json.Utilities.ReflectionObject
#include "Newtonsoft/Json/Utilities/ReflectionObject.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Newtonsoft::Json::Utilities
namespace Newtonsoft::Json::Utilities {
  // Forward declaring type: MethodCall`2<T, TResult>
  template<typename T, typename TResult>
  class MethodCall_2;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Newtonsoft::Json::Utilities::ReflectionObject::$$c__DisplayClass13_2);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Utilities::ReflectionObject::$$c__DisplayClass13_2*, "Newtonsoft.Json.Utilities", "ReflectionObject/<>c__DisplayClass13_2");
// Type namespace: Newtonsoft.Json.Utilities
namespace Newtonsoft::Json::Utilities {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: Newtonsoft.Json.Utilities.ReflectionObject/Newtonsoft.Json.Utilities.<>c__DisplayClass13_2
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class ReflectionObject::$$c__DisplayClass13_2 : public ::Il2CppObject {
    public:
    public:
    // public Newtonsoft.Json.Utilities.MethodCall`2<System.Object,System.Object> call
    // Size: 0x8
    // Offset: 0x10
    ::Newtonsoft::Json::Utilities::MethodCall_2<::Il2CppObject*, ::Il2CppObject*>* call;
    // Field size check
    static_assert(sizeof(::Newtonsoft::Json::Utilities::MethodCall_2<::Il2CppObject*, ::Il2CppObject*>*) == 0x8);
    public:
    // Creating conversion operator: operator ::Newtonsoft::Json::Utilities::MethodCall_2<::Il2CppObject*, ::Il2CppObject*>*
    constexpr operator ::Newtonsoft::Json::Utilities::MethodCall_2<::Il2CppObject*, ::Il2CppObject*>*() const noexcept {
      return call;
    }
    // Get instance field reference: public Newtonsoft.Json.Utilities.MethodCall`2<System.Object,System.Object> call
    [[deprecated("Use field access instead!")]] ::Newtonsoft::Json::Utilities::MethodCall_2<::Il2CppObject*, ::Il2CppObject*>*& dyn_call();
    // public System.Void .ctor()
    // Offset: 0x2094198
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ReflectionObject::$$c__DisplayClass13_2* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Newtonsoft::Json::Utilities::ReflectionObject::$$c__DisplayClass13_2::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ReflectionObject::$$c__DisplayClass13_2*, creationType>()));
    }
    // System.Void <Create>b__2(System.Object target, System.Object arg)
    // Offset: 0x2094458
    void $Create$b__2(::Il2CppObject* target, ::Il2CppObject* arg);
  }; // Newtonsoft.Json.Utilities.ReflectionObject/Newtonsoft.Json.Utilities.<>c__DisplayClass13_2
  #pragma pack(pop)
  static check_size<sizeof(ReflectionObject::$$c__DisplayClass13_2), 16 + sizeof(::Newtonsoft::Json::Utilities::MethodCall_2<::Il2CppObject*, ::Il2CppObject*>*)> __Newtonsoft_Json_Utilities_ReflectionObject_$$c__DisplayClass13_2SizeCheck;
  static_assert(sizeof(ReflectionObject::$$c__DisplayClass13_2) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Newtonsoft::Json::Utilities::ReflectionObject::$$c__DisplayClass13_2::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Newtonsoft::Json::Utilities::ReflectionObject::$$c__DisplayClass13_2::$Create$b__2
// Il2CppName: <Create>b__2
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Newtonsoft::Json::Utilities::ReflectionObject::$$c__DisplayClass13_2::*)(::Il2CppObject*, ::Il2CppObject*)>(&Newtonsoft::Json::Utilities::ReflectionObject::$$c__DisplayClass13_2::$Create$b__2)> {
  static const MethodInfo* get() {
    static auto* target = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* arg = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Utilities::ReflectionObject::$$c__DisplayClass13_2*), "<Create>b__2", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{target, arg});
  }
};
