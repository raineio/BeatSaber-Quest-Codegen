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
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`1<TResult>
  template<typename TResult>
  class Func_1;
}
// Completed forward declares
// Type namespace: System.Threading
namespace System::Threading {
  // Forward declaring type: LazyInitializer
  class LazyInitializer;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(System::Threading::LazyInitializer);
DEFINE_IL2CPP_ARG_TYPE(System::Threading::LazyInitializer*, "System.Threading", "LazyInitializer");
// Type namespace: System.Threading
namespace System::Threading {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Threading.LazyInitializer
  // [TokenAttribute] Offset: FFFFFFFF
  class LazyInitializer : public ::Il2CppObject {
    public:
    // static public T EnsureInitialized(ref T target, System.Func`1<T> valueFactory)
    // Offset: 0xFFFFFFFF
    template<class T>
    static T EnsureInitialized(ByRef<T> target, System::Func_1<T>* valueFactory) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Threading::LazyInitializer::EnsureInitialized");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("System.Threading", "LazyInitializer", "EnsureInitialized", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(target), ::il2cpp_utils::ExtractType(valueFactory)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodThrow<T, false>(static_cast<Il2CppObject*>(nullptr), ___generic__method, byref(target), valueFactory);
    }
    // static private T EnsureInitializedCore(ref T target, System.Func`1<T> valueFactory)
    // Offset: 0xFFFFFFFF
    template<class T>
    static T EnsureInitializedCore(ByRef<T> target, System::Func_1<T>* valueFactory) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Threading::LazyInitializer::EnsureInitializedCore");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("System.Threading", "LazyInitializer", "EnsureInitializedCore", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(target), ::il2cpp_utils::ExtractType(valueFactory)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodThrow<T, false>(static_cast<Il2CppObject*>(nullptr), ___generic__method, byref(target), valueFactory);
    }
  }; // System.Threading.LazyInitializer
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Threading::LazyInitializer::EnsureInitialized
// Il2CppName: EnsureInitialized
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: System::Threading::LazyInitializer::EnsureInitializedCore
// Il2CppName: EnsureInitializedCore
// Cannot write MetadataGetter for generic methods!
