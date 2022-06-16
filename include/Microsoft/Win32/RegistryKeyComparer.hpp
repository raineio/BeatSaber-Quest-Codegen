// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Collections.IEqualityComparer
#include "System/Collections/IEqualityComparer.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: Microsoft.Win32
namespace Microsoft::Win32 {
  // Forward declaring type: RegistryKeyComparer
  class RegistryKeyComparer;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Microsoft::Win32::RegistryKeyComparer);
DEFINE_IL2CPP_ARG_TYPE(::Microsoft::Win32::RegistryKeyComparer*, "Microsoft.Win32", "RegistryKeyComparer");
// Type namespace: Microsoft.Win32
namespace Microsoft::Win32 {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Microsoft.Win32.RegistryKeyComparer
  // [TokenAttribute] Offset: FFFFFFFF
  class RegistryKeyComparer : public ::Il2CppObject/*, public ::System::Collections::IEqualityComparer*/ {
    public:
    // Creating interface conversion operator: operator ::System::Collections::IEqualityComparer
    operator ::System::Collections::IEqualityComparer() noexcept {
      return *reinterpret_cast<::System::Collections::IEqualityComparer*>(this);
    }
    // Creating interface conversion operator: i_IEqualityComparer
    inline ::System::Collections::IEqualityComparer* i_IEqualityComparer() noexcept {
      return reinterpret_cast<::System::Collections::IEqualityComparer*>(this);
    }
    // public System.Boolean Equals(System.Object x, System.Object y)
    // Offset: 0x1F3A1D8
    bool Equals(::Il2CppObject* x, ::Il2CppObject* y);
    // public System.Int32 GetHashCode(System.Object obj)
    // Offset: 0x1F3A28C
    int GetHashCode(::Il2CppObject* obj);
    // public System.Void .ctor()
    // Offset: 0x1F34F94
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RegistryKeyComparer* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Microsoft::Win32::RegistryKeyComparer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RegistryKeyComparer*, creationType>()));
    }
  }; // Microsoft.Win32.RegistryKeyComparer
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Microsoft::Win32::RegistryKeyComparer::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Microsoft::Win32::RegistryKeyComparer::*)(::Il2CppObject*, ::Il2CppObject*)>(&Microsoft::Win32::RegistryKeyComparer::Equals)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* y = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Microsoft::Win32::RegistryKeyComparer*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, y});
  }
};
// Writing MetadataGetter for method: Microsoft::Win32::RegistryKeyComparer::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Microsoft::Win32::RegistryKeyComparer::*)(::Il2CppObject*)>(&Microsoft::Win32::RegistryKeyComparer::GetHashCode)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Microsoft::Win32::RegistryKeyComparer*), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: Microsoft::Win32::RegistryKeyComparer::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
