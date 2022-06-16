// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Newtonsoft.Json.JsonReader
#include "Newtonsoft/Json/JsonReader.hpp"
// Including type: Newtonsoft.Json.Bson.BsonType
#include "Newtonsoft/Json/Bson/BsonType.hpp"
// Including type: System.DateTimeKind
#include "System/DateTimeKind.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Newtonsoft::Json::Bson
namespace Newtonsoft::Json::Bson {
  // Forward declaring type: BsonBinaryType
  struct BsonBinaryType;
}
// Forward declaring namespace: System::IO
namespace System::IO {
  // Forward declaring type: BinaryReader
  class BinaryReader;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: Newtonsoft.Json.Bson
namespace Newtonsoft::Json::Bson {
  // Forward declaring type: BsonReader
  class BsonReader;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Newtonsoft::Json::Bson::BsonReader);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Bson::BsonReader*, "Newtonsoft.Json.Bson", "BsonReader");
// Type namespace: Newtonsoft.Json.Bson
namespace Newtonsoft::Json::Bson {
  // WARNING Size may be invalid!
  // Autogenerated type: Newtonsoft.Json.Bson.BsonReader
  // [TokenAttribute] Offset: FFFFFFFF
  // [PreserveAttribute] Offset: FFFFFFFF
  class BsonReader : public ::Newtonsoft::Json::JsonReader {
    public:
    // Nested type: ::Newtonsoft::Json::Bson::BsonReader::BsonReaderState
    struct BsonReaderState;
    // Nested type: ::Newtonsoft::Json::Bson::BsonReader::ContainerContext
    class ContainerContext;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: Newtonsoft.Json.Bson.BsonReader/Newtonsoft.Json.Bson.BsonReaderState
    // [TokenAttribute] Offset: FFFFFFFF
    struct BsonReaderState/*, public ::System::Enum*/ {
      public:
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      public:
      // Creating value type constructor for type: BsonReaderState
      constexpr BsonReaderState(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator ::System::Enum
      operator ::System::Enum() noexcept {
        return *reinterpret_cast<::System::Enum*>(this);
      }
      // Creating interface conversion operator: i_Enum
      inline ::System::Enum* i_Enum() noexcept {
        return reinterpret_cast<::System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public Newtonsoft.Json.Bson.BsonReader/Newtonsoft.Json.Bson.BsonReaderState Normal
      static constexpr const int Normal = 0;
      // Get static field: static public Newtonsoft.Json.Bson.BsonReader/Newtonsoft.Json.Bson.BsonReaderState Normal
      static ::Newtonsoft::Json::Bson::BsonReader::BsonReaderState _get_Normal();
      // Set static field: static public Newtonsoft.Json.Bson.BsonReader/Newtonsoft.Json.Bson.BsonReaderState Normal
      static void _set_Normal(::Newtonsoft::Json::Bson::BsonReader::BsonReaderState value);
      // static field const value: static public Newtonsoft.Json.Bson.BsonReader/Newtonsoft.Json.Bson.BsonReaderState ReferenceStart
      static constexpr const int ReferenceStart = 1;
      // Get static field: static public Newtonsoft.Json.Bson.BsonReader/Newtonsoft.Json.Bson.BsonReaderState ReferenceStart
      static ::Newtonsoft::Json::Bson::BsonReader::BsonReaderState _get_ReferenceStart();
      // Set static field: static public Newtonsoft.Json.Bson.BsonReader/Newtonsoft.Json.Bson.BsonReaderState ReferenceStart
      static void _set_ReferenceStart(::Newtonsoft::Json::Bson::BsonReader::BsonReaderState value);
      // static field const value: static public Newtonsoft.Json.Bson.BsonReader/Newtonsoft.Json.Bson.BsonReaderState ReferenceRef
      static constexpr const int ReferenceRef = 2;
      // Get static field: static public Newtonsoft.Json.Bson.BsonReader/Newtonsoft.Json.Bson.BsonReaderState ReferenceRef
      static ::Newtonsoft::Json::Bson::BsonReader::BsonReaderState _get_ReferenceRef();
      // Set static field: static public Newtonsoft.Json.Bson.BsonReader/Newtonsoft.Json.Bson.BsonReaderState ReferenceRef
      static void _set_ReferenceRef(::Newtonsoft::Json::Bson::BsonReader::BsonReaderState value);
      // static field const value: static public Newtonsoft.Json.Bson.BsonReader/Newtonsoft.Json.Bson.BsonReaderState ReferenceId
      static constexpr const int ReferenceId = 3;
      // Get static field: static public Newtonsoft.Json.Bson.BsonReader/Newtonsoft.Json.Bson.BsonReaderState ReferenceId
      static ::Newtonsoft::Json::Bson::BsonReader::BsonReaderState _get_ReferenceId();
      // Set static field: static public Newtonsoft.Json.Bson.BsonReader/Newtonsoft.Json.Bson.BsonReaderState ReferenceId
      static void _set_ReferenceId(::Newtonsoft::Json::Bson::BsonReader::BsonReaderState value);
      // static field const value: static public Newtonsoft.Json.Bson.BsonReader/Newtonsoft.Json.Bson.BsonReaderState CodeWScopeStart
      static constexpr const int CodeWScopeStart = 4;
      // Get static field: static public Newtonsoft.Json.Bson.BsonReader/Newtonsoft.Json.Bson.BsonReaderState CodeWScopeStart
      static ::Newtonsoft::Json::Bson::BsonReader::BsonReaderState _get_CodeWScopeStart();
      // Set static field: static public Newtonsoft.Json.Bson.BsonReader/Newtonsoft.Json.Bson.BsonReaderState CodeWScopeStart
      static void _set_CodeWScopeStart(::Newtonsoft::Json::Bson::BsonReader::BsonReaderState value);
      // static field const value: static public Newtonsoft.Json.Bson.BsonReader/Newtonsoft.Json.Bson.BsonReaderState CodeWScopeCode
      static constexpr const int CodeWScopeCode = 5;
      // Get static field: static public Newtonsoft.Json.Bson.BsonReader/Newtonsoft.Json.Bson.BsonReaderState CodeWScopeCode
      static ::Newtonsoft::Json::Bson::BsonReader::BsonReaderState _get_CodeWScopeCode();
      // Set static field: static public Newtonsoft.Json.Bson.BsonReader/Newtonsoft.Json.Bson.BsonReaderState CodeWScopeCode
      static void _set_CodeWScopeCode(::Newtonsoft::Json::Bson::BsonReader::BsonReaderState value);
      // static field const value: static public Newtonsoft.Json.Bson.BsonReader/Newtonsoft.Json.Bson.BsonReaderState CodeWScopeScope
      static constexpr const int CodeWScopeScope = 6;
      // Get static field: static public Newtonsoft.Json.Bson.BsonReader/Newtonsoft.Json.Bson.BsonReaderState CodeWScopeScope
      static ::Newtonsoft::Json::Bson::BsonReader::BsonReaderState _get_CodeWScopeScope();
      // Set static field: static public Newtonsoft.Json.Bson.BsonReader/Newtonsoft.Json.Bson.BsonReaderState CodeWScopeScope
      static void _set_CodeWScopeScope(::Newtonsoft::Json::Bson::BsonReader::BsonReaderState value);
      // static field const value: static public Newtonsoft.Json.Bson.BsonReader/Newtonsoft.Json.Bson.BsonReaderState CodeWScopeScopeObject
      static constexpr const int CodeWScopeScopeObject = 7;
      // Get static field: static public Newtonsoft.Json.Bson.BsonReader/Newtonsoft.Json.Bson.BsonReaderState CodeWScopeScopeObject
      static ::Newtonsoft::Json::Bson::BsonReader::BsonReaderState _get_CodeWScopeScopeObject();
      // Set static field: static public Newtonsoft.Json.Bson.BsonReader/Newtonsoft.Json.Bson.BsonReaderState CodeWScopeScopeObject
      static void _set_CodeWScopeScopeObject(::Newtonsoft::Json::Bson::BsonReader::BsonReaderState value);
      // static field const value: static public Newtonsoft.Json.Bson.BsonReader/Newtonsoft.Json.Bson.BsonReaderState CodeWScopeScopeEnd
      static constexpr const int CodeWScopeScopeEnd = 8;
      // Get static field: static public Newtonsoft.Json.Bson.BsonReader/Newtonsoft.Json.Bson.BsonReaderState CodeWScopeScopeEnd
      static ::Newtonsoft::Json::Bson::BsonReader::BsonReaderState _get_CodeWScopeScopeEnd();
      // Set static field: static public Newtonsoft.Json.Bson.BsonReader/Newtonsoft.Json.Bson.BsonReaderState CodeWScopeScopeEnd
      static void _set_CodeWScopeScopeEnd(::Newtonsoft::Json::Bson::BsonReader::BsonReaderState value);
      // Get instance field reference: public System.Int32 value__
      [[deprecated("Use field access instead!")]] int& dyn_value__();
    }; // Newtonsoft.Json.Bson.BsonReader/Newtonsoft.Json.Bson.BsonReaderState
    #pragma pack(pop)
    static check_size<sizeof(BsonReader::BsonReaderState), 0 + sizeof(int)> __Newtonsoft_Json_Bson_BsonReader_BsonReaderStateSizeCheck;
    static_assert(sizeof(BsonReader::BsonReaderState) == 0x4);
    public:
    // private readonly System.IO.BinaryReader _reader
    // Size: 0x8
    // Offset: 0x78
    ::System::IO::BinaryReader* reader;
    // Field size check
    static_assert(sizeof(::System::IO::BinaryReader*) == 0x8);
    // private readonly System.Collections.Generic.List`1<Newtonsoft.Json.Bson.BsonReader/Newtonsoft.Json.Bson.ContainerContext> _stack
    // Size: 0x8
    // Offset: 0x80
    ::System::Collections::Generic::List_1<::Newtonsoft::Json::Bson::BsonReader::ContainerContext*>* stack;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::Newtonsoft::Json::Bson::BsonReader::ContainerContext*>*) == 0x8);
    // private System.Byte[] _byteBuffer
    // Size: 0x8
    // Offset: 0x88
    ::ArrayW<uint8_t> byteBuffer;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    // private System.Char[] _charBuffer
    // Size: 0x8
    // Offset: 0x90
    ::ArrayW<::Il2CppChar> charBuffer;
    // Field size check
    static_assert(sizeof(::ArrayW<::Il2CppChar>) == 0x8);
    // private Newtonsoft.Json.Bson.BsonType _currentElementType
    // Size: 0x1
    // Offset: 0x98
    ::Newtonsoft::Json::Bson::BsonType currentElementType;
    // Field size check
    static_assert(sizeof(::Newtonsoft::Json::Bson::BsonType) == 0x1);
    // private Newtonsoft.Json.Bson.BsonReader/Newtonsoft.Json.Bson.BsonReaderState _bsonReaderState
    // Size: 0x4
    // Offset: 0x9C
    ::Newtonsoft::Json::Bson::BsonReader::BsonReaderState bsonReaderState;
    // Field size check
    static_assert(sizeof(::Newtonsoft::Json::Bson::BsonReader::BsonReaderState) == 0x4);
    // private Newtonsoft.Json.Bson.BsonReader/Newtonsoft.Json.Bson.ContainerContext _currentContext
    // Size: 0x8
    // Offset: 0xA0
    ::Newtonsoft::Json::Bson::BsonReader::ContainerContext* currentContext;
    // Field size check
    static_assert(sizeof(::Newtonsoft::Json::Bson::BsonReader::ContainerContext*) == 0x8);
    // private System.Boolean _readRootValueAsArray
    // Size: 0x1
    // Offset: 0xA8
    bool readRootValueAsArray;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _jsonNet35BinaryCompatibility
    // Size: 0x1
    // Offset: 0xA9
    bool jsonNet35BinaryCompatibility;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.DateTimeKind _dateTimeKindHandling
    // Size: 0x4
    // Offset: 0xAC
    ::System::DateTimeKind dateTimeKindHandling;
    // Field size check
    static_assert(sizeof(::System::DateTimeKind) == 0x4);
    public:
    // Get static field: static private readonly System.Byte[] SeqRange1
    static ::ArrayW<uint8_t> _get_SeqRange1();
    // Set static field: static private readonly System.Byte[] SeqRange1
    static void _set_SeqRange1(::ArrayW<uint8_t> value);
    // Get static field: static private readonly System.Byte[] SeqRange2
    static ::ArrayW<uint8_t> _get_SeqRange2();
    // Set static field: static private readonly System.Byte[] SeqRange2
    static void _set_SeqRange2(::ArrayW<uint8_t> value);
    // Get static field: static private readonly System.Byte[] SeqRange3
    static ::ArrayW<uint8_t> _get_SeqRange3();
    // Set static field: static private readonly System.Byte[] SeqRange3
    static void _set_SeqRange3(::ArrayW<uint8_t> value);
    // Get static field: static private readonly System.Byte[] SeqRange4
    static ::ArrayW<uint8_t> _get_SeqRange4();
    // Set static field: static private readonly System.Byte[] SeqRange4
    static void _set_SeqRange4(::ArrayW<uint8_t> value);
    // Get instance field reference: private readonly System.IO.BinaryReader _reader
    [[deprecated("Use field access instead!")]] ::System::IO::BinaryReader*& dyn__reader();
    // Get instance field reference: private readonly System.Collections.Generic.List`1<Newtonsoft.Json.Bson.BsonReader/Newtonsoft.Json.Bson.ContainerContext> _stack
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::Newtonsoft::Json::Bson::BsonReader::ContainerContext*>*& dyn__stack();
    // Get instance field reference: private System.Byte[] _byteBuffer
    [[deprecated("Use field access instead!")]] ::ArrayW<uint8_t>& dyn__byteBuffer();
    // Get instance field reference: private System.Char[] _charBuffer
    [[deprecated("Use field access instead!")]] ::ArrayW<::Il2CppChar>& dyn__charBuffer();
    // Get instance field reference: private Newtonsoft.Json.Bson.BsonType _currentElementType
    [[deprecated("Use field access instead!")]] ::Newtonsoft::Json::Bson::BsonType& dyn__currentElementType();
    // Get instance field reference: private Newtonsoft.Json.Bson.BsonReader/Newtonsoft.Json.Bson.BsonReaderState _bsonReaderState
    [[deprecated("Use field access instead!")]] ::Newtonsoft::Json::Bson::BsonReader::BsonReaderState& dyn__bsonReaderState();
    // Get instance field reference: private Newtonsoft.Json.Bson.BsonReader/Newtonsoft.Json.Bson.ContainerContext _currentContext
    [[deprecated("Use field access instead!")]] ::Newtonsoft::Json::Bson::BsonReader::ContainerContext*& dyn__currentContext();
    // Get instance field reference: private System.Boolean _readRootValueAsArray
    [[deprecated("Use field access instead!")]] bool& dyn__readRootValueAsArray();
    // Get instance field reference: private System.Boolean _jsonNet35BinaryCompatibility
    [[deprecated("Use field access instead!")]] bool& dyn__jsonNet35BinaryCompatibility();
    // Get instance field reference: private System.DateTimeKind _dateTimeKindHandling
    [[deprecated("Use field access instead!")]] ::System::DateTimeKind& dyn__dateTimeKindHandling();
    // public System.DateTimeKind get_DateTimeKindHandling()
    // Offset: 0x17AE3E8
    ::System::DateTimeKind get_DateTimeKindHandling();
    // static private System.Void .cctor()
    // Offset: 0x17AFC30
    static void _cctor();
    // private System.String ReadElement()
    // Offset: 0x17AE3F0
    ::StringW ReadElement();
    // private System.Boolean ReadCodeWScope()
    // Offset: 0x17AEC54
    bool ReadCodeWScope();
    // private System.Boolean ReadReference()
    // Offset: 0x17AEAB0
    bool ReadReference();
    // private System.Boolean ReadNormal()
    // Offset: 0x17AE8B8
    bool ReadNormal();
    // private System.Void PopContext()
    // Offset: 0x17AF4EC
    void PopContext();
    // private System.Void PushContext(Newtonsoft.Json.Bson.BsonReader/Newtonsoft.Json.Bson.ContainerContext newContext)
    // Offset: 0x17AEF1C
    void PushContext(::Newtonsoft::Json::Bson::BsonReader::ContainerContext* newContext);
    // private System.Byte ReadByte()
    // Offset: 0x17AF4B4
    uint8_t ReadByte();
    // private System.Void ReadType(Newtonsoft.Json.Bson.BsonType type)
    // Offset: 0x17AEFC8
    void ReadType(::Newtonsoft::Json::Bson::BsonType type);
    // private System.Byte[] ReadBinary(out Newtonsoft.Json.Bson.BsonBinaryType binaryType)
    // Offset: 0x17AF5DC
    ::ArrayW<uint8_t> ReadBinary(ByRef<::Newtonsoft::Json::Bson::BsonBinaryType> binaryType);
    // private System.String ReadString()
    // Offset: 0x17AE450
    ::StringW ReadString();
    // private System.String ReadLengthString()
    // Offset: 0x17AEE8C
    ::StringW ReadLengthString();
    // private System.String GetString(System.Int32 length)
    // Offset: 0x17AF7BC
    ::StringW GetString(int length);
    // private System.Int32 GetLastFullCharStop(System.Int32 start)
    // Offset: 0x17AF724
    int GetLastFullCharStop(int start);
    // private System.Int32 BytesInSequence(System.Byte b)
    // Offset: 0x17AFA18
    int BytesInSequence(uint8_t b);
    // private System.Void EnsureBuffers()
    // Offset: 0x17AF67C
    void EnsureBuffers();
    // private System.Double ReadDouble()
    // Offset: 0x17AF5A0
    double ReadDouble();
    // private System.Int32 ReadInt32()
    // Offset: 0x17AEE50
    int ReadInt32();
    // private System.Int64 ReadInt64()
    // Offset: 0x17AF640
    int64_t ReadInt64();
    // private Newtonsoft.Json.Bson.BsonType ReadType()
    // Offset: 0x17AE418
    ::Newtonsoft::Json::Bson::BsonType ReadType();
    // private System.Void MovePosition(System.Int32 count)
    // Offset: 0x17AF57C
    void MovePosition(int count);
    // private System.Byte[] ReadBytes(System.Int32 count)
    // Offset: 0x17AEF8C
    ::ArrayW<uint8_t> ReadBytes(int count);
    // public override System.Boolean Read()
    // Offset: 0x17AE6CC
    // Implemented from: Newtonsoft.Json.JsonReader
    // Base method: System.Boolean JsonReader::Read()
    bool Read();
  }; // Newtonsoft.Json.Bson.BsonReader
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Bson::BsonReader::BsonReaderState, "Newtonsoft.Json.Bson", "BsonReader/BsonReaderState");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Newtonsoft::Json::Bson::BsonReader::get_DateTimeKindHandling
// Il2CppName: get_DateTimeKindHandling
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::DateTimeKind (Newtonsoft::Json::Bson::BsonReader::*)()>(&Newtonsoft::Json::Bson::BsonReader::get_DateTimeKindHandling)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Bson::BsonReader*), "get_DateTimeKindHandling", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Bson::BsonReader::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Newtonsoft::Json::Bson::BsonReader::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Bson::BsonReader*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Bson::BsonReader::ReadElement
// Il2CppName: ReadElement
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Newtonsoft::Json::Bson::BsonReader::*)()>(&Newtonsoft::Json::Bson::BsonReader::ReadElement)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Bson::BsonReader*), "ReadElement", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Bson::BsonReader::ReadCodeWScope
// Il2CppName: ReadCodeWScope
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Newtonsoft::Json::Bson::BsonReader::*)()>(&Newtonsoft::Json::Bson::BsonReader::ReadCodeWScope)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Bson::BsonReader*), "ReadCodeWScope", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Bson::BsonReader::ReadReference
// Il2CppName: ReadReference
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Newtonsoft::Json::Bson::BsonReader::*)()>(&Newtonsoft::Json::Bson::BsonReader::ReadReference)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Bson::BsonReader*), "ReadReference", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Bson::BsonReader::ReadNormal
// Il2CppName: ReadNormal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Newtonsoft::Json::Bson::BsonReader::*)()>(&Newtonsoft::Json::Bson::BsonReader::ReadNormal)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Bson::BsonReader*), "ReadNormal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Bson::BsonReader::PopContext
// Il2CppName: PopContext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Newtonsoft::Json::Bson::BsonReader::*)()>(&Newtonsoft::Json::Bson::BsonReader::PopContext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Bson::BsonReader*), "PopContext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Bson::BsonReader::PushContext
// Il2CppName: PushContext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Newtonsoft::Json::Bson::BsonReader::*)(::Newtonsoft::Json::Bson::BsonReader::ContainerContext*)>(&Newtonsoft::Json::Bson::BsonReader::PushContext)> {
  static const MethodInfo* get() {
    static auto* newContext = &::il2cpp_utils::GetClassFromName("Newtonsoft.Json.Bson", "BsonReader/ContainerContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Bson::BsonReader*), "PushContext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{newContext});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Bson::BsonReader::ReadByte
// Il2CppName: ReadByte
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint8_t (Newtonsoft::Json::Bson::BsonReader::*)()>(&Newtonsoft::Json::Bson::BsonReader::ReadByte)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Bson::BsonReader*), "ReadByte", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Bson::BsonReader::ReadType
// Il2CppName: ReadType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Newtonsoft::Json::Bson::BsonReader::*)(::Newtonsoft::Json::Bson::BsonType)>(&Newtonsoft::Json::Bson::BsonReader::ReadType)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("Newtonsoft.Json.Bson", "BsonType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Bson::BsonReader*), "ReadType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Bson::BsonReader::ReadBinary
// Il2CppName: ReadBinary
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (Newtonsoft::Json::Bson::BsonReader::*)(ByRef<::Newtonsoft::Json::Bson::BsonBinaryType>)>(&Newtonsoft::Json::Bson::BsonReader::ReadBinary)> {
  static const MethodInfo* get() {
    static auto* binaryType = &::il2cpp_utils::GetClassFromName("Newtonsoft.Json.Bson", "BsonBinaryType")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Bson::BsonReader*), "ReadBinary", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{binaryType});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Bson::BsonReader::ReadString
