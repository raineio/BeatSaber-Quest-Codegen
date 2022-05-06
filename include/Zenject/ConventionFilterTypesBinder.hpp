// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include <initializer_list>
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Zenject.ConventionAssemblySelectionBinder
#include "Zenject/ConventionAssemblySelectionBinder.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: ConventionBindInfo
  class ConventionBindInfo;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
  // Forward declaring type: Attribute
  class Attribute;
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Forward declaring namespace: System::Text::RegularExpressions
namespace System::Text::RegularExpressions {
  // Forward declaring type: RegexOptions
  struct RegexOptions;
  // Forward declaring type: Regex
  class Regex;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Forward declaring type: ConventionFilterTypesBinder
  class ConventionFilterTypesBinder;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Zenject::ConventionFilterTypesBinder);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::ConventionFilterTypesBinder*, "Zenject", "ConventionFilterTypesBinder");
// Type namespace: Zenject
namespace Zenject {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.ConventionFilterTypesBinder
  // [TokenAttribute] Offset: FFFFFFFF
  // [NoReflectionBakingAttribute] Offset: FFFFFFFF
  class ConventionFilterTypesBinder : public ::Zenject::ConventionAssemblySelectionBinder {
    public:
    // Nested type: ::Zenject::ConventionFilterTypesBinder::$$c__DisplayClass2_0
    class $$c__DisplayClass2_0;
    // Nested type: ::Zenject::ConventionFilterTypesBinder::$$c__DisplayClass4_0
    class $$c__DisplayClass4_0;
    // Nested type: ::Zenject::ConventionFilterTypesBinder::$$c__DisplayClass6_0
    class $$c__DisplayClass6_0;
    // Nested type: ::Zenject::ConventionFilterTypesBinder::$$c__DisplayClass8_0
    class $$c__DisplayClass8_0;
    // Nested type: ::Zenject::ConventionFilterTypesBinder::$$c__DisplayClass9_0_1<T>
    template<typename T>
    class $$c__DisplayClass9_0_1;
    // Nested type: ::Zenject::ConventionFilterTypesBinder::$$c__DisplayClass13_0
    class $$c__DisplayClass13_0;
    // Nested type: ::Zenject::ConventionFilterTypesBinder::$$c__DisplayClass13_1
    class $$c__DisplayClass13_1;
    // Nested type: ::Zenject::ConventionFilterTypesBinder::$$c__DisplayClass14_0
    class $$c__DisplayClass14_0;
    // Nested type: ::Zenject::ConventionFilterTypesBinder::$$c__DisplayClass15_0
    class $$c__DisplayClass15_0;
    // Nested type: ::Zenject::ConventionFilterTypesBinder::$$c__DisplayClass18_0
    class $$c__DisplayClass18_0;
    // public Zenject.ConventionFilterTypesBinder DerivingFromOrEqual()
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class T>
    ::Zenject::ConventionFilterTypesBinder* DerivingFromOrEqual() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::ConventionFilterTypesBinder::DerivingFromOrEqual");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "DerivingFromOrEqual", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<::Zenject::ConventionFilterTypesBinder*, false>(this, ___generic__method);
    }
    // public Zenject.ConventionFilterTypesBinder DerivingFromOrEqual(System.Type parentType)
    // Offset: 0x17728C4
    ::Zenject::ConventionFilterTypesBinder* DerivingFromOrEqual(::System::Type* parentType);
    // public Zenject.ConventionFilterTypesBinder DerivingFrom()
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class T>
    ::Zenject::ConventionFilterTypesBinder* DerivingFrom() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::ConventionFilterTypesBinder::DerivingFrom");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "DerivingFrom", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<::Zenject::ConventionFilterTypesBinder*, false>(this, ___generic__method);
    }
    // public Zenject.ConventionFilterTypesBinder DerivingFrom(System.Type parentType)
    // Offset: 0x177298C
    ::Zenject::ConventionFilterTypesBinder* DerivingFrom(::System::Type* parentType);
    // public Zenject.ConventionFilterTypesBinder WithAttribute()
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class T>
    ::Zenject::ConventionFilterTypesBinder* WithAttribute() {
      static_assert(std::is_convertible_v<T, ::System::Attribute*>);
      static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::ConventionFilterTypesBinder::WithAttribute");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "WithAttribute", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<::Zenject::ConventionFilterTypesBinder*, false>(this, ___generic__method);
    }
    // public Zenject.ConventionFilterTypesBinder WithAttribute(System.Type attribute)
    // Offset: 0x1772A54
    ::Zenject::ConventionFilterTypesBinder* WithAttribute(::System::Type* attribute);
    // public Zenject.ConventionFilterTypesBinder WithoutAttribute()
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class T>
    ::Zenject::ConventionFilterTypesBinder* WithoutAttribute() {
      static_assert(std::is_convertible_v<T, ::System::Attribute*>);
      static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::ConventionFilterTypesBinder::WithoutAttribute");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "WithoutAttribute", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<::Zenject::ConventionFilterTypesBinder*, false>(this, ___generic__method);
    }
    // public Zenject.ConventionFilterTypesBinder WithoutAttribute(System.Type attribute)
    // Offset: 0x1772B58
    ::Zenject::ConventionFilterTypesBinder* WithoutAttribute(::System::Type* attribute);
    // public Zenject.ConventionFilterTypesBinder WithAttributeWhere(System.Func`2<T,System.Boolean> predicate)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class T>
    ::Zenject::ConventionFilterTypesBinder* WithAttributeWhere(::System::Func_2<T, bool>* predicate) {
      static_assert(std::is_convertible_v<T, ::System::Attribute*>);
      static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::ConventionFilterTypesBinder::WithAttributeWhere");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "WithAttributeWhere", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(predicate)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<::Zenject::ConventionFilterTypesBinder*, false>(this, ___generic__method, predicate);
    }
    // public Zenject.ConventionFilterTypesBinder Where(System.Func`2<System.Type,System.Boolean> predicate)
    // Offset: 0x1772C5C
    ::Zenject::ConventionFilterTypesBinder* Where(::System::Func_2<::System::Type*, bool>* predicate);
    // public Zenject.ConventionFilterTypesBinder InNamespace(System.String ns)
    // Offset: 0x1772C8C
    ::Zenject::ConventionFilterTypesBinder* InNamespace(::StringW ns);
    // public Zenject.ConventionFilterTypesBinder InNamespaces(params System.String[] namespaces)
    // Offset: 0x1772D3C
    ::Zenject::ConventionFilterTypesBinder* InNamespaces(::ArrayW<::StringW> namespaces);
    // public Zenject.ConventionFilterTypesBinder InNamespaces(System.Collections.Generic.IEnumerable`1<System.String> namespaces)
    // Offset: 0x1772D40
    ::Zenject::ConventionFilterTypesBinder* InNamespaces(::System::Collections::Generic::IEnumerable_1<::StringW>* namespaces);
    // public Zenject.ConventionFilterTypesBinder WithSuffix(System.String suffix)
    // Offset: 0x1772E08
    ::Zenject::ConventionFilterTypesBinder* WithSuffix(::StringW suffix);
    // public Zenject.ConventionFilterTypesBinder WithPrefix(System.String prefix)
    // Offset: 0x1772ED0
    ::Zenject::ConventionFilterTypesBinder* WithPrefix(::StringW prefix);
    // public Zenject.ConventionFilterTypesBinder MatchingRegex(System.String pattern)
    // Offset: 0x1772F98
    ::Zenject::ConventionFilterTypesBinder* MatchingRegex(::StringW pattern);
    // public Zenject.ConventionFilterTypesBinder MatchingRegex(System.String pattern, System.Text.RegularExpressions.RegexOptions options)
    // Offset: 0x1772FA0
    ::Zenject::ConventionFilterTypesBinder* MatchingRegex(::StringW pattern, ::System::Text::RegularExpressions::RegexOptions options);
    // public Zenject.ConventionFilterTypesBinder MatchingRegex(System.Text.RegularExpressions.Regex regex)
    // Offset: 0x177301C
    ::Zenject::ConventionFilterTypesBinder* MatchingRegex(::System::Text::RegularExpressions::Regex* regex);
    // static private System.Boolean IsInNamespace(System.Type type, System.String requiredNs)
    // Offset: 0x17730E4
    static bool IsInNamespace(::System::Type* type, ::StringW requiredNs);
    // public System.Void .ctor(Zenject.ConventionBindInfo bindInfo)
    // Offset: 0x1772898
    // Implemented from: Zenject.ConventionAssemblySelectionBinder
    // Base method: System.Void ConventionAssemblySelectionBinder::.ctor(Zenject.ConventionBindInfo bindInfo)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ConventionFilterTypesBinder* New_ctor(::Zenject::ConventionBindInfo* bindInfo) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::ConventionFilterTypesBinder::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ConventionFilterTypesBinder*, creationType>(bindInfo)));
    }
  }; // Zenject.ConventionFilterTypesBinder
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Zenject::ConventionFilterTypesBinder::DerivingFromOrEqual
// Il2CppName: DerivingFromOrEqual
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: Zenject::ConventionFilterTypesBinder::DerivingFromOrEqual
// Il2CppName: DerivingFromOrEqual
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::ConventionFilterTypesBinder* (Zenject::ConventionFilterTypesBinder::*)(::System::Type*)>(&Zenject::ConventionFilterTypesBinder::DerivingFromOrEqual)> {
  static const MethodInfo* get() {
    static auto* parentType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::ConventionFilterTypesBinder*), "DerivingFromOrEqual", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{parentType});
  }
};
// Writing MetadataGetter for method: Zenject::ConventionFilterTypesBinder::DerivingFrom
// Il2CppName: DerivingFrom
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: Zenject::ConventionFilterTypesBinder::DerivingFrom
// Il2CppName: DerivingFrom
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::ConventionFilterTypesBinder* (Zenject::ConventionFilterTypesBinder::*)(::System::Type*)>(&Zenject::ConventionFilterTypesBinder::DerivingFrom)> {
  static const MethodInfo* get() {
    static auto* parentType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::ConventionFilterTypesBinder*), "DerivingFrom", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{parentType});
  }
};
// Writing MetadataGetter for method: Zenject::ConventionFilterTypesBinder::WithAttribute
// Il2CppName: WithAttribute
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: Zenject::ConventionFilterTypesBinder::WithAttribute
// Il2CppName: WithAttribute
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::ConventionFilterTypesBinder* (Zenject::ConventionFilterTypesBinder::*)(::System::Type*)>(&Zenject::ConventionFilterTypesBinder::WithAttribute)> {
  static const MethodInfo* get() {
    static auto* attribute = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::ConventionFilterTypesBinder*), "WithAttribute", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{attribute});
  }
};
// Writing MetadataGetter for method: Zenject::ConventionFilterTypesBinder::WithoutAttribute
// Il2CppName: WithoutAttribute
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: Zenject::ConventionFilterTypesBinder::WithoutAttribute
// Il2CppName: WithoutAttribute
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::ConventionFilterTypesBinder* (Zenject::ConventionFilterTypesBinder::*)(::System::Type*)>(&Zenject::ConventionFilterTypesBinder::WithoutAttribute)> {
  static const MethodInfo* get() {
    static auto* attribute = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::ConventionFilterTypesBinder*), "WithoutAttribute", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{attribute});
  }
};
// Writing MetadataGetter for method: Zenject::ConventionFilterTypesBinder::WithAttributeWhere
// Il2CppName: WithAttributeWhere
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: Zenject::ConventionFilterTypesBinder::Where
// Il2CppName: Where
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::ConventionFilterTypesBinder* (Zenject::ConventionFilterTypesBinder::*)(::System::Func_2<::System::Type*, bool>*)>(&Zenject::ConventionFilterTypesBinder::Where)> {
  static const MethodInfo* get() {
    static auto* predicate = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Func`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Type"), ::il2cpp_utils::GetClassFromName("System", "Boolean")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::ConventionFilterTypesBinder*), "Where", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{predicate});
  }
};
// Writing MetadataGetter for method: Zenject::ConventionFilterTypesBinder::InNamespace
// Il2CppName: InNamespace
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::ConventionFilterTypesBinder* (Zenject::ConventionFilterTypesBinder::*)(::StringW)>(&Zenject::ConventionFilterTypesBinder::InNamespace)> {
  static const MethodInfo* get() {
    static auto* ns = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::ConventionFilterTypesBinder*), "InNamespace", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ns});
  }
};
// Writing MetadataGetter for method: Zenject::ConventionFilterTypesBinder::InNamespaces
// Il2CppName: InNamespaces
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::ConventionFilterTypesBinder* (Zenject::ConventionFilterTypesBinder::*)(::ArrayW<::StringW>)>(&Zenject::ConventionFilterTypesBinder::InNamespaces)> {
  static const MethodInfo* get() {
    static auto* namespaces = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "String"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::ConventionFilterTypesBinder*), "InNamespaces", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{namespaces});
  }
};
// Writing MetadataGetter for method: Zenject::ConventionFilterTypesBinder::InNamespaces
// Il2CppName: InNamespaces
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::ConventionFilterTypesBinder* (Zenject::ConventionFilterTypesBinder::*)(::System::Collections::Generic::IEnumerable_1<::StringW>*)>(&Zenject::ConventionFilterTypesBinder::InNamespaces)> {
  static const MethodInfo* get() {
    static auto* namespaces = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IEnumerable`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "String")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::ConventionFilterTypesBinder*), "InNamespaces", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{namespaces});
  }
};
// Writing MetadataGetter for method: Zenject::ConventionFilterTypesBinder::WithSuffix
// Il2CppName: WithSuffix
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::ConventionFilterTypesBinder* (Zenject::ConventionFilterTypesBinder::*)(::StringW)>(&Zenject::ConventionFilterTypesBinder::WithSuffix)> {
  static const MethodInfo* get() {
    static auto* suffix = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::ConventionFilterTypesBinder*), "WithSuffix", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{suffix});
  }
};
// Writing MetadataGetter for method: Zenject::ConventionFilterTypesBinder::WithPrefix
// Il2CppName: WithPrefix
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::ConventionFilterTypesBinder* (Zenject::ConventionFilterTypesBinder::*)(::StringW)>(&Zenject::ConventionFilterTypesBinder::WithPrefix)> {
  static const MethodInfo* get() {
    static auto* prefix = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::ConventionFilterTypesBinder*), "WithPrefix", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{prefix});
  }
};
// Writing MetadataGetter for method: Zenject::ConventionFilterTypesBinder::MatchingRegex
// Il2CppName: MatchingRegex
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::ConventionFilterTypesBinder* (Zenject::ConventionFilterTypesBinder::*)(::StringW)>(&Zenject::ConventionFilterTypesBinder::MatchingRegex)> {
  static const MethodInfo* get() {
    static auto* pattern = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::ConventionFilterTypesBinder*), "MatchingRegex", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pattern});
  }
};
// Writing MetadataGetter for method: Zenject::ConventionFilterTypesBinder::MatchingRegex
// Il2CppName: MatchingRegex
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::ConventionFilterTypesBinder* (Zenject::ConventionFilterTypesBinder::*)(::StringW, ::System::Text::RegularExpressions::RegexOptions)>(&Zenject::ConventionFilterTypesBinder::MatchingRegex)> {
  static const MethodInfo* get() {
    static auto* pattern = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* options = &::il2cpp_utils::GetClassFromName("System.Text.RegularExpressions", "RegexOptions")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::ConventionFilterTypesBinder*), "MatchingRegex", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pattern, options});
  }
};
// Writing MetadataGetter for method: Zenject::ConventionFilterTypesBinder::MatchingRegex
// Il2CppName: MatchingRegex
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::ConventionFilterTypesBinder* (Zenject::ConventionFilterTypesBinder::*)(::System::Text::RegularExpressions::Regex*)>(&Zenject::ConventionFilterTypesBinder::MatchingRegex)> {
  static const MethodInfo* get() {
    static auto* regex = &::il2cpp_utils::GetClassFromName("System.Text.RegularExpressions", "Regex")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::ConventionFilterTypesBinder*), "MatchingRegex", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{regex});
  }
};
// Writing MetadataGetter for method: Zenject::ConventionFilterTypesBinder::IsInNamespace
// Il2CppName: IsInNamespace
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Type*, ::StringW)>(&Zenject::ConventionFilterTypesBinder::IsInNamespace)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* requiredNs = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::ConventionFilterTypesBinder*), "IsInNamespace", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type, requiredNs});
  }
};
// Writing MetadataGetter for method: Zenject::ConventionFilterTypesBinder::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
