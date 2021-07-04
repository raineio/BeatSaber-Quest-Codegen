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
  // Size: 0x4C
  #pragma pack(push, 1)
  // Autogenerated type: System.Security.Util.TokenizerStream
  class TokenizerStream : public ::Il2CppObject {
    public:
    // private System.Int32 m_countTokens
    // Size: 0x4
    // Offset: 0x10
    int m_countTokens;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: m_countTokens and: m_headTokens
    char __padding0[0x4] = {};
    // private System.Security.Util.TokenizerShortBlock m_headTokens
    // Size: 0x8
    // Offset: 0x18
    System::Security::Util::TokenizerShortBlock* m_headTokens;
    // Field size check
    static_assert(sizeof(System::Security::Util::TokenizerShortBlock*) == 0x8);
    // private System.Security.Util.TokenizerShortBlock m_lastTokens
    // Size: 0x8
    // Offset: 0x20
    System::Security::Util::TokenizerShortBlock* m_lastTokens;
    // Field size check
    static_assert(sizeof(System::Security::Util::TokenizerShortBlock*) == 0x8);
    // private System.Security.Util.TokenizerShortBlock m_currentTokens
    // Size: 0x8
    // Offset: 0x28
    System::Security::Util::TokenizerShortBlock* m_currentTokens;
    // Field size check
    static_assert(sizeof(System::Security::Util::TokenizerShortBlock*) == 0x8);
    // private System.Int32 m_indexTokens
    // Size: 0x4
    // Offset: 0x30
    int m_indexTokens;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: m_indexTokens and: m_headStrings
    char __padding4[0x4] = {};
    // private System.Security.Util.TokenizerStringBlock m_headStrings
    // Size: 0x8
    // Offset: 0x38
    System::Security::Util::TokenizerStringBlock* m_headStrings;
    // Field size check
    static_assert(sizeof(System::Security::Util::TokenizerStringBlock*) == 0x8);
    // private System.Security.Util.TokenizerStringBlock m_currentStrings
    // Size: 0x8
    // Offset: 0x40
    System::Security::Util::TokenizerStringBlock* m_currentStrings;
    // Field size check
    static_assert(sizeof(System::Security::Util::TokenizerStringBlock*) == 0x8);
    // private System.Int32 m_indexStrings
    // Size: 0x4
    // Offset: 0x48
    int m_indexStrings;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: TokenizerStream
    TokenizerStream(int m_countTokens_ = {}, System::Security::Util::TokenizerShortBlock* m_headTokens_ = {}, System::Security::Util::TokenizerShortBlock* m_lastTokens_ = {}, System::Security::Util::TokenizerShortBlock* m_currentTokens_ = {}, int m_indexTokens_ = {}, System::Security::Util::TokenizerStringBlock* m_headStrings_ = {}, System::Security::Util::TokenizerStringBlock* m_currentStrings_ = {}, int m_indexStrings_ = {}) noexcept : m_countTokens{m_countTokens_}, m_headTokens{m_headTokens_}, m_lastTokens{m_lastTokens_}, m_currentTokens{m_currentTokens_}, m_indexTokens{m_indexTokens_}, m_headStrings{m_headStrings_}, m_currentStrings{m_currentStrings_}, m_indexStrings{m_indexStrings_} {}
    // System.Void AddToken(System.Int16 token)
    // Offset: 0x1B4F674
    void AddToken(int16_t token);
    // System.Void AddString(System.String str)
    // Offset: 0x1B4FDB4
    void AddString(::Il2CppString* str);
    // System.Void Reset()
    // Offset: 0x1B504E8
    void Reset();
    // System.Int16 GetNextFullToken()
    // Offset: 0x1B50504
    int16_t GetNextFullToken();
    // System.Int16 GetNextToken()
    // Offset: 0x1B50580
    int16_t GetNextToken();
    // System.String GetNextString()
    // Offset: 0x1B50598
    ::Il2CppString* GetNextString();
    // System.Void ThrowAwayNextString()
    // Offset: 0x1B50610
    void ThrowAwayNextString();
    // System.Void TagLastToken(System.Int16 tag)
    // Offset: 0x1B50614
    void TagLastToken(int16_t tag);
    // System.Int32 GetTokenCount()
    // Offset: 0x1B50694
    int GetTokenCount();
    // System.Void GoToPosition(System.Int32 position)
    // Offset: 0x1B5069C
    void GoToPosition(int position);
    // System.Void .ctor()
    // Offset: 0x1B503F0
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TokenizerStream* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Security::Util::TokenizerStream::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TokenizerStream*, creationType>()));
    }
  }; // System.Security.Util.TokenizerStream
  #pragma pack(pop)
  static check_size<sizeof(TokenizerStream), 72 + sizeof(int)> __System_Security_Util_TokenizerStreamSizeCheck;
  static_assert(sizeof(TokenizerStream) == 0x4C);
}
DEFINE_IL2CPP_ARG_TYPE(System::Security::Util::TokenizerStream*, "System.Security.Util", "TokenizerStream");
// Writing MetadataGetter for method: System::Security::Util::TokenizerStream::AddToken
// Il2CppName: AddToken
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Util::TokenizerStream::*)(int16_t)>(&System::Security::Util::TokenizerStream::AddToken)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Util::TokenizerStream*), "AddToken", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<int16_t>()});
  }
};
// Writing MetadataGetter for method: System::Security::Util::TokenizerStream::AddString
// Il2CppName: AddString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Util::TokenizerStream::*)(::Il2CppString*)>(&System::Security::Util::TokenizerStream::AddString)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Util::TokenizerStream*), "AddString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>()});
  }
};
// Writing MetadataGetter for method: System::Security::Util::TokenizerStream::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Util::TokenizerStream::*)()>(&System::Security::Util::TokenizerStream::Reset)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Util::TokenizerStream*), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Util::TokenizerStream::GetNextFullToken
// Il2CppName: GetNextFullToken
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int16_t (System::Security::Util::TokenizerStream::*)()>(&System::Security::Util::TokenizerStream::GetNextFullToken)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Util::TokenizerStream*), "GetNextFullToken", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Util::TokenizerStream::GetNextToken
// Il2CppName: GetNextToken
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int16_t (System::Security::Util::TokenizerStream::*)()>(&System::Security::Util::TokenizerStream::GetNextToken)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Util::TokenizerStream*), "GetNextToken", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Util::TokenizerStream::GetNextString
// Il2CppName: GetNextString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::Security::Util::TokenizerStream::*)()>(&System::Security::Util::TokenizerStream::GetNextString)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Util::TokenizerStream*), "GetNextString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Util::TokenizerStream::ThrowAwayNextString
// Il2CppName: ThrowAwayNextString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Util::TokenizerStream::*)()>(&System::Security::Util::TokenizerStream::ThrowAwayNextString)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Util::TokenizerStream*), "ThrowAwayNextString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Util::TokenizerStream::TagLastToken
// Il2CppName: TagLastToken
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Util::TokenizerStream::*)(int16_t)>(&System::Security::Util::TokenizerStream::TagLastToken)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Util::TokenizerStream*), "TagLastToken", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<int16_t>()});
  }
};
// Writing MetadataGetter for method: System::Security::Util::TokenizerStream::GetTokenCount
// Il2CppName: GetTokenCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Security::Util::TokenizerStream::*)()>(&System::Security::Util::TokenizerStream::GetTokenCount)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Util::TokenizerStream*), "GetTokenCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Util::TokenizerStream::GoToPosition
// Il2CppName: GoToPosition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Util::TokenizerStream::*)(int)>(&System::Security::Util::TokenizerStream::GoToPosition)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Util::TokenizerStream*), "GoToPosition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<int>()});
  }
};
// Writing MetadataGetter for method: System::Security::Util::TokenizerStream::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