// Il2CppName: ReadString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Newtonsoft::Json::Bson::BsonReader::*)()>(&Newtonsoft::Json::Bson::BsonReader::ReadString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Bson::BsonReader*), "ReadString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Bson::BsonReader::ReadLengthString
// Il2CppName: ReadLengthString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Newtonsoft::Json::Bson::BsonReader::*)()>(&Newtonsoft::Json::Bson::BsonReader::ReadLengthString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Bson::BsonReader*), "ReadLengthString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Bson::BsonReader::GetString
// Il2CppName: GetString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Newtonsoft::Json::Bson::BsonReader::*)(int)>(&Newtonsoft::Json::Bson::BsonReader::GetString)> {
  static const MethodInfo* get() {
    static auto* length = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Bson::BsonReader*), "GetString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{length});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Bson::BsonReader::GetLastFullCharStop
// Il2CppName: GetLastFullCharStop
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Newtonsoft::Json::Bson::BsonReader::*)(int)>(&Newtonsoft::Json::Bson::BsonReader::GetLastFullCharStop)> {
  static const MethodInfo* get() {
    static auto* start = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Bson::BsonReader*), "GetLastFullCharStop", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{start});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Bson::BsonReader::BytesInSequence
// Il2CppName: BytesInSequence
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Newtonsoft::Json::Bson::BsonReader::*)(uint8_t)>(&Newtonsoft::Json::Bson::BsonReader::BytesInSequence)> {
  static const MethodInfo* get() {
    static auto* b = &::il2cpp_utils::GetClassFromName("System", "Byte")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Bson::BsonReader*), "BytesInSequence", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{b});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Bson::BsonReader::EnsureBuffers
