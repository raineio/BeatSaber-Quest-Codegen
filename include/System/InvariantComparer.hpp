// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Collections.IComparer
#include "System/Collections/IComparer.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Globalization
namespace System::Globalization {
  // Forward declaring type: CompareInfo
  class CompareInfo;
}
// Completed forward declares
// Type namespace: System
namespace System {
  // Forward declaring type: InvariantComparer
  class InvariantComparer;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::InvariantComparer);
DEFINE_IL2CPP_ARG_TYPE(::System::InvariantComparer*, "System", "InvariantComparer");
// Type namespace: System
namespace System {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: System.InvariantComparer
  // [TokenAttribute] Offset: FFFFFFFF
  class InvariantComparer : public ::Il2CppObject/*, public ::System::Collections::IComparer*/ {
    public:
    public:
    // private System.Globalization.CompareInfo m_compareInfo
    // Size: 0x8
    // Offset: 0x10
    ::System::Globalization::CompareInfo* m_compareInfo;
    // Field size check
    static_assert(sizeof(::System::Globalization::CompareInfo*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::System::Collections::IComparer
    operator ::System::Collections::IComparer() noexcept {
      return *reinterpret_cast<::System::Collections::IComparer*>(this);
    }
    // Creating interface conversion operator: i_IComparer
    inline ::System::Collections::IComparer* i_IComparer() noexcept {
      return reinterpret_cast<::System::Collections::IComparer*>(this);
    }
    // Creating conversion operator: operator ::System::Globalization::CompareInfo*
    constexpr operator ::System::Globalization::CompareInfo*() const noexcept {
      return m_compareInfo;
    }
    // Get static field: static readonly System.InvariantComparer Default
    static ::System::InvariantComparer* _get_Default();
    // Set static field: static readonly System.InvariantComparer Default
    static void _set_Default(::System::InvariantComparer* value);
    // Get instance field reference: private System.Globalization.CompareInfo m_compareInfo
    [[deprecated("Use field access instead!")]] ::System::Globalization::CompareInfo*& dyn_m_compareInfo();
    // System.Void .ctor()
    // Offset: 0x1DADCE0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static InvariantComparer* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::InvariantComparer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<InvariantComparer*, creationType>()));
    }
    // static private System.Void .cctor()
    // Offset: 0x1DADE5C
    static void _cctor();
    // public System.Int32 Compare(System.Object a, System.Object b)
    // Offset: 0x1DADD6C
    int Compare(::Il2CppObject* a, ::Il2CppObject* b);
  }; // System.InvariantComparer
  #pragma pack(pop)
  static check_size<sizeof(InvariantComparer), 16 + sizeof(::System::Globalization::CompareInfo*)> __System_InvariantComparerSizeCheck;
  static_assert(sizeof(InvariantComparer) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::InvariantComparer::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::InvariantComparer::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::InvariantComparer::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::InvariantComparer*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::InvariantComparer::Compare
// Il2CppName: Compare
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::InvariantComparer::*)(::Il2CppObject*, ::Il2CppObject*)>(&System::InvariantComparer::Compare)> {
  static const MethodInfo* get() {
    static auto* a = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* b = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::InvariantComparer*), "Compare", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{a, b});
  }
};
