// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Security.Principal.IIdentity
#include "System/Security/Principal/IIdentity.hpp"
// Including type: System.Runtime.Serialization.StreamingContext
#include "System/Runtime/Serialization/StreamingContext.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Security::Claims
namespace System::Security::Claims {
  // Forward declaring type: Claim
  class Claim;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Forward declaring namespace: System::Collections::ObjectModel
namespace System::Collections::ObjectModel {
  // Forward declaring type: Collection`1<T>
  template<typename T>
  class Collection_1;
}
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: SerializationInfo
  class SerializationInfo;
}
// Completed forward declares
// Type namespace: System.Security.Claims
namespace System::Security::Claims {
  // Forward declaring type: ClaimsIdentity
  class ClaimsIdentity;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(System::Security::Claims::ClaimsIdentity);
DEFINE_IL2CPP_ARG_TYPE(System::Security::Claims::ClaimsIdentity*, "System.Security.Claims", "ClaimsIdentity");
// Type namespace: System.Security.Claims
namespace System::Security::Claims {
  // Size: 0x78
  #pragma pack(push, 1)
  // Autogenerated type: System.Security.Claims.ClaimsIdentity
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: EA06A0
  class ClaimsIdentity : public ::Il2CppObject/*, public System::Security::Principal::IIdentity*/ {
    public:
    // Nested type: System::Security::Claims::ClaimsIdentity::$get_Claims$d__51
    class $get_Claims$d__51;
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // private System.Byte[] m_userSerializationData
    // Size: 0x8
    // Offset: 0x10
    ::ArrayW<uint8_t> m_userSerializationData;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    // private System.Collections.Generic.List`1<System.Security.Claims.Claim> m_instanceClaims
    // Size: 0x8
    // Offset: 0x18
    System::Collections::Generic::List_1<System::Security::Claims::Claim*>* m_instanceClaims;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<System::Security::Claims::Claim*>*) == 0x8);
    // private System.Collections.ObjectModel.Collection`1<System.Collections.Generic.IEnumerable`1<System.Security.Claims.Claim>> m_externalClaims
    // Size: 0x8
    // Offset: 0x20
    System::Collections::ObjectModel::Collection_1<System::Collections::Generic::IEnumerable_1<System::Security::Claims::Claim*>*>* m_externalClaims;
    // Field size check
    static_assert(sizeof(System::Collections::ObjectModel::Collection_1<System::Collections::Generic::IEnumerable_1<System::Security::Claims::Claim*>*>*) == 0x8);
    // private System.String m_nameType
    // Size: 0x8
    // Offset: 0x28
    ::StringW m_nameType;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.String m_roleType
    // Size: 0x8
    // Offset: 0x30
    ::StringW m_roleType;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // [OptionalFieldAttribute] Offset: 0xEA4F84
    // private System.String m_version
    // Size: 0x8
    // Offset: 0x38
    ::StringW m_version;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // [OptionalFieldAttribute] Offset: 0xEA4FBC
    // private System.Security.Claims.ClaimsIdentity m_actor
    // Size: 0x8
    // Offset: 0x40
    System::Security::Claims::ClaimsIdentity* m_actor;
    // Field size check
    static_assert(sizeof(System::Security::Claims::ClaimsIdentity*) == 0x8);
    // [OptionalFieldAttribute] Offset: 0xEA4FF4
    // private System.String m_authenticationType
    // Size: 0x8
    // Offset: 0x48
    ::StringW m_authenticationType;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // [OptionalFieldAttribute] Offset: 0xEA502C
    // private System.Object m_bootstrapContext
    // Size: 0x8
    // Offset: 0x50
    ::Il2CppObject* m_bootstrapContext;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // [OptionalFieldAttribute] Offset: 0xEA5064
    // private System.String m_label
    // Size: 0x8
    // Offset: 0x58
    ::StringW m_label;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // [OptionalFieldAttribute] Offset: 0xEA509C
    // private System.String m_serializedNameType
    // Size: 0x8
    // Offset: 0x60
    ::StringW m_serializedNameType;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // [OptionalFieldAttribute] Offset: 0xEA50D4
    // private System.String m_serializedRoleType
    // Size: 0x8
    // Offset: 0x68
    ::StringW m_serializedRoleType;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // [OptionalFieldAttribute] Offset: 0xEA510C
    // private System.String m_serializedClaims
    // Size: 0x8
    // Offset: 0x70
    ::StringW m_serializedClaims;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Creating interface conversion operator: operator System::Security::Principal::IIdentity
    operator System::Security::Principal::IIdentity() noexcept {
      return *reinterpret_cast<System::Security::Principal::IIdentity*>(this);
    }
    // Get instance field reference: private System.Byte[] m_userSerializationData
    ::ArrayW<uint8_t>& dyn_m_userSerializationData();
    // Get instance field reference: private System.Collections.Generic.List`1<System.Security.Claims.Claim> m_instanceClaims
    System::Collections::Generic::List_1<System::Security::Claims::Claim*>*& dyn_m_instanceClaims();
    // Get instance field reference: private System.Collections.ObjectModel.Collection`1<System.Collections.Generic.IEnumerable`1<System.Security.Claims.Claim>> m_externalClaims
    System::Collections::ObjectModel::Collection_1<System::Collections::Generic::IEnumerable_1<System::Security::Claims::Claim*>*>*& dyn_m_externalClaims();
    // Get instance field reference: private System.String m_nameType
    ::StringW& dyn_m_nameType();
    // Get instance field reference: private System.String m_roleType
    ::StringW& dyn_m_roleType();
    // Get instance field reference: private System.String m_version
    ::StringW& dyn_m_version();
    // Get instance field reference: private System.Security.Claims.ClaimsIdentity m_actor
    System::Security::Claims::ClaimsIdentity*& dyn_m_actor();
    // Get instance field reference: private System.String m_authenticationType
    ::StringW& dyn_m_authenticationType();
    // Get instance field reference: private System.Object m_bootstrapContext
    ::Il2CppObject*& dyn_m_bootstrapContext();
    // Get instance field reference: private System.String m_label
    ::StringW& dyn_m_label();
    // Get instance field reference: private System.String m_serializedNameType
    ::StringW& dyn_m_serializedNameType();
    // Get instance field reference: private System.String m_serializedRoleType
    ::StringW& dyn_m_serializedRoleType();
    // Get instance field reference: private System.String m_serializedClaims
    ::StringW& dyn_m_serializedClaims();
    // public System.String get_AuthenticationType()
    // Offset: 0x1A8C154
    ::StringW get_AuthenticationType();
    // public System.Security.Claims.ClaimsIdentity get_Actor()
    // Offset: 0x1A8C15C
    System::Security::Claims::ClaimsIdentity* get_Actor();
    // public System.Void set_Actor(System.Security.Claims.ClaimsIdentity value)
    // Offset: 0x1A8C164
    void set_Actor(System::Security::Claims::ClaimsIdentity* value);
    // public System.Collections.Generic.IEnumerable`1<System.Security.Claims.Claim> get_Claims()
    // Offset: 0x1A8C224
    System::Collections::Generic::IEnumerable_1<System::Security::Claims::Claim*>* get_Claims();
    // public System.String get_Name()
    // Offset: 0x1A8C2DC
    ::StringW get_Name();
    // public System.String get_NameClaimType()
    // Offset: 0x1A8C304
    ::StringW get_NameClaimType();
    // public System.Void .ctor(System.Collections.Generic.IEnumerable`1<System.Security.Claims.Claim> claims)
    // Offset: 0x1A8AE44
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ClaimsIdentity* New_ctor(System::Collections::Generic::IEnumerable_1<System::Security::Claims::Claim*>* claims) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Security::Claims::ClaimsIdentity::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ClaimsIdentity*, creationType>(claims)));
    }
    // public System.Void .ctor(System.Security.Principal.IIdentity identity, System.Collections.Generic.IEnumerable`1<System.Security.Claims.Claim> claims, System.String authenticationType, System.String nameType, System.String roleType)
    // Offset: 0x1A8AE60
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ClaimsIdentity* New_ctor(System::Security::Principal::IIdentity* identity, System::Collections::Generic::IEnumerable_1<System::Security::Claims::Claim*>* claims, ::StringW authenticationType, ::StringW nameType, ::StringW roleType) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Security::Claims::ClaimsIdentity::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ClaimsIdentity*, creationType>(identity, claims, authenticationType, nameType, roleType)));
    }
    // System.Void .ctor(System.Security.Principal.IIdentity identity, System.Collections.Generic.IEnumerable`1<System.Security.Claims.Claim> claims, System.String authenticationType, System.String nameType, System.String roleType, System.Boolean checkAuthType)
    // Offset: 0x1A8AE68
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ClaimsIdentity* New_ctor(System::Security::Principal::IIdentity* identity, System::Collections::Generic::IEnumerable_1<System::Security::Claims::Claim*>* claims, ::StringW authenticationType, ::StringW nameType, ::StringW roleType, bool checkAuthType) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Security::Claims::ClaimsIdentity::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ClaimsIdentity*, creationType>(identity, claims, authenticationType, nameType, roleType, checkAuthType)));
    }
    // protected System.Void .ctor(System.Security.Claims.ClaimsIdentity other)
    // Offset: 0x1A8B7F0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ClaimsIdentity* New_ctor(System::Security::Claims::ClaimsIdentity* other) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Security::Claims::ClaimsIdentity::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ClaimsIdentity*, creationType>(other)));
    }
    // protected System.Void .ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x1A8B974
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ClaimsIdentity* New_ctor(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Security::Claims::ClaimsIdentity::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ClaimsIdentity*, creationType>(info, context)));
    }
    // public System.Security.Claims.ClaimsIdentity Clone()
    // Offset: 0x1A8C30C
    System::Security::Claims::ClaimsIdentity* Clone();
    // public System.Void AddClaim(System.Security.Claims.Claim claim)
    // Offset: 0x1A8C468
    void AddClaim(System::Security::Claims::Claim* claim);
    // private System.Void SafeAddClaims(System.Collections.Generic.IEnumerable`1<System.Security.Claims.Claim> claims)
    // Offset: 0x1A8B478
    void SafeAddClaims(System::Collections::Generic::IEnumerable_1<System::Security::Claims::Claim*>* claims);
    // private System.Void SafeAddClaim(System.Security.Claims.Claim claim)
    // Offset: 0x1A8B748
    void SafeAddClaim(System::Security::Claims::Claim* claim);
    // public System.Security.Claims.Claim FindFirst(System.String type)
    // Offset: 0x1A8C54C
    System::Security::Claims::Claim* FindFirst(::StringW type);
    // private System.Void OnSerializingMethod(System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x1A8C860
    void OnSerializingMethod(System::Runtime::Serialization::StreamingContext context);
    // private System.Void OnDeserializedMethod(System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x1A8CA94
    void OnDeserializedMethod(System::Runtime::Serialization::StreamingContext context);
    // private System.Void OnDeserializingMethod(System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x1A8CDC0
    void OnDeserializingMethod(System::Runtime::Serialization::StreamingContext context);
    // protected System.Void GetObjectData(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x1A8CE68
    void GetObjectData(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context);
    // private System.Void DeserializeClaims(System.String serializedClaims)
    // Offset: 0x1A8CB58
    void DeserializeClaims(::StringW serializedClaims);
    // private System.String SerializeClaims()
    // Offset: 0x1A8C8CC
    ::StringW SerializeClaims();
    // private System.Boolean IsCircular(System.Security.Claims.ClaimsIdentity subject)
    // Offset: 0x1A8B440
    bool IsCircular(System::Security::Claims::ClaimsIdentity* subject);
    // private System.Void Deserialize(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context, System.Boolean useContext)
    // Offset: 0x1A8BAB0
    void Deserialize(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context, bool useContext);
    // public System.Void .ctor()
    // Offset: 0x1A8AE28
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ClaimsIdentity* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Security::Claims::ClaimsIdentity::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ClaimsIdentity*, creationType>()));
    }
  }; // System.Security.Claims.ClaimsIdentity
  #pragma pack(pop)
  static check_size<sizeof(ClaimsIdentity), 112 + sizeof(::StringW)> __System_Security_Claims_ClaimsIdentitySizeCheck;
  static_assert(sizeof(ClaimsIdentity) == 0x78);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Security::Claims::ClaimsIdentity::get_AuthenticationType
