// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.IO.TextWriter
#include "System/IO/TextWriter.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
#include "extern/beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: Encoding
  class Encoding;
}
// Completed forward declares
// Type namespace: System.IO
namespace System::IO {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: System.IO.TextWriter/System.IO.NullTextWriter
  // [TokenAttribute] Offset: FFFFFFFF
  class TextWriter::NullTextWriter : public System::IO::TextWriter {
    public:
    // public override System.Text.Encoding get_Encoding()
    // Offset: 0x1A07678
    // Implemented from: System.IO.TextWriter
    // Base method: System.Text.Encoding TextWriter::get_Encoding()
    System::Text::Encoding* get_Encoding();
    // System.Void .ctor()
    // Offset: 0x1A07114
    // Implemented from: System.IO.TextWriter
    // Base method: System.Void TextWriter::.ctor()
    // Base method: System.Void MarshalByRefObject::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TextWriter::NullTextWriter* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::IO::TextWriter::NullTextWriter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TextWriter::NullTextWriter*, creationType>()));
    }
    // public override System.Void Write(System.Char[] buffer, System.Int32 index, System.Int32 count)
    // Offset: 0x1A07680
    // Implemented from: System.IO.TextWriter
    // Base method: System.Void TextWriter::Write(System.Char[] buffer, System.Int32 index, System.Int32 count)
    void Write(::ArrayW<::Il2CppChar> buffer, int index, int count);
    // public override System.Void Write(System.String value)
    // Offset: 0x1A07684
    // Implemented from: System.IO.TextWriter
    // Base method: System.Void TextWriter::Write(System.String value)
    void Write(::Il2CppString* value);
    // public override System.Void WriteLine()
    // Offset: 0x1A07688
    // Implemented from: System.IO.TextWriter
    // Base method: System.Void TextWriter::WriteLine()
    void WriteLine();
    // public override System.Void WriteLine(System.String value)
    // Offset: 0x1A0768C
    // Implemented from: System.IO.TextWriter
    // Base method: System.Void TextWriter::WriteLine(System.String value)
    void WriteLine(::Il2CppString* value);
  }; // System.IO.TextWriter/System.IO.NullTextWriter
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(System::IO::TextWriter::NullTextWriter*, "System.IO", "TextWriter/NullTextWriter");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::IO::TextWriter::NullTextWriter::get_Encoding
// Il2CppName: get_Encoding
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Text::Encoding* (System::IO::TextWriter::NullTextWriter::*)()>(&System::IO::TextWriter::NullTextWriter::get_Encoding)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::TextWriter::NullTextWriter*), "get_Encoding", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::TextWriter::NullTextWriter::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::IO::TextWriter::NullTextWriter::Write
// Il2CppName: Write
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::TextWriter::NullTextWriter::*)(::ArrayW<::Il2CppChar>, int, int)>(&System::IO::TextWriter::NullTextWriter::Write)> {
  static const MethodInfo* get() {
    static auto* buffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Char"), 1)->byval_arg;
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::TextWriter::NullTextWriter*), "Write", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buffer, index, count});
  }
};
// Writing MetadataGetter for method: System::IO::TextWriter::NullTextWriter::Write
// Il2CppName: Write
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::TextWriter::NullTextWriter::*)(::Il2CppString*)>(&System::IO::TextWriter::NullTextWriter::Write)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::TextWriter::NullTextWriter*), "Write", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::IO::TextWriter::NullTextWriter::WriteLine
// Il2CppName: WriteLine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::TextWriter::NullTextWriter::*)()>(&System::IO::TextWriter::NullTextWriter::WriteLine)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::TextWriter::NullTextWriter*), "WriteLine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::TextWriter::NullTextWriter::WriteLine
// Il2CppName: WriteLine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::TextWriter::NullTextWriter::*)(::Il2CppString*)>(&System::IO::TextWriter::NullTextWriter::WriteLine)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::TextWriter::NullTextWriter*), "WriteLine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
