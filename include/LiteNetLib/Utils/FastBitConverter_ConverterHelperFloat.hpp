// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: LiteNetLib.Utils.FastBitConverter
#include "LiteNetLib/Utils/FastBitConverter.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(LiteNetLib::Utils::FastBitConverter::ConverterHelperFloat, "LiteNetLib.Utils", "FastBitConverter/ConverterHelperFloat");
// Type namespace: LiteNetLib.Utils
namespace LiteNetLib::Utils {
  // WARNING Size may be invalid!
  // WARNING Layout: Explicit may not be correctly taken into account!
  // Autogenerated type: LiteNetLib.Utils.FastBitConverter/LiteNetLib.Utils.ConverterHelperFloat
  // [TokenAttribute] Offset: FFFFFFFF
  struct FastBitConverter::ConverterHelperFloat/*, public System::ValueType*/ {
    public:
    public:
    // public System.Int32 Aint
    // Size: 0x4
    // Offset: 0x0
    int Aint;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Single Afloat
    // Size: 0x4
    // Offset: 0x0
    float Afloat;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Creating value type constructor for type: ConverterHelperFloat
    constexpr ConverterHelperFloat(int Aint_ = {}, float Afloat_ = {}) noexcept : Aint{Aint_}, Afloat{Afloat_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Get instance field reference: public System.Int32 Aint
    int& dyn_Aint();
    // Get instance field reference: public System.Single Afloat
    float& dyn_Afloat();
  }; // LiteNetLib.Utils.FastBitConverter/LiteNetLib.Utils.ConverterHelperFloat
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