// Il2CppName: get_AuthenticationType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Security::Claims::ClaimsIdentity::*)()>(&System::Security::Claims::ClaimsIdentity::get_AuthenticationType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Claims::ClaimsIdentity*), "get_AuthenticationType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Claims::ClaimsIdentity::get_Actor
// Il2CppName: get_Actor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Security::Claims::ClaimsIdentity* (System::Security::Claims::ClaimsIdentity::*)()>(&System::Security::Claims::ClaimsIdentity::get_Actor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Claims::ClaimsIdentity*), "get_Actor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Claims::ClaimsIdentity::set_Actor
// Il2CppName: set_Actor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Claims::ClaimsIdentity::*)(System::Security::Claims::ClaimsIdentity*)>(&System::Security::Claims::ClaimsIdentity::set_Actor)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System.Security.Claims", "ClaimsIdentity")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Claims::ClaimsIdentity*), "set_Actor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Security::Claims::ClaimsIdentity::get_Claims
// Il2CppName: get_Claims
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::IEnumerable_1<System::Security::Claims::Claim*>* (System::Security::Claims::ClaimsIdentity::*)()>(&System::Security::Claims::ClaimsIdentity::get_Claims)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Claims::ClaimsIdentity*), "get_Claims", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Claims::ClaimsIdentity::get_Name
// Il2CppName: get_Name
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Security::Claims::ClaimsIdentity::*)()>(&System::Security::Claims::ClaimsIdentity::get_Name)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Claims::ClaimsIdentity*), "get_Name", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Claims::ClaimsIdentity::get_NameClaimType
// Il2CppName: get_NameClaimType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Security::Claims::ClaimsIdentity::*)()>(&System::Security::Claims::ClaimsIdentity::get_NameClaimType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Claims::ClaimsIdentity*), "get_NameClaimType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Claims::ClaimsIdentity::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Security::Claims::ClaimsIdentity::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Security::Claims::ClaimsIdentity::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Security::Claims::ClaimsIdentity::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Security::Claims::ClaimsIdentity::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Security::Claims::ClaimsIdentity::Clone
// Il2CppName: Clone
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Security::Claims::ClaimsIdentity* (System::Security::Claims::ClaimsIdentity::*)()>(&System::Security::Claims::ClaimsIdentity::Clone)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Claims::ClaimsIdentity*), "Clone", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Claims::ClaimsIdentity::AddClaim
// Il2CppName: AddClaim
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Claims::ClaimsIdentity::*)(System::Security::Claims::Claim*)>(&System::Security::Claims::ClaimsIdentity::AddClaim)> {
  static const MethodInfo* get() {
    static auto* claim = &::il2cpp_utils::GetClassFromName("System.Security.Claims", "Claim")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Claims::ClaimsIdentity*), "AddClaim", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{claim});
  }
};
// Writing MetadataGetter for method: System::Security::Claims::ClaimsIdentity::SafeAddClaims
// Il2CppName: SafeAddClaims
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Claims::ClaimsIdentity::*)(System::Collections::Generic::IEnumerable_1<System::Security::Claims::Claim*>*)>(&System::Security::Claims::ClaimsIdentity::SafeAddClaims)> {
  static const MethodInfo* get() {
    static auto* claims = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IEnumerable`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System.Security.Claims", "Claim")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Claims::ClaimsIdentity*), "SafeAddClaims", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{claims});
  }
};
// Writing MetadataGetter for method: System::Security::Claims::ClaimsIdentity::SafeAddClaim
// Il2CppName: SafeAddClaim
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Claims::ClaimsIdentity::*)(System::Security::Claims::Claim*)>(&System::Security::Claims::ClaimsIdentity::SafeAddClaim)> {
  static const MethodInfo* get() {
    static auto* claim = &::il2cpp_utils::GetClassFromName("System.Security.Claims", "Claim")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Claims::ClaimsIdentity*), "SafeAddClaim", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{claim});
  }
};
// Writing MetadataGetter for method: System::Security::Claims::ClaimsIdentity::FindFirst
// Il2CppName: FindFirst
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Security::Claims::Claim* (System::Security::Claims::ClaimsIdentity::*)(::StringW)>(&System::Security::Claims::ClaimsIdentity::FindFirst)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Claims::ClaimsIdentity*), "FindFirst", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type});
  }
};
// Writing MetadataGetter for method: System::Security::Claims::ClaimsIdentity::OnSerializingMethod
// Il2CppName: OnSerializingMethod
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Claims::ClaimsIdentity::*)(System::Runtime::Serialization::StreamingContext)>(&System::Security::Claims::ClaimsIdentity::OnSerializingMethod)> {
  static const MethodInfo* get() {
    static auto* context = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "StreamingContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Claims::ClaimsIdentity*), "OnSerializingMethod", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{context});
  }
};
// Writing MetadataGetter for method: System::Security::Claims::ClaimsIdentity::OnDeserializedMethod
// Il2CppName: OnDeserializedMethod
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Claims::ClaimsIdentity::*)(System::Runtime::Serialization::StreamingContext)>(&System::Security::Claims::ClaimsIdentity::OnDeserializedMethod)> {
  static const MethodInfo* get() {
    static auto* context = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "StreamingContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Claims::ClaimsIdentity*), "OnDeserializedMethod", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{context});
  }
};
// Writing MetadataGetter for method: System::Security::Claims::ClaimsIdentity::OnDeserializingMethod
// Il2CppName: OnDeserializingMethod
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Claims::ClaimsIdentity::*)(System::Runtime::Serialization::StreamingContext)>(&System::Security::Claims::ClaimsIdentity::OnDeserializingMethod)> {
  static const MethodInfo* get() {
    static auto* context = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "StreamingContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Claims::ClaimsIdentity*), "OnDeserializingMethod", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{context});
  }
};
// Writing MetadataGetter for method: System::Security::Claims::ClaimsIdentity::GetObjectData
// Il2CppName: GetObjectData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Claims::ClaimsIdentity::*)(System::Runtime::Serialization::SerializationInfo*, System::Runtime::Serialization::StreamingContext)>(&System::Security::Claims::ClaimsIdentity::GetObjectData)> {
  static const MethodInfo* get() {
    static auto* info = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "SerializationInfo")->byval_arg;
    static auto* context = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "StreamingContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Claims::ClaimsIdentity*), "GetObjectData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{info, context});
  }
};
// Writing MetadataGetter for method: System::Security::Claims::ClaimsIdentity::DeserializeClaims
// Il2CppName: DeserializeClaims
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Claims::ClaimsIdentity::*)(::StringW)>(&System::Security::Claims::ClaimsIdentity::DeserializeClaims)> {
  static const MethodInfo* get() {
    static auto* serializedClaims = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Claims::ClaimsIdentity*), "DeserializeClaims", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{serializedClaims});
  }
};
// Writing MetadataGetter for method: System::Security::Claims::ClaimsIdentity::SerializeClaims
// Il2CppName: SerializeClaims
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Security::Claims::ClaimsIdentity::*)()>(&System::Security::Claims::ClaimsIdentity::SerializeClaims)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Claims::ClaimsIdentity*), "SerializeClaims", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Claims::ClaimsIdentity::IsCircular
// Il2CppName: IsCircular
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Security::Claims::ClaimsIdentity::*)(System::Security::Claims::ClaimsIdentity*)>(&System::Security::Claims::ClaimsIdentity::IsCircular)> {
  static const MethodInfo* get() {
    static auto* subject = &::il2cpp_utils::GetClassFromName("System.Security.Claims", "ClaimsIdentity")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Claims::ClaimsIdentity*), "IsCircular", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{subject});
  }
};
// Writing MetadataGetter for method: System::Security::Claims::ClaimsIdentity::Deserialize
// Il2CppName: Deserialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Claims::ClaimsIdentity::*)(System::Runtime::Serialization::SerializationInfo*, System::Runtime::Serialization::StreamingContext, bool)>(&System::Security::Claims::ClaimsIdentity::Deserialize)> {
  static const MethodInfo* get() {
    static auto* info = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "SerializationInfo")->byval_arg;
    static auto* context = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "StreamingContext")->byval_arg;
    static auto* useContext = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Claims::ClaimsIdentity*), "Deserialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{info, context, useContext});
  }
};
// Writing MetadataGetter for method: System::Security::Claims::ClaimsIdentity::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
