// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: Encoding
  class Encoding;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: FormatException
  class FormatException;
}
// Completed forward declares
// Type namespace: System.Net.Mail
namespace System::Net::Mail {
  // Autogenerated type: System.Net.Mail.MailAddress
  class MailAddress : public ::Il2CppObject {
    public:
    // private System.String address
    // Offset: 0x10
    ::Il2CppString* address;
    // private System.String displayName
    // Offset: 0x18
    ::Il2CppString* displayName;
    // private System.String host
    // Offset: 0x20
    ::Il2CppString* host;
    // private System.String user
    // Offset: 0x28
    ::Il2CppString* user;
    // private System.String to_string
    // Offset: 0x30
    ::Il2CppString* to_string;
    // public System.Void .ctor(System.String address)
    // Offset: 0x1249A18
    static MailAddress* New_ctor(::Il2CppString* address);
    // public System.Void .ctor(System.String address, System.String displayName)
    // Offset: 0x1249A4C
    static MailAddress* New_ctor(::Il2CppString* address, ::Il2CppString* displayName);
    // public System.Void .ctor(System.String address, System.String displayName, System.Text.Encoding displayNameEncoding)
    // Offset: 0x1249A8C
    static MailAddress* New_ctor(::Il2CppString* address, ::Il2CppString* displayName, System::Text::Encoding* displayNameEncoding);
    // private System.Void ParseAddress(System.String address)
    // Offset: 0x1249B84
    void ParseAddress(::Il2CppString* address);
    // public System.String get_Address()
    // Offset: 0x1249E78
    ::Il2CppString* get_Address();
    // public System.String get_DisplayName()
    // Offset: 0x1249E80
    ::Il2CppString* get_DisplayName();
    // static private System.FormatException CreateFormatException()
    // Offset: 0x1249E10
    static System::FormatException* CreateFormatException();
    // public override System.Boolean Equals(System.Object value)
    // Offset: 0x1249EDC
    // Implemented from: System.Object
    // Base method: System.Boolean Object::Equals(System.Object value)
    bool Equals(::Il2CppObject* value);
    // public override System.Int32 GetHashCode()
    // Offset: 0x1249F40
    // Implemented from: System.Object
    // Base method: System.Int32 Object::GetHashCode()
    int GetHashCode();
    // public override System.String ToString()
    // Offset: 0x1249F6C
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::Il2CppString* ToString();
  }; // System.Net.Mail.MailAddress
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Net::Mail::MailAddress*, "System.Net.Mail", "MailAddress");
#pragma pack(pop)
