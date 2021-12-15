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
#include "extern/beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: BindingFlags
  struct BindingFlags;
  // Forward declaring type: Binder
  class Binder;
}
// Forward declaring namespace: System::Globalization
namespace System::Globalization {
  // Forward declaring type: CultureInfo
  class CultureInfo;
}
// Completed forward declares
// Type namespace: System
namespace System {
  // Forward declaring type: Activator
  class Activator;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(System::Activator);
DEFINE_IL2CPP_ARG_TYPE(System::Activator*, "System", "Activator");
// Type namespace: System
namespace System {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Activator
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComDefaultInterfaceAttribute] Offset: E9D1FC
  // [ClassInterfaceAttribute] Offset: E9D1FC
  // [ComVisibleAttribute] Offset: E9D1FC
  class Activator : public ::Il2CppObject {
    public:
    // static public System.Object CreateInstance(System.Type type, System.Reflection.BindingFlags bindingAttr, System.Reflection.Binder binder, System.Object[] args, System.Globalization.CultureInfo culture)
    // Offset: 0x1C95F98
    static ::Il2CppObject* CreateInstance(System::Type* type, System::Reflection::BindingFlags bindingAttr, System::Reflection::Binder* binder, ::ArrayW<::Il2CppObject*> args, System::Globalization::CultureInfo* culture);
    // static public System.Object CreateInstance(System.Type type, System.Reflection.BindingFlags bindingAttr, System.Reflection.Binder binder, System.Object[] args, System.Globalization.CultureInfo culture, System.Object[] activationAttributes)
    // Offset: 0x1C95FA0
    static ::Il2CppObject* CreateInstance(System::Type* type, System::Reflection::BindingFlags bindingAttr, System::Reflection::Binder* binder, ::ArrayW<::Il2CppObject*> args, System::Globalization::CultureInfo* culture, ::ArrayW<::Il2CppObject*> activationAttributes);
    // static public System.Object CreateInstance(System.Type type, System.Object[] args)
    // Offset: 0x1C961C4
    static ::Il2CppObject* CreateInstance(System::Type* type, ::ArrayW<::Il2CppObject*> args);
    // static public System.Object CreateInstance(System.Type type)
    // Offset: 0x1C853F4
    static ::Il2CppObject* CreateInstance(System::Type* type);
    // static public System.Object CreateInstance(System.Type type, System.Boolean nonPublic)
    // Offset: 0x1C961DC
    static ::Il2CppObject* CreateInstance(System::Type* type, bool nonPublic);
    // static public T CreateInstance()
    // Offset: 0xFFFFFFFF
    template<class T>
    static T CreateInstance() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Activator::CreateInstance");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("System", "Activator", "CreateInstance", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodThrow<T, false>(static_cast<Il2CppObject*>(nullptr), ___generic__method);
    }
  }; // System.Activator
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Activator::CreateInstance
// Il2CppName: CreateInstance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (*)(System::Type*, System::Reflection::BindingFlags, System::Reflection::Binder*, ::ArrayW<::Il2CppObject*>, System::Globalization::CultureInfo*)>(&System::Activator::CreateInstance)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* bindingAttr = &::il2cpp_utils::GetClassFromName("System.Reflection", "BindingFlags")->byval_arg;
    static auto* binder = &::il2cpp_utils::GetClassFromName("System.Reflection", "Binder")->byval_arg;
    static auto* args = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    static auto* culture = &::il2cpp_utils::GetClassFromName("System.Globalization", "CultureInfo")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Activator*), "CreateInstance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type, bindingAttr, binder, args, culture});
  }
};
// Writing MetadataGetter for method: System::Activator::CreateInstance
// Il2CppName: CreateInstance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (*)(System::Type*, System::Reflection::BindingFlags, System::Reflection::Binder*, ::ArrayW<::Il2CppObject*>, System::Globalization::CultureInfo*, ::ArrayW<::Il2CppObject*>)>(&System::Activator::CreateInstance)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* bindingAttr = &::il2cpp_utils::GetClassFromName("System.Reflection", "BindingFlags")->byval_arg;
    static auto* binder = &::il2cpp_utils::GetClassFromName("System.Reflection", "Binder")->byval_arg;
    static auto* args = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    static auto* culture = &::il2cpp_utils::GetClassFromName("System.Globalization", "CultureInfo")->byval_arg;
    static auto* activationAttributes = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Activator*), "CreateInstance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type, bindingAttr, binder, args, culture, activationAttributes});
  }
};
// Writing MetadataGetter for method: System::Activator::CreateInstance
// Il2CppName: CreateInstance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (*)(System::Type*, ::ArrayW<::Il2CppObject*>)>(&System::Activator::CreateInstance)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* args = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Activator*), "CreateInstance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type, args});
  }
};
// Writing MetadataGetter for method: System::Activator::CreateInstance
// Il2CppName: CreateInstance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (*)(System::Type*)>(&System::Activator::CreateInstance)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Activator*), "CreateInstance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type});
  }
};
// Writing MetadataGetter for method: System::Activator::CreateInstance
// Il2CppName: CreateInstance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (*)(System::Type*, bool)>(&System::Activator::CreateInstance)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* nonPublic = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Activator*), "CreateInstance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type, nonPublic});
  }
};
// Writing MetadataGetter for method: System::Activator::CreateInstance
// Il2CppName: CreateInstance
// Cannot write MetadataGetter for generic methods!
