// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Collections.Generic.IComparer`1
#include "System/Collections/Generic/IComparer_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Mono::Globalization::Unicode
namespace Mono::Globalization::Unicode {
  // Forward declaring type: Contraction
  class Contraction;
}
// Completed forward declares
// Type namespace: Mono.Globalization.Unicode
namespace Mono::Globalization::Unicode {
  // Forward declaring type: ContractionComparer
  class ContractionComparer;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Mono::Globalization::Unicode::ContractionComparer);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Globalization::Unicode::ContractionComparer*, "Mono.Globalization.Unicode", "ContractionComparer");
// Type namespace: Mono.Globalization.Unicode
namespace Mono::Globalization::Unicode {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Mono.Globalization.Unicode.ContractionComparer
  // [TokenAttribute] Offset: FFFFFFFF
  class ContractionComparer : public ::Il2CppObject/*, public ::System::Collections::Generic::IComparer_1<::Mono::Globalization::Unicode::Contraction*>*/ {
    public:
    // Creating interface conversion operator: operator ::System::Collections::Generic::IComparer_1<::Mono::Globalization::Unicode::Contraction*>
    operator ::System::Collections::Generic::IComparer_1<::Mono::Globalization::Unicode::Contraction*>() noexcept {
      return *reinterpret_cast<::System::Collections::Generic::IComparer_1<::Mono::Globalization::Unicode::Contraction*>*>(this);
    }
    // Get static field: static public readonly Mono.Globalization.Unicode.ContractionComparer Instance
    static ::Mono::Globalization::Unicode::ContractionComparer* _get_Instance();
    // Set static field: static public readonly Mono.Globalization.Unicode.ContractionComparer Instance
    static void _set_Instance(::Mono::Globalization::Unicode::ContractionComparer* value);
    // static private System.Void .cctor()
    // Offset: 0x1F4549C
    static void _cctor();
    // public System.Int32 Compare(Mono.Globalization.Unicode.Contraction c1, Mono.Globalization.Unicode.Contraction c2)
    // Offset: 0x1F453F8
    int Compare(::Mono::Globalization::Unicode::Contraction* c1, ::Mono::Globalization::Unicode::Contraction* c2);
    // public System.Void .ctor()
    // Offset: 0x1F45494
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ContractionComparer* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Mono::Globalization::Unicode::ContractionComparer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ContractionComparer*, creationType>()));
    }
  }; // Mono.Globalization.Unicode.ContractionComparer
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Mono::Globalization::Unicode::ContractionComparer::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Mono::Globalization::Unicode::ContractionComparer::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Globalization::Unicode::ContractionComparer*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Globalization::Unicode::ContractionComparer::Compare
// Il2CppName: Compare
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Mono::Globalization::Unicode::ContractionComparer::*)(::Mono::Globalization::Unicode::Contraction*, ::Mono::Globalization::Unicode::Contraction*)>(&Mono::Globalization::Unicode::ContractionComparer::Compare)> {
  static const MethodInfo* get() {
    static auto* c1 = &::il2cpp_utils::GetClassFromName("Mono.Globalization.Unicode", "Contraction")->byval_arg;
    static auto* c2 = &::il2cpp_utils::GetClassFromName("Mono.Globalization.Unicode", "Contraction")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Globalization::Unicode::ContractionComparer*), "Compare", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{c1, c2});
  }
};
// Writing MetadataGetter for method: Mono::Globalization::Unicode::ContractionComparer::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
