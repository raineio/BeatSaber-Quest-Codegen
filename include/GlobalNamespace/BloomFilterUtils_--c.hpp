// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: BloomFilterUtils
#include "GlobalNamespace/BloomFilterUtils.hpp"
// Including type: BloomFilter
#include "GlobalNamespace/BloomFilter.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`3<T1, T2, TResult>
  template<typename T1, typename T2, typename TResult>
  class Func_3;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: BloomFilterUtils/<>c
  class BloomFilterUtils::$$c : public ::Il2CppObject {
    public:
    // Get static field: static public readonly BloomFilterUtils/<>c <>9
    static GlobalNamespace::BloomFilterUtils::$$c* _get_$$9();
    // Set static field: static public readonly BloomFilterUtils/<>c <>9
    static void _set_$$9(GlobalNamespace::BloomFilterUtils::$$c* value);
    // Get static field: static public System.Func`3<BloomFilter,System.String,BloomFilter> <>9__0_0
    static System::Func_3<GlobalNamespace::BloomFilter, ::Il2CppString*, GlobalNamespace::BloomFilter>* _get_$$9__0_0();
    // Set static field: static public System.Func`3<BloomFilter,System.String,BloomFilter> <>9__0_0
    static void _set_$$9__0_0(System::Func_3<GlobalNamespace::BloomFilter, ::Il2CppString*, GlobalNamespace::BloomFilter>* value);
    // static private System.Void .cctor()
    // Offset: 0x1F0CEDC
    static void _cctor();
    // BloomFilter <ToBloomFilter>b__0_0(BloomFilter a, System.String b)
    // Offset: 0x1F0CF4C
    GlobalNamespace::BloomFilter $ToBloomFilter$b__0_0(GlobalNamespace::BloomFilter a, ::Il2CppString* b);
    // public System.Void .ctor()
    // Offset: 0x1F0CF44
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static BloomFilterUtils::$$c* New_ctor();
  }; // BloomFilterUtils/<>c
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BloomFilterUtils::$$c*, "", "BloomFilterUtils/<>c");
#pragma pack(pop)
