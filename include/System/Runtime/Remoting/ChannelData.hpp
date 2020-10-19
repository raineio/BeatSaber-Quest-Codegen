// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: ArrayList
  class ArrayList;
  // Forward declaring type: Hashtable
  class Hashtable;
}
// Completed forward declares
// Type namespace: System.Runtime.Remoting
namespace System::Runtime::Remoting {
  // Autogenerated type: System.Runtime.Remoting.ChannelData
  class ChannelData : public ::Il2CppObject {
    public:
    // System.String Ref
    // Offset: 0x10
    ::Il2CppString* Ref;
    // System.String Type
    // Offset: 0x18
    ::Il2CppString* Type;
    // System.String Id
    // Offset: 0x20
    ::Il2CppString* Id;
    // System.String DelayLoadAsClientChannel
    // Offset: 0x28
    ::Il2CppString* DelayLoadAsClientChannel;
    // private System.Collections.ArrayList _serverProviders
    // Offset: 0x30
    System::Collections::ArrayList* serverProviders;
    // private System.Collections.ArrayList _clientProviders
    // Offset: 0x38
    System::Collections::ArrayList* clientProviders;
    // private System.Collections.Hashtable _customProperties
    // Offset: 0x40
    System::Collections::Hashtable* customProperties;
    // System.Collections.ArrayList get_ServerProviders()
    // Offset: 0x1092754
    System::Collections::ArrayList* get_ServerProviders();
    // public System.Collections.ArrayList get_ClientProviders()
    // Offset: 0x10927CC
    System::Collections::ArrayList* get_ClientProviders();
    // public System.Collections.Hashtable get_CustomProperties()
    // Offset: 0x1092844
    System::Collections::Hashtable* get_CustomProperties();
    // public System.Void CopyFrom(System.Runtime.Remoting.ChannelData other)
    // Offset: 0x10928BC
    void CopyFrom(System::Runtime::Remoting::ChannelData* other);
    // public System.Void .ctor()
    // Offset: 0x1093124
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static ChannelData* New_ctor();
  }; // System.Runtime.Remoting.ChannelData
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Remoting::ChannelData*, "System.Runtime.Remoting", "ChannelData");
#pragma pack(pop)
