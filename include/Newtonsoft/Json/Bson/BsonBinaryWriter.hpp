// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: Encoding
  class Encoding;
}
// Completed forward declares
// Type namespace: Newtonsoft.Json.Bson
namespace Newtonsoft::Json::Bson {
  // Forward declaring type: BsonBinaryWriter
  class BsonBinaryWriter;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Newtonsoft::Json::Bson::BsonBinaryWriter);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Bson::BsonBinaryWriter*, "Newtonsoft.Json.Bson", "BsonBinaryWriter");
// Type namespace: Newtonsoft.Json.Bson
namespace Newtonsoft::Json::Bson {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Newtonsoft.Json.Bson.BsonBinaryWriter
  // [TokenAttribute] Offset: FFFFFFFF
  // [PreserveAttribute] Offset: FFFFFFFF
  class BsonBinaryWriter : public ::Il2CppObject {
    public:
    // Get static field: static private readonly System.Text.Encoding Encoding
    static ::System::Text::Encoding* _get_Encoding();
    // Set static field: static private readonly System.Text.Encoding Encoding
    static void _set_Encoding(::System::Text::Encoding* value);
    // static private System.Void .cctor()
    // Offset: 0x1802B24
    static void _cctor();
  }; // Newtonsoft.Json.Bson.BsonBinaryWriter
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Newtonsoft::Json::Bson::BsonBinaryWriter::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Newtonsoft::Json::Bson::BsonBinaryWriter::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Bson::BsonBinaryWriter*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
