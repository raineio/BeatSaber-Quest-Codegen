// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: HoudiniEngineUnity.JSONNode
#include "HoudiniEngineUnity/JSONNode.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: HoudiniEngineUnity.JSONNode/HoudiniEngineUnity.Enumerator
#include "HoudiniEngineUnity/JSONNode_Enumerator.hpp"
// Completed includes
// Type namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // WARNING Size may be invalid!
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: HoudiniEngineUnity.JSONNode/HoudiniEngineUnity.ValueEnumerator
  // [TokenAttribute] Offset: FFFFFFFF
  struct JSONNode::ValueEnumerator/*, public System::ValueType*/ {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    private:
    #endif
    // private HoudiniEngineUnity.JSONNode/HoudiniEngineUnity.Enumerator m_Enumerator
    // Size: 0xFFFFFFFF
    // Offset: 0x0
    HoudiniEngineUnity::JSONNode::Enumerator m_Enumerator;
    public:
    // Creating value type constructor for type: ValueEnumerator
    constexpr ValueEnumerator(HoudiniEngineUnity::JSONNode::Enumerator m_Enumerator_ = {}) noexcept : m_Enumerator{m_Enumerator_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Creating conversion operator: operator HoudiniEngineUnity::JSONNode::Enumerator
    constexpr operator HoudiniEngineUnity::JSONNode::Enumerator() const noexcept {
      return m_Enumerator;
    }
    // Get instance field reference: private HoudiniEngineUnity.JSONNode/HoudiniEngineUnity.Enumerator m_Enumerator
    HoudiniEngineUnity::JSONNode::Enumerator& dyn_m_Enumerator();
    // public HoudiniEngineUnity.JSONNode get_Current()
    // Offset: 0x1706AE0
    HoudiniEngineUnity::JSONNode* get_Current();
    // public System.Void .ctor(System.Collections.Generic.List`1/System.Collections.Generic.Enumerator<HoudiniEngineUnity.JSONNode> aArrayEnum)
    // Offset: 0x1706A34
    ValueEnumerator(typename System::Collections::Generic::List_1<HoudiniEngineUnity::JSONNode*>::Enumerator aArrayEnum);
    // public System.Void .ctor(System.Collections.Generic.Dictionary`2/System.Collections.Generic.Enumerator<System.String,HoudiniEngineUnity.JSONNode> aDictEnum)
    // Offset: 0x1706A7C
    ValueEnumerator(typename System::Collections::Generic::Dictionary_2<::Il2CppString*, HoudiniEngineUnity::JSONNode*>::Enumerator aDictEnum);
    // public System.Void .ctor(HoudiniEngineUnity.JSONNode/HoudiniEngineUnity.Enumerator aEnumerator)
    // Offset: 0x1706AC8
    // ABORTED: conflicts with another method.  ValueEnumerator(HoudiniEngineUnity::JSONNode::Enumerator aEnumerator);
    // public System.Boolean MoveNext()
    // Offset: 0x1706B2C
    bool MoveNext();
    // public HoudiniEngineUnity.JSONNode/HoudiniEngineUnity.ValueEnumerator GetEnumerator()
    // Offset: 0x1706B30
    HoudiniEngineUnity::JSONNode::ValueEnumerator GetEnumerator();
  }; // HoudiniEngineUnity.JSONNode/HoudiniEngineUnity.ValueEnumerator
  // WARNING Not writing size check since size may be invalid!
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(HoudiniEngineUnity::JSONNode::ValueEnumerator, "HoudiniEngineUnity", "JSONNode/ValueEnumerator");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: HoudiniEngineUnity::JSONNode::ValueEnumerator::get_Current
// Il2CppName: get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<HoudiniEngineUnity::JSONNode* (HoudiniEngineUnity::JSONNode::ValueEnumerator::*)()>(&HoudiniEngineUnity::JSONNode::ValueEnumerator::get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::JSONNode::ValueEnumerator), "get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::JSONNode::ValueEnumerator::ValueEnumerator
// Il2CppName: .ctor
// Cannot write MetadataGetter for a method that has a nested type with a declaring generic type anywhere within it!
// Talk to sc2ad if this is something you want
// Writing MetadataGetter for method: HoudiniEngineUnity::JSONNode::ValueEnumerator::ValueEnumerator
// Il2CppName: .ctor
// Cannot write MetadataGetter for a method that has a nested type with a declaring generic type anywhere within it!
// Talk to sc2ad if this is something you want
// Writing MetadataGetter for method: HoudiniEngineUnity::JSONNode::ValueEnumerator::ValueEnumerator
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: HoudiniEngineUnity::JSONNode::ValueEnumerator::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (HoudiniEngineUnity::JSONNode::ValueEnumerator::*)()>(&HoudiniEngineUnity::JSONNode::ValueEnumerator::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::JSONNode::ValueEnumerator), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::JSONNode::ValueEnumerator::GetEnumerator
// Il2CppName: GetEnumerator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<HoudiniEngineUnity::JSONNode::ValueEnumerator (HoudiniEngineUnity::JSONNode::ValueEnumerator::*)()>(&HoudiniEngineUnity::JSONNode::ValueEnumerator::GetEnumerator)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::JSONNode::ValueEnumerator), "GetEnumerator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
