// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Runtime::CompilerServices
namespace System::Runtime::CompilerServices {
}
// Completed forward declares
// Type namespace: System.Runtime.CompilerServices
namespace System::Runtime::CompilerServices {
  // Forward declaring type: YieldAwaitable
  struct YieldAwaitable;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::CompilerServices::YieldAwaitable, "System.Runtime.CompilerServices", "YieldAwaitable");
// Type namespace: System.Runtime.CompilerServices
namespace System::Runtime::CompilerServices {
  // Size: 0x0
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: System.Runtime.CompilerServices.YieldAwaitable
  // [TokenAttribute] Offset: FFFFFFFF
  struct YieldAwaitable/*, public ::System::ValueType*/ {
    public:
    // Nested type: ::System::Runtime::CompilerServices::YieldAwaitable::YieldAwaiter
    struct YieldAwaiter;
    // Creating value type constructor for type: YieldAwaitable
    constexpr YieldAwaitable() noexcept {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: i_ValueType
    inline ::System::ValueType* i_ValueType() noexcept {
      return reinterpret_cast<::System::ValueType*>(this);
    }
    // public System.Runtime.CompilerServices.YieldAwaitable/System.Runtime.CompilerServices.YieldAwaiter GetAwaiter()
    // Offset: 0x1D79E18
    ::System::Runtime::CompilerServices::YieldAwaitable::YieldAwaiter GetAwaiter();
  }; // System.Runtime.CompilerServices.YieldAwaitable
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Runtime::CompilerServices::YieldAwaitable::GetAwaiter
// Il2CppName: GetAwaiter
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::CompilerServices::YieldAwaitable::YieldAwaiter (System::Runtime::CompilerServices::YieldAwaitable::*)()>(&System::Runtime::CompilerServices::YieldAwaitable::GetAwaiter)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::CompilerServices::YieldAwaitable), "GetAwaiter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
