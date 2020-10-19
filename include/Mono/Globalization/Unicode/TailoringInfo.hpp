// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Type namespace: Mono.Globalization.Unicode
namespace Mono::Globalization::Unicode {
  // Autogenerated type: Mono.Globalization.Unicode.TailoringInfo
  class TailoringInfo : public ::Il2CppObject {
    public:
    // public readonly System.Int32 LCID
    // Offset: 0x10
    int LCID;
    // public readonly System.Int32 TailoringIndex
    // Offset: 0x14
    int TailoringIndex;
    // public readonly System.Int32 TailoringCount
    // Offset: 0x18
    int TailoringCount;
    // public readonly System.Boolean FrenchSort
    // Offset: 0x1C
    bool FrenchSort;
    // public System.Void .ctor(System.Int32 lcid, System.Int32 tailoringIndex, System.Int32 tailoringCount, System.Boolean frenchSort)
    // Offset: 0x157C004
    static TailoringInfo* New_ctor(int lcid, int tailoringIndex, int tailoringCount, bool frenchSort);
  }; // Mono.Globalization.Unicode.TailoringInfo
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Mono::Globalization::Unicode::TailoringInfo*, "Mono.Globalization.Unicode", "TailoringInfo");
#pragma pack(pop)
