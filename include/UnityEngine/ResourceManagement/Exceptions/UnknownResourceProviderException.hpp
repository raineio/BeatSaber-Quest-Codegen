// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.ResourceManagement.Exceptions.ResourceManagerException
#include "UnityEngine/ResourceManagement/Exceptions/ResourceManagerException.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::ResourceManagement::ResourceLocations
namespace UnityEngine::ResourceManagement::ResourceLocations {
  // Forward declaring type: IResourceLocation
  class IResourceLocation;
}
// Forward declaring namespace: System
namespace System {
  // Skipping declaration: Exception because it is already included!
}
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: SerializationInfo
  class SerializationInfo;
}
// Completed forward declares
// Type namespace: UnityEngine.ResourceManagement.Exceptions
namespace UnityEngine::ResourceManagement::Exceptions {
  // Size: 0x90
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ResourceManagement.Exceptions.UnknownResourceProviderException
  // [TokenAttribute] Offset: FFFFFFFF
  class UnknownResourceProviderException : public UnityEngine::ResourceManagement::Exceptions::ResourceManagerException {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    private:
    #endif
    // private UnityEngine.ResourceManagement.ResourceLocations.IResourceLocation <Location>k__BackingField
    // Size: 0x8
    // Offset: 0x88
    UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* Location;
    // Field size check
    static_assert(sizeof(UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*) == 0x8);
    public:
    // Creating conversion operator: operator UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*
    constexpr operator UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*() const noexcept {
      return Location;
    }
    // Get instance field reference: private UnityEngine.ResourceManagement.ResourceLocations.IResourceLocation <Location>k__BackingField
    UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*& dyn_$Location$k__BackingField();
    // public UnityEngine.ResourceManagement.ResourceLocations.IResourceLocation get_Location()
    // Offset: 0x1B62790
    UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* get_Location();
    // private System.Void set_Location(UnityEngine.ResourceManagement.ResourceLocations.IResourceLocation value)
    // Offset: 0x1B62798
    void set_Location(UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* value);
    // public System.Void .ctor(UnityEngine.ResourceManagement.ResourceLocations.IResourceLocation location)
    // Offset: 0x1B627A0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UnknownResourceProviderException* New_ctor(UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* location) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ResourceManagement::Exceptions::UnknownResourceProviderException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UnknownResourceProviderException*, creationType>(location)));
    }
    // public override System.String get_Message()
    // Offset: 0x1B627D8
    // Implemented from: System.Exception
    // Base method: System.String Exception::get_Message()
    ::Il2CppString* get_Message();
    // public System.Void .ctor()
    // Offset: 0x1B627C8
    // Implemented from: UnityEngine.ResourceManagement.Exceptions.ResourceManagerException
    // Base method: System.Void ResourceManagerException::.ctor()
    // Base method: System.Void Exception::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UnknownResourceProviderException* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ResourceManagement::Exceptions::UnknownResourceProviderException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UnknownResourceProviderException*, creationType>()));
    }
    // public System.Void .ctor(System.String message)
    // Offset: 0x1B627CC
    // Implemented from: UnityEngine.ResourceManagement.Exceptions.ResourceManagerException
    // Base method: System.Void ResourceManagerException::.ctor(System.String message)
    // Base method: System.Void Exception::.ctor(System.String message)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UnknownResourceProviderException* New_ctor(::Il2CppString* message) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ResourceManagement::Exceptions::UnknownResourceProviderException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UnknownResourceProviderException*, creationType>(message)));
    }
    // public System.Void .ctor(System.String message, System.Exception innerException)
    // Offset: 0x1B627D0
    // Implemented from: UnityEngine.ResourceManagement.Exceptions.ResourceManagerException
    // Base method: System.Void ResourceManagerException::.ctor(System.String message, System.Exception innerException)
    // Base method: System.Void Exception::.ctor(System.String message, System.Exception innerException)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UnknownResourceProviderException* New_ctor(::Il2CppString* message, System::Exception* innerException) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ResourceManagement::Exceptions::UnknownResourceProviderException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UnknownResourceProviderException*, creationType>(message, innerException)));
    }
    // protected System.Void .ctor(System.Runtime.Serialization.SerializationInfo message, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x1B627D4
    // Implemented from: UnityEngine.ResourceManagement.Exceptions.ResourceManagerException
    // Base method: System.Void ResourceManagerException::.ctor(System.Runtime.Serialization.SerializationInfo message, System.Runtime.Serialization.StreamingContext context)
    // Base method: System.Void Exception::.ctor(System.Runtime.Serialization.SerializationInfo message, System.Runtime.Serialization.StreamingContext context)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UnknownResourceProviderException* New_ctor(System::Runtime::Serialization::SerializationInfo* message, System::Runtime::Serialization::StreamingContext context) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ResourceManagement::Exceptions::UnknownResourceProviderException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UnknownResourceProviderException*, creationType>(message, context)));
    }
    // public override System.String ToString()
    // Offset: 0x1B629C8
    // Implemented from: System.Exception
    // Base method: System.String Exception::ToString()
    ::Il2CppString* ToString();
  }; // UnityEngine.ResourceManagement.Exceptions.UnknownResourceProviderException
  #pragma pack(pop)
  static check_size<sizeof(UnknownResourceProviderException), 136 + sizeof(UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*)> __UnityEngine_ResourceManagement_Exceptions_UnknownResourceProviderExceptionSizeCheck;
  static_assert(sizeof(UnknownResourceProviderException) == 0x90);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ResourceManagement::Exceptions::UnknownResourceProviderException*, "UnityEngine.ResourceManagement.Exceptions", "UnknownResourceProviderException");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::Exceptions::UnknownResourceProviderException::get_Location
// Il2CppName: get_Location
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* (UnityEngine::ResourceManagement::Exceptions::UnknownResourceProviderException::*)()>(&UnityEngine::ResourceManagement::Exceptions::UnknownResourceProviderException::get_Location)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::Exceptions::UnknownResourceProviderException*), "get_Location", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::Exceptions::UnknownResourceProviderException::set_Location
// Il2CppName: set_Location
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::Exceptions::UnknownResourceProviderException::*)(UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*)>(&UnityEngine::ResourceManagement::Exceptions::UnknownResourceProviderException::set_Location)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.ResourceManagement.ResourceLocations", "IResourceLocation")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::Exceptions::UnknownResourceProviderException*), "set_Location", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::Exceptions::UnknownResourceProviderException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::Exceptions::UnknownResourceProviderException::get_Message
// Il2CppName: get_Message
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (UnityEngine::ResourceManagement::Exceptions::UnknownResourceProviderException::*)()>(&UnityEngine::ResourceManagement::Exceptions::UnknownResourceProviderException::get_Message)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::Exceptions::UnknownResourceProviderException*), "get_Message", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::Exceptions::UnknownResourceProviderException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::Exceptions::UnknownResourceProviderException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::Exceptions::UnknownResourceProviderException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::Exceptions::UnknownResourceProviderException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::Exceptions::UnknownResourceProviderException::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (UnityEngine::ResourceManagement::Exceptions::UnknownResourceProviderException::*)()>(&UnityEngine::ResourceManagement::Exceptions::UnknownResourceProviderException::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::Exceptions::UnknownResourceProviderException*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
