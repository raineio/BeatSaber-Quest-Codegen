// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Int32
#include "System/Int32.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Array
  class Array;
}
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: IPEndPoint
  class IPEndPoint;
}
// Forward declaring namespace: LiteNetLib::Utils
namespace LiteNetLib::Utils {
  // Forward declaring type: INetSerializable
  class INetSerializable;
}
// Completed forward declares
// Type namespace: LiteNetLib.Utils
namespace LiteNetLib::Utils {
  // Forward declaring type: NetDataWriter
  class NetDataWriter;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::LiteNetLib::Utils::NetDataWriter);
DEFINE_IL2CPP_ARG_TYPE(::LiteNetLib::Utils::NetDataWriter*, "LiteNetLib.Utils", "NetDataWriter");
// Type namespace: LiteNetLib.Utils
namespace LiteNetLib::Utils {
  // Size: 0x1D
  #pragma pack(push, 1)
  // Autogenerated type: LiteNetLib.Utils.NetDataWriter
  // [TokenAttribute] Offset: FFFFFFFF
  class NetDataWriter : public ::Il2CppObject {
    public:
    public:
    // protected System.Byte[] _data
    // Size: 0x8
    // Offset: 0x10
    ::ArrayW<uint8_t> data;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    // protected System.Int32 _position
    // Size: 0x4
    // Offset: 0x18
    int position;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private readonly System.Boolean _autoResize
    // Size: 0x1
    // Offset: 0x1C
    bool autoResize;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // static field const value: static private System.Int32 InitialSize
    static constexpr const int InitialSize = 64;
    // Get static field: static private System.Int32 InitialSize
    static int _get_InitialSize();
    // Set static field: static private System.Int32 InitialSize
    static void _set_InitialSize(int value);
    // Get instance field reference: protected System.Byte[] _data
    [[deprecated("Use field access instead!")]] ::ArrayW<uint8_t>& dyn__data();
    // Get instance field reference: protected System.Int32 _position
    [[deprecated("Use field access instead!")]] int& dyn__position();
    // Get instance field reference: private readonly System.Boolean _autoResize
    [[deprecated("Use field access instead!")]] bool& dyn__autoResize();
    // public System.Int32 get_Capacity()
    // Offset: 0x2228824
    int get_Capacity();
    // public System.Byte[] get_Data()
    // Offset: 0x2228D14
    ::ArrayW<uint8_t> get_Data();
    // public System.Int32 get_Length()
    // Offset: 0x2228D1C
    int get_Length();
    // public System.Void .ctor()
    // Offset: 0x2218FC8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NetDataWriter* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::LiteNetLib::Utils::NetDataWriter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NetDataWriter*, creationType>()));
    }
    // public System.Void .ctor(System.Boolean autoResize)
    // Offset: 0x22288BC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NetDataWriter* New_ctor(bool autoResize) {
      static auto ___internal__logger = ::Logger::get().WithContext("::LiteNetLib::Utils::NetDataWriter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NetDataWriter*, creationType>(autoResize)));
    }
    // public System.Void .ctor(System.Boolean autoResize, System.Int32 initialSize)
    // Offset: 0x2228840
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NetDataWriter* New_ctor(bool autoResize, int initialSize) {
      static auto ___internal__logger = ::Logger::get().WithContext("::LiteNetLib::Utils::NetDataWriter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NetDataWriter*, creationType>(autoResize, initialSize)));
    }
    // static public LiteNetLib.Utils.NetDataWriter FromBytes(System.Byte[] bytes, System.Boolean copy)
    // Offset: 0x22288C8
    static ::LiteNetLib::Utils::NetDataWriter* FromBytes(::ArrayW<uint8_t> bytes, bool copy);
    // static public LiteNetLib.Utils.NetDataWriter FromBytes(System.Byte[] bytes, System.Int32 offset, System.Int32 length)
    // Offset: 0x22289F8
    static ::LiteNetLib::Utils::NetDataWriter* FromBytes(::ArrayW<uint8_t> bytes, int offset, int length);
    // static public LiteNetLib.Utils.NetDataWriter FromString(System.String value)
    // Offset: 0x2220288
    static ::LiteNetLib::Utils::NetDataWriter* FromString(::StringW value);
    // public System.Void ResizeIfNeed(System.Int32 newSize)
    // Offset: 0x2228BD8
    void ResizeIfNeed(int newSize);
    // public System.Void Reset(System.Int32 size)
    // Offset: 0x2228C6C
    void Reset(int size);
    // public System.Void Reset()
    // Offset: 0x2228C90
    void Reset();
    // public System.Byte[] CopyData()
    // Offset: 0x2228C98
    ::ArrayW<uint8_t> CopyData();
    // public System.Void Put(System.Single value)
    // Offset: 0x2228D24
    void Put(float value);
    // public System.Void Put(System.Double value)
    // Offset: 0x2228D80
    void Put(double value);
    // public System.Void Put(System.Int64 value)
    // Offset: 0x2228DDC
    void Put(int64_t value);
    // public System.Void Put(System.UInt64 value)
    // Offset: 0x2228E30
    void Put(uint64_t value);
    // public System.Void Put(System.Int32 value)
    // Offset: 0x2228E84
    void Put(int value);
    // public System.Void Put(System.UInt32 value)
    // Offset: 0x2228ED8
    void Put(uint value);
    // public System.Void Put(System.Char value)
    // Offset: 0x2228F2C
    void Put(::Il2CppChar value);
    // public System.Void Put(System.UInt16 value)
    // Offset: 0x2228F80
    void Put(uint16_t value);
    // public System.Void Put(System.Int16 value)
    // Offset: 0x2228FD4
    void Put(int16_t value);
    // public System.Void Put(System.SByte value)
    // Offset: 0x2229028
    void Put(int8_t value);
    // public System.Void Put(System.Byte value)
    // Offset: 0x222909C
    void Put(uint8_t value);
    // public System.Void Put(System.Byte[] data, System.Int32 offset, System.Int32 length)
    // Offset: 0x2228A8C
    void Put(::ArrayW<uint8_t> data, int offset, int length);
    // public System.Void Put(System.Byte[] data)
    // Offset: 0x2228980
    void Put(::ArrayW<uint8_t> data);
    // public System.Void PutSBytesWithLength(System.SByte[] data, System.Int32 offset, System.Int32 length)
    // Offset: 0x2229110
    void PutSBytesWithLength(::ArrayW<int8_t> data, int offset, int length);
    // public System.Void PutSBytesWithLength(System.SByte[] data)
    // Offset: 0x22291A8
    void PutSBytesWithLength(::ArrayW<int8_t> data);
    // public System.Void PutBytesWithLength(System.Byte[] data, System.Int32 offset, System.Int32 length)
    // Offset: 0x222923C
    void PutBytesWithLength(::ArrayW<uint8_t> data, int offset, int length);
    // public System.Void PutBytesWithLength(System.Byte[] data)
    // Offset: 0x22292D4
    void PutBytesWithLength(::ArrayW<uint8_t> data);
    // public System.Void Put(System.Boolean value)
    // Offset: 0x2229368
    void Put(bool value);
    // private System.Void PutArray(System.Array arr, System.Int32 sz)
    // Offset: 0x22293E0
    void PutArray(::System::Array* arr, int sz);
    // public System.Void PutArray(System.Single[] value)
    // Offset: 0x2229490
    void PutArray(::ArrayW<float> value);
    // public System.Void PutArray(System.Double[] value)
    // Offset: 0x2229498
    void PutArray(::ArrayW<double> value);
    // public System.Void PutArray(System.Int64[] value)
    // Offset: 0x22294A0
    void PutArray(::ArrayW<int64_t> value);
    // public System.Void PutArray(System.UInt64[] value)
    // Offset: 0x22294A8
    void PutArray(::ArrayW<uint64_t> value);
    // public System.Void PutArray(System.Int32[] value)
    // Offset: 0x22294B0
    void PutArray(::ArrayW<int> value);
    // public System.Void PutArray(System.UInt32[] value)
    // Offset: 0x22294B8
    void PutArray(::ArrayW<uint> value);
    // public System.Void PutArray(System.UInt16[] value)
    // Offset: 0x22294C0
    void PutArray(::ArrayW<uint16_t> value);
    // public System.Void PutArray(System.Int16[] value)
    // Offset: 0x22294C8
    void PutArray(::ArrayW<int16_t> value);
    // public System.Void PutArray(System.Boolean[] value)
    // Offset: 0x22294D0
    void PutArray(::ArrayW<bool> value);
    // public System.Void PutArray(System.String[] value)
    // Offset: 0x22294D8
    void PutArray(::ArrayW<::StringW> value);
    // public System.Void PutArray(System.String[] value, System.Int32 maxLength)
    // Offset: 0x2229578
    void PutArray(::ArrayW<::StringW> value, int maxLength);
    // public System.Void Put(System.Net.IPEndPoint endPoint)
    // Offset: 0x222970C
    void Put(::System::Net::IPEndPoint* endPoint);
    // public System.Void Put(System.String value)
    // Offset: 0x2228AFC
    void Put(::StringW value);
    // public System.Void Put(System.String value, System.Int32 maxLength)
    // Offset: 0x2229620
    void Put(::StringW value, int maxLength);
    // public System.Void Put(T obj)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class T>
    void Put(T obj) {
      static_assert(std::is_convertible_v<std::remove_pointer_t<T>, ::LiteNetLib::Utils::INetSerializable>);
      static auto ___internal__logger = ::Logger::get().WithContext("::LiteNetLib::Utils::NetDataWriter::Put");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Put", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(obj)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___generic__method, obj);
    }
  }; // LiteNetLib.Utils.NetDataWriter
  #pragma pack(pop)
  static check_size<sizeof(NetDataWriter), 28 + sizeof(bool)> __LiteNetLib_Utils_NetDataWriterSizeCheck;
  static_assert(sizeof(NetDataWriter) == 0x1D);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: LiteNetLib::Utils::NetDataWriter::get_Capacity
// Il2CppName: get_Capacity
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (LiteNetLib::Utils::NetDataWriter::*)()>(&LiteNetLib::Utils::NetDataWriter::get_Capacity)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::Utils::NetDataWriter*), "get_Capacity", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: LiteNetLib::Utils::NetDataWriter::get_Data
// Il2CppName: get_Data
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (LiteNetLib::Utils::NetDataWriter::*)()>(&LiteNetLib::Utils::NetDataWriter::get_Data)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::Utils::NetDataWriter*), "get_Data", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: LiteNetLib::Utils::NetDataWriter::get_Length
// Il2CppName: get_Length
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (LiteNetLib::Utils::NetDataWriter::*)()>(&LiteNetLib::Utils::NetDataWriter::get_Length)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::Utils::NetDataWriter*), "get_Length", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: LiteNetLib::Utils::NetDataWriter::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: LiteNetLib::Utils::NetDataWriter::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: LiteNetLib::Utils::NetDataWriter::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: LiteNetLib::Utils::NetDataWriter::FromBytes
// Il2CppName: FromBytes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::LiteNetLib::Utils::NetDataWriter* (*)(::ArrayW<uint8_t>, bool)>(&LiteNetLib::Utils::NetDataWriter::FromBytes)> {
  static const MethodInfo* get() {
    static auto* bytes = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* copy = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::Utils::NetDataWriter*), "FromBytes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bytes, copy});
  }
};
// Writing MetadataGetter for method: LiteNetLib::Utils::NetDataWriter::FromBytes
// Il2CppName: FromBytes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::LiteNetLib::Utils::NetDataWriter* (*)(::ArrayW<uint8_t>, int, int)>(&LiteNetLib::Utils::NetDataWriter::FromBytes)> {
  static const MethodInfo* get() {
    static auto* bytes = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* length = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::Utils::NetDataWriter*), "FromBytes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bytes, offset, length});
  }
};
// Writing MetadataGetter for method: LiteNetLib::Utils::NetDataWriter::FromString
// Il2CppName: FromString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::LiteNetLib::Utils::NetDataWriter* (*)(::StringW)>(&LiteNetLib::Utils::NetDataWriter::FromString)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::Utils::NetDataWriter*), "FromString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: LiteNetLib::Utils::NetDataWriter::ResizeIfNeed
// Il2CppName: ResizeIfNeed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::Utils::NetDataWriter::*)(int)>(&LiteNetLib::Utils::NetDataWriter::ResizeIfNeed)> {
  static const MethodInfo* get() {
    static auto* newSize = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::Utils::NetDataWriter*), "ResizeIfNeed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{newSize});
  }
};
// Writing MetadataGetter for method: LiteNetLib::Utils::NetDataWriter::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::Utils::NetDataWriter::*)(int)>(&LiteNetLib::Utils::NetDataWriter::Reset)> {
  static const MethodInfo* get() {
    static auto* size = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::Utils::NetDataWriter*), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{size});
  }
};
// Writing MetadataGetter for method: LiteNetLib::Utils::NetDataWriter::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::Utils::NetDataWriter::*)()>(&LiteNetLib::Utils::NetDataWriter::Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::Utils::NetDataWriter*), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: LiteNetLib::Utils::NetDataWriter::CopyData
// Il2CppName: CopyData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (LiteNetLib::Utils::NetDataWriter::*)()>(&LiteNetLib::Utils::NetDataWriter::CopyData)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::Utils::NetDataWriter*), "CopyData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: LiteNetLib::Utils::NetDataWriter::Put
// Il2CppName: Put
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::Utils::NetDataWriter::*)(float)>(&LiteNetLib::Utils::NetDataWriter::Put)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::Utils::NetDataWriter*), "Put", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: LiteNetLib::Utils::NetDataWriter::Put
// Il2CppName: Put
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::Utils::NetDataWriter::*)(double)>(&LiteNetLib::Utils::NetDataWriter::Put)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Double")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::Utils::NetDataWriter*), "Put", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: LiteNetLib::Utils::NetDataWriter::Put
// Il2CppName: Put
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::Utils::NetDataWriter::*)(int64_t)>(&LiteNetLib::Utils::NetDataWriter::Put)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::Utils::NetDataWriter*), "Put", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: LiteNetLib::Utils::NetDataWriter::Put
// Il2CppName: Put
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::Utils::NetDataWriter::*)(uint64_t)>(&LiteNetLib::Utils::NetDataWriter::Put)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::Utils::NetDataWriter*), "Put", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: LiteNetLib::Utils::NetDataWriter::Put
// Il2CppName: Put
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::Utils::NetDataWriter::*)(int)>(&LiteNetLib::Utils::NetDataWriter::Put)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::Utils::NetDataWriter*), "Put", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: LiteNetLib::Utils::NetDataWriter::Put
// Il2CppName: Put
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::Utils::NetDataWriter::*)(uint)>(&LiteNetLib::Utils::NetDataWriter::Put)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::Utils::NetDataWriter*), "Put", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: LiteNetLib::Utils::NetDataWriter::Put
// Il2CppName: Put
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::Utils::NetDataWriter::*)(::Il2CppChar)>(&LiteNetLib::Utils::NetDataWriter::Put)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Char")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::Utils::NetDataWriter*), "Put", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: LiteNetLib::Utils::NetDataWriter::Put
// Il2CppName: Put
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::Utils::NetDataWriter::*)(uint16_t)>(&LiteNetLib::Utils::NetDataWriter::Put)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "UInt16")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::Utils::NetDataWriter*), "Put", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: LiteNetLib::Utils::NetDataWriter::Put
// Il2CppName: Put
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::Utils::NetDataWriter::*)(int16_t)>(&LiteNetLib::Utils::NetDataWriter::Put)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int16")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::Utils::NetDataWriter*), "Put", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: LiteNetLib::Utils::NetDataWriter::Put
// Il2CppName: Put
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::Utils::NetDataWriter::*)(int8_t)>(&LiteNetLib::Utils::NetDataWriter::Put)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "SByte")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::Utils::NetDataWriter*), "Put", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: LiteNetLib::Utils::NetDataWriter::Put
// Il2CppName: Put
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::Utils::NetDataWriter::*)(uint8_t)>(&LiteNetLib::Utils::NetDataWriter::Put)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Byte")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::Utils::NetDataWriter*), "Put", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: LiteNetLib::Utils::NetDataWriter::Put
// Il2CppName: Put
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::Utils::NetDataWriter::*)(::ArrayW<uint8_t>, int, int)>(&LiteNetLib::Utils::NetDataWriter::Put)> {
  static const MethodInfo* get() {
    static auto* data = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* length = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::Utils::NetDataWriter*), "Put", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{data, offset, length});
  }
};
// Writing MetadataGetter for method: LiteNetLib::Utils::NetDataWriter::Put
// Il2CppName: Put
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::Utils::NetDataWriter::*)(::ArrayW<uint8_t>)>(&LiteNetLib::Utils::NetDataWriter::Put)> {
  static const MethodInfo* get() {
    static auto* data = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::Utils::NetDataWriter*), "Put", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{data});
  }
};
// Writing MetadataGetter for method: LiteNetLib::Utils::NetDataWriter::PutSBytesWithLength
// Il2CppName: PutSBytesWithLength
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::Utils::NetDataWriter::*)(::ArrayW<int8_t>, int, int)>(&LiteNetLib::Utils::NetDataWriter::PutSBytesWithLength)> {
  static const MethodInfo* get() {
    static auto* data = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "SByte"), 1)->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* length = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::Utils::NetDataWriter*), "PutSBytesWithLength", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{data, offset, length});
  }
};
// Writing MetadataGetter for method: LiteNetLib::Utils::NetDataWriter::PutSBytesWithLength
// Il2CppName: PutSBytesWithLength
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::Utils::NetDataWriter::*)(::ArrayW<int8_t>)>(&LiteNetLib::Utils::NetDataWriter::PutSBytesWithLength)> {
  static const MethodInfo* get() {
    static auto* data = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "SByte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::Utils::NetDataWriter*), "PutSBytesWithLength", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{data});
  }
};
// Writing MetadataGetter for method: LiteNetLib::Utils::NetDataWriter::PutBytesWithLength
// Il2CppName: PutBytesWithLength
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::Utils::NetDataWriter::*)(::ArrayW<uint8_t>, int, int)>(&LiteNetLib::Utils::NetDataWriter::PutBytesWithLength)> {
  static const MethodInfo* get() {
    static auto* data = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* length = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::Utils::NetDataWriter*), "PutBytesWithLength", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{data, offset, length});
  }
};
// Writing MetadataGetter for method: LiteNetLib::Utils::NetDataWriter::PutBytesWithLength
// Il2CppName: PutBytesWithLength
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::Utils::NetDataWriter::*)(::ArrayW<uint8_t>)>(&LiteNetLib::Utils::NetDataWriter::PutBytesWithLength)> {
  static const MethodInfo* get() {
    static auto* data = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::Utils::NetDataWriter*), "PutBytesWithLength", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{data});
  }
};
// Writing MetadataGetter for method: LiteNetLib::Utils::NetDataWriter::Put
// Il2CppName: Put
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::Utils::NetDataWriter::*)(bool)>(&LiteNetLib::Utils::NetDataWriter::Put)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::Utils::NetDataWriter*), "Put", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: LiteNetLib::Utils::NetDataWriter::PutArray
// Il2CppName: PutArray
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::Utils::NetDataWriter::*)(::System::Array*, int)>(&LiteNetLib::Utils::NetDataWriter::PutArray)> {
  static const MethodInfo* get() {
    static auto* arr = &::il2cpp_utils::GetClassFromName("System", "Array")->byval_arg;
    static auto* sz = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::Utils::NetDataWriter*), "PutArray", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{arr, sz});
  }
};
// Writing MetadataGetter for method: LiteNetLib::Utils::NetDataWriter::PutArray
// Il2CppName: PutArray
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::Utils::NetDataWriter::*)(::ArrayW<float>)>(&LiteNetLib::Utils::NetDataWriter::PutArray)> {
  static const MethodInfo* get() {
    static auto* value = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Single"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::Utils::NetDataWriter*), "PutArray", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: LiteNetLib::Utils::NetDataWriter::PutArray
// Il2CppName: PutArray
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::Utils::NetDataWriter::*)(::ArrayW<double>)>(&LiteNetLib::Utils::NetDataWriter::PutArray)> {
  static const MethodInfo* get() {
    static auto* value = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Double"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::Utils::NetDataWriter*), "PutArray", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: LiteNetLib::Utils::NetDataWriter::PutArray
// Il2CppName: PutArray
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::Utils::NetDataWriter::*)(::ArrayW<int64_t>)>(&LiteNetLib::Utils::NetDataWriter::PutArray)> {
  static const MethodInfo* get() {
    static auto* value = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Int64"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::Utils::NetDataWriter*), "PutArray", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: LiteNetLib::Utils::NetDataWriter::PutArray
// Il2CppName: PutArray
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::Utils::NetDataWriter::*)(::ArrayW<uint64_t>)>(&LiteNetLib::Utils::NetDataWriter::PutArray)> {
  static const MethodInfo* get() {
    static auto* value = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt64"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::Utils::NetDataWriter*), "PutArray", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: LiteNetLib::Utils::NetDataWriter::PutArray
// Il2CppName: PutArray
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::Utils::NetDataWriter::*)(::ArrayW<int>)>(&LiteNetLib::Utils::NetDataWriter::PutArray)> {
  static const MethodInfo* get() {
    static auto* value = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Int32"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::Utils::NetDataWriter*), "PutArray", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: LiteNetLib::Utils::NetDataWriter::PutArray
// Il2CppName: PutArray
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::Utils::NetDataWriter::*)(::ArrayW<uint>)>(&LiteNetLib::Utils::NetDataWriter::PutArray)> {
  static const MethodInfo* get() {
    static auto* value = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt32"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::Utils::NetDataWriter*), "PutArray", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: LiteNetLib::Utils::NetDataWriter::PutArray
// Il2CppName: PutArray
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::Utils::NetDataWriter::*)(::ArrayW<uint16_t>)>(&LiteNetLib::Utils::NetDataWriter::PutArray)> {
  static const MethodInfo* get() {
    static auto* value = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt16"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::Utils::NetDataWriter*), "PutArray", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: LiteNetLib::Utils::NetDataWriter::PutArray
// Il2CppName: PutArray
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::Utils::NetDataWriter::*)(::ArrayW<int16_t>)>(&LiteNetLib::Utils::NetDataWriter::PutArray)> {
  static const MethodInfo* get() {
    static auto* value = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Int16"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::Utils::NetDataWriter*), "PutArray", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: LiteNetLib::Utils::NetDataWriter::PutArray
// Il2CppName: PutArray
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::Utils::NetDataWriter::*)(::ArrayW<bool>)>(&LiteNetLib::Utils::NetDataWriter::PutArray)> {
  static const MethodInfo* get() {
    static auto* value = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Boolean"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::Utils::NetDataWriter*), "PutArray", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: LiteNetLib::Utils::NetDataWriter::PutArray
// Il2CppName: PutArray
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::Utils::NetDataWriter::*)(::ArrayW<::StringW>)>(&LiteNetLib::Utils::NetDataWriter::PutArray)> {
  static const MethodInfo* get() {
    static auto* value = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "String"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::Utils::NetDataWriter*), "PutArray", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: LiteNetLib::Utils::NetDataWriter::PutArray
// Il2CppName: PutArray
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::Utils::NetDataWriter::*)(::ArrayW<::StringW>, int)>(&LiteNetLib::Utils::NetDataWriter::PutArray)> {
  static const MethodInfo* get() {
    static auto* value = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "String"), 1)->byval_arg;
    static auto* maxLength = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::Utils::NetDataWriter*), "PutArray", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value, maxLength});
  }
};
// Writing MetadataGetter for method: LiteNetLib::Utils::NetDataWriter::Put
// Il2CppName: Put
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::Utils::NetDataWriter::*)(::System::Net::IPEndPoint*)>(&LiteNetLib::Utils::NetDataWriter::Put)> {
  static const MethodInfo* get() {
    static auto* endPoint = &::il2cpp_utils::GetClassFromName("System.Net", "IPEndPoint")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::Utils::NetDataWriter*), "Put", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{endPoint});
  }
};
// Writing MetadataGetter for method: LiteNetLib::Utils::NetDataWriter::Put
// Il2CppName: Put
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::Utils::NetDataWriter::*)(::StringW)>(&LiteNetLib::Utils::NetDataWriter::Put)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::Utils::NetDataWriter*), "Put", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: LiteNetLib::Utils::NetDataWriter::Put
// Il2CppName: Put
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::Utils::NetDataWriter::*)(::StringW, int)>(&LiteNetLib::Utils::NetDataWriter::Put)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* maxLength = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::Utils::NetDataWriter*), "Put", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value, maxLength});
  }
};
// Writing MetadataGetter for method: LiteNetLib::Utils::NetDataWriter::Put
// Il2CppName: Put
// Cannot write MetadataGetter for generic methods!
