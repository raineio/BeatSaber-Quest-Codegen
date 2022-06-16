// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Object
  class Object;
  // Forward declaring type: Component
  class Component;
  // Forward declaring type: GameObject
  class GameObject;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: EssentialHelpers
  class EssentialHelpers;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::EssentialHelpers);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::EssentialHelpers*, "", "EssentialHelpers");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: EssentialHelpers
  // [TokenAttribute] Offset: FFFFFFFF
  class EssentialHelpers : public ::Il2CppObject {
    public:
    // static public System.Double get_CurrentTimeStamp()
    // Offset: 0x15A25D4
    static double get_CurrentTimeStamp();
    // static public System.Void SafeDestroy(UnityEngine.Object obj)
    // Offset: 0x15A2698
    static void SafeDestroy(::UnityEngine::Object* obj);
    // static public T GetOrAddComponent(UnityEngine.GameObject go)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class T>
    static T GetOrAddComponent(::UnityEngine::GameObject* go) {
      static_assert(std::is_convertible_v<T, ::UnityEngine::Component*>);
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::EssentialHelpers::GetOrAddComponent");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("", "EssentialHelpers", "GetOrAddComponent", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(go)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<T, false>(static_cast<Il2CppObject*>(nullptr), ___generic__method, go);
    }
  }; // EssentialHelpers
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::EssentialHelpers::get_CurrentTimeStamp
// Il2CppName: get_CurrentTimeStamp
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double (*)()>(&GlobalNamespace::EssentialHelpers::get_CurrentTimeStamp)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EssentialHelpers*), "get_CurrentTimeStamp", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::EssentialHelpers::SafeDestroy
// Il2CppName: SafeDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Object*)>(&GlobalNamespace::EssentialHelpers::SafeDestroy)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("UnityEngine", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EssentialHelpers*), "SafeDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::EssentialHelpers::GetOrAddComponent
// Il2CppName: GetOrAddComponent
// Cannot write MetadataGetter for generic methods!
