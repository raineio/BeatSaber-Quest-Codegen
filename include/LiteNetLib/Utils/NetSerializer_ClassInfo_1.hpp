// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: LiteNetLib.Utils.NetSerializer
#include "LiteNetLib/Utils/NetSerializer.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: LiteNetLib::Utils
namespace LiteNetLib::Utils {
  // Forward declaring type: NetDataWriter
  class NetDataWriter;
  // Forward declaring type: NetDataReader
  class NetDataReader;
}
// Completed forward declares
// Type namespace: LiteNetLib.Utils
namespace LiteNetLib::Utils {
  // Autogenerated type: LiteNetLib.Utils.NetSerializer/ClassInfo`1
  template<typename T>
  class NetSerializer::ClassInfo_1 : public ::Il2CppObject {
    public:
    // private readonly LiteNetLib.Utils.NetSerializer/FastCall`1<T>[] _serializers
    // Offset: 0x0
    ::Array<LiteNetLib::Utils::NetSerializer::FastCall_1<T>*>* serializers;
    // private readonly System.Int32 _membersCount
    // Offset: 0x0
    int membersCount;
    // Autogenerated static field getter
    // Get static field: static public LiteNetLib.Utils.NetSerializer/ClassInfo`1<T> Instance
    static LiteNetLib::Utils::NetSerializer::ClassInfo_1<T>* _get_Instance() {
      static auto ___internal__logger = Logger::get().WithContext("codegen").WithContext("LiteNetLib::Utils").WithContext("ClassInfo_1").WithContext("_get_Instance");
      return THROW_UNLESS(il2cpp_utils::GetFieldValue<LiteNetLib::Utils::NetSerializer::ClassInfo_1<T>*>(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<NetSerializer::ClassInfo_1<T>*>::get(), "Instance"));
    }
    // Autogenerated static field setter
    // Set static field: static public LiteNetLib.Utils.NetSerializer/ClassInfo`1<T> Instance
    static void _set_Instance(LiteNetLib::Utils::NetSerializer::ClassInfo_1<T>* value) {
      static auto ___internal__logger = Logger::get().WithContext("codegen").WithContext("LiteNetLib::Utils").WithContext("ClassInfo_1").WithContext("_set_Instance");
      THROW_UNLESS(il2cpp_utils::SetFieldValue(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<NetSerializer::ClassInfo_1<T>*>::get(), "Instance", value));
    }
    // public System.Void .ctor(System.Collections.Generic.List`1<LiteNetLib.Utils.NetSerializer/FastCall`1<T>> serializers)
    // Offset: 0xFFFFFFFF
    static NetSerializer::ClassInfo_1<T>* New_ctor(System::Collections::Generic::List_1<LiteNetLib::Utils::NetSerializer::FastCall_1<T>*>* serializers) {
      static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("LiteNetLib::Utils").WithContext("ClassInfo_1").WithContext(".ctor");
      return THROW_UNLESS(::il2cpp_utils::New<NetSerializer::ClassInfo_1<T>*>(serializers));
    }
    // public System.Void Write(T obj, LiteNetLib.Utils.NetDataWriter writer)
    // Offset: 0xFFFFFFFF
    void Write(T obj, LiteNetLib::Utils::NetDataWriter* writer) {
      static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("LiteNetLib::Utils").WithContext("ClassInfo_1").WithContext("Write");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "Write", {}, ::il2cpp_utils::ExtractTypes(obj, writer)));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, obj, writer);
    }
    // public System.Void Read(T obj, LiteNetLib.Utils.NetDataReader reader)
    // Offset: 0xFFFFFFFF
    void Read(T obj, LiteNetLib::Utils::NetDataReader* reader) {
      static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("LiteNetLib::Utils").WithContext("ClassInfo_1").WithContext("Read");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "Read", {}, ::il2cpp_utils::ExtractTypes(obj, reader)));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, obj, reader);
    }
  }; // LiteNetLib.Utils.NetSerializer/ClassInfo`1
  // Could not write size check! Type: LiteNetLib.Utils.NetSerializer/ClassInfo`1 is generic!
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(LiteNetLib::Utils::NetSerializer::ClassInfo_1, "LiteNetLib.Utils", "NetSerializer/ClassInfo`1");
#pragma pack(pop)