// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Runtime::Serialization::Formatters::Binary
namespace System::Runtime::Serialization::Formatters::Binary {
  // Forward declaring type: MessageEnum
  struct MessageEnum;
  // Forward declaring type: __BinaryWriter
  class __BinaryWriter;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: System.Runtime.Serialization.Formatters.Binary
namespace System::Runtime::Serialization::Formatters::Binary {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.Serialization.Formatters.Binary.IOUtil
  class IOUtil : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: IOUtil
    IOUtil() noexcept {}
    // static System.Boolean FlagTest(System.Runtime.Serialization.Formatters.Binary.MessageEnum flag, System.Runtime.Serialization.Formatters.Binary.MessageEnum target)
    // Offset: 0x1609338
    static bool FlagTest(System::Runtime::Serialization::Formatters::Binary::MessageEnum flag, System::Runtime::Serialization::Formatters::Binary::MessageEnum target);
    // static System.Void WriteStringWithCode(System.String value, System.Runtime.Serialization.Formatters.Binary.__BinaryWriter sout)
    // Offset: 0x16092D8
    static void WriteStringWithCode(::Il2CppString* value, System::Runtime::Serialization::Formatters::Binary::__BinaryWriter* sout);
    // static System.Void WriteWithCode(System.Type type, System.Object value, System.Runtime.Serialization.Formatters.Binary.__BinaryWriter sout)
    // Offset: 0x1609344
    static void WriteWithCode(System::Type* type, ::Il2CppObject* value, System::Runtime::Serialization::Formatters::Binary::__BinaryWriter* sout);
  }; // System.Runtime.Serialization.Formatters.Binary.IOUtil
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Serialization::Formatters::Binary::IOUtil*, "System.Runtime.Serialization.Formatters.Binary", "IOUtil");
// Writing MetadataGetter for method: System::Runtime::Serialization::Formatters::Binary::IOUtil::FlagTest
// Il2CppName: FlagTest
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(System::Runtime::Serialization::Formatters::Binary::MessageEnum, System::Runtime::Serialization::Formatters::Binary::MessageEnum)>(&System::Runtime::Serialization::Formatters::Binary::IOUtil::FlagTest)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::Formatters::Binary::IOUtil*), "FlagTest", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Runtime::Serialization::Formatters::Binary::MessageEnum>(), ::il2cpp_utils::ExtractIndependentType<System::Runtime::Serialization::Formatters::Binary::MessageEnum>()});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::Formatters::Binary::IOUtil::WriteStringWithCode
// Il2CppName: WriteStringWithCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Il2CppString*, System::Runtime::Serialization::Formatters::Binary::__BinaryWriter*)>(&System::Runtime::Serialization::Formatters::Binary::IOUtil::WriteStringWithCode)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::Formatters::Binary::IOUtil*), "WriteStringWithCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>(), ::il2cpp_utils::ExtractIndependentType<System::Runtime::Serialization::Formatters::Binary::__BinaryWriter*>()});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::Formatters::Binary::IOUtil::WriteWithCode
// Il2CppName: WriteWithCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::Type*, ::Il2CppObject*, System::Runtime::Serialization::Formatters::Binary::__BinaryWriter*)>(&System::Runtime::Serialization::Formatters::Binary::IOUtil::WriteWithCode)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::Formatters::Binary::IOUtil*), "WriteWithCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Type*>(), ::il2cpp_utils::ExtractIndependentType<::Il2CppObject*>(), ::il2cpp_utils::ExtractIndependentType<System::Runtime::Serialization::Formatters::Binary::__BinaryWriter*>()});
  }
};
