// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Globalization.InternalEncodingDataItem
#include "System/Globalization/InternalEncodingDataItem.hpp"
// Including type: System.Globalization.InternalCodePageDataItem
#include "System/Globalization/InternalCodePageDataItem.hpp"
#include "extern/beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: Hashtable
  class Hashtable;
}
// Forward declaring namespace: System::Globalization
namespace System::Globalization {
  // Forward declaring type: CodePageDataItem
  class CodePageDataItem;
}
// Completed forward declares
// Type namespace: System.Globalization
namespace System::Globalization {
  // Forward declaring type: EncodingTable
  class EncodingTable;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(System::Globalization::EncodingTable);
DEFINE_IL2CPP_ARG_TYPE(System::Globalization::EncodingTable*, "System.Globalization", "EncodingTable");
// Type namespace: System.Globalization
namespace System::Globalization {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Globalization.EncodingTable
  // [TokenAttribute] Offset: FFFFFFFF
  class EncodingTable : public ::Il2CppObject {
    public:
    // Get static field: static System.Globalization.InternalEncodingDataItem[] encodingDataPtr
    static ::ArrayW<System::Globalization::InternalEncodingDataItem> _get_encodingDataPtr();
    // Set static field: static System.Globalization.InternalEncodingDataItem[] encodingDataPtr
    static void _set_encodingDataPtr(::ArrayW<System::Globalization::InternalEncodingDataItem> value);
    // Get static field: static System.Globalization.InternalCodePageDataItem[] codePageDataPtr
    static ::ArrayW<System::Globalization::InternalCodePageDataItem> _get_codePageDataPtr();
    // Set static field: static System.Globalization.InternalCodePageDataItem[] codePageDataPtr
    static void _set_codePageDataPtr(::ArrayW<System::Globalization::InternalCodePageDataItem> value);
    // Get static field: static private System.Int32 lastEncodingItem
    static int _get_lastEncodingItem();
    // Set static field: static private System.Int32 lastEncodingItem
    static void _set_lastEncodingItem(int value);
    // Get static field: static private System.Collections.Hashtable hashByName
    static System::Collections::Hashtable* _get_hashByName();
    // Set static field: static private System.Collections.Hashtable hashByName
    static void _set_hashByName(System::Collections::Hashtable* value);
    // Get static field: static private System.Collections.Hashtable hashByCodePage
    static System::Collections::Hashtable* _get_hashByCodePage();
    // Set static field: static private System.Collections.Hashtable hashByCodePage
    static void _set_hashByCodePage(System::Collections::Hashtable* value);
    // static private System.Void .cctor()
    // Offset: 0x1C33490
    static void _cctor();
    // static private System.Int32 GetNumEncodingItems()
    // Offset: 0x1C33400
    static int GetNumEncodingItems();
    // static private System.Globalization.InternalEncodingDataItem ENC(System.String name, System.UInt16 cp)
    // Offset: 0x1C33474
    static System::Globalization::InternalEncodingDataItem ENC(::Il2CppString* name, uint16_t cp);
    // static private System.Globalization.InternalCodePageDataItem MapCodePageDataItem(System.UInt16 cp, System.UInt16 fcp, System.String names, System.UInt32 flags)
    // Offset: 0x1C3347C
    static System::Globalization::InternalCodePageDataItem MapCodePageDataItem(uint16_t cp, uint16_t fcp, ::Il2CppString* names, uint flags);
    // static private System.Int32 internalGetCodePageFromName(System.String name)
    // Offset: 0x1C37540
    static int internalGetCodePageFromName(::Il2CppString* name);
    // static System.Int32 GetCodePageFromName(System.String name)
    // Offset: 0x1C377DC
    static int GetCodePageFromName(::Il2CppString* name);
    // static System.Globalization.CodePageDataItem GetCodePageDataItem(System.Int32 codepage)
    // Offset: 0x1C37950
    static System::Globalization::CodePageDataItem* GetCodePageDataItem(int codepage);
  }; // System.Globalization.EncodingTable
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Globalization::EncodingTable::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Globalization::EncodingTable::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::EncodingTable*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Globalization::EncodingTable::GetNumEncodingItems
// Il2CppName: GetNumEncodingItems
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)()>(&System::Globalization::EncodingTable::GetNumEncodingItems)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::EncodingTable*), "GetNumEncodingItems", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Globalization::EncodingTable::ENC
// Il2CppName: ENC
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Globalization::InternalEncodingDataItem (*)(::Il2CppString*, uint16_t)>(&System::Globalization::EncodingTable::ENC)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* cp = &::il2cpp_utils::GetClassFromName("System", "UInt16")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::EncodingTable*), "ENC", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name, cp});
  }
};
// Writing MetadataGetter for method: System::Globalization::EncodingTable::MapCodePageDataItem
// Il2CppName: MapCodePageDataItem
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Globalization::InternalCodePageDataItem (*)(uint16_t, uint16_t, ::Il2CppString*, uint)>(&System::Globalization::EncodingTable::MapCodePageDataItem)> {
  static const MethodInfo* get() {
    static auto* cp = &::il2cpp_utils::GetClassFromName("System", "UInt16")->byval_arg;
    static auto* fcp = &::il2cpp_utils::GetClassFromName("System", "UInt16")->byval_arg;
    static auto* names = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* flags = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::EncodingTable*), "MapCodePageDataItem", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{cp, fcp, names, flags});
  }
};
// Writing MetadataGetter for method: System::Globalization::EncodingTable::internalGetCodePageFromName
// Il2CppName: internalGetCodePageFromName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::Il2CppString*)>(&System::Globalization::EncodingTable::internalGetCodePageFromName)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::EncodingTable*), "internalGetCodePageFromName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name});
  }
};
// Writing MetadataGetter for method: System::Globalization::EncodingTable::GetCodePageFromName
// Il2CppName: GetCodePageFromName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::Il2CppString*)>(&System::Globalization::EncodingTable::GetCodePageFromName)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::EncodingTable*), "GetCodePageFromName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name});
  }
};
// Writing MetadataGetter for method: System::Globalization::EncodingTable::GetCodePageDataItem
// Il2CppName: GetCodePageDataItem
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Globalization::CodePageDataItem* (*)(int)>(&System::Globalization::EncodingTable::GetCodePageDataItem)> {
  static const MethodInfo* get() {
    static auto* codepage = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::EncodingTable*), "GetCodePageDataItem", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{codepage});
  }
};
