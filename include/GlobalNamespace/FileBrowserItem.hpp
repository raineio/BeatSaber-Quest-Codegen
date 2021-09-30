// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x21
  #pragma pack(push, 1)
  // Autogenerated type: FileBrowserItem
  // [TokenAttribute] Offset: FFFFFFFF
  class FileBrowserItem : public ::Il2CppObject {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    private:
    #endif
    // private System.String <displayName>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* displayName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.String <fullPath>k__BackingField
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* fullPath;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.Boolean <isDirectory>k__BackingField
    // Size: 0x1
    // Offset: 0x20
    bool isDirectory;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get instance field reference: private System.String <displayName>k__BackingField
    ::Il2CppString*& dyn_$displayName$k__BackingField();
    // Get instance field reference: private System.String <fullPath>k__BackingField
    ::Il2CppString*& dyn_$fullPath$k__BackingField();
    // Get instance field reference: private System.Boolean <isDirectory>k__BackingField
    bool& dyn_$isDirectory$k__BackingField();
    // public System.String get_displayName()
    // Offset: 0x11B4D7C
    ::Il2CppString* get_displayName();
    // private System.Void set_displayName(System.String value)
    // Offset: 0x11B4D84
    void set_displayName(::Il2CppString* value);
    // public System.String get_fullPath()
    // Offset: 0x11B4D8C
    ::Il2CppString* get_fullPath();
    // private System.Void set_fullPath(System.String value)
    // Offset: 0x11B4D94
    void set_fullPath(::Il2CppString* value);
    // public System.Boolean get_isDirectory()
    // Offset: 0x11B4D9C
    bool get_isDirectory();
    // private System.Void set_isDirectory(System.Boolean value)
    // Offset: 0x11B4DA4
    void set_isDirectory(bool value);
    // public System.Void .ctor(System.String displayName, System.String fullPath, System.Boolean isDirectory)
    // Offset: 0x11B4DB0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FileBrowserItem* New_ctor(::Il2CppString* displayName, ::Il2CppString* fullPath, bool isDirectory) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::FileBrowserItem::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FileBrowserItem*, creationType>(displayName, fullPath, isDirectory)));
    }
  }; // FileBrowserItem
  #pragma pack(pop)
  static check_size<sizeof(FileBrowserItem), 32 + sizeof(bool)> __GlobalNamespace_FileBrowserItemSizeCheck;
  static_assert(sizeof(FileBrowserItem) == 0x21);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::FileBrowserItem*, "", "FileBrowserItem");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::FileBrowserItem::get_displayName
// Il2CppName: get_displayName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (GlobalNamespace::FileBrowserItem::*)()>(&GlobalNamespace::FileBrowserItem::get_displayName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FileBrowserItem*), "get_displayName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FileBrowserItem::set_displayName
// Il2CppName: set_displayName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::FileBrowserItem::*)(::Il2CppString*)>(&GlobalNamespace::FileBrowserItem::set_displayName)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FileBrowserItem*), "set_displayName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FileBrowserItem::get_fullPath
// Il2CppName: get_fullPath
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (GlobalNamespace::FileBrowserItem::*)()>(&GlobalNamespace::FileBrowserItem::get_fullPath)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FileBrowserItem*), "get_fullPath", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FileBrowserItem::set_fullPath
// Il2CppName: set_fullPath
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::FileBrowserItem::*)(::Il2CppString*)>(&GlobalNamespace::FileBrowserItem::set_fullPath)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FileBrowserItem*), "set_fullPath", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FileBrowserItem::get_isDirectory
// Il2CppName: get_isDirectory
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::FileBrowserItem::*)()>(&GlobalNamespace::FileBrowserItem::get_isDirectory)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FileBrowserItem*), "get_isDirectory", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FileBrowserItem::set_isDirectory
// Il2CppName: set_isDirectory
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::FileBrowserItem::*)(bool)>(&GlobalNamespace::FileBrowserItem::set_isDirectory)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FileBrowserItem*), "set_isDirectory", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FileBrowserItem::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
