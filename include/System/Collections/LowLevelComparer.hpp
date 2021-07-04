// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Collections.IComparer
#include "System/Collections/IComparer.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: System.Collections
namespace System::Collections {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Collections.LowLevelComparer
  class LowLevelComparer : public ::Il2CppObject/*, public System::Collections::IComparer*/ {
    public:
    // Creating value type constructor for type: LowLevelComparer
    LowLevelComparer() noexcept {}
    // Creating interface conversion operator: operator System::Collections::IComparer
    operator System::Collections::IComparer() noexcept {
      return *reinterpret_cast<System::Collections::IComparer*>(this);
    }
    // Get static field: static readonly System.Collections.LowLevelComparer Default
    static System::Collections::LowLevelComparer* _get_Default();
    // Set static field: static readonly System.Collections.LowLevelComparer Default
    static void _set_Default(System::Collections::LowLevelComparer* value);
    // public System.Int32 Compare(System.Object a, System.Object b)
    // Offset: 0x1973B7C
    int Compare(::Il2CppObject* a, ::Il2CppObject* b);
    // static private System.Void .cctor()
    // Offset: 0x1973D34
    static void _cctor();
    // private System.Void .ctor()
    // Offset: 0x1973B74
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LowLevelComparer* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Collections::LowLevelComparer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LowLevelComparer*, creationType>()));
    }
  }; // System.Collections.LowLevelComparer
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(System::Collections::LowLevelComparer*, "System.Collections", "LowLevelComparer");
// Writing MetadataGetter for method: System::Collections::LowLevelComparer::Compare
// Il2CppName: Compare
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Collections::LowLevelComparer::*)(::Il2CppObject*, ::Il2CppObject*)>(&System::Collections::LowLevelComparer::Compare)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Collections::LowLevelComparer*), "Compare", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppObject*>(), ::il2cpp_utils::ExtractIndependentType<::Il2CppObject*>()});
  }
};
// Writing MetadataGetter for method: System::Collections::LowLevelComparer::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Collections::LowLevelComparer::_cctor)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Collections::LowLevelComparer*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Collections::LowLevelComparer::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
