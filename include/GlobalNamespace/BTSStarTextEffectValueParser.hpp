// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Int32
#include "System/Int32.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: BTSStarTextEffectValueParser
  class BTSStarTextEffectValueParser;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::BTSStarTextEffectValueParser);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BTSStarTextEffectValueParser*, "", "BTSStarTextEffectValueParser");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: BTSStarTextEffectValueParser
  // [TokenAttribute] Offset: FFFFFFFF
  class BTSStarTextEffectValueParser : public ::Il2CppObject {
    public:
    // static field const value: static private System.Int32 kTextMask
    static constexpr const int kTextMask = 255;
    // Get static field: static private System.Int32 kTextMask
    static int _get_kTextMask();
    // Set static field: static private System.Int32 kTextMask
    static void _set_kTextMask(int value);
    // static field const value: static private System.Int32 kTextBitOffset
    static constexpr const int kTextBitOffset = 0;
    // Get static field: static private System.Int32 kTextBitOffset
    static int _get_kTextBitOffset();
    // Set static field: static private System.Int32 kTextBitOffset
    static void _set_kTextBitOffset(int value);
    // static field const value: static private System.Int32 kPositionMask
    static constexpr const int kPositionMask = 65280;
    // Get static field: static private System.Int32 kPositionMask
    static int _get_kPositionMask();
    // Set static field: static private System.Int32 kPositionMask
    static void _set_kPositionMask(int value);
    // static field const value: static private System.Int32 kPositionBitOffset
    static constexpr const int kPositionBitOffset = 8;
    // Get static field: static private System.Int32 kPositionBitOffset
    static int _get_kPositionBitOffset();
    // Set static field: static private System.Int32 kPositionBitOffset
    static void _set_kPositionBitOffset(int value);
    // static public System.Int32 GetTextId(System.Int32 value)
    // Offset: 0x1344EA8
    static int GetTextId(int value);
    // static public System.Int32 GetPositionId(System.Int32 value)
    // Offset: 0x1344EB0
    static int GetPositionId(int value);
    // static public System.Int32 MergeValuesIntoOneInt(System.Int32 textId, System.Int32 positionId)
    // Offset: 0x1344EB8
    static int MergeValuesIntoOneInt(int textId, int positionId);
  }; // BTSStarTextEffectValueParser
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BTSStarTextEffectValueParser::GetTextId
// Il2CppName: GetTextId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(int)>(&GlobalNamespace::BTSStarTextEffectValueParser::GetTextId)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BTSStarTextEffectValueParser*), "GetTextId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BTSStarTextEffectValueParser::GetPositionId
// Il2CppName: GetPositionId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(int)>(&GlobalNamespace::BTSStarTextEffectValueParser::GetPositionId)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BTSStarTextEffectValueParser*), "GetPositionId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BTSStarTextEffectValueParser::MergeValuesIntoOneInt
// Il2CppName: MergeValuesIntoOneInt
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(int, int)>(&GlobalNamespace::BTSStarTextEffectValueParser::MergeValuesIntoOneInt)> {
  static const MethodInfo* get() {
    static auto* textId = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* positionId = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BTSStarTextEffectValueParser*), "MergeValuesIntoOneInt", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{textId, positionId});
  }
};
