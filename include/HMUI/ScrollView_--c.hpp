// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: HMUI.ScrollView
#include "HMUI/ScrollView.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
}
// Completed forward declares
// Type namespace: HMUI
namespace HMUI {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: HMUI.ScrollView/<>c
  // [CompilerGeneratedAttribute] Offset: DF7EE0
  class ScrollView::$$c : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: $$c
    $$c() noexcept {}
    // Get static field: static public readonly HMUI.ScrollView/<>c <>9
    static HMUI::ScrollView::$$c* _get_$$9();
    // Set static field: static public readonly HMUI.ScrollView/<>c <>9
    static void _set_$$9(HMUI::ScrollView::$$c* value);
    // Get static field: static public System.Func`2<System.Single,System.Single> <>9__38_1
    static System::Func_2<float, float>* _get_$$9__38_1();
    // Set static field: static public System.Func`2<System.Single,System.Single> <>9__38_1
    static void _set_$$9__38_1(System::Func_2<float, float>* value);
    // Get static field: static public System.Func`2<System.Single,System.Single> <>9__38_3
    static System::Func_2<float, float>* _get_$$9__38_3();
    // Set static field: static public System.Func`2<System.Single,System.Single> <>9__38_3
    static void _set_$$9__38_3(System::Func_2<float, float>* value);
    // static private System.Void .cctor()
    // Offset: 0x12B7E4C
    static void _cctor();
    // System.Single <Awake>b__38_1(System.Single i)
    // Offset: 0x12B7EB8
    float $Awake$b__38_1(float i);
    // System.Single <Awake>b__38_3(System.Single i)
    // Offset: 0x12B7EBC
    float $Awake$b__38_3(float i);
    // public System.Void .ctor()
    // Offset: 0x12B7EB0
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ScrollView::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("HMUI::ScrollView::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ScrollView::$$c*, creationType>()));
    }
  }; // HMUI.ScrollView/<>c
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(HMUI::ScrollView::$$c*, "HMUI", "ScrollView/<>c");
// Writing MetadataGetter for method: HMUI::ScrollView::$$c::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&HMUI::ScrollView::$$c::_cctor)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::ScrollView::$$c*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::ScrollView::$$c::$Awake$b__38_1
// Il2CppName: <Awake>b__38_1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (HMUI::ScrollView::$$c::*)(float)>(&HMUI::ScrollView::$$c::$Awake$b__38_1)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::ScrollView::$$c*), "<Awake>b__38_1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<float>()});
  }
};
// Writing MetadataGetter for method: HMUI::ScrollView::$$c::$Awake$b__38_3
// Il2CppName: <Awake>b__38_3
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (HMUI::ScrollView::$$c::*)(float)>(&HMUI::ScrollView::$$c::$Awake$b__38_3)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::ScrollView::$$c*), "<Awake>b__38_3", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<float>()});
  }
};
// Writing MetadataGetter for method: HMUI::ScrollView::$$c::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