// Il2CppName: EnsureBuffers
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Newtonsoft::Json::Bson::BsonReader::*)()>(&Newtonsoft::Json::Bson::BsonReader::EnsureBuffers)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Bson::BsonReader*), "EnsureBuffers", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Bson::BsonReader::ReadDouble
// Il2CppName: ReadDouble
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double (Newtonsoft::Json::Bson::BsonReader::*)()>(&Newtonsoft::Json::Bson::BsonReader::ReadDouble)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Bson::BsonReader*), "ReadDouble", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Bson::BsonReader::ReadInt32
// Il2CppName: ReadInt32
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Newtonsoft::Json::Bson::BsonReader::*)()>(&Newtonsoft::Json::Bson::BsonReader::ReadInt32)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Bson::BsonReader*), "ReadInt32", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Bson::BsonReader::ReadInt64
// Il2CppName: ReadInt64
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (Newtonsoft::Json::Bson::BsonReader::*)()>(&Newtonsoft::Json::Bson::BsonReader::ReadInt64)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Bson::BsonReader*), "ReadInt64", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Bson::BsonReader::ReadType
// Il2CppName: ReadType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::Bson::BsonType (Newtonsoft::Json::Bson::BsonReader::*)()>(&Newtonsoft::Json::Bson::BsonReader::ReadType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Bson::BsonReader*), "ReadType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Bson::BsonReader::MovePosition
// Il2CppName: MovePosition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Newtonsoft::Json::Bson::BsonReader::*)(int)>(&Newtonsoft::Json::Bson::BsonReader::MovePosition)> {
  static const MethodInfo* get() {
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Bson::BsonReader*), "MovePosition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{count});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Bson::BsonReader::ReadBytes
// Il2CppName: ReadBytes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (Newtonsoft::Json::Bson::BsonReader::*)(int)>(&Newtonsoft::Json::Bson::BsonReader::ReadBytes)> {
  static const MethodInfo* get() {
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Bson::BsonReader*), "ReadBytes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{count});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Bson::BsonReader::Read
// Il2CppName: Read
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Newtonsoft::Json::Bson::BsonReader::*)()>(&Newtonsoft::Json::Bson::BsonReader::Read)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Bson::BsonReader*), "Read", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
