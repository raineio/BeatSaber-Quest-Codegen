// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: StringBuilder
  class StringBuilder;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: StringBuilderExtension
  // [ExtensionAttribute] Offset: FFFFFFFF
  class StringBuilderExtension : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: StringBuilderExtension
    StringBuilderExtension() noexcept {}
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0xDE38D0
    // Get static field: static private System.Char[] charToInt
    static ::Array<::Il2CppChar>* _get_charToInt();
    // Set static field: static private System.Char[] charToInt
    static void _set_charToInt(::Array<::Il2CppChar>* value);
    // static public System.Void Swap(System.Text.StringBuilder sb, System.Int32 startIndex, System.Int32 endIndex)
    // Offset: 0x238A78C
    static void Swap(System::Text::StringBuilder* sb, int startIndex, int endIndex);
    // static public System.Void AppendNumber(System.Text.StringBuilder sb, System.Int32 number)
    // Offset: 0x238A844
    static void AppendNumber(System::Text::StringBuilder* sb, int number);
    // static public System.Void AppendNumber(System.Text.StringBuilder sb, System.UInt32 unumber)
    // Offset: 0x238A98C
    static void AppendNumber(System::Text::StringBuilder* sb, uint unumber);
    // static private System.Void .cctor()
    // Offset: 0x238AAB8
    static void _cctor();
  }; // StringBuilderExtension
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::StringBuilderExtension*, "", "StringBuilderExtension");
// Writing MetadataGetter for method: GlobalNamespace::StringBuilderExtension::Swap
// Il2CppName: Swap
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::Text::StringBuilder*, int, int)>(&GlobalNamespace::StringBuilderExtension::Swap)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::StringBuilderExtension*), "Swap", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Text::StringBuilder*>(), ::il2cpp_utils::ExtractIndependentType<int>(), ::il2cpp_utils::ExtractIndependentType<int>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::StringBuilderExtension::AppendNumber
// Il2CppName: AppendNumber
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::Text::StringBuilder*, int)>(&GlobalNamespace::StringBuilderExtension::AppendNumber)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::StringBuilderExtension*), "AppendNumber", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Text::StringBuilder*>(), ::il2cpp_utils::ExtractIndependentType<int>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::StringBuilderExtension::AppendNumber
// Il2CppName: AppendNumber
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::Text::StringBuilder*, uint)>(&GlobalNamespace::StringBuilderExtension::AppendNumber)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::StringBuilderExtension*), "AppendNumber", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Text::StringBuilder*>(), ::il2cpp_utils::ExtractIndependentType<uint>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::StringBuilderExtension::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::StringBuilderExtension::_cctor)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::StringBuilderExtension*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
