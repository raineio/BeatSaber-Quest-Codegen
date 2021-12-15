// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: NoteCutter
#include "GlobalNamespace/NoteCutter.hpp"
// Including type: System.Collections.IComparer
#include "System/Collections/IComparer.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: CuttableBySaberSortParamsComparer
  class CuttableBySaberSortParamsComparer;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(GlobalNamespace::NoteCutter::CuttableBySaberSortParamsComparer);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::NoteCutter::CuttableBySaberSortParamsComparer*, "", "NoteCutter/CuttableBySaberSortParamsComparer");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: NoteCutter/CuttableBySaberSortParamsComparer
  // [TokenAttribute] Offset: FFFFFFFF
  class NoteCutter::CuttableBySaberSortParamsComparer : public ::Il2CppObject/*, public System::Collections::IComparer*/ {
    public:
    // Creating interface conversion operator: operator System::Collections::IComparer
    operator System::Collections::IComparer() noexcept {
      return *reinterpret_cast<System::Collections::IComparer*>(this);
    }
    // public System.Int32 Compare(System.Object p0, System.Object p1)
    // Offset: 0x133FFE0
    int Compare(::Il2CppObject* p0, ::Il2CppObject* p1);
    // public System.Void .ctor()
    // Offset: 0x133F910
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NoteCutter::CuttableBySaberSortParamsComparer* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::NoteCutter::CuttableBySaberSortParamsComparer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NoteCutter::CuttableBySaberSortParamsComparer*, creationType>()));
    }
  }; // NoteCutter/CuttableBySaberSortParamsComparer
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::NoteCutter::CuttableBySaberSortParamsComparer::Compare
// Il2CppName: Compare
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::NoteCutter::CuttableBySaberSortParamsComparer::*)(::Il2CppObject*, ::Il2CppObject*)>(&GlobalNamespace::NoteCutter::CuttableBySaberSortParamsComparer::Compare)> {
  static const MethodInfo* get() {
    static auto* p0 = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* p1 = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NoteCutter::CuttableBySaberSortParamsComparer*), "Compare", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{p0, p1});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NoteCutter::CuttableBySaberSortParamsComparer::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
