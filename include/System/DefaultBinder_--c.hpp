// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.DefaultBinder
#include "System/DefaultBinder.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Predicate`1<T>
  template<typename T>
  class Predicate_1;
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: System
namespace System {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.DefaultBinder/<>c
  // [CompilerGeneratedAttribute] Offset: D7A580
  class DefaultBinder::$$c : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: $$c
    $$c() noexcept {}
    // Get static field: static public readonly System.DefaultBinder/<>c <>9
    static System::DefaultBinder::$$c* _get_$$9();
    // Set static field: static public readonly System.DefaultBinder/<>c <>9
    static void _set_$$9(System::DefaultBinder::$$c* value);
    // Get static field: static public System.Predicate`1<System.Type> <>9__3_0
    static System::Predicate_1<System::Type*>* _get_$$9__3_0();
    // Set static field: static public System.Predicate`1<System.Type> <>9__3_0
    static void _set_$$9__3_0(System::Predicate_1<System::Type*>* value);
    // static private System.Void .cctor()
    // Offset: 0x1B09CBC
    static void _cctor();
    // System.Boolean <SelectProperty>b__3_0(System.Type t)
    // Offset: 0x1B09D28
    bool $SelectProperty$b__3_0(System::Type* t);
    // public System.Void .ctor()
    // Offset: 0x1B09D20
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DefaultBinder::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::DefaultBinder::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DefaultBinder::$$c*, creationType>()));
    }
  }; // System.DefaultBinder/<>c
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(System::DefaultBinder::$$c*, "System", "DefaultBinder/<>c");
// Writing MetadataGetter for method: System::DefaultBinder::$$c::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::DefaultBinder::$$c::_cctor)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::DefaultBinder::$$c*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::DefaultBinder::$$c::$SelectProperty$b__3_0
// Il2CppName: <SelectProperty>b__3_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::DefaultBinder::$$c::*)(System::Type*)>(&System::DefaultBinder::$$c::$SelectProperty$b__3_0)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::DefaultBinder::$$c*), "<SelectProperty>b__3_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Type*>()});
  }
};
// Writing MetadataGetter for method: System::DefaultBinder::$$c::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
