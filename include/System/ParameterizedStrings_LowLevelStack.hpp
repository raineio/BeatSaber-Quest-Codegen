// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.ParameterizedStrings
#include "System/ParameterizedStrings.hpp"
// Completed includes
// Type namespace: System
namespace System {
  // Autogenerated type: System.ParameterizedStrings/LowLevelStack
  class ParameterizedStrings::LowLevelStack : public ::Il2CppObject {
    public:
    // private System.ParameterizedStrings/FormatParam[] _arr
    // Offset: 0x10
    ::Array<System::ParameterizedStrings::FormatParam>* arr;
    // private System.Int32 _count
    // Offset: 0x18
    int count;
    // public System.ParameterizedStrings/FormatParam Pop()
    // Offset: 0x1854CA4
    System::ParameterizedStrings::FormatParam Pop();
    // public System.Void Push(System.ParameterizedStrings/FormatParam item)
    // Offset: 0x1855040
    void Push(System::ParameterizedStrings::FormatParam item);
    // public System.Void Clear()
    // Offset: 0x18542D8
    void Clear();
    // public System.Void .ctor()
    // Offset: 0x1854278
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static ParameterizedStrings::LowLevelStack* New_ctor();
  }; // System.ParameterizedStrings/LowLevelStack
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::ParameterizedStrings::LowLevelStack*, "System", "ParameterizedStrings/LowLevelStack");
#pragma pack(pop)
