// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Int32
#include "System/Int32.hpp"
// Including type: System.Double
#include "System/Double.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Decimal
  struct Decimal;
}
// Completed forward declares
// Type namespace: System
namespace System {
  // Autogenerated type: System.Math
  class Math : public ::Il2CppObject {
    public:
    // Get static field: static private System.Double doubleRoundLimit
    static double _get_doubleRoundLimit();
    // Set static field: static private System.Double doubleRoundLimit
    static void _set_doubleRoundLimit(double value);
    // static field const value: static private System.Int32 maxRoundingDigits
    static constexpr const int maxRoundingDigits = 15;
    // Get static field: static private System.Int32 maxRoundingDigits
    static int _get_maxRoundingDigits();
    // Set static field: static private System.Int32 maxRoundingDigits
    static void _set_maxRoundingDigits(int value);
    // Get static field: static private System.Double[] roundPower10Double
    static ::Array<double>* _get_roundPower10Double();
    // Set static field: static private System.Double[] roundPower10Double
    static void _set_roundPower10Double(::Array<double>* value);
    // static field const value: static public System.Double PI
    static constexpr const double PI = 3.141592653589793;
    // Get static field: static public System.Double PI
    static double _get_PI();
    // Set static field: static public System.Double PI
    static void _set_PI(double value);
    // static field const value: static public System.Double E
    static constexpr const double E = 2.718281828459045;
    // Get static field: static public System.Double E
    static double _get_E();
    // Set static field: static public System.Double E
    static void _set_E(double value);
    // static public System.Double Acos(System.Double d)
    // Offset: 0x1373AAC
    static double Acos(double d);
    // static public System.Double Asin(System.Double d)
    // Offset: 0x1373AB0
    static double Asin(double d);
    // static public System.Double Atan(System.Double d)
    // Offset: 0x1373AB4
    static double Atan(double d);
    // static public System.Double Atan2(System.Double y, System.Double x)
    // Offset: 0x1373AB8
    static double Atan2(double y, double x);
    // static public System.Double Ceiling(System.Double a)
    // Offset: 0x1373ABC
    static double Ceiling(double a);
    // static public System.Double Cos(System.Double d)
    // Offset: 0x1373AC4
    static double Cos(double d);
    // static public System.Double Floor(System.Double d)
    // Offset: 0x1373AC8
    static double Floor(double d);
    // static private System.Double InternalTruncate(System.Double d)
    // Offset: 0x1373AD0
    static double InternalTruncate(double d);
    // static public System.Double Sin(System.Double a)
    // Offset: 0x1373B40
    static double Sin(double a);
    // static public System.Double Tan(System.Double a)
    // Offset: 0x1373B44
    static double Tan(double a);
    // static public System.Double Round(System.Double a)
    // Offset: 0x1373B48
    static double Round(double a);
    // static private System.Double SplitFractionDouble(System.Double* value)
    // Offset: 0x1373B3C
    static double SplitFractionDouble(double* value);
    // static public System.Double Truncate(System.Double d)
    // Offset: 0x1373BC8
    static double Truncate(double d);
    // static public System.Double Sqrt(System.Double d)
    // Offset: 0x1373C34
    static double Sqrt(double d);
    // static public System.Double Log(System.Double d)
    // Offset: 0x1373C4C
    static double Log(double d);
    // static public System.Double Log10(System.Double d)
    // Offset: 0x1373C50
    static double Log10(double d);
    // static public System.Double Pow(System.Double x, System.Double y)
    // Offset: 0x1373C54
    static double Pow(double x, double y);
    // static public System.Int32 Abs(System.Int32 value)
    // Offset: 0x1373C58
    static int Abs(int value);
    // static private System.Int32 AbsHelper(System.Int32 value)
    // Offset: 0x1373CD0
    static int AbsHelper(int value);
    // static public System.Int64 Abs(System.Int64 value)
    // Offset: 0x1373D70
    static int64_t Abs(int64_t value);
    // static private System.Int64 AbsHelper(System.Int64 value)
    // Offset: 0x1373DE8
    static int64_t AbsHelper(int64_t value);
    // static public System.Single Abs(System.Single value)
    // Offset: 0x1373E88
    static float Abs(float value);
    // static public System.Double Abs(System.Double value)
    // Offset: 0x1373E90
    static double Abs(double value);
    // static public System.Decimal Abs(System.Decimal value)
    // Offset: 0x1373E98
    static System::Decimal Abs(System::Decimal value);
    // static public System.Int32 Max(System.Int32 val1, System.Int32 val2)
    // Offset: 0x1373F10
    static int Max(int val1, int val2);
    // static public System.UInt32 Max(System.UInt32 val1, System.UInt32 val2)
    // Offset: 0x1373F1C
    static uint Max(uint val1, uint val2);
    // static public System.Int64 Max(System.Int64 val1, System.Int64 val2)
    // Offset: 0x1373F28
    static int64_t Max(int64_t val1, int64_t val2);
    // static public System.UInt64 Max(System.UInt64 val1, System.UInt64 val2)
    // Offset: 0x1373F34
    static uint64_t Max(uint64_t val1, uint64_t val2);
    // static public System.Single Max(System.Single val1, System.Single val2)
    // Offset: 0x1373F40
    static float Max(float val1, float val2);
    // static public System.Double Max(System.Double val1, System.Double val2)
    // Offset: 0x1373F84
    static double Max(double val1, double val2);
    // static public System.Int32 Min(System.Int32 val1, System.Int32 val2)
    // Offset: 0x1374014
    static int Min(int val1, int val2);
    // static public System.UInt32 Min(System.UInt32 val1, System.UInt32 val2)
    // Offset: 0x1374020
    static uint Min(uint val1, uint val2);
    // static public System.Int64 Min(System.Int64 val1, System.Int64 val2)
    // Offset: 0x137402C
    static int64_t Min(int64_t val1, int64_t val2);
    // static public System.UInt64 Min(System.UInt64 val1, System.UInt64 val2)
    // Offset: 0x1374038
    static uint64_t Min(uint64_t val1, uint64_t val2);
    // static public System.Single Min(System.Single val1, System.Single val2)
    // Offset: 0x1374044
    static float Min(float val1, float val2);
    // static public System.Double Min(System.Double val1, System.Double val2)
    // Offset: 0x1374088
    static double Min(double val1, double val2);
    // static public System.Double Log(System.Double a, System.Double newBase)
    // Offset: 0x1374118
    static double Log(double a, double newBase);
    // static private System.Void .cctor()
    // Offset: 0x137425C
    static void _cctor();
  }; // System.Math
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Math*, "System", "Math");
#pragma pack(pop)
