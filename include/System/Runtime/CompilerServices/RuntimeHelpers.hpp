// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Array
  class Array;
  // Forward declaring type: IntPtr
  struct IntPtr;
  // Forward declaring type: RuntimeFieldHandle
  struct RuntimeFieldHandle;
}
// Completed forward declares
// Type namespace: System.Runtime.CompilerServices
namespace System::Runtime::CompilerServices {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.CompilerServices.RuntimeHelpers
  class RuntimeHelpers : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: RuntimeHelpers
    RuntimeHelpers() noexcept {}
    // static private System.Void InitializeArray(System.Array array, System.IntPtr fldHandle)
    // Offset: 0x141CA40
    static void InitializeArray(System::Array* array, System::IntPtr fldHandle);
    // static public System.Void InitializeArray(System.Array array, System.RuntimeFieldHandle fldHandle)
    // Offset: 0x141CA44
    static void InitializeArray(System::Array* array, System::RuntimeFieldHandle fldHandle);
    // static public System.Int32 get_OffsetToStringData()
    // Offset: 0x141CAE0
    static int get_OffsetToStringData();
    // static public System.Int32 GetHashCode(System.Object o)
    // Offset: 0x141CAE4
    static int GetHashCode(::Il2CppObject* o);
    // static public System.Void PrepareConstrainedRegions()
    // Offset: 0x141CAEC
    static void PrepareConstrainedRegions();
    // static public System.Boolean IsReferenceOrContainsReferences()
    // Offset: 0xFFFFFFFF
    template<class T>
    static bool IsReferenceOrContainsReferences() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Runtime::CompilerServices::RuntimeHelpers::IsReferenceOrContainsReferences");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("System.Runtime.CompilerServices", "RuntimeHelpers", "IsReferenceOrContainsReferences", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodThrow<bool, false>(static_cast<Il2CppClass*>(nullptr), ___generic__method);
    }
  }; // System.Runtime.CompilerServices.RuntimeHelpers
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::CompilerServices::RuntimeHelpers*, "System.Runtime.CompilerServices", "RuntimeHelpers");
// Writing MetadataGetter for method: System::Runtime::CompilerServices::RuntimeHelpers::InitializeArray
// Il2CppName: InitializeArray
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::Array*, System::IntPtr)>(&System::Runtime::CompilerServices::RuntimeHelpers::InitializeArray)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::CompilerServices::RuntimeHelpers*), "InitializeArray", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Array*>(), ::il2cpp_utils::ExtractIndependentType<System::IntPtr>()});
  }
};
// Writing MetadataGetter for method: System::Runtime::CompilerServices::RuntimeHelpers::InitializeArray
// Il2CppName: InitializeArray
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::Array*, System::RuntimeFieldHandle)>(&System::Runtime::CompilerServices::RuntimeHelpers::InitializeArray)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::CompilerServices::RuntimeHelpers*), "InitializeArray", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Array*>(), ::il2cpp_utils::ExtractIndependentType<System::RuntimeFieldHandle>()});
  }
};
// Writing MetadataGetter for method: System::Runtime::CompilerServices::RuntimeHelpers::get_OffsetToStringData
// Il2CppName: get_OffsetToStringData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)()>(&System::Runtime::CompilerServices::RuntimeHelpers::get_OffsetToStringData)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::CompilerServices::RuntimeHelpers*), "get_OffsetToStringData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::CompilerServices::RuntimeHelpers::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::Il2CppObject*)>(&System::Runtime::CompilerServices::RuntimeHelpers::GetHashCode)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::CompilerServices::RuntimeHelpers*), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppObject*>()});
  }
};
// Writing MetadataGetter for method: System::Runtime::CompilerServices::RuntimeHelpers::PrepareConstrainedRegions
// Il2CppName: PrepareConstrainedRegions
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Runtime::CompilerServices::RuntimeHelpers::PrepareConstrainedRegions)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::CompilerServices::RuntimeHelpers*), "PrepareConstrainedRegions", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::CompilerServices::RuntimeHelpers::IsReferenceOrContainsReferences
// Il2CppName: IsReferenceOrContainsReferences
// Cannot write MetadataGetter for generic methods!
