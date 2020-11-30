// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: StringBuilder
  class StringBuilder;
}
// Completed forward declares
// Type namespace: System.Net.Http.Headers
namespace System::Net::Http::Headers {
  // Autogenerated type: System.Net.Http.Headers.CollectionExtensions
  class CollectionExtensions : public ::Il2CppObject {
    public:
    // static public System.Boolean SequenceEqual(System.Collections.Generic.List`1<TSource> first, System.Collections.Generic.List`1<TSource> second)
    // Offset: 0xFFFFFFFF
    template<class TSource>
    static bool SequenceEqual(System::Collections::Generic::List_1<TSource>* first, System::Collections::Generic::List_1<TSource>* second) {
      static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Net::Http::Headers").WithContext("CollectionExtensions").WithContext("SequenceEqual");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("System.Net.Http.Headers", "CollectionExtensions", il2cpp_utils::NoArgClass<bool>(), "SequenceEqual", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSource>::get()}, ::il2cpp_utils::ExtractTypes(first, second))));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSource>::get()}));
      return ::il2cpp_utils::RunMethodThrow<bool, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, first, second);
    }
    // static public System.String ToString(System.Collections.Generic.List`1<T> list)
    // Offset: 0xFFFFFFFF
    template<class T>
    static ::Il2CppString* ToString(System::Collections::Generic::List_1<T>* list) {
      static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Net::Http::Headers").WithContext("CollectionExtensions").WithContext("ToString");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("System.Net.Http.Headers", "CollectionExtensions", il2cpp_utils::NoArgClass<::Il2CppString*>(), "ToString", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::il2cpp_utils::ExtractTypes(list))));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodThrow<::Il2CppString*, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, list);
    }
    // static public System.Void ToStringBuilder(System.Collections.Generic.List`1<T> list, System.Text.StringBuilder sb)
    // Offset: 0xFFFFFFFF
    template<class T>
    static void ToStringBuilder(System::Collections::Generic::List_1<T>* list, System::Text::StringBuilder* sb) {
      static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Net::Http::Headers").WithContext("CollectionExtensions").WithContext("ToStringBuilder");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("System.Net.Http.Headers", "CollectionExtensions", il2cpp_utils::NoArgClass<void>(), "ToStringBuilder", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::il2cpp_utils::ExtractTypes(list, sb))));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      ::il2cpp_utils::RunMethodThrow<void, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, list, sb);
    }
  }; // System.Net.Http.Headers.CollectionExtensions
}
DEFINE_IL2CPP_ARG_TYPE(System::Net::Http::Headers::CollectionExtensions*, "System.Net.Http.Headers", "CollectionExtensions");
#pragma pack(pop)