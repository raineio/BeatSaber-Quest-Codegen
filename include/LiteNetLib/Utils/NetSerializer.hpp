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
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: LiteNetLib::Utils
namespace LiteNetLib::Utils {
  // Forward declaring type: NetDataWriter
  class NetDataWriter;
  // Forward declaring type: INetSerializable
  class INetSerializable;
  // Forward declaring type: NetDataReader
  class NetDataReader;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
  // Forward declaring type: ValueType
  class ValueType;
  // Forward declaring type: Func`1<TResult>
  template<typename TResult>
  class Func_1;
  // Forward declaring type: Action`2<T1, T2>
  template<typename T1, typename T2>
  class Action_2;
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
}
// Completed forward declares
// Type namespace: LiteNetLib.Utils
namespace LiteNetLib::Utils {
  // Forward declaring type: NetSerializer
  class NetSerializer;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::LiteNetLib::Utils::NetSerializer);
DEFINE_IL2CPP_ARG_TYPE(::LiteNetLib::Utils::NetSerializer*, "LiteNetLib.Utils", "NetSerializer");
// Type namespace: LiteNetLib.Utils
namespace LiteNetLib::Utils {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: LiteNetLib.Utils.NetSerializer
  // [TokenAttribute] Offset: FFFFFFFF
  class NetSerializer : public ::Il2CppObject {
    public:
    // Nested type: ::LiteNetLib::Utils::NetSerializer::FastCall_1<T>
    template<typename T>
    class FastCall_1;
    // Nested type: ::LiteNetLib::Utils::NetSerializer::FastCallSpecific_2<TClass, TProperty>
    template<typename TClass, typename TProperty>
    class FastCallSpecific_2;
    // Nested type: ::LiteNetLib::Utils::NetSerializer::FastCallSpecificAuto_2<TClass, TProperty>
    template<typename TClass, typename TProperty>
    class FastCallSpecificAuto_2;
    // Nested type: ::LiteNetLib::Utils::NetSerializer::FastCallStatic_2<TClass, TProperty>
    template<typename TClass, typename TProperty>
    class FastCallStatic_2;
    // Nested type: ::LiteNetLib::Utils::NetSerializer::FastCallStruct_2<TClass, TProperty>
    template<typename TClass, typename TProperty>
    class FastCallStruct_2;
    // Nested type: ::LiteNetLib::Utils::NetSerializer::FastCallClass_2<TClass, TProperty>
    template<typename TClass, typename TProperty>
    class FastCallClass_2;
    // Nested type: ::LiteNetLib::Utils::NetSerializer::IntSerializer_1<T>
    template<typename T>
    class IntSerializer_1;
    // Nested type: ::LiteNetLib::Utils::NetSerializer::UIntSerializer_1<T>
    template<typename T>
    class UIntSerializer_1;
    // Nested type: ::LiteNetLib::Utils::NetSerializer::ShortSerializer_1<T>
    template<typename T>
    class ShortSerializer_1;
    // Nested type: ::LiteNetLib::Utils::NetSerializer::UShortSerializer_1<T>
    template<typename T>
    class UShortSerializer_1;
    // Nested type: ::LiteNetLib::Utils::NetSerializer::LongSerializer_1<T>
    template<typename T>
    class LongSerializer_1;
    // Nested type: ::LiteNetLib::Utils::NetSerializer::ULongSerializer_1<T>
    template<typename T>
    class ULongSerializer_1;
    // Nested type: ::LiteNetLib::Utils::NetSerializer::ByteSerializer_1<T>
    template<typename T>
    class ByteSerializer_1;
    // Nested type: ::LiteNetLib::Utils::NetSerializer::SByteSerializer_1<T>
    template<typename T>
    class SByteSerializer_1;
    // Nested type: ::LiteNetLib::Utils::NetSerializer::FloatSerializer_1<T>
    template<typename T>
    class FloatSerializer_1;
    // Nested type: ::LiteNetLib::Utils::NetSerializer::DoubleSerializer_1<T>
    template<typename T>
    class DoubleSerializer_1;
    // Nested type: ::LiteNetLib::Utils::NetSerializer::BoolSerializer_1<T>
    template<typename T>
    class BoolSerializer_1;
    // Nested type: ::LiteNetLib::Utils::NetSerializer::CharSerializer_1<T>
    template<typename T>
    class CharSerializer_1;
    // Nested type: ::LiteNetLib::Utils::NetSerializer::IPEndPointSerializer_1<T>
    template<typename T>
    class IPEndPointSerializer_1;
    // Nested type: ::LiteNetLib::Utils::NetSerializer::StringSerializer_1<T>
    template<typename T>
    class StringSerializer_1;
    // Nested type: ::LiteNetLib::Utils::NetSerializer::EnumByteSerializer_1<T>
    template<typename T>
    class EnumByteSerializer_1;
    // Nested type: ::LiteNetLib::Utils::NetSerializer::EnumIntSerializer_1<T>
    template<typename T>
    class EnumIntSerializer_1;
    // Nested type: ::LiteNetLib::Utils::NetSerializer::ClassInfo_1<T>
    template<typename T>
    class ClassInfo_1;
    // Nested type: ::LiteNetLib::Utils::NetSerializer::CustomType
    class CustomType;
    // Nested type: ::LiteNetLib::Utils::NetSerializer::CustomTypeStruct_1<TProperty>
    template<typename TProperty>
    class CustomTypeStruct_1;
    // Nested type: ::LiteNetLib::Utils::NetSerializer::CustomTypeClass_1<TProperty>
    template<typename TProperty>
    class CustomTypeClass_1;
    // Nested type: ::LiteNetLib::Utils::NetSerializer::CustomTypeStatic_1<TProperty>
    template<typename TProperty>
    class CustomTypeStatic_1;
    public:
    // private LiteNetLib.Utils.NetDataWriter _writer
    // Size: 0x8
    // Offset: 0x10
    ::LiteNetLib::Utils::NetDataWriter* writer;
    // Field size check
    static_assert(sizeof(::LiteNetLib::Utils::NetDataWriter*) == 0x8);
    // private readonly System.Int32 _maxStringLength
    // Size: 0x4
    // Offset: 0x18
    int maxStringLength;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: maxStringLength and: registeredTypes
    char __padding1[0x4] = {};
    // private readonly System.Collections.Generic.Dictionary`2<System.Type,LiteNetLib.Utils.NetSerializer/LiteNetLib.Utils.CustomType> _registeredTypes
    // Size: 0x8
    // Offset: 0x20
    ::System::Collections::Generic::Dictionary_2<::System::Type*, ::LiteNetLib::Utils::NetSerializer::CustomType*>* registeredTypes;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::Dictionary_2<::System::Type*, ::LiteNetLib::Utils::NetSerializer::CustomType*>*) == 0x8);
    public:
    // Get instance field reference: private LiteNetLib.Utils.NetDataWriter _writer
    [[deprecated("Use field access instead!")]] ::LiteNetLib::Utils::NetDataWriter*& dyn__writer();
    // Get instance field reference: private readonly System.Int32 _maxStringLength
    [[deprecated("Use field access instead!")]] int& dyn__maxStringLength();
    // Get instance field reference: private readonly System.Collections.Generic.Dictionary`2<System.Type,LiteNetLib.Utils.NetSerializer/LiteNetLib.Utils.CustomType> _registeredTypes
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::Dictionary_2<::System::Type*, ::LiteNetLib::Utils::NetSerializer::CustomType*>*& dyn__registeredTypes();
    // public System.Void .ctor()
    // Offset: 0x2ADE154
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NetSerializer* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::LiteNetLib::Utils::NetSerializer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NetSerializer*, creationType>()));
    }
    // public System.Void .ctor(System.Int32 maxStringLength)
    // Offset: 0x2ADE21C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NetSerializer* New_ctor(int maxStringLength) {
      static auto ___internal__logger = ::Logger::get().WithContext("::LiteNetLib::Utils::NetSerializer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NetSerializer*, creationType>(maxStringLength)));
    }
    // public System.Void RegisterNestedType()
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class T>
    void RegisterNestedType() {
      static_assert(std::is_convertible_v<std::remove_pointer_t<T>, ::LiteNetLib::Utils::INetSerializable> && std::is_convertible_v<T, ::System::ValueType*>);
      static auto ___internal__logger = ::Logger::get().WithContext("::LiteNetLib::Utils::NetSerializer::RegisterNestedType");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "RegisterNestedType", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___generic__method);
    }
    // public System.Void RegisterNestedType(System.Func`1<T> constructor)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class T>
    void RegisterNestedType(::System::Func_1<T>* constructor) {
      static_assert(std::is_convertible_v<std::remove_pointer_t<T>, ::LiteNetLib::Utils::INetSerializable>);
      static auto ___internal__logger = ::Logger::get().WithContext("::LiteNetLib::Utils::NetSerializer::RegisterNestedType");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "RegisterNestedType", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(constructor)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___generic__method, constructor);
    }
    // public System.Void RegisterNestedType(System.Action`2<LiteNetLib.Utils.NetDataWriter,T> writer, System.Func`2<LiteNetLib.Utils.NetDataReader,T> reader)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class T>
    void RegisterNestedType(::System::Action_2<::LiteNetLib::Utils::NetDataWriter*, T>* writer, ::System::Func_2<::LiteNetLib::Utils::NetDataReader*, T>* reader) {
      static auto ___internal__logger = ::Logger::get().WithContext("::LiteNetLib::Utils::NetSerializer::RegisterNestedType");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "RegisterNestedType", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(writer), ::il2cpp_utils::ExtractType(reader)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___generic__method, writer, reader);
    }
    // private LiteNetLib.Utils.NetSerializer/LiteNetLib.Utils.ClassInfo`1<T> RegisterInternal()
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class T>
    ::LiteNetLib::Utils::NetSerializer::ClassInfo_1<T>* RegisterInternal() {
      static auto ___internal__logger = ::Logger::get().WithContext("::LiteNetLib::Utils::NetSerializer::RegisterInternal");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "RegisterInternal", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<::LiteNetLib::Utils::NetSerializer::ClassInfo_1<T>*, false>(this, ___generic__method);
    }
    // public System.Void Register()
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class T>
    void Register() {
      static auto ___internal__logger = ::Logger::get().WithContext("::LiteNetLib::Utils::NetSerializer::Register");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Register", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___generic__method);
    }
    // public T Deserialize(LiteNetLib.Utils.NetDataReader reader)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class T>
    T Deserialize(::LiteNetLib::Utils::NetDataReader* reader) {
      static auto ___internal__logger = ::Logger::get().WithContext("::LiteNetLib::Utils::NetSerializer::Deserialize");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Deserialize", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(reader)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<T, false>(this, ___generic__method, reader);
    }
    // public System.Boolean Deserialize(LiteNetLib.Utils.NetDataReader reader, T target)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class T>
    bool Deserialize(::LiteNetLib::Utils::NetDataReader* reader, T target) {
      static auto ___internal__logger = ::Logger::get().WithContext("::LiteNetLib::Utils::NetSerializer::Deserialize");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Deserialize", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(reader), ::il2cpp_utils::ExtractType(target)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<bool, false>(this, ___generic__method, reader, target);
    }
    // public System.Void Serialize(LiteNetLib.Utils.NetDataWriter writer, T obj)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class T>
    void Serialize(::LiteNetLib::Utils::NetDataWriter* writer, T obj) {
      static auto ___internal__logger = ::Logger::get().WithContext("::LiteNetLib::Utils::NetSerializer::Serialize");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Serialize", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(writer), ::il2cpp_utils::ExtractType(obj)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___generic__method, writer, obj);
    }
    // public System.Byte[] Serialize(T obj)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class T>
    ::ArrayW<uint8_t> Serialize(T obj) {
      static auto ___internal__logger = ::Logger::get().WithContext("::LiteNetLib::Utils::NetSerializer::Serialize");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Serialize", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(obj)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<::ArrayW<uint8_t>, false>(this, ___generic__method, obj);
    }
  }; // LiteNetLib.Utils.NetSerializer
  #pragma pack(pop)
  static check_size<sizeof(NetSerializer), 32 + sizeof(::System::Collections::Generic::Dictionary_2<::System::Type*, ::LiteNetLib::Utils::NetSerializer::CustomType*>*)> __LiteNetLib_Utils_NetSerializerSizeCheck;
  static_assert(sizeof(NetSerializer) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: LiteNetLib::Utils::NetSerializer::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: LiteNetLib::Utils::NetSerializer::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: LiteNetLib::Utils::NetSerializer::RegisterNestedType
// Il2CppName: RegisterNestedType
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: LiteNetLib::Utils::NetSerializer::RegisterNestedType
// Il2CppName: RegisterNestedType
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: LiteNetLib::Utils::NetSerializer::RegisterNestedType
// Il2CppName: RegisterNestedType
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: LiteNetLib::Utils::NetSerializer::RegisterInternal
// Il2CppName: RegisterInternal
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: LiteNetLib::Utils::NetSerializer::Register
// Il2CppName: Register
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: LiteNetLib::Utils::NetSerializer::Deserialize
// Il2CppName: Deserialize
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: LiteNetLib::Utils::NetSerializer::Deserialize
// Il2CppName: Deserialize
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: LiteNetLib::Utils::NetSerializer::Serialize
// Il2CppName: Serialize
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: LiteNetLib::Utils::NetSerializer::Serialize
// Il2CppName: Serialize
// Cannot write MetadataGetter for generic methods!
