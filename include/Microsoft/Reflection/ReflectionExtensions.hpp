// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
  // Forward declaring type: TypeCode
  struct TypeCode;
}
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: Assembly
  class Assembly;
}
// Completed forward declares
// Type namespace: Microsoft.Reflection
namespace Microsoft::Reflection {
  // Autogenerated type: Microsoft.Reflection.ReflectionExtensions
  class ReflectionExtensions : public ::Il2CppObject {
    public:
    // static public System.Boolean IsEnum(System.Type type)
    // Offset: 0x15725AC
    static bool IsEnum(System::Type* type);
    // static public System.Boolean IsAbstract(System.Type type)
    // Offset: 0x15725CC
    static bool IsAbstract(System::Type* type);
    // static public System.Boolean IsSealed(System.Type type)
    // Offset: 0x15725E4
    static bool IsSealed(System::Type* type);
    // static public System.Type BaseType(System.Type type)
    // Offset: 0x15725FC
    static System::Type* BaseType(System::Type* type);
    // static public System.Reflection.Assembly Assembly(System.Type type)
    // Offset: 0x157261C
    static System::Reflection::Assembly* Assembly(System::Type* type);
    // static public System.TypeCode GetTypeCode(System.Type type)
    // Offset: 0x157263C
    static System::TypeCode GetTypeCode(System::Type* type);
    // static public System.Boolean ReflectionOnly(System.Reflection.Assembly assm)
    // Offset: 0x15726A4
    static bool ReflectionOnly(System::Reflection::Assembly* assm);
  }; // Microsoft.Reflection.ReflectionExtensions
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Microsoft::Reflection::ReflectionExtensions*, "Microsoft.Reflection", "ReflectionExtensions");
#pragma pack(pop)
