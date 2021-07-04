// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Int32
#include "System/Int32.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
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
  // Size: 0x1D
  #pragma pack(push, 1)
  // Autogenerated type: LiteNetLib.Utils.NetDataWriter
  class NetDataWriter : public ::Il2CppObject {
    public:
    // protected System.Byte[] _data
    // Size: 0x8
    // Offset: 0x10
    ::Array<uint8_t>* data;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
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
    // Creating value type constructor for type: NetDataWriter
    NetDataWriter(::Array<uint8_t>* data_ = {}, int position_ = {}, bool autoResize_ = {}) noexcept : data{data_}, position{position_}, autoResize{autoResize_} {}
    // static field const value: static private System.Int32 InitialSize
    static constexpr const int InitialSize = 64;
    // Get static field: static private System.Int32 InitialSize
    static int _get_InitialSize();
    // Set static field: static private System.Int32 InitialSize
    static void _set_InitialSize(int value);
    // public System.Int32 get_Capacity()
    // Offset: 0x1B4D838
    int get_Capacity();
    // public System.Void .ctor(System.Boolean autoResize)
    // Offset: 0x1B4D8D0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NetDataWriter* New_ctor(bool autoResize) {
      static auto ___internal__logger = ::Logger::get().WithContext("LiteNetLib::Utils::NetDataWriter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NetDataWriter*, creationType>(autoResize)));
    }
    // public System.Void .ctor(System.Boolean autoResize, System.Int32 initialSize)
    // Offset: 0x1B4D854
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NetDataWriter* New_ctor(bool autoResize, int initialSize) {
      static auto ___internal__logger = ::Logger::get().WithContext("LiteNetLib::Utils::NetDataWriter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NetDataWriter*, creationType>(autoResize, initialSize)));
    }
    // static public LiteNetLib.Utils.NetDataWriter FromBytes(System.Byte[] bytes, System.Boolean copy)
    // Offset: 0x1B4D8DC
    static LiteNetLib::Utils::NetDataWriter* FromBytes(::Array<uint8_t>* bytes, bool copy);
    // static public LiteNetLib.Utils.NetDataWriter FromBytes(System.Byte[] bytes, System.Int32 offset, System.Int32 length)
    // Offset: 0x1B4DA0C
    static LiteNetLib::Utils::NetDataWriter* FromBytes(::Array<uint8_t>* bytes, int offset, int length);
    // static public LiteNetLib.Utils.NetDataWriter FromString(System.String value)
    // Offset: 0x1B4529C
    static LiteNetLib::Utils::NetDataWriter* FromString(::Il2CppString* value);
    // public System.Void ResizeIfNeed(System.Int32 newSize)
    // Offset: 0x1B4DBEC
    void ResizeIfNeed(int newSize);
    // public System.Void Reset(System.Int32 size)
    // Offset: 0x1B4DC80
    void Reset(int size);
    // public System.Void Reset()
    // Offset: 0x1B4DCA4
    void Reset();
    // public System.Byte[] CopyData()
    // Offset: 0x1B4DCAC
    ::Array<uint8_t>* CopyData();
    // public System.Byte[] get_Data()
    // Offset: 0x1B4DD28
    ::Array<uint8_t>* get_Data();
    // public System.Int32 get_Length()
    // Offset: 0x1B4DD30
    int get_Length();
    // public System.Void Put(System.Single value)
    // Offset: 0x1B4DD38
    void Put(float value);
    // public System.Void Put(System.Double value)
    // Offset: 0x1B4DD94
    void Put(double value);
    // public System.Void Put(System.Int64 value)
    // Offset: 0x1B4DDF0
    void Put(int64_t value);
    // public System.Void Put(System.UInt64 value)
    // Offset: 0x1B4DE44
    void Put(uint64_t value);
    // public System.Void Put(System.Int32 value)
    // Offset: 0x1B4DE98
    void Put(int value);
    // public System.Void Put(System.UInt32 value)
    // Offset: 0x1B4DEEC
    void Put(uint value);
    // public System.Void Put(System.Char value)
    // Offset: 0x1B4DF40
    void Put(::Il2CppChar value);
    // public System.Void Put(System.UInt16 value)
    // Offset: 0x1B4DF94
    void Put(uint16_t value);
    // public System.Void Put(System.Int16 value)
    // Offset: 0x1B4DFE8
    void Put(int16_t value);
    // public System.Void Put(System.SByte value)
    // Offset: 0x1B4E03C
    void Put(int8_t value);
    // public System.Void Put(System.Byte value)
    // Offset: 0x1B4E0B0
    void Put(uint8_t value);
    // public System.Void Put(System.Byte[] data, System.Int32 offset, System.Int32 length)
    // Offset: 0x1B4DAA0
    void Put(::Array<uint8_t>* data, int offset, int length);
    // public System.Void Put(System.Byte[] data)
    // Offset: 0x1B4D994
    void Put(::Array<uint8_t>* data);
    // public System.Void PutSBytesWithLength(System.SByte[] data, System.Int32 offset, System.Int32 length)
    // Offset: 0x1B4E124
    void PutSBytesWithLength(::Array<int8_t>* data, int offset, int length);
    // public System.Void PutSBytesWithLength(System.SByte[] data)
    // Offset: 0x1B4E1BC
    void PutSBytesWithLength(::Array<int8_t>* data);
    // public System.Void PutBytesWithLength(System.Byte[] data, System.Int32 offset, System.Int32 length)
    // Offset: 0x1B4E250
    void PutBytesWithLength(::Array<uint8_t>* data, int offset, int length);
    // public System.Void PutBytesWithLength(System.Byte[] data)
    // Offset: 0x1B4E2E8
    void PutBytesWithLength(::Array<uint8_t>* data);
    // public System.Void Put(System.Boolean value)
    // Offset: 0x1B4E37C
    void Put(bool value);
    // private System.Void PutArray(System.Array arr, System.Int32 sz)
    // Offset: 0x1B4E3F4
    void PutArray(System::Array* arr, int sz);
    // public System.Void PutArray(System.Single[] value)
    // Offset: 0x1B4E4A4
    void PutArray(::Array<float>* value);
    // public System.Void PutArray(System.Double[] value)
    // Offset: 0x1B4E4AC
    void PutArray(::Array<double>* value);
    // public System.Void PutArray(System.Int64[] value)
    // Offset: 0x1B4E4B4
    void PutArray(::Array<int64_t>* value);
    // public System.Void PutArray(System.UInt64[] value)
    // Offset: 0x1B4E4BC
    void PutArray(::Array<uint64_t>* value);
    // public System.Void PutArray(System.Int32[] value)
    // Offset: 0x1B4E4C4
    void PutArray(::Array<int>* value);
    // public System.Void PutArray(System.UInt32[] value)
    // Offset: 0x1B4E4CC
    void PutArray(::Array<uint>* value);
    // public System.Void PutArray(System.UInt16[] value)
    // Offset: 0x1B4E4D4
    void PutArray(::Array<uint16_t>* value);
    // public System.Void PutArray(System.Int16[] value)
    // Offset: 0x1B4E4DC
    void PutArray(::Array<int16_t>* value);
    // public System.Void PutArray(System.Boolean[] value)
    // Offset: 0x1B4E4E4
    void PutArray(::Array<bool>* value);
    // public System.Void PutArray(System.String[] value)
    // Offset: 0x1B4E4EC
    void PutArray(::Array<::Il2CppString*>* value);
    // public System.Void PutArray(System.String[] value, System.Int32 maxLength)
    // Offset: 0x1B4E58C
    void PutArray(::Array<::Il2CppString*>* value, int maxLength);
    // public System.Void Put(System.Net.IPEndPoint endPoint)
    // Offset: 0x1B4E720
    void Put(System::Net::IPEndPoint* endPoint);
    // public System.Void Put(System.String value)
    // Offset: 0x1B4DB10
    void Put(::Il2CppString* value);
    // public System.Void Put(System.String value, System.Int32 maxLength)
    // Offset: 0x1B4E634
    void Put(::Il2CppString* value, int maxLength);
    // public System.Void Put(T obj)
    // Offset: 0xFFFFFFFF
    template<class T>
    void Put(T obj) {
      static_assert(std::is_base_of_v<LiteNetLib::Utils::INetSerializable, std::remove_pointer_t<T>>);
      static auto ___internal__logger = ::Logger::get().WithContext("LiteNetLib::Utils::NetDataWriter::Put");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Put", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(obj)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___generic__method, obj);
    }
    // public System.Void .ctor()
    // Offset: 0x1B3DFDC
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NetDataWriter* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("LiteNetLib::Utils::NetDataWriter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NetDataWriter*, creationType>()));
    }
  }; // LiteNetLib.Utils.NetDataWriter
  #pragma pack(pop)
  static check_size<sizeof(NetDataWriter), 28 + sizeof(bool)> __LiteNetLib_Utils_NetDataWriterSizeCheck;
  static_assert(sizeof(NetDataWriter) == 0x1D);
}
DEFINE_IL2CPP_ARG_TYPE(LiteNetLib::Utils::NetDataWriter*, "LiteNetLib.Utils", "NetDataWriter");
// Writing MetadataGetter for method: LiteNetLib::Utils::NetDataWriter::get_Capacity
// Il2CppName: get_Capacity
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (LiteNetLib::Utils::NetDataWriter::*)()>(&LiteNetLib::Utils::NetDataWriter::get_Capacity)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::Utils::NetDataWriter*), "get_Capacity", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
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
// Writing MetadataGetter for method: LiteNetLib::Utils::NetDataWriter::FromBytes
// Il2CppName: FromBytes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<LiteNetLib::Utils::NetDataWriter* (*)(::Array<uint8_t>*, bool)>(&LiteNetLib::Utils::NetDataWriter::FromBytes)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::Utils::NetDataWriter*), "FromBytes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Array<uint8_t>*>(), ::il2cpp_utils::ExtractIndependentType<bool>()});
  }
};
// Writing MetadataGetter for method: LiteNetLib::Utils::NetDataWriter::FromBytes
// Il2CppName: FromBytes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<LiteNetLib::Utils::NetDataWriter* (*)(::Array<uint8_t>*, int, int)>(&LiteNetLib::Utils::NetDataWriter::FromBytes)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::Utils::NetDataWriter*), "FromBytes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Array<uint8_t>*>(), ::il2cpp_utils::ExtractIndependentType<int>(), ::il2cpp_utils::ExtractIndependentType<int>()});
  }
};
// Writing MetadataGetter for method: LiteNetLib::Utils::NetDataWriter::FromString
// Il2CppName: FromString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<LiteNetLib::Utils::NetDataWriter* (*)(::Il2CppString*)>(&LiteNetLib::Utils::NetDataWriter::FromString)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::Utils::NetDataWriter*), "FromString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>()});
  }
};
// Writing MetadataGetter for method: LiteNetLib::Utils::NetDataWriter::ResizeIfNeed
// Il2CppName: ResizeIfNeed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::Utils::NetDataWriter::*)(int)>(&LiteNetLib::Utils::NetDataWriter::ResizeIfNeed)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::Utils::NetDataWriter*), "ResizeIfNeed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<int>()});
  }
};
// Writing MetadataGetter for method: LiteNetLib::Utils::NetDataWriter::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::Utils::NetDataWriter::*)(int)>(&LiteNetLib::Utils::NetDataWriter::Reset)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::Utils::NetDataWriter*), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<int>()});
  }
};
// Writing MetadataGetter for method: LiteNetLib::Utils::NetDataWriter::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::Utils::NetDataWriter::*)()>(&LiteNetLib::Utils::NetDataWriter::Reset)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::Utils::NetDataWriter*), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: LiteNetLib::Utils::NetDataWriter::CopyData
// Il2CppName: CopyData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<uint8_t>* (LiteNetLib::Utils::NetDataWriter::*)()>(&LiteNetLib::Utils::NetDataWriter::CopyData)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::Utils::NetDataWriter*), "CopyData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: LiteNetLib::Utils::NetDataWriter::get_Data
// Il2CppName: get_Data
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<uint8_t>* (LiteNetLib::Utils::NetDataWriter::*)()>(&LiteNetLib::Utils::NetDataWriter::get_Data)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::Utils::NetDataWriter*), "get_Data", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: LiteNetLib::Utils::NetDataWriter::get_Length
// Il2CppName: get_Length
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (LiteNetLib::Utils::NetDataWriter::*)()>(&LiteNetLib::Utils::NetDataWriter::get_Length)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::Utils::NetDataWriter*), "get_Length", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: LiteNetLib::Utils::NetDataWriter::Put
// Il2CppName: Put
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::Utils::NetDataWriter::*)(float)>(&LiteNetLib::Utils::NetDataWriter::Put)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::Utils::NetDataWriter*), "Put", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<float>()});
  }
};
// Writing MetadataGetter for method: LiteNetLib::Utils::NetDataWriter::Put
// Il2CppName: Put
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::Utils::NetDataWriter::*)(double)>(&LiteNetLib::Utils::NetDataWriter::Put)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::Utils::NetDataWriter*), "Put", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<double>()});
  }
};
// Writing MetadataGetter for method: LiteNetLib::Utils::NetDataWriter::Put
// Il2CppName: Put
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::Utils::NetDataWriter::*)(int64_t)>(&LiteNetLib::Utils::NetDataWriter::Put)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::Utils::NetDataWriter*), "Put", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<int64_t>()});
  }
};
// Writing MetadataGetter for method: LiteNetLib::Utils::NetDataWriter::Put
// Il2CppName: Put
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::Utils::NetDataWriter::*)(uint64_t)>(&LiteNetLib::Utils::NetDataWriter::Put)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::Utils::NetDataWriter*), "Put", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<uint64_t>()});
  }
};
// Writing MetadataGetter for method: LiteNetLib::Utils::NetDataWriter::Put
// Il2CppName: Put
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::Utils::NetDataWriter::*)(int)>(&LiteNetLib::Utils::NetDataWriter::Put)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::Utils::NetDataWriter*), "Put", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<int>()});
  }
};
// Writing MetadataGetter for method: LiteNetLib::Utils::NetDataWriter::Put
// Il2CppName: Put
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::Utils::NetDataWriter::*)(uint)>(&LiteNetLib::Utils::NetDataWriter::Put)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::Utils::NetDataWriter*), "Put", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<uint>()});
  }
};
// Writing MetadataGetter for method: LiteNetLib::Utils::NetDataWriter::Put
// Il2CppName: Put
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::Utils::NetDataWriter::*)(::Il2CppChar)>(&LiteNetLib::Utils::NetDataWriter::Put)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::Utils::NetDataWriter*), "Put", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppChar>()});
  }
};
// Writing MetadataGetter for method: LiteNetLib::Utils::NetDataWriter::Put
// Il2CppName: Put
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::Utils::NetDataWriter::*)(uint16_t)>(&LiteNetLib::Utils::NetDataWriter::Put)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::Utils::NetDataWriter*), "Put", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<uint16_t>()});
  }
};
// Writing MetadataGetter for method: LiteNetLib::Utils::NetDataWriter::Put
// Il2CppName: Put
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::Utils::NetDataWriter::*)(int16_t)>(&LiteNetLib::Utils::NetDataWriter::Put)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::Utils::NetDataWriter*), "Put", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<int16_t>()});
  }
};
// Writing MetadataGetter for method: LiteNetLib::Utils::NetDataWriter::Put
// Il2CppName: Put
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::Utils::NetDataWriter::*)(int8_t)>(&LiteNetLib::Utils::NetDataWriter::Put)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::Utils::NetDataWriter*), "Put", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<int8_t>()});
  }
};
// Writing MetadataGetter for method: LiteNetLib::Utils::NetDataWriter::Put
// Il2CppName: Put
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::Utils::NetDataWriter::*)(uint8_t)>(&LiteNetLib::Utils::NetDataWriter::Put)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::Utils::NetDataWriter*), "Put", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<uint8_t>()});
  }
};
// Writing MetadataGetter for method: LiteNetLib::Utils::NetDataWriter::Put
// Il2CppName: Put
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::Utils::NetDataWriter::*)(::Array<uint8_t>*, int, int)>(&LiteNetLib::Utils::NetDataWriter::Put)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::Utils::NetDataWriter*), "Put", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Array<uint8_t>*>(), ::il2cpp_utils::ExtractIndependentType<int>(), ::il2cpp_utils::ExtractIndependentType<int>()});
  }
};
// Writing MetadataGetter for method: LiteNetLib::Utils::NetDataWriter::Put
// Il2CppName: Put
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::Utils::NetDataWriter::*)(::Array<uint8_t>*)>(&LiteNetLib::Utils::NetDataWriter::Put)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::Utils::NetDataWriter*), "Put", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Array<uint8_t>*>()});
  }
};
// Writing MetadataGetter for method: LiteNetLib::Utils::NetDataWriter::PutSBytesWithLength
// Il2CppName: PutSBytesWithLength
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::Utils::NetDataWriter::*)(::Array<int8_t>*, int, int)>(&LiteNetLib::Utils::NetDataWriter::PutSBytesWithLength)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::Utils::NetDataWriter*), "PutSBytesWithLength", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Array<int8_t>*>(), ::il2cpp_utils::ExtractIndependentType<int>(), ::il2cpp_utils::ExtractIndependentType<int>()});
  }
};
// Writing MetadataGetter for method: LiteNetLib::Utils::NetDataWriter::PutSBytesWithLength
// Il2CppName: PutSBytesWithLength
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::Utils::NetDataWriter::*)(::Array<int8_t>*)>(&LiteNetLib::Utils::NetDataWriter::PutSBytesWithLength)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::Utils::NetDataWriter*), "PutSBytesWithLength", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Array<int8_t>*>()});
  }
};
// Writing MetadataGetter for method: LiteNetLib::Utils::NetDataWriter::PutBytesWithLength
// Il2CppName: PutBytesWithLength
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::Utils::NetDataWriter::*)(::Array<uint8_t>*, int, int)>(&LiteNetLib::Utils::NetDataWriter::PutBytesWithLength)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::Utils::NetDataWriter*), "PutBytesWithLength", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Array<uint8_t>*>(), ::il2cpp_utils::ExtractIndependentType<int>(), ::il2cpp_utils::ExtractIndependentType<int>()});
  }
};
// Writing MetadataGetter for method: LiteNetLib::Utils::NetDataWriter::PutBytesWithLength
// Il2CppName: PutBytesWithLength
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::Utils::NetDataWriter::*)(::Array<uint8_t>*)>(&LiteNetLib::Utils::NetDataWriter::PutBytesWithLength)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::Utils::NetDataWriter*), "PutBytesWithLength", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Array<uint8_t>*>()});
  }
};
// Writing MetadataGetter for method: LiteNetLib::Utils::NetDataWriter::Put
// Il2CppName: Put
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::Utils::NetDataWriter::*)(bool)>(&LiteNetLib::Utils::NetDataWriter::Put)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::Utils::NetDataWriter*), "Put", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<bool>()});
  }
};
// Writing MetadataGetter for method: LiteNetLib::Utils::NetDataWriter::PutArray
// Il2CppName: PutArray
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::Utils::NetDataWriter::*)(System::Array*, int)>(&LiteNetLib::Utils::NetDataWriter::PutArray)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::Utils::NetDataWriter*), "PutArray", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Array*>(), ::il2cpp_utils::ExtractIndependentType<int>()});
  }
};
// Writing MetadataGetter for method: LiteNetLib::Utils::NetDataWriter::PutArray
// Il2CppName: PutArray
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::Utils::NetDataWriter::*)(::Array<float>*)>(&LiteNetLib::Utils::NetDataWriter::PutArray)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::Utils::NetDataWriter*), "PutArray", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Array<float>*>()});
  }
};
// Writing MetadataGetter for method: LiteNetLib::Utils::NetDataWriter::PutArray
// Il2CppName: PutArray
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::Utils::NetDataWriter::*)(::Array<double>*)>(&LiteNetLib::Utils::NetDataWriter::PutArray)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::Utils::NetDataWriter*), "PutArray", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Array<double>*>()});
  }
};
// Writing MetadataGetter for method: LiteNetLib::Utils::NetDataWriter::PutArray
// Il2CppName: PutArray
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::Utils::NetDataWriter::*)(::Array<int64_t>*)>(&LiteNetLib::Utils::NetDataWriter::PutArray)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::Utils::NetDataWriter*), "PutArray", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Array<int64_t>*>()});
  }
};
// Writing MetadataGetter for method: LiteNetLib::Utils::NetDataWriter::PutArray
// Il2CppName: PutArray
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::Utils::NetDataWriter::*)(::Array<uint64_t>*)>(&LiteNetLib::Utils::NetDataWriter::PutArray)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::Utils::NetDataWriter*), "PutArray", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Array<uint64_t>*>()});
  }
};
// Writing MetadataGetter for method: LiteNetLib::Utils::NetDataWriter::PutArray
// Il2CppName: PutArray
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::Utils::NetDataWriter::*)(::Array<int>*)>(&LiteNetLib::Utils::NetDataWriter::PutArray)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::Utils::NetDataWriter*), "PutArray", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Array<int>*>()});
  }
};
// Writing MetadataGetter for method: LiteNetLib::Utils::NetDataWriter::PutArray
// Il2CppName: PutArray
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::Utils::NetDataWriter::*)(::Array<uint>*)>(&LiteNetLib::Utils::NetDataWriter::PutArray)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::Utils::NetDataWriter*), "PutArray", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Array<uint>*>()});
  }
};
// Writing MetadataGetter for method: LiteNetLib::Utils::NetDataWriter::PutArray
// Il2CppName: PutArray
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::Utils::NetDataWriter::*)(::Array<uint16_t>*)>(&LiteNetLib::Utils::NetDataWriter::PutArray)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::Utils::NetDataWriter*), "PutArray", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Array<uint16_t>*>()});
  }
};
// Writing MetadataGetter for method: LiteNetLib::Utils::NetDataWriter::PutArray
// Il2CppName: PutArray
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::Utils::NetDataWriter::*)(::Array<int16_t>*)>(&LiteNetLib::Utils::NetDataWriter::PutArray)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::Utils::NetDataWriter*), "PutArray", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Array<int16_t>*>()});
  }
};
// Writing MetadataGetter for method: LiteNetLib::Utils::NetDataWriter::PutArray
// Il2CppName: PutArray
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::Utils::NetDataWriter::*)(::Array<bool>*)>(&LiteNetLib::Utils::NetDataWriter::PutArray)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::Utils::NetDataWriter*), "PutArray", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Array<bool>*>()});
  }
};
// Writing MetadataGetter for method: LiteNetLib::Utils::NetDataWriter::PutArray
// Il2CppName: PutArray
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::Utils::NetDataWriter::*)(::Array<::Il2CppString*>*)>(&LiteNetLib::Utils::NetDataWriter::PutArray)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::Utils::NetDataWriter*), "PutArray", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Array<::Il2CppString*>*>()});
  }
};
// Writing MetadataGetter for method: LiteNetLib::Utils::NetDataWriter::PutArray
// Il2CppName: PutArray
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::Utils::NetDataWriter::*)(::Array<::Il2CppString*>*, int)>(&LiteNetLib::Utils::NetDataWriter::PutArray)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::Utils::NetDataWriter*), "PutArray", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Array<::Il2CppString*>*>(), ::il2cpp_utils::ExtractIndependentType<int>()});
  }
};
// Writing MetadataGetter for method: LiteNetLib::Utils::NetDataWriter::Put
// Il2CppName: Put
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::Utils::NetDataWriter::*)(System::Net::IPEndPoint*)>(&LiteNetLib::Utils::NetDataWriter::Put)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::Utils::NetDataWriter*), "Put", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Net::IPEndPoint*>()});
  }
};
// Writing MetadataGetter for method: LiteNetLib::Utils::NetDataWriter::Put
// Il2CppName: Put
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::Utils::NetDataWriter::*)(::Il2CppString*)>(&LiteNetLib::Utils::NetDataWriter::Put)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::Utils::NetDataWriter*), "Put", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>()});
  }
};
// Writing MetadataGetter for method: LiteNetLib::Utils::NetDataWriter::Put
// Il2CppName: Put
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::Utils::NetDataWriter::*)(::Il2CppString*, int)>(&LiteNetLib::Utils::NetDataWriter::Put)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::Utils::NetDataWriter*), "Put", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>(), ::il2cpp_utils::ExtractIndependentType<int>()});
  }
};
// Writing MetadataGetter for method: LiteNetLib::Utils::NetDataWriter::Put
// Il2CppName: Put
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: LiteNetLib::Utils::NetDataWriter::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
