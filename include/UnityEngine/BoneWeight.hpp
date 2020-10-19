// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.IEquatable`1
#include "System/IEquatable_1.hpp"
// Completed includes
// Begin il2cpp-utils forward declares
struct Il2CppObject;
// Completed il2cpp-utils forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Autogenerated type: UnityEngine.BoneWeight
  struct BoneWeight : public System::ValueType, public System::IEquatable_1<UnityEngine::BoneWeight> {
    public:
    // private System.Single m_Weight0
    // Offset: 0x0
    float m_Weight0;
    // private System.Single m_Weight1
    // Offset: 0x4
    float m_Weight1;
    // private System.Single m_Weight2
    // Offset: 0x8
    float m_Weight2;
    // private System.Single m_Weight3
    // Offset: 0xC
    float m_Weight3;
    // private System.Int32 m_BoneIndex0
    // Offset: 0x10
    int m_BoneIndex0;
    // private System.Int32 m_BoneIndex1
    // Offset: 0x14
    int m_BoneIndex1;
    // private System.Int32 m_BoneIndex2
    // Offset: 0x18
    int m_BoneIndex2;
    // private System.Int32 m_BoneIndex3
    // Offset: 0x1C
    int m_BoneIndex3;
    // Creating value type constructor for type: BoneWeight
    constexpr BoneWeight(float m_Weight0_ = {}, float m_Weight1_ = {}, float m_Weight2_ = {}, float m_Weight3_ = {}, int m_BoneIndex0_ = {}, int m_BoneIndex1_ = {}, int m_BoneIndex2_ = {}, int m_BoneIndex3_ = {}) noexcept : m_Weight0{m_Weight0_}, m_Weight1{m_Weight1_}, m_Weight2{m_Weight2_}, m_Weight3{m_Weight3_}, m_BoneIndex0{m_BoneIndex0_}, m_BoneIndex1{m_BoneIndex1_}, m_BoneIndex2{m_BoneIndex2_}, m_BoneIndex3{m_BoneIndex3_} {}
    // public System.Single get_weight0()
    // Offset: 0xC77B74
    float get_weight0();
    // public System.Void set_weight0(System.Single value)
    // Offset: 0xC77B7C
    void set_weight0(float value);
    // public System.Single get_weight1()
    // Offset: 0xC77B84
    float get_weight1();
    // public System.Void set_weight1(System.Single value)
    // Offset: 0xC77B8C
    void set_weight1(float value);
    // public System.Single get_weight2()
    // Offset: 0xC77B94
    float get_weight2();
    // public System.Void set_weight2(System.Single value)
    // Offset: 0xC77B9C
    void set_weight2(float value);
    // public System.Single get_weight3()
    // Offset: 0xC77BA4
    float get_weight3();
    // public System.Void set_weight3(System.Single value)
    // Offset: 0xC77BAC
    void set_weight3(float value);
    // public System.Int32 get_boneIndex0()
    // Offset: 0xC77BB4
    int get_boneIndex0();
    // public System.Void set_boneIndex0(System.Int32 value)
    // Offset: 0xC77BBC
    void set_boneIndex0(int value);
    // public System.Int32 get_boneIndex1()
    // Offset: 0xC77BC4
    int get_boneIndex1();
    // public System.Void set_boneIndex1(System.Int32 value)
    // Offset: 0xC77BCC
    void set_boneIndex1(int value);
    // public System.Int32 get_boneIndex2()
    // Offset: 0xC77BD4
    int get_boneIndex2();
    // public System.Void set_boneIndex2(System.Int32 value)
    // Offset: 0xC77BDC
    void set_boneIndex2(int value);
    // public System.Int32 get_boneIndex3()
    // Offset: 0xC77BE4
    int get_boneIndex3();
    // public System.Void set_boneIndex3(System.Int32 value)
    // Offset: 0xC77BEC
    void set_boneIndex3(int value);
    // public override System.Int32 GetHashCode()
    // Offset: 0xC77BF4
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
    // public override System.Boolean Equals(System.Object other)
    // Offset: 0xC77BFC
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object other)
    bool Equals(::Il2CppObject* other);
    // public System.Boolean Equals(UnityEngine.BoneWeight other)
    // Offset: 0xC77C04
    // Implemented from: System.IEquatable`1
    // Base method: System.Boolean IEquatable_1::Equals(UnityEngine.BoneWeight other)
    bool Equals(UnityEngine::BoneWeight other);
  }; // UnityEngine.BoneWeight
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::BoneWeight, "UnityEngine", "BoneWeight");
#pragma pack(pop)
