// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.SystemException
#include "System/SystemException.hpp"
// Including type: System.Threading.CancellationToken
#include "System/Threading/CancellationToken.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: SerializationInfo
  class SerializationInfo;
}
// Completed forward declares
// Type namespace: System
namespace System {
  // Forward declaring type: OperationCanceledException
  class OperationCanceledException;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(System::OperationCanceledException);
DEFINE_IL2CPP_ARG_TYPE(System::OperationCanceledException*, "System", "OperationCanceledException");
// Type namespace: System
namespace System {
  // Size: 0x90
  #pragma pack(push, 1)
  // Autogenerated type: System.OperationCanceledException
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: E9DAFC
  class OperationCanceledException : public System::SystemException {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // private System.Threading.CancellationToken _cancellationToken
    // Size: 0x8
    // Offset: 0x88
    System::Threading::CancellationToken cancellationToken;
    // Field size check
    static_assert(sizeof(System::Threading::CancellationToken) == 0x8);
    public:
    // Creating conversion operator: operator System::Threading::CancellationToken
    constexpr operator System::Threading::CancellationToken() const noexcept {
      return cancellationToken;
    }
    // Get instance field reference: private System.Threading.CancellationToken _cancellationToken
    System::Threading::CancellationToken& dyn__cancellationToken();
    // public System.Threading.CancellationToken get_CancellationToken()
    // Offset: 0x1E8A0A0
    System::Threading::CancellationToken get_CancellationToken();
    // private System.Void set_CancellationToken(System.Threading.CancellationToken value)
    // Offset: 0x1E8A0A8
    void set_CancellationToken(System::Threading::CancellationToken value);
    // public System.Void .ctor(System.Threading.CancellationToken token)
    // Offset: 0x1E8A158
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OperationCanceledException* New_ctor(System::Threading::CancellationToken token) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::OperationCanceledException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OperationCanceledException*, creationType>(token)));
    }
    // public System.Void .ctor(System.String message, System.Threading.CancellationToken token)
    // Offset: 0x1E8A180
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OperationCanceledException* New_ctor(::StringW message, System::Threading::CancellationToken token) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::OperationCanceledException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OperationCanceledException*, creationType>(message, token)));
    }
    // public System.Void .ctor()
    // Offset: 0x1E8A0B0
    // Implemented from: System.SystemException
    // Base method: System.Void SystemException::.ctor()
    // Base method: System.Void Exception::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OperationCanceledException* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::OperationCanceledException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OperationCanceledException*, creationType>()));
    }
    // public System.Void .ctor(System.String message)
    // Offset: 0x1E8A124
    // Implemented from: System.SystemException
    // Base method: System.Void SystemException::.ctor(System.String message)
    // Base method: System.Void Exception::.ctor(System.String message)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OperationCanceledException* New_ctor(::StringW message) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::OperationCanceledException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OperationCanceledException*, creationType>(message)));
    }
    // protected System.Void .ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x1E8A1C0
    // Implemented from: System.SystemException
    // Base method: System.Void SystemException::.ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Base method: System.Void Exception::.ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OperationCanceledException* New_ctor(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::OperationCanceledException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OperationCanceledException*, creationType>(info, context)));
    }
  }; // System.OperationCanceledException
  #pragma pack(pop)
  static check_size<sizeof(OperationCanceledException), 136 + sizeof(System::Threading::CancellationToken)> __System_OperationCanceledExceptionSizeCheck;
  static_assert(sizeof(OperationCanceledException) == 0x90);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::OperationCanceledException::get_CancellationToken
// Il2CppName: get_CancellationToken
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::CancellationToken (System::OperationCanceledException::*)()>(&System::OperationCanceledException::get_CancellationToken)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::OperationCanceledException*), "get_CancellationToken", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::OperationCanceledException::set_CancellationToken
// Il2CppName: set_CancellationToken
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::OperationCanceledException::*)(System::Threading::CancellationToken)>(&System::OperationCanceledException::set_CancellationToken)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System.Threading", "CancellationToken")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::OperationCanceledException*), "set_CancellationToken", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::OperationCanceledException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::OperationCanceledException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::OperationCanceledException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::OperationCanceledException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::OperationCanceledException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
