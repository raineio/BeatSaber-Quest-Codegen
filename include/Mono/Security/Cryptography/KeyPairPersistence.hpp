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
// Forward declaring namespace: System::Security::Cryptography
namespace System::Security::Cryptography {
  // Forward declaring type: CspParameters
  class CspParameters;
}
// Completed forward declares
// Type namespace: Mono.Security.Cryptography
namespace Mono::Security::Cryptography {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: Mono.Security.Cryptography.KeyPairPersistence
  class KeyPairPersistence : public ::Il2CppObject {
    public:
    // private System.Security.Cryptography.CspParameters _params
    // Size: 0x8
    // Offset: 0x10
    System::Security::Cryptography::CspParameters* params;
    // Field size check
    static_assert(sizeof(System::Security::Cryptography::CspParameters*) == 0x8);
    // private System.String _keyvalue
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* keyvalue;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.String _filename
    // Size: 0x8
    // Offset: 0x20
    ::Il2CppString* filename;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.String _container
    // Size: 0x8
    // Offset: 0x28
    ::Il2CppString* container;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // Creating value type constructor for type: KeyPairPersistence
    KeyPairPersistence(System::Security::Cryptography::CspParameters* params_ = {}, ::Il2CppString* keyvalue_ = {}, ::Il2CppString* filename_ = {}, ::Il2CppString* container_ = {}) noexcept : params{params_}, keyvalue{keyvalue_}, filename{filename_}, container{container_} {}
    // Get static field: static private System.Boolean _userPathExists
    static bool _get__userPathExists();
    // Set static field: static private System.Boolean _userPathExists
    static void _set__userPathExists(bool value);
    // Get static field: static private System.String _userPath
    static ::Il2CppString* _get__userPath();
    // Set static field: static private System.String _userPath
    static void _set__userPath(::Il2CppString* value);
    // Get static field: static private System.Boolean _machinePathExists
    static bool _get__machinePathExists();
    // Set static field: static private System.Boolean _machinePathExists
    static void _set__machinePathExists(bool value);
    // Get static field: static private System.String _machinePath
    static ::Il2CppString* _get__machinePath();
    // Set static field: static private System.String _machinePath
    static void _set__machinePath(::Il2CppString* value);
    // Get static field: static private System.Object lockobj
    static ::Il2CppObject* _get_lockobj();
    // Set static field: static private System.Object lockobj
    static void _set_lockobj(::Il2CppObject* value);
    // public System.Void .ctor(System.Security.Cryptography.CspParameters parameters)
    // Offset: 0x1A6B264
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static KeyPairPersistence* New_ctor(System::Security::Cryptography::CspParameters* parameters) {
      static auto ___internal__logger = ::Logger::get().WithContext("Mono::Security::Cryptography::KeyPairPersistence::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<KeyPairPersistence*, creationType>(parameters)));
    }
    // public System.Void .ctor(System.Security.Cryptography.CspParameters parameters, System.String keyPair)
    // Offset: 0x1A6B26C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static KeyPairPersistence* New_ctor(System::Security::Cryptography::CspParameters* parameters, ::Il2CppString* keyPair) {
      static auto ___internal__logger = ::Logger::get().WithContext("Mono::Security::Cryptography::KeyPairPersistence::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<KeyPairPersistence*, creationType>(parameters, keyPair)));
    }
    // public System.String get_Filename()
    // Offset: 0x1A6B3BC
    ::Il2CppString* get_Filename();
    // public System.String get_KeyValue()
    // Offset: 0x1A6C0DC
    ::Il2CppString* get_KeyValue();
    // public System.Void set_KeyValue(System.String value)
    // Offset: 0x1A6C0E4
    void set_KeyValue(::Il2CppString* value);
    // public System.Boolean Load()
    // Offset: 0x1A6C108
    bool Load();
    // public System.Void Save()
    // Offset: 0x1A6C350
    void Save();
    // public System.Void Remove()
    // Offset: 0x1A6C828
    void Remove();
    // static private System.String get_UserPath()
    // Offset: 0x1A6BBB4
    static ::Il2CppString* get_UserPath();
    // static private System.String get_MachinePath()
    // Offset: 0x1A6B690
    static ::Il2CppString* get_MachinePath();
    // static System.Boolean _CanSecure(System.String root)
    // Offset: 0x1A6C970
    static bool _CanSecure(::Il2CppString* root);
    // static System.Boolean _ProtectUser(System.String path)
    // Offset: 0x1A6C974
    static bool _ProtectUser(::Il2CppString* path);
    // static System.Boolean _ProtectMachine(System.String path)
    // Offset: 0x1A6C978
    static bool _ProtectMachine(::Il2CppString* path);
    // static System.Boolean _IsUserProtected(System.String path)
    // Offset: 0x1A6C97C
    static bool _IsUserProtected(::Il2CppString* path);
    // static System.Boolean _IsMachineProtected(System.String path)
    // Offset: 0x1A6C980
    static bool _IsMachineProtected(::Il2CppString* path);
    // static private System.Boolean CanSecure(System.String path)
    // Offset: 0x1A6C984
    static bool CanSecure(::Il2CppString* path);
    // static private System.Boolean ProtectUser(System.String path)
    // Offset: 0x1A6C790
    static bool ProtectUser(::Il2CppString* path);
    // static private System.Boolean ProtectMachine(System.String path)
    // Offset: 0x1A6C6F8
    static bool ProtectMachine(::Il2CppString* path);
    // static private System.Boolean IsUserProtected(System.String path)
    // Offset: 0x1A6C840
    static bool IsUserProtected(::Il2CppString* path);
    // static private System.Boolean IsMachineProtected(System.String path)
    // Offset: 0x1A6C8D8
    static bool IsMachineProtected(::Il2CppString* path);
    // private System.Boolean get_CanChange()
    // Offset: 0x1A6C0F8
    bool get_CanChange();
    // private System.Boolean get_UseDefaultKeyContainer()
    // Offset: 0x1A6CA58
    bool get_UseDefaultKeyContainer();
    // private System.Boolean get_UseMachineKeyStore()
    // Offset: 0x1A6B670
    bool get_UseMachineKeyStore();
    // private System.String get_ContainerName()
    // Offset: 0x1A6B548
    ::Il2CppString* get_ContainerName();
    // private System.Security.Cryptography.CspParameters Copy(System.Security.Cryptography.CspParameters p)
    // Offset: 0x1A6B314
    System::Security::Cryptography::CspParameters* Copy(System::Security::Cryptography::CspParameters* p);
    // private System.Void FromXml(System.String xml)
    // Offset: 0x1A6C244
    void FromXml(::Il2CppString* xml);
    // private System.String ToXml()
    // Offset: 0x1A6C530
    ::Il2CppString* ToXml();
    // static private System.Void .cctor()
    // Offset: 0x1A6CB74
    static void _cctor();
  }; // Mono.Security.Cryptography.KeyPairPersistence
  #pragma pack(pop)
  static check_size<sizeof(KeyPairPersistence), 40 + sizeof(::Il2CppString*)> __Mono_Security_Cryptography_KeyPairPersistenceSizeCheck;
  static_assert(sizeof(KeyPairPersistence) == 0x30);
}
DEFINE_IL2CPP_ARG_TYPE(Mono::Security::Cryptography::KeyPairPersistence*, "Mono.Security.Cryptography", "KeyPairPersistence");
// Writing MetadataGetter for method: Mono::Security::Cryptography::KeyPairPersistence::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Mono::Security::Cryptography::KeyPairPersistence::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Mono::Security::Cryptography::KeyPairPersistence::get_Filename
// Il2CppName: get_Filename
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (Mono::Security::Cryptography::KeyPairPersistence::*)()>(&Mono::Security::Cryptography::KeyPairPersistence::get_Filename)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Cryptography::KeyPairPersistence*), "get_Filename", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Security::Cryptography::KeyPairPersistence::get_KeyValue
// Il2CppName: get_KeyValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (Mono::Security::Cryptography::KeyPairPersistence::*)()>(&Mono::Security::Cryptography::KeyPairPersistence::get_KeyValue)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Cryptography::KeyPairPersistence*), "get_KeyValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Security::Cryptography::KeyPairPersistence::set_KeyValue
// Il2CppName: set_KeyValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Security::Cryptography::KeyPairPersistence::*)(::Il2CppString*)>(&Mono::Security::Cryptography::KeyPairPersistence::set_KeyValue)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Cryptography::KeyPairPersistence*), "set_KeyValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>()});
  }
};
// Writing MetadataGetter for method: Mono::Security::Cryptography::KeyPairPersistence::Load
// Il2CppName: Load
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Mono::Security::Cryptography::KeyPairPersistence::*)()>(&Mono::Security::Cryptography::KeyPairPersistence::Load)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Cryptography::KeyPairPersistence*), "Load", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Security::Cryptography::KeyPairPersistence::Save
// Il2CppName: Save
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Security::Cryptography::KeyPairPersistence::*)()>(&Mono::Security::Cryptography::KeyPairPersistence::Save)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Cryptography::KeyPairPersistence*), "Save", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Security::Cryptography::KeyPairPersistence::Remove
// Il2CppName: Remove
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Security::Cryptography::KeyPairPersistence::*)()>(&Mono::Security::Cryptography::KeyPairPersistence::Remove)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Cryptography::KeyPairPersistence*), "Remove", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Security::Cryptography::KeyPairPersistence::get_UserPath
// Il2CppName: get_UserPath
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (*)()>(&Mono::Security::Cryptography::KeyPairPersistence::get_UserPath)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Cryptography::KeyPairPersistence*), "get_UserPath", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Security::Cryptography::KeyPairPersistence::get_MachinePath
// Il2CppName: get_MachinePath
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (*)()>(&Mono::Security::Cryptography::KeyPairPersistence::get_MachinePath)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Cryptography::KeyPairPersistence*), "get_MachinePath", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Security::Cryptography::KeyPairPersistence::_CanSecure
// Il2CppName: _CanSecure
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Il2CppString*)>(&Mono::Security::Cryptography::KeyPairPersistence::_CanSecure)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Cryptography::KeyPairPersistence*), "_CanSecure", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>()});
  }
};
// Writing MetadataGetter for method: Mono::Security::Cryptography::KeyPairPersistence::_ProtectUser
// Il2CppName: _ProtectUser
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Il2CppString*)>(&Mono::Security::Cryptography::KeyPairPersistence::_ProtectUser)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Cryptography::KeyPairPersistence*), "_ProtectUser", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>()});
  }
};
// Writing MetadataGetter for method: Mono::Security::Cryptography::KeyPairPersistence::_ProtectMachine
// Il2CppName: _ProtectMachine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Il2CppString*)>(&Mono::Security::Cryptography::KeyPairPersistence::_ProtectMachine)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Cryptography::KeyPairPersistence*), "_ProtectMachine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>()});
  }
};
// Writing MetadataGetter for method: Mono::Security::Cryptography::KeyPairPersistence::_IsUserProtected
// Il2CppName: _IsUserProtected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Il2CppString*)>(&Mono::Security::Cryptography::KeyPairPersistence::_IsUserProtected)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Cryptography::KeyPairPersistence*), "_IsUserProtected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>()});
  }
};
// Writing MetadataGetter for method: Mono::Security::Cryptography::KeyPairPersistence::_IsMachineProtected
// Il2CppName: _IsMachineProtected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Il2CppString*)>(&Mono::Security::Cryptography::KeyPairPersistence::_IsMachineProtected)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Cryptography::KeyPairPersistence*), "_IsMachineProtected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>()});
  }
};
// Writing MetadataGetter for method: Mono::Security::Cryptography::KeyPairPersistence::CanSecure
// Il2CppName: CanSecure
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Il2CppString*)>(&Mono::Security::Cryptography::KeyPairPersistence::CanSecure)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Cryptography::KeyPairPersistence*), "CanSecure", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>()});
  }
};
// Writing MetadataGetter for method: Mono::Security::Cryptography::KeyPairPersistence::ProtectUser
// Il2CppName: ProtectUser
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Il2CppString*)>(&Mono::Security::Cryptography::KeyPairPersistence::ProtectUser)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Cryptography::KeyPairPersistence*), "ProtectUser", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>()});
  }
};
// Writing MetadataGetter for method: Mono::Security::Cryptography::KeyPairPersistence::ProtectMachine
// Il2CppName: ProtectMachine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Il2CppString*)>(&Mono::Security::Cryptography::KeyPairPersistence::ProtectMachine)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Cryptography::KeyPairPersistence*), "ProtectMachine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>()});
  }
};
// Writing MetadataGetter for method: Mono::Security::Cryptography::KeyPairPersistence::IsUserProtected
// Il2CppName: IsUserProtected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Il2CppString*)>(&Mono::Security::Cryptography::KeyPairPersistence::IsUserProtected)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Cryptography::KeyPairPersistence*), "IsUserProtected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>()});
  }
};
// Writing MetadataGetter for method: Mono::Security::Cryptography::KeyPairPersistence::IsMachineProtected
// Il2CppName: IsMachineProtected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Il2CppString*)>(&Mono::Security::Cryptography::KeyPairPersistence::IsMachineProtected)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Cryptography::KeyPairPersistence*), "IsMachineProtected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>()});
  }
};
// Writing MetadataGetter for method: Mono::Security::Cryptography::KeyPairPersistence::get_CanChange
// Il2CppName: get_CanChange
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Mono::Security::Cryptography::KeyPairPersistence::*)()>(&Mono::Security::Cryptography::KeyPairPersistence::get_CanChange)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Cryptography::KeyPairPersistence*), "get_CanChange", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Security::Cryptography::KeyPairPersistence::get_UseDefaultKeyContainer
// Il2CppName: get_UseDefaultKeyContainer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Mono::Security::Cryptography::KeyPairPersistence::*)()>(&Mono::Security::Cryptography::KeyPairPersistence::get_UseDefaultKeyContainer)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Cryptography::KeyPairPersistence*), "get_UseDefaultKeyContainer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Security::Cryptography::KeyPairPersistence::get_UseMachineKeyStore
// Il2CppName: get_UseMachineKeyStore
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Mono::Security::Cryptography::KeyPairPersistence::*)()>(&Mono::Security::Cryptography::KeyPairPersistence::get_UseMachineKeyStore)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Cryptography::KeyPairPersistence*), "get_UseMachineKeyStore", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Security::Cryptography::KeyPairPersistence::get_ContainerName
// Il2CppName: get_ContainerName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (Mono::Security::Cryptography::KeyPairPersistence::*)()>(&Mono::Security::Cryptography::KeyPairPersistence::get_ContainerName)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Cryptography::KeyPairPersistence*), "get_ContainerName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Security::Cryptography::KeyPairPersistence::Copy
// Il2CppName: Copy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Security::Cryptography::CspParameters* (Mono::Security::Cryptography::KeyPairPersistence::*)(System::Security::Cryptography::CspParameters*)>(&Mono::Security::Cryptography::KeyPairPersistence::Copy)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Cryptography::KeyPairPersistence*), "Copy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Security::Cryptography::CspParameters*>()});
  }
};
// Writing MetadataGetter for method: Mono::Security::Cryptography::KeyPairPersistence::FromXml
// Il2CppName: FromXml
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Security::Cryptography::KeyPairPersistence::*)(::Il2CppString*)>(&Mono::Security::Cryptography::KeyPairPersistence::FromXml)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Cryptography::KeyPairPersistence*), "FromXml", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>()});
  }
};
// Writing MetadataGetter for method: Mono::Security::Cryptography::KeyPairPersistence::ToXml
// Il2CppName: ToXml
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (Mono::Security::Cryptography::KeyPairPersistence::*)()>(&Mono::Security::Cryptography::KeyPairPersistence::ToXml)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Cryptography::KeyPairPersistence*), "ToXml", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Security::Cryptography::KeyPairPersistence::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Mono::Security::Cryptography::KeyPairPersistence::_cctor)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Cryptography::KeyPairPersistence*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
