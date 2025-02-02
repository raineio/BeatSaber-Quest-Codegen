// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: BeatmapCharacteristicsDropdown
#include "GlobalNamespace/BeatmapCharacteristicsDropdown.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: BeatmapCharacteristicSO
  class BeatmapCharacteristicSO;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::BeatmapCharacteristicsDropdown::$$c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapCharacteristicsDropdown::$$c*, "", "BeatmapCharacteristicsDropdown/<>c");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: BeatmapCharacteristicsDropdown/<>c
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class BeatmapCharacteristicsDropdown::$$c : public ::Il2CppObject {
    public:
    // Get static field: static public readonly BeatmapCharacteristicsDropdown/<>c <>9
    static ::GlobalNamespace::BeatmapCharacteristicsDropdown::$$c* _get_$$9();
    // Set static field: static public readonly BeatmapCharacteristicsDropdown/<>c <>9
    static void _set_$$9(::GlobalNamespace::BeatmapCharacteristicsDropdown::$$c* value);
    // Get static field: static public System.Func`2<BeatmapCharacteristicSO,System.String> <>9__5_0
    static ::System::Func_2<::GlobalNamespace::BeatmapCharacteristicSO*, ::StringW>* _get_$$9__5_0();
    // Set static field: static public System.Func`2<BeatmapCharacteristicSO,System.String> <>9__5_0
    static void _set_$$9__5_0(::System::Func_2<::GlobalNamespace::BeatmapCharacteristicSO*, ::StringW>* value);
    // static private System.Void .cctor()
    // Offset: 0x13B23A8
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0x13B240C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BeatmapCharacteristicsDropdown::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::BeatmapCharacteristicsDropdown::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BeatmapCharacteristicsDropdown::$$c*, creationType>()));
    }
    // System.String <Start>b__5_0(BeatmapCharacteristicSO x)
    // Offset: 0x13B2414
    ::StringW $Start$b__5_0(::GlobalNamespace::BeatmapCharacteristicSO* x);
  }; // BeatmapCharacteristicsDropdown/<>c
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BeatmapCharacteristicsDropdown::$$c::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::BeatmapCharacteristicsDropdown::$$c::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapCharacteristicsDropdown::$$c*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapCharacteristicsDropdown::$$c::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::BeatmapCharacteristicsDropdown::$$c::$Start$b__5_0
// Il2CppName: <Start>b__5_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::BeatmapCharacteristicsDropdown::$$c::*)(::GlobalNamespace::BeatmapCharacteristicSO*)>(&GlobalNamespace::BeatmapCharacteristicsDropdown::$$c::$Start$b__5_0)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("", "BeatmapCharacteristicSO")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapCharacteristicsDropdown::$$c*), "<Start>b__5_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x});
  }
};
