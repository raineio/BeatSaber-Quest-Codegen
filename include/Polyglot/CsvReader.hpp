// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Polyglot
namespace Polyglot {
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: Polyglot
namespace Polyglot {
  // Autogenerated type: Polyglot.CsvReader
  class CsvReader : public ::Il2CppObject {
    public:
    // Nested type: Polyglot::CsvReader::ParsingMode
    struct ParsingMode;
    // static public System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.String>> Parse(System.String src)
    // Offset: 0x1EED294
    static System::Collections::Generic::List_1<System::Collections::Generic::List_1<::Il2CppString*>*>* Parse(::Il2CppString* src);
    // public System.Void .ctor()
    // Offset: 0x1EED7D0
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static CsvReader* New_ctor();
  }; // Polyglot.CsvReader
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Polyglot::CsvReader*, "Polyglot", "CsvReader");
#pragma pack(pop)
