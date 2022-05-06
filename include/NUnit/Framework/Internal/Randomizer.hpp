// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Random
#include "System/Random.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: MemberInfo
  class MemberInfo;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: String
  class String;
}
// Completed forward declares
// Type namespace: NUnit.Framework.Internal
namespace NUnit::Framework::Internal {
  // Forward declaring type: Randomizer
  class Randomizer;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::NUnit::Framework::Internal::Randomizer);
DEFINE_IL2CPP_ARG_TYPE(::NUnit::Framework::Internal::Randomizer*, "NUnit.Framework.Internal", "Randomizer");
// Type namespace: NUnit.Framework.Internal
namespace NUnit::Framework::Internal {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: NUnit.Framework.Internal.Randomizer
  // [TokenAttribute] Offset: FFFFFFFF
  class Randomizer : public ::System::Random {
    public:
    // Get static field: static private System.Random _seedGenerator
    static ::System::Random* _get__seedGenerator();
    // Set static field: static private System.Random _seedGenerator
    static void _set__seedGenerator(::System::Random* value);
    // Get static field: static private System.Int32 _initialSeed
    static int _get__initialSeed();
    // Set static field: static private System.Int32 _initialSeed
    static void _set__initialSeed(int value);
    // Get static field: static private System.Collections.Generic.Dictionary`2<System.Reflection.MemberInfo,NUnit.Framework.Internal.Randomizer> Randomizers
    static ::System::Collections::Generic::Dictionary_2<::System::Reflection::MemberInfo*, ::NUnit::Framework::Internal::Randomizer*>* _get_Randomizers();
    // Set static field: static private System.Collections.Generic.Dictionary`2<System.Reflection.MemberInfo,NUnit.Framework.Internal.Randomizer> Randomizers
    static void _set_Randomizers(::System::Collections::Generic::Dictionary_2<::System::Reflection::MemberInfo*, ::NUnit::Framework::Internal::Randomizer*>* value);
    // static field const value: static public System.String DefaultStringChars
    static constexpr const char* DefaultStringChars = "abcdefghijkmnopqrstuvwxyzABCDEFGHJKLMNOPQRSTUVWXYZ0123456789_";
    // Get static field: static public System.String DefaultStringChars
    static ::StringW _get_DefaultStringChars();
    // Set static field: static public System.String DefaultStringChars
    static void _set_DefaultStringChars(::StringW value);
    // static field const value: static private System.Int32 DefaultStringLength
    static constexpr const int DefaultStringLength = 25;
    // Get static field: static private System.Int32 DefaultStringLength
    static int _get_DefaultStringLength();
    // Set static field: static private System.Int32 DefaultStringLength
    static void _set_DefaultStringLength(int value);
    // static public System.Void set_InitialSeed(System.Int32 value)
    // Offset: 0x2A0AC58
    static void set_InitialSeed(int value);
    // static private System.Void .cctor()
    // Offset: 0x2A0ABAC
    static void _cctor();
    // public System.Void .ctor(System.Int32 seed)
    // Offset: 0x2A0ADA0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Randomizer* New_ctor(int seed) {
      static auto ___internal__logger = ::Logger::get().WithContext("::NUnit::Framework::Internal::Randomizer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Randomizer*, creationType>(seed)));
    }
    // static public NUnit.Framework.Internal.Randomizer CreateRandomizer()
    // Offset: 0x2A0AD00
    static ::NUnit::Framework::Internal::Randomizer* CreateRandomizer();
  }; // NUnit.Framework.Internal.Randomizer
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: NUnit::Framework::Internal::Randomizer::set_InitialSeed
// Il2CppName: set_InitialSeed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int)>(&NUnit::Framework::Internal::Randomizer::set_InitialSeed)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::Randomizer*), "set_InitialSeed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::Randomizer::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&NUnit::Framework::Internal::Randomizer::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::Randomizer*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::Randomizer::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: NUnit::Framework::Internal::Randomizer::CreateRandomizer
// Il2CppName: CreateRandomizer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::NUnit::Framework::Internal::Randomizer* (*)()>(&NUnit::Framework::Internal::Randomizer::CreateRandomizer)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::Randomizer*), "CreateRandomizer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
