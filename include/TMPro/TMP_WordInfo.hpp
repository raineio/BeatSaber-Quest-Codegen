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
// Forward declaring namespace: TMPro
namespace TMPro {
  // Forward declaring type: TMP_Text
  class TMP_Text;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct Il2CppString;
// Completed il2cpp-utils forward declares
// Type namespace: TMPro
namespace TMPro {
  // Forward declaring type: TMP_WordInfo
  struct TMP_WordInfo;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(TMPro::TMP_WordInfo, "TMPro", "TMP_WordInfo");
// Type namespace: TMPro
namespace TMPro {
  // Size: 0x14
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: TMPro.TMP_WordInfo
  // [TokenAttribute] Offset: FFFFFFFF
  struct TMP_WordInfo/*, public System::ValueType*/ {
    public:
    public:
    // public TMPro.TMP_Text textComponent
    // Size: 0x8
    // Offset: 0x0
    TMPro::TMP_Text* textComponent;
    // Field size check
    static_assert(sizeof(TMPro::TMP_Text*) == 0x8);
    // public System.Int32 firstCharacterIndex
    // Size: 0x4
    // Offset: 0x8
    int firstCharacterIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 lastCharacterIndex
    // Size: 0x4
    // Offset: 0xC
    int lastCharacterIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 characterCount
    // Size: 0x4
    // Offset: 0x10
    int characterCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: TMP_WordInfo
    constexpr TMP_WordInfo(TMPro::TMP_Text* textComponent_ = {}, int firstCharacterIndex_ = {}, int lastCharacterIndex_ = {}, int characterCount_ = {}) noexcept : textComponent{textComponent_}, firstCharacterIndex{firstCharacterIndex_}, lastCharacterIndex{lastCharacterIndex_}, characterCount{characterCount_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Get instance field reference: public TMPro.TMP_Text textComponent
    TMPro::TMP_Text*& dyn_textComponent();
    // Get instance field reference: public System.Int32 firstCharacterIndex
    int& dyn_firstCharacterIndex();
    // Get instance field reference: public System.Int32 lastCharacterIndex
    int& dyn_lastCharacterIndex();
    // Get instance field reference: public System.Int32 characterCount
    int& dyn_characterCount();
    // public System.String GetWord()
    // Offset: 0x1637CE0
    ::Il2CppString* GetWord();
  }; // TMPro.TMP_WordInfo
  #pragma pack(pop)
  static check_size<sizeof(TMP_WordInfo), 16 + sizeof(int)> __TMPro_TMP_WordInfoSizeCheck;
  static_assert(sizeof(TMP_WordInfo) == 0x14);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: TMPro::TMP_WordInfo::GetWord
// Il2CppName: GetWord
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (TMPro::TMP_WordInfo::*)()>(&TMPro::TMP_WordInfo::GetWord)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_WordInfo), "GetWord", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
