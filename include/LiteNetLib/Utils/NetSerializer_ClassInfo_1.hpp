// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: LiteNetLib.Utils.NetSerializer
#include "LiteNetLib/Utils/NetSerializer.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "extern/beatsaber-hook/shared/utils/typedefs-array.hpp"
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
  // Forward declaring type: ClassInfo`1<T>
  template<typename T>
  class ClassInfo_1;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(LiteNetLib::Utils::NetSerializer::ClassInfo_1, "LiteNetLib.Utils", "NetSerializer/ClassInfo`1");
// Type namespace: LiteNetLib.Utils
namespace LiteNetLib::Utils {
  // WARNING Size may be invalid!
  // Autogenerated type: LiteNetLib.Utils.NetSerializer/LiteNetLib.Utils.ClassInfo`1
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename T>
  class NetSerializer::ClassInfo_1 : public ::Il2CppObject {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // private readonly LiteNetLib.Utils.NetSerializer/LiteNetLib.Utils.FastCall`1<T>[] _serializers
    // Size: 0x8
    // Offset: 0x0
    ::ArrayW<LiteNetLib::Utils::NetSerializer::FastCall_1<T>*> serializers;
    // Field size check
    static_assert(sizeof(::ArrayW<LiteNetLib::Utils::NetSerializer::FastCall_1<T>*>) == 0x8);
    // private readonly System.Int32 _membersCount
    // Size: 0x4
    // Offset: 0x0
    int membersCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Autogenerated static field getter
    // Get static field: static public LiteNetLib.Utils.NetSerializer/LiteNetLib.Utils.ClassInfo`1<T> Instance
    static LiteNetLib::Utils::NetSerializer::ClassInfo_1<T>* _get_Instance() {
      static auto ___internal__logger = ::Logger::get().WithContext("LiteNetLib::Utils::NetSerializer::ClassInfo_1::_get_Instance");
      return THROW_UNLESS(il2cpp_utils::GetFieldValue<LiteNetLib::Utils::NetSerializer::ClassInfo_1<T>*>(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<NetSerializer::ClassInfo_1<T>*>::get(), "Instance"));
    }
    // Autogenerated static field setter
    // Set static field: static public LiteNetLib.Utils.NetSerializer/LiteNetLib.Utils.ClassInfo`1<T> Instance
    static void _set_Instance(LiteNetLib::Utils::NetSerializer::ClassInfo_1<T>* value) {
      static auto ___internal__logger = ::Logger::get().WithContext("LiteNetLib::Utils::NetSerializer::ClassInfo_1::_set_Instance");
      THROW_UNLESS(il2cpp_utils::SetFieldValue(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<NetSerializer::ClassInfo_1<T>*>::get(), "Instance", value));
    }
    // Autogenerated instance field getter
    // Get instance field: private readonly LiteNetLib.Utils.NetSerializer/LiteNetLib.Utils.FastCall`1<T>[] _serializers
    ::ArrayW<LiteNetLib::Utils::NetSerializer::FastCall_1<T>*>& dyn__serializers() {
      static auto ___internal__logger = ::Logger::get().WithContext("LiteNetLib::Utils::NetSerializer::ClassInfo_1::dyn__serializers");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "_serializers"))->offset;
      return *reinterpret_cast<::ArrayW<LiteNetLib::Utils::NetSerializer::FastCall_1<T>*>*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private readonly System.Int32 _membersCount
    int& dyn__membersCount() {
      static auto ___internal__logger = ::Logger::get().WithContext("LiteNetLib::Utils::NetSerializer::ClassInfo_1::dyn__membersCount");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "_membersCount"))->offset;
      return *reinterpret_cast<int*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // public System.Void .ctor(System.Collections.Generic.List`1<LiteNetLib.Utils.NetSerializer/LiteNetLib.Utils.FastCall`1<T>> serializers)
    // Offset: 0xFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NetSerializer::ClassInfo_1<T>* New_ctor(System::Collections::Generic::List_1<LiteNetLib::Utils::NetSerializer::FastCall_1<T>*>* serializers) {
      static auto ___internal__logger = ::Logger::get().WithContext("LiteNetLib::Utils::NetSerializer::ClassInfo_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NetSerializer::ClassInfo_1<T>*, creationType>(serializers)));
    }
    // public System.Void Write(T obj, LiteNetLib.Utils.NetDataWriter writer)
    // Offset: 0xFFFFFFFF
    void Write(T obj, LiteNetLib::Utils::NetDataWriter* writer) {
      static auto ___internal__logger = ::Logger::get().WithContext("LiteNetLib::Utils::NetSerializer::ClassInfo_1::Write");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Write", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(obj), ::il2cpp_utils::ExtractType(writer)})));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, obj, writer);
    }
    // public System.Void Read(T obj, LiteNetLib.Utils.NetDataReader reader)
    // Offset: 0xFFFFFFFF
    void Read(T obj, LiteNetLib::Utils::NetDataReader* reader) {
      static auto ___internal__logger = ::Logger::get().WithContext("LiteNetLib::Utils::NetSerializer::ClassInfo_1::Read");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Read", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(obj), ::il2cpp_utils::ExtractType(reader)})));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, obj, reader);
    }
  }; // LiteNetLib.Utils.NetSerializer/LiteNetLib.Utils.ClassInfo`1
  // Could not write size check! Type: LiteNetLib.Utils.NetSerializer/LiteNetLib.Utils.ClassInfo`1 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
