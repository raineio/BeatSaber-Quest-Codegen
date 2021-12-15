// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: StringBuilder
  class StringBuilder;
}
// Completed forward declares
// Type namespace: Polyglot
namespace Polyglot {
  // Forward declaring type: CsvWriter
  class CsvWriter;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(Polyglot::CsvWriter);
DEFINE_IL2CPP_ARG_TYPE(Polyglot::CsvWriter*, "Polyglot", "CsvWriter");
// Type namespace: Polyglot
namespace Polyglot {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Polyglot.CsvWriter
  // [TokenAttribute] Offset: FFFFFFFF
  class CsvWriter : public ::Il2CppObject {
    public:
    // static public System.Void AppendRow(System.String filePath, System.Collections.Generic.List`1<System.String> row)
    // Offset: 0x26270F8
    static void AppendRow(::Il2CppString* filePath, System::Collections::Generic::List_1<::Il2CppString*>* row);
    // static private System.Void AppendElement(System.Text.StringBuilder buffer, System.String element)
    // Offset: 0x26274A8
    static void AppendElement(System::Text::StringBuilder* buffer, ::Il2CppString* element);
    // static private System.Boolean HasEscapeChars(System.String element)
    // Offset: 0x2627404
    static bool HasEscapeChars(::Il2CppString* element);
    // public System.Void .ctor()
    // Offset: 0x2627530
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CsvWriter* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Polyglot::CsvWriter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CsvWriter*, creationType>()));
    }
  }; // Polyglot.CsvWriter
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Polyglot::CsvWriter::AppendRow
// Il2CppName: AppendRow
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Il2CppString*, System::Collections::Generic::List_1<::Il2CppString*>*)>(&Polyglot::CsvWriter::AppendRow)> {
  static const MethodInfo* get() {
    static auto* filePath = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* row = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "String")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Polyglot::CsvWriter*), "AppendRow", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{filePath, row});
  }
};
// Writing MetadataGetter for method: Polyglot::CsvWriter::AppendElement
// Il2CppName: AppendElement
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::Text::StringBuilder*, ::Il2CppString*)>(&Polyglot::CsvWriter::AppendElement)> {
  static const MethodInfo* get() {
    static auto* buffer = &::il2cpp_utils::GetClassFromName("System.Text", "StringBuilder")->byval_arg;
    static auto* element = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Polyglot::CsvWriter*), "AppendElement", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buffer, element});
  }
};
// Writing MetadataGetter for method: Polyglot::CsvWriter::HasEscapeChars
// Il2CppName: HasEscapeChars
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Il2CppString*)>(&Polyglot::CsvWriter::HasEscapeChars)> {
  static const MethodInfo* get() {
    static auto* element = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Polyglot::CsvWriter*), "HasEscapeChars", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{element});
  }
};
// Writing MetadataGetter for method: Polyglot::CsvWriter::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
