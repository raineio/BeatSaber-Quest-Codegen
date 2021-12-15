// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: FileBrowserModel
#include "GlobalNamespace/FileBrowserModel.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "extern/beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: FileBrowserItem
  class FileBrowserItem;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Completed forward declares
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(GlobalNamespace::FileBrowserModel::$$c__DisplayClass0_0);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::FileBrowserModel::$$c__DisplayClass0_0*, "", "FileBrowserModel/<>c__DisplayClass0_0");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: FileBrowserModel/<>c__DisplayClass0_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class FileBrowserModel::$$c__DisplayClass0_0 : public ::Il2CppObject {
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
    // public FileBrowserItem[] items
    // Size: 0x8
    // Offset: 0x10
    ::ArrayW<GlobalNamespace::FileBrowserItem*> items;
    // Field size check
    static_assert(sizeof(::ArrayW<GlobalNamespace::FileBrowserItem*>) == 0x8);
    // public System.String direcotryPath
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* direcotryPath;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public System.String[] extensions
    // Size: 0x8
    // Offset: 0x20
    ::ArrayW<::Il2CppString*> extensions;
    // Field size check
    static_assert(sizeof(::ArrayW<::Il2CppString*>) == 0x8);
    // public System.Action`1<FileBrowserItem[]> callback
    // Size: 0x8
    // Offset: 0x28
    System::Action_1<::ArrayW<GlobalNamespace::FileBrowserItem*>>* callback;
    // Field size check
    static_assert(sizeof(System::Action_1<::ArrayW<GlobalNamespace::FileBrowserItem*>>*) == 0x8);
    public:
    // Get instance field reference: public FileBrowserItem[] items
    ::ArrayW<GlobalNamespace::FileBrowserItem*>& dyn_items();
    // Get instance field reference: public System.String direcotryPath
    ::Il2CppString*& dyn_direcotryPath();
    // Get instance field reference: public System.String[] extensions
    ::ArrayW<::Il2CppString*>& dyn_extensions();
    // Get instance field reference: public System.Action`1<FileBrowserItem[]> callback
    System::Action_1<::ArrayW<GlobalNamespace::FileBrowserItem*>>*& dyn_callback();
    // System.Void <GetContentOfDirectory>b__0()
    // Offset: 0x11E2B54
    void $GetContentOfDirectory$b__0();
    // System.Void <GetContentOfDirectory>b__1()
    // Offset: 0x11E2B80
    void $GetContentOfDirectory$b__1();
    // public System.Void .ctor()
    // Offset: 0x11E26BC
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FileBrowserModel::$$c__DisplayClass0_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::FileBrowserModel::$$c__DisplayClass0_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FileBrowserModel::$$c__DisplayClass0_0*, creationType>()));
    }
  }; // FileBrowserModel/<>c__DisplayClass0_0
  #pragma pack(pop)
  static check_size<sizeof(FileBrowserModel::$$c__DisplayClass0_0), 40 + sizeof(System::Action_1<::ArrayW<GlobalNamespace::FileBrowserItem*>>*)> __GlobalNamespace_FileBrowserModel_$$c__DisplayClass0_0SizeCheck;
  static_assert(sizeof(FileBrowserModel::$$c__DisplayClass0_0) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::FileBrowserModel::$$c__DisplayClass0_0::$GetContentOfDirectory$b__0
// Il2CppName: <GetContentOfDirectory>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::FileBrowserModel::$$c__DisplayClass0_0::*)()>(&GlobalNamespace::FileBrowserModel::$$c__DisplayClass0_0::$GetContentOfDirectory$b__0)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FileBrowserModel::$$c__DisplayClass0_0*), "<GetContentOfDirectory>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FileBrowserModel::$$c__DisplayClass0_0::$GetContentOfDirectory$b__1
// Il2CppName: <GetContentOfDirectory>b__1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::FileBrowserModel::$$c__DisplayClass0_0::*)()>(&GlobalNamespace::FileBrowserModel::$$c__DisplayClass0_0::$GetContentOfDirectory$b__1)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FileBrowserModel::$$c__DisplayClass0_0*), "<GetContentOfDirectory>b__1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FileBrowserModel::$$c__DisplayClass0_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
