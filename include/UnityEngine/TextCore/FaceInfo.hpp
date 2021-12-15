// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Begin il2cpp-utils forward declares
struct Il2CppString;
// Completed il2cpp-utils forward declares
// Type namespace: UnityEngine.TextCore
namespace UnityEngine::TextCore {
  // Forward declaring type: FaceInfo
  struct FaceInfo;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::TextCore::FaceInfo, "UnityEngine.TextCore", "FaceInfo");
// Type namespace: UnityEngine.TextCore
namespace UnityEngine::TextCore {
  // Size: 0x5C
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.TextCore.FaceInfo
  // [TokenAttribute] Offset: FFFFFFFF
  // [UsedByNativeCodeAttribute] Offset: EE7BD8
  struct FaceInfo/*, public System::ValueType*/ {
    public:
    public:
    // [NativeNameAttribute] Offset: 0xEE7D34
    // private System.Int32 m_FaceIndex
    // Size: 0x4
    // Offset: 0x0
    int m_FaceIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: m_FaceIndex and: m_FamilyName
    char __padding0[0x4] = {};
    // [NativeNameAttribute] Offset: 0xEE7D80
    // private System.String m_FamilyName
    // Size: 0x8
    // Offset: 0x8
    ::Il2CppString* m_FamilyName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // [NativeNameAttribute] Offset: 0xEE7DCC
    // private System.String m_StyleName
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* m_StyleName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // [NativeNameAttribute] Offset: 0xEE7E18
    // private System.Int32 m_PointSize
    // Size: 0x4
    // Offset: 0x18
    int m_PointSize;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // [NativeNameAttribute] Offset: 0xEE7E64
    // private System.Single m_Scale
    // Size: 0x4
    // Offset: 0x1C
    float m_Scale;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [NativeNameAttribute] Offset: 0xEE7EB0
    // private System.Single m_LineHeight
    // Size: 0x4
    // Offset: 0x20
    float m_LineHeight;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [NativeNameAttribute] Offset: 0xEE7EFC
    // private System.Single m_AscentLine
    // Size: 0x4
    // Offset: 0x24
    float m_AscentLine;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [NativeNameAttribute] Offset: 0xEE7F48
    // private System.Single m_CapLine
    // Size: 0x4
    // Offset: 0x28
    float m_CapLine;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [NativeNameAttribute] Offset: 0xEE7F94
    // private System.Single m_MeanLine
    // Size: 0x4
    // Offset: 0x2C
    float m_MeanLine;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [NativeNameAttribute] Offset: 0xEE7FE0
    // private System.Single m_Baseline
    // Size: 0x4
    // Offset: 0x30
    float m_Baseline;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [NativeNameAttribute] Offset: 0xEE802C
    // private System.Single m_DescentLine
    // Size: 0x4
    // Offset: 0x34
    float m_DescentLine;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [NativeNameAttribute] Offset: 0xEE8078
    // private System.Single m_SuperscriptOffset
    // Size: 0x4
    // Offset: 0x38
    float m_SuperscriptOffset;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [NativeNameAttribute] Offset: 0xEE80C4
    // private System.Single m_SuperscriptSize
    // Size: 0x4
    // Offset: 0x3C
    float m_SuperscriptSize;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [NativeNameAttribute] Offset: 0xEE8110
    // private System.Single m_SubscriptOffset
    // Size: 0x4
    // Offset: 0x40
    float m_SubscriptOffset;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [NativeNameAttribute] Offset: 0xEE815C
    // private System.Single m_SubscriptSize
    // Size: 0x4
    // Offset: 0x44
    float m_SubscriptSize;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [NativeNameAttribute] Offset: 0xEE81A8
    // private System.Single m_UnderlineOffset
    // Size: 0x4
    // Offset: 0x48
    float m_UnderlineOffset;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [NativeNameAttribute] Offset: 0xEE81F4
    // private System.Single m_UnderlineThickness
    // Size: 0x4
    // Offset: 0x4C
    float m_UnderlineThickness;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [NativeNameAttribute] Offset: 0xEE8240
    // private System.Single m_StrikethroughOffset
    // Size: 0x4
    // Offset: 0x50
    float m_StrikethroughOffset;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [NativeNameAttribute] Offset: 0xEE828C
    // private System.Single m_StrikethroughThickness
    // Size: 0x4
    // Offset: 0x54
    float m_StrikethroughThickness;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [NativeNameAttribute] Offset: 0xEE82D8
    // private System.Single m_TabWidth
    // Size: 0x4
    // Offset: 0x58
    float m_TabWidth;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Creating value type constructor for type: FaceInfo
    constexpr FaceInfo(int m_FaceIndex_ = {}, ::Il2CppString* m_FamilyName_ = {}, ::Il2CppString* m_StyleName_ = {}, int m_PointSize_ = {}, float m_Scale_ = {}, float m_LineHeight_ = {}, float m_AscentLine_ = {}, float m_CapLine_ = {}, float m_MeanLine_ = {}, float m_Baseline_ = {}, float m_DescentLine_ = {}, float m_SuperscriptOffset_ = {}, float m_SuperscriptSize_ = {}, float m_SubscriptOffset_ = {}, float m_SubscriptSize_ = {}, float m_UnderlineOffset_ = {}, float m_UnderlineThickness_ = {}, float m_StrikethroughOffset_ = {}, float m_StrikethroughThickness_ = {}, float m_TabWidth_ = {}) noexcept : m_FaceIndex{m_FaceIndex_}, m_FamilyName{m_FamilyName_}, m_StyleName{m_StyleName_}, m_PointSize{m_PointSize_}, m_Scale{m_Scale_}, m_LineHeight{m_LineHeight_}, m_AscentLine{m_AscentLine_}, m_CapLine{m_CapLine_}, m_MeanLine{m_MeanLine_}, m_Baseline{m_Baseline_}, m_DescentLine{m_DescentLine_}, m_SuperscriptOffset{m_SuperscriptOffset_}, m_SuperscriptSize{m_SuperscriptSize_}, m_SubscriptOffset{m_SubscriptOffset_}, m_SubscriptSize{m_SubscriptSize_}, m_UnderlineOffset{m_UnderlineOffset_}, m_UnderlineThickness{m_UnderlineThickness_}, m_StrikethroughOffset{m_StrikethroughOffset_}, m_StrikethroughThickness{m_StrikethroughThickness_}, m_TabWidth{m_TabWidth_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Get instance field reference: private System.Int32 m_FaceIndex
    int& dyn_m_FaceIndex();
    // Get instance field reference: private System.String m_FamilyName
    ::Il2CppString*& dyn_m_FamilyName();
    // Get instance field reference: private System.String m_StyleName
    ::Il2CppString*& dyn_m_StyleName();
    // Get instance field reference: private System.Int32 m_PointSize
    int& dyn_m_PointSize();
    // Get instance field reference: private System.Single m_Scale
    float& dyn_m_Scale();
    // Get instance field reference: private System.Single m_LineHeight
    float& dyn_m_LineHeight();
    // Get instance field reference: private System.Single m_AscentLine
    float& dyn_m_AscentLine();
    // Get instance field reference: private System.Single m_CapLine
    float& dyn_m_CapLine();
    // Get instance field reference: private System.Single m_MeanLine
    float& dyn_m_MeanLine();
    // Get instance field reference: private System.Single m_Baseline
    float& dyn_m_Baseline();
    // Get instance field reference: private System.Single m_DescentLine
    float& dyn_m_DescentLine();
    // Get instance field reference: private System.Single m_SuperscriptOffset
    float& dyn_m_SuperscriptOffset();
    // Get instance field reference: private System.Single m_SuperscriptSize
    float& dyn_m_SuperscriptSize();
    // Get instance field reference: private System.Single m_SubscriptOffset
    float& dyn_m_SubscriptOffset();
    // Get instance field reference: private System.Single m_SubscriptSize
    float& dyn_m_SubscriptSize();
    // Get instance field reference: private System.Single m_UnderlineOffset
    float& dyn_m_UnderlineOffset();
    // Get instance field reference: private System.Single m_UnderlineThickness
    float& dyn_m_UnderlineThickness();
    // Get instance field reference: private System.Single m_StrikethroughOffset
    float& dyn_m_StrikethroughOffset();
    // Get instance field reference: private System.Single m_StrikethroughThickness
    float& dyn_m_StrikethroughThickness();
    // Get instance field reference: private System.Single m_TabWidth
    float& dyn_m_TabWidth();
    // public System.Void set_familyName(System.String value)
    // Offset: 0x26A8D94
    void set_familyName(::Il2CppString* value);
    // public System.Void set_styleName(System.String value)
    // Offset: 0x26A8D9C
    void set_styleName(::Il2CppString* value);
    // public System.Int32 get_pointSize()
    // Offset: 0x26A8DA4
    int get_pointSize();
    // public System.Void set_pointSize(System.Int32 value)
    // Offset: 0x26A8DAC
    void set_pointSize(int value);
    // public System.Single get_scale()
    // Offset: 0x26A8DB4
    float get_scale();
    // public System.Void set_scale(System.Single value)
    // Offset: 0x26A8DBC
    void set_scale(float value);
    // public System.Single get_lineHeight()
    // Offset: 0x26A8DC4
    float get_lineHeight();
    // public System.Void set_lineHeight(System.Single value)
    // Offset: 0x26A8DCC
    void set_lineHeight(float value);
    // public System.Single get_ascentLine()
    // Offset: 0x26A8DD4
    float get_ascentLine();
    // public System.Void set_ascentLine(System.Single value)
    // Offset: 0x26A8DDC
    void set_ascentLine(float value);
    // public System.Single get_capLine()
    // Offset: 0x26A8DE4
    float get_capLine();
    // public System.Void set_capLine(System.Single value)
    // Offset: 0x26A8DEC
    void set_capLine(float value);
    // public System.Void set_meanLine(System.Single value)
    // Offset: 0x26A8DF4
    void set_meanLine(float value);
    // public System.Single get_baseline()
    // Offset: 0x26A8DFC
    float get_baseline();
    // public System.Void set_baseline(System.Single value)
    // Offset: 0x26A8E04
    void set_baseline(float value);
    // public System.Single get_descentLine()
    // Offset: 0x26A8E0C
    float get_descentLine();
    // public System.Void set_descentLine(System.Single value)
    // Offset: 0x26A8E14
    void set_descentLine(float value);
    // public System.Single get_superscriptOffset()
    // Offset: 0x26A8E1C
    float get_superscriptOffset();
    // public System.Void set_superscriptOffset(System.Single value)
    // Offset: 0x26A8E24
    void set_superscriptOffset(float value);
    // public System.Single get_superscriptSize()
    // Offset: 0x26A8E2C
    float get_superscriptSize();
    // public System.Void set_superscriptSize(System.Single value)
    // Offset: 0x26A8E34
    void set_superscriptSize(float value);
    // public System.Single get_subscriptOffset()
    // Offset: 0x26A8E3C
    float get_subscriptOffset();
    // public System.Void set_subscriptOffset(System.Single value)
    // Offset: 0x26A8E44
    void set_subscriptOffset(float value);
    // public System.Single get_subscriptSize()
    // Offset: 0x26A8E4C
    float get_subscriptSize();
    // public System.Void set_subscriptSize(System.Single value)
    // Offset: 0x26A8E54
    void set_subscriptSize(float value);
    // public System.Single get_underlineOffset()
    // Offset: 0x26A8E5C
    float get_underlineOffset();
    // public System.Void set_underlineOffset(System.Single value)
    // Offset: 0x26A8E64
    void set_underlineOffset(float value);
    // public System.Single get_underlineThickness()
    // Offset: 0x26A8E6C
    float get_underlineThickness();
    // public System.Void set_underlineThickness(System.Single value)
    // Offset: 0x26A8E74
    void set_underlineThickness(float value);
    // public System.Single get_strikethroughOffset()
    // Offset: 0x26A8E7C
    float get_strikethroughOffset();
    // public System.Void set_strikethroughOffset(System.Single value)
    // Offset: 0x26A8E84
    void set_strikethroughOffset(float value);
    // public System.Void set_strikethroughThickness(System.Single value)
    // Offset: 0x26A8E8C
    void set_strikethroughThickness(float value);
    // public System.Single get_tabWidth()
    // Offset: 0x26A8E94
    float get_tabWidth();
    // public System.Void set_tabWidth(System.Single value)
    // Offset: 0x26A8E9C
    void set_tabWidth(float value);
  }; // UnityEngine.TextCore.FaceInfo
  #pragma pack(pop)
  static check_size<sizeof(FaceInfo), 88 + sizeof(float)> __UnityEngine_TextCore_FaceInfoSizeCheck;
  static_assert(sizeof(FaceInfo) == 0x5C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::TextCore::FaceInfo::set_familyName
// Il2CppName: set_familyName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::TextCore::FaceInfo::*)(::Il2CppString*)>(&UnityEngine::TextCore::FaceInfo::set_familyName)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TextCore::FaceInfo), "set_familyName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::TextCore::FaceInfo::set_styleName
// Il2CppName: set_styleName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::TextCore::FaceInfo::*)(::Il2CppString*)>(&UnityEngine::TextCore::FaceInfo::set_styleName)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TextCore::FaceInfo), "set_styleName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::TextCore::FaceInfo::get_pointSize
// Il2CppName: get_pointSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::TextCore::FaceInfo::*)()>(&UnityEngine::TextCore::FaceInfo::get_pointSize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TextCore::FaceInfo), "get_pointSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::TextCore::FaceInfo::set_pointSize
// Il2CppName: set_pointSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::TextCore::FaceInfo::*)(int)>(&UnityEngine::TextCore::FaceInfo::set_pointSize)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TextCore::FaceInfo), "set_pointSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::TextCore::FaceInfo::get_scale
// Il2CppName: get_scale
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::TextCore::FaceInfo::*)()>(&UnityEngine::TextCore::FaceInfo::get_scale)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TextCore::FaceInfo), "get_scale", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::TextCore::FaceInfo::set_scale
// Il2CppName: set_scale
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::TextCore::FaceInfo::*)(float)>(&UnityEngine::TextCore::FaceInfo::set_scale)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TextCore::FaceInfo), "set_scale", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::TextCore::FaceInfo::get_lineHeight
// Il2CppName: get_lineHeight
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::TextCore::FaceInfo::*)()>(&UnityEngine::TextCore::FaceInfo::get_lineHeight)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TextCore::FaceInfo), "get_lineHeight", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::TextCore::FaceInfo::set_lineHeight
// Il2CppName: set_lineHeight
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::TextCore::FaceInfo::*)(float)>(&UnityEngine::TextCore::FaceInfo::set_lineHeight)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TextCore::FaceInfo), "set_lineHeight", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::TextCore::FaceInfo::get_ascentLine
// Il2CppName: get_ascentLine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::TextCore::FaceInfo::*)()>(&UnityEngine::TextCore::FaceInfo::get_ascentLine)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TextCore::FaceInfo), "get_ascentLine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::TextCore::FaceInfo::set_ascentLine
// Il2CppName: set_ascentLine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::TextCore::FaceInfo::*)(float)>(&UnityEngine::TextCore::FaceInfo::set_ascentLine)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TextCore::FaceInfo), "set_ascentLine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::TextCore::FaceInfo::get_capLine
// Il2CppName: get_capLine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::TextCore::FaceInfo::*)()>(&UnityEngine::TextCore::FaceInfo::get_capLine)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TextCore::FaceInfo), "get_capLine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::TextCore::FaceInfo::set_capLine
// Il2CppName: set_capLine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::TextCore::FaceInfo::*)(float)>(&UnityEngine::TextCore::FaceInfo::set_capLine)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TextCore::FaceInfo), "set_capLine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::TextCore::FaceInfo::set_meanLine
// Il2CppName: set_meanLine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::TextCore::FaceInfo::*)(float)>(&UnityEngine::TextCore::FaceInfo::set_meanLine)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TextCore::FaceInfo), "set_meanLine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::TextCore::FaceInfo::get_baseline
// Il2CppName: get_baseline
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::TextCore::FaceInfo::*)()>(&UnityEngine::TextCore::FaceInfo::get_baseline)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TextCore::FaceInfo), "get_baseline", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::TextCore::FaceInfo::set_baseline
// Il2CppName: set_baseline
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::TextCore::FaceInfo::*)(float)>(&UnityEngine::TextCore::FaceInfo::set_baseline)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TextCore::FaceInfo), "set_baseline", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::TextCore::FaceInfo::get_descentLine
// Il2CppName: get_descentLine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::TextCore::FaceInfo::*)()>(&UnityEngine::TextCore::FaceInfo::get_descentLine)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TextCore::FaceInfo), "get_descentLine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::TextCore::FaceInfo::set_descentLine
// Il2CppName: set_descentLine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::TextCore::FaceInfo::*)(float)>(&UnityEngine::TextCore::FaceInfo::set_descentLine)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TextCore::FaceInfo), "set_descentLine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::TextCore::FaceInfo::get_superscriptOffset
// Il2CppName: get_superscriptOffset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::TextCore::FaceInfo::*)()>(&UnityEngine::TextCore::FaceInfo::get_superscriptOffset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TextCore::FaceInfo), "get_superscriptOffset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::TextCore::FaceInfo::set_superscriptOffset
// Il2CppName: set_superscriptOffset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::TextCore::FaceInfo::*)(float)>(&UnityEngine::TextCore::FaceInfo::set_superscriptOffset)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TextCore::FaceInfo), "set_superscriptOffset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::TextCore::FaceInfo::get_superscriptSize
// Il2CppName: get_superscriptSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::TextCore::FaceInfo::*)()>(&UnityEngine::TextCore::FaceInfo::get_superscriptSize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TextCore::FaceInfo), "get_superscriptSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::TextCore::FaceInfo::set_superscriptSize
// Il2CppName: set_superscriptSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::TextCore::FaceInfo::*)(float)>(&UnityEngine::TextCore::FaceInfo::set_superscriptSize)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TextCore::FaceInfo), "set_superscriptSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::TextCore::FaceInfo::get_subscriptOffset
// Il2CppName: get_subscriptOffset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::TextCore::FaceInfo::*)()>(&UnityEngine::TextCore::FaceInfo::get_subscriptOffset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TextCore::FaceInfo), "get_subscriptOffset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::TextCore::FaceInfo::set_subscriptOffset
// Il2CppName: set_subscriptOffset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::TextCore::FaceInfo::*)(float)>(&UnityEngine::TextCore::FaceInfo::set_subscriptOffset)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TextCore::FaceInfo), "set_subscriptOffset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::TextCore::FaceInfo::get_subscriptSize
// Il2CppName: get_subscriptSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::TextCore::FaceInfo::*)()>(&UnityEngine::TextCore::FaceInfo::get_subscriptSize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TextCore::FaceInfo), "get_subscriptSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::TextCore::FaceInfo::set_subscriptSize
// Il2CppName: set_subscriptSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::TextCore::FaceInfo::*)(float)>(&UnityEngine::TextCore::FaceInfo::set_subscriptSize)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TextCore::FaceInfo), "set_subscriptSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::TextCore::FaceInfo::get_underlineOffset
// Il2CppName: get_underlineOffset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::TextCore::FaceInfo::*)()>(&UnityEngine::TextCore::FaceInfo::get_underlineOffset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TextCore::FaceInfo), "get_underlineOffset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::TextCore::FaceInfo::set_underlineOffset
// Il2CppName: set_underlineOffset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::TextCore::FaceInfo::*)(float)>(&UnityEngine::TextCore::FaceInfo::set_underlineOffset)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TextCore::FaceInfo), "set_underlineOffset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::TextCore::FaceInfo::get_underlineThickness
// Il2CppName: get_underlineThickness
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::TextCore::FaceInfo::*)()>(&UnityEngine::TextCore::FaceInfo::get_underlineThickness)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TextCore::FaceInfo), "get_underlineThickness", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::TextCore::FaceInfo::set_underlineThickness
// Il2CppName: set_underlineThickness
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::TextCore::FaceInfo::*)(float)>(&UnityEngine::TextCore::FaceInfo::set_underlineThickness)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TextCore::FaceInfo), "set_underlineThickness", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::TextCore::FaceInfo::get_strikethroughOffset
// Il2CppName: get_strikethroughOffset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::TextCore::FaceInfo::*)()>(&UnityEngine::TextCore::FaceInfo::get_strikethroughOffset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TextCore::FaceInfo), "get_strikethroughOffset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::TextCore::FaceInfo::set_strikethroughOffset
// Il2CppName: set_strikethroughOffset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::TextCore::FaceInfo::*)(float)>(&UnityEngine::TextCore::FaceInfo::set_strikethroughOffset)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TextCore::FaceInfo), "set_strikethroughOffset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::TextCore::FaceInfo::set_strikethroughThickness
// Il2CppName: set_strikethroughThickness
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::TextCore::FaceInfo::*)(float)>(&UnityEngine::TextCore::FaceInfo::set_strikethroughThickness)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TextCore::FaceInfo), "set_strikethroughThickness", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::TextCore::FaceInfo::get_tabWidth
// Il2CppName: get_tabWidth
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::TextCore::FaceInfo::*)()>(&UnityEngine::TextCore::FaceInfo::get_tabWidth)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TextCore::FaceInfo), "get_tabWidth", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::TextCore::FaceInfo::set_tabWidth
// Il2CppName: set_tabWidth
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::TextCore::FaceInfo::*)(float)>(&UnityEngine::TextCore::FaceInfo::set_tabWidth)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TextCore::FaceInfo), "set_tabWidth", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
