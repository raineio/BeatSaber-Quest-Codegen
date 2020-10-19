// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
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
  // Autogenerated type: Mono.Security.Cryptography.KeyPairPersistence
  class KeyPairPersistence : public ::Il2CppObject {
    public:
    // private System.Security.Cryptography.CspParameters _params
    // Offset: 0x10
    System::Security::Cryptography::CspParameters* params;
    // private System.String _keyvalue
    // Offset: 0x18
    ::Il2CppString* keyvalue;
    // private System.String _filename
    // Offset: 0x20
    ::Il2CppString* filename;
    // private System.String _container
    // Offset: 0x28
    ::Il2CppString* container;
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
    // Offset: 0x1641260
    static KeyPairPersistence* New_ctor(System::Security::Cryptography::CspParameters* parameters);
    // public System.Void .ctor(System.Security.Cryptography.CspParameters parameters, System.String keyPair)
    // Offset: 0x1641268
    static KeyPairPersistence* New_ctor(System::Security::Cryptography::CspParameters* parameters, ::Il2CppString* keyPair);
    // public System.String get_Filename()
    // Offset: 0x16413D0
    ::Il2CppString* get_Filename();
    // public System.String get_KeyValue()
    // Offset: 0x16421D0
    ::Il2CppString* get_KeyValue();
    // public System.Void set_KeyValue(System.String value)
    // Offset: 0x16421D8
    void set_KeyValue(::Il2CppString* value);
    // public System.Boolean Load()
    // Offset: 0x16421FC
    bool Load();
    // public System.Void Save()
    // Offset: 0x164246C
    void Save();
    // public System.Void Remove()
    // Offset: 0x1642954
    void Remove();
    // static private System.String get_UserPath()
    // Offset: 0x1641C58
    static ::Il2CppString* get_UserPath();
    // static private System.String get_MachinePath()
    // Offset: 0x16416E4
    static ::Il2CppString* get_MachinePath();
    // static System.Boolean _CanSecure(System.String root)
    // Offset: 0x1642A9C
    static bool _CanSecure(::Il2CppString* root);
    // static System.Boolean _ProtectUser(System.String path)
    // Offset: 0x1642AA0
    static bool _ProtectUser(::Il2CppString* path);
    // static System.Boolean _ProtectMachine(System.String path)
    // Offset: 0x1642AA4
    static bool _ProtectMachine(::Il2CppString* path);
    // static System.Boolean _IsUserProtected(System.String path)
    // Offset: 0x1642AA8
    static bool _IsUserProtected(::Il2CppString* path);
    // static System.Boolean _IsMachineProtected(System.String path)
    // Offset: 0x1642AAC
    static bool _IsMachineProtected(::Il2CppString* path);
    // static private System.Boolean CanSecure(System.String path)
    // Offset: 0x1642AB0
    static bool CanSecure(::Il2CppString* path);
    // static private System.Boolean ProtectUser(System.String path)
    // Offset: 0x16428BC
    static bool ProtectUser(::Il2CppString* path);
    // static private System.Boolean ProtectMachine(System.String path)
    // Offset: 0x1642824
    static bool ProtectMachine(::Il2CppString* path);
    // static private System.Boolean IsUserProtected(System.String path)
    // Offset: 0x164296C
    static bool IsUserProtected(::Il2CppString* path);
    // static private System.Boolean IsMachineProtected(System.String path)
    // Offset: 0x1642A04
    static bool IsMachineProtected(::Il2CppString* path);
    // private System.Boolean get_CanChange()
    // Offset: 0x16421EC
    bool get_CanChange();
    // private System.Boolean get_UseDefaultKeyContainer()
    // Offset: 0x1642B84
    bool get_UseDefaultKeyContainer();
    // private System.Boolean get_UseMachineKeyStore()
    // Offset: 0x16416C4
    bool get_UseMachineKeyStore();
    // private System.String get_ContainerName()
    // Offset: 0x1641584
    ::Il2CppString* get_ContainerName();
    // private System.Security.Cryptography.CspParameters Copy(System.Security.Cryptography.CspParameters p)
    // Offset: 0x1641328
    System::Security::Cryptography::CspParameters* Copy(System::Security::Cryptography::CspParameters* p);
    // private System.Void FromXml(System.String xml)
    // Offset: 0x1642348
    void FromXml(::Il2CppString* xml);
    // private System.String ToXml()
    // Offset: 0x164265C
    ::Il2CppString* ToXml();
    // static private System.Void .cctor()
    // Offset: 0x1642CB8
    static void _cctor();
  }; // Mono.Security.Cryptography.KeyPairPersistence
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Mono::Security::Cryptography::KeyPairPersistence*, "Mono.Security.Cryptography", "KeyPairPersistence");
#pragma pack(pop)
