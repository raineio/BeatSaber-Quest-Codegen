// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Security::Util
namespace System::Security::Util {
  // Forward declaring type: TokenizerShortBlock
  class TokenizerShortBlock;
  // Forward declaring type: TokenizerStringBlock
  class TokenizerStringBlock;
}
// Completed forward declares
// Type namespace: System.Security.Util
namespace System::Security::Util {
  // Autogenerated type: System.Security.Util.TokenizerStream
  class TokenizerStream : public ::Il2CppObject {
    public:
    // private System.Int32 m_countTokens
    // Offset: 0x10
    int m_countTokens;
    // private System.Security.Util.TokenizerShortBlock m_headTokens
    // Offset: 0x18
    System::Security::Util::TokenizerShortBlock* m_headTokens;
    // private System.Security.Util.TokenizerShortBlock m_lastTokens
    // Offset: 0x20
    System::Security::Util::TokenizerShortBlock* m_lastTokens;
    // private System.Security.Util.TokenizerShortBlock m_currentTokens
    // Offset: 0x28
    System::Security::Util::TokenizerShortBlock* m_currentTokens;
    // private System.Int32 m_indexTokens
    // Offset: 0x30
    int m_indexTokens;
    // private System.Security.Util.TokenizerStringBlock m_headStrings
    // Offset: 0x38
    System::Security::Util::TokenizerStringBlock* m_headStrings;
    // private System.Security.Util.TokenizerStringBlock m_currentStrings
    // Offset: 0x40
    System::Security::Util::TokenizerStringBlock* m_currentStrings;
    // private System.Int32 m_indexStrings
    // Offset: 0x48
    int m_indexStrings;
    // System.Void AddToken(System.Int16 token)
    // Offset: 0x12133F4
    void AddToken(int16_t token);
    // System.Void AddString(System.String str)
    // Offset: 0x121393C
    void AddString(::Il2CppString* str);
    // System.Void Reset()
    // Offset: 0x1212F60
    void Reset();
    // System.Int16 GetNextFullToken()
    // Offset: 0x1212FB4
    int16_t GetNextFullToken();
    // System.Int16 GetNextToken()
    // Offset: 0x12119B0
    int16_t GetNextToken();
    // System.String GetNextString()
    // Offset: 0x1211A4C
    ::Il2CppString* GetNextString();
    // System.Void ThrowAwayNextString()
    // Offset: 0x12119C8
    void ThrowAwayNextString();
    // System.Void TagLastToken(System.Int16 tag)
    // Offset: 0x12119CC
    void TagLastToken(int16_t tag);
    // System.Int32 GetTokenCount()
    // Offset: 0x1213DA0
    int GetTokenCount();
    // System.Void GoToPosition(System.Int32 position)
    // Offset: 0x1212670
    void GoToPosition(int position);
    // System.Void .ctor()
    // Offset: 0x1212EBC
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static TokenizerStream* New_ctor();
  }; // System.Security.Util.TokenizerStream
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Security::Util::TokenizerStream*, "System.Security.Util", "TokenizerStream");
#pragma pack(pop)
