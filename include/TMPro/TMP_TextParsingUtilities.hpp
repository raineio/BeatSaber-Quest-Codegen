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
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: String
  class String;
}
// Completed forward declares
// Type namespace: TMPro
namespace TMPro {
  // Forward declaring type: TMP_TextParsingUtilities
  class TMP_TextParsingUtilities;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(TMPro::TMP_TextParsingUtilities);
DEFINE_IL2CPP_ARG_TYPE(TMPro::TMP_TextParsingUtilities*, "TMPro", "TMP_TextParsingUtilities");
// Type namespace: TMPro
namespace TMPro {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: TMPro.TMP_TextParsingUtilities
  // [TokenAttribute] Offset: FFFFFFFF
  class TMP_TextParsingUtilities : public ::Il2CppObject {
    public:
    // Get static field: static private readonly TMPro.TMP_TextParsingUtilities s_Instance
    static TMPro::TMP_TextParsingUtilities* _get_s_Instance();
    // Set static field: static private readonly TMPro.TMP_TextParsingUtilities s_Instance
    static void _set_s_Instance(TMPro::TMP_TextParsingUtilities* value);
    // static field const value: static private System.String k_LookupStringL
    static constexpr const char* k_LookupStringL = "-------------------------------- !-#$%&-()*+,-./0123456789:;<=>?@abcdefghijklmnopqrstuvwxyz[-]^_`abcdefghijklmnopqrstuvwxyz{|}~-";
    // Get static field: static private System.String k_LookupStringL
    static ::Il2CppString* _get_k_LookupStringL();
    // Set static field: static private System.String k_LookupStringL
    static void _set_k_LookupStringL(::Il2CppString* value);
    // static field const value: static private System.String k_LookupStringU
    static constexpr const char* k_LookupStringU = "-------------------------------- !-#$%&-()*+,-./0123456789:;<=>?@ABCDEFGHIJKLMNOPQRSTUVWXYZ[-]^_`ABCDEFGHIJKLMNOPQRSTUVWXYZ{|}~-";
    // Get static field: static private System.String k_LookupStringU
    static ::Il2CppString* _get_k_LookupStringU();
    // Set static field: static private System.String k_LookupStringU
    static void _set_k_LookupStringU(::Il2CppString* value);
    // static public TMPro.TMP_TextParsingUtilities get_instance()
    // Offset: 0x1632978
    static TMPro::TMP_TextParsingUtilities* get_instance();
    // static private System.Void .cctor()
    // Offset: 0x163290C
    static void _cctor();
    // static public System.UInt32 GetHashCode(System.String s)
    // Offset: 0x16329E0
    static uint GetHashCode(::Il2CppString* s);
    // static public System.Int32 GetHashCodeCaseSensitive(System.String s)
    // Offset: 0x1632B30
    static int GetHashCodeCaseSensitive(::Il2CppString* s);
    // static public System.Char ToLowerASCIIFast(System.Char c)
    // Offset: 0x1632BA8
    static ::Il2CppChar ToLowerASCIIFast(::Il2CppChar c);
    // static public System.Char ToUpperASCIIFast(System.Char c)
    // Offset: 0x1632AB4
    static ::Il2CppChar ToUpperASCIIFast(::Il2CppChar c);
    // static public System.UInt32 ToUpperASCIIFast(System.UInt32 c)
    // Offset: 0x1632C24
    static uint ToUpperASCIIFast(uint c);
    // static public System.UInt32 ToLowerASCIIFast(System.UInt32 c)
    // Offset: 0x1632CA0
    static uint ToLowerASCIIFast(uint c);
    // static public System.Boolean IsHighSurrogate(System.UInt32 c)
    // Offset: 0x1632D1C
    static bool IsHighSurrogate(uint c);
    // static public System.Boolean IsLowSurrogate(System.UInt32 c)
    // Offset: 0x1632D30
    static bool IsLowSurrogate(uint c);
    // public System.Void .ctor()
    // Offset: 0x1632970
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TMP_TextParsingUtilities* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("TMPro::TMP_TextParsingUtilities::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TMP_TextParsingUtilities*, creationType>()));
    }
  }; // TMPro.TMP_TextParsingUtilities
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: TMPro::TMP_TextParsingUtilities::get_instance
// Il2CppName: get_instance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<TMPro::TMP_TextParsingUtilities* (*)()>(&TMPro::TMP_TextParsingUtilities::get_instance)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_TextParsingUtilities*), "get_instance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_TextParsingUtilities::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&TMPro::TMP_TextParsingUtilities::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_TextParsingUtilities*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_TextParsingUtilities::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (*)(::Il2CppString*)>(&TMPro::TMP_TextParsingUtilities::GetHashCode)> {
  static const MethodInfo* get() {
    static auto* s = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_TextParsingUtilities*), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{s});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_TextParsingUtilities::GetHashCodeCaseSensitive
// Il2CppName: GetHashCodeCaseSensitive
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::Il2CppString*)>(&TMPro::TMP_TextParsingUtilities::GetHashCodeCaseSensitive)> {
  static const MethodInfo* get() {
    static auto* s = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_TextParsingUtilities*), "GetHashCodeCaseSensitive", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{s});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_TextParsingUtilities::ToLowerASCIIFast
// Il2CppName: ToLowerASCIIFast
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppChar (*)(::Il2CppChar)>(&TMPro::TMP_TextParsingUtilities::ToLowerASCIIFast)> {
  static const MethodInfo* get() {
    static auto* c = &::il2cpp_utils::GetClassFromName("System", "Char")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_TextParsingUtilities*), "ToLowerASCIIFast", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{c});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_TextParsingUtilities::ToUpperASCIIFast
// Il2CppName: ToUpperASCIIFast
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppChar (*)(::Il2CppChar)>(&TMPro::TMP_TextParsingUtilities::ToUpperASCIIFast)> {
  static const MethodInfo* get() {
    static auto* c = &::il2cpp_utils::GetClassFromName("System", "Char")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_TextParsingUtilities*), "ToUpperASCIIFast", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{c});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_TextParsingUtilities::ToUpperASCIIFast
// Il2CppName: ToUpperASCIIFast
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (*)(uint)>(&TMPro::TMP_TextParsingUtilities::ToUpperASCIIFast)> {
  static const MethodInfo* get() {
    static auto* c = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_TextParsingUtilities*), "ToUpperASCIIFast", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{c});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_TextParsingUtilities::ToLowerASCIIFast
// Il2CppName: ToLowerASCIIFast
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (*)(uint)>(&TMPro::TMP_TextParsingUtilities::ToLowerASCIIFast)> {
  static const MethodInfo* get() {
    static auto* c = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_TextParsingUtilities*), "ToLowerASCIIFast", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{c});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_TextParsingUtilities::IsHighSurrogate
// Il2CppName: IsHighSurrogate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(uint)>(&TMPro::TMP_TextParsingUtilities::IsHighSurrogate)> {
  static const MethodInfo* get() {
    static auto* c = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_TextParsingUtilities*), "IsHighSurrogate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{c});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_TextParsingUtilities::IsLowSurrogate
// Il2CppName: IsLowSurrogate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(uint)>(&TMPro::TMP_TextParsingUtilities::IsLowSurrogate)> {
  static const MethodInfo* get() {
    static auto* c = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_TextParsingUtilities*), "IsLowSurrogate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{c});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_TextParsingUtilities::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
