// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.ProBuilder.Projection
#include "UnityEngine/ProBuilder/Projection.hpp"
// Including type: UnityEngine.ProBuilder.SimpleTuple`2
#include "UnityEngine/ProBuilder/SimpleTuple_2.hpp"
// Including type: UnityEngine.Vector2
#include "UnityEngine/Vector2.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Comparison`1<T>
  template<typename T>
  class Comparison_1;
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
}
// Completed forward declares
// Type namespace: UnityEngine.ProBuilder
namespace UnityEngine::ProBuilder {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ProBuilder.Projection/<>c
  // [CompilerGeneratedAttribute] Offset: E3A35C
  class Projection::$$c : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: $$c
    $$c() noexcept {}
    // Get static field: static public readonly UnityEngine.ProBuilder.Projection/<>c <>9
    static UnityEngine::ProBuilder::Projection::$$c* _get_$$9();
    // Set static field: static public readonly UnityEngine.ProBuilder.Projection/<>c <>9
    static void _set_$$9(UnityEngine::ProBuilder::Projection::$$c* value);
    // Get static field: static public System.Comparison`1<UnityEngine.ProBuilder.SimpleTuple`2<System.Single,UnityEngine.Vector2>> <>9__6_0
    static System::Comparison_1<UnityEngine::ProBuilder::SimpleTuple_2<float, UnityEngine::Vector2>>* _get_$$9__6_0();
    // Set static field: static public System.Comparison`1<UnityEngine.ProBuilder.SimpleTuple`2<System.Single,UnityEngine.Vector2>> <>9__6_0
    static void _set_$$9__6_0(System::Comparison_1<UnityEngine::ProBuilder::SimpleTuple_2<float, UnityEngine::Vector2>>* value);
    // Get static field: static public System.Func`2<UnityEngine.ProBuilder.SimpleTuple`2<System.Single,UnityEngine.Vector2>,UnityEngine.Vector2> <>9__6_1
    static System::Func_2<UnityEngine::ProBuilder::SimpleTuple_2<float, UnityEngine::Vector2>, UnityEngine::Vector2>* _get_$$9__6_1();
    // Set static field: static public System.Func`2<UnityEngine.ProBuilder.SimpleTuple`2<System.Single,UnityEngine.Vector2>,UnityEngine.Vector2> <>9__6_1
    static void _set_$$9__6_1(System::Func_2<UnityEngine::ProBuilder::SimpleTuple_2<float, UnityEngine::Vector2>, UnityEngine::Vector2>* value);
    // static private System.Void .cctor()
    // Offset: 0x14E5B68
    static void _cctor();
    // System.Int32 <Sort>b__6_0(UnityEngine.ProBuilder.SimpleTuple`2<System.Single,UnityEngine.Vector2> a, UnityEngine.ProBuilder.SimpleTuple`2<System.Single,UnityEngine.Vector2> b)
    // Offset: 0x14E5BD4
    int $Sort$b__6_0(UnityEngine::ProBuilder::SimpleTuple_2<float, UnityEngine::Vector2> a, UnityEngine::ProBuilder::SimpleTuple_2<float, UnityEngine::Vector2> b);
    // UnityEngine.Vector2 <Sort>b__6_1(UnityEngine.ProBuilder.SimpleTuple`2<System.Single,UnityEngine.Vector2> x)
    // Offset: 0x14E5C2C
    UnityEngine::Vector2 $Sort$b__6_1(UnityEngine::ProBuilder::SimpleTuple_2<float, UnityEngine::Vector2> x);
    // public System.Void .ctor()
    // Offset: 0x14E5BCC
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Projection::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ProBuilder::Projection::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Projection::$$c*, creationType>()));
    }
  }; // UnityEngine.ProBuilder.Projection/<>c
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::Projection::$$c*, "UnityEngine.ProBuilder", "Projection/<>c");
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Projection::$$c::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::ProBuilder::Projection::$$c::_cctor)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Projection::$$c*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Projection::$$c::$Sort$b__6_0
// Il2CppName: <Sort>b__6_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::ProBuilder::Projection::$$c::*)(UnityEngine::ProBuilder::SimpleTuple_2<float, UnityEngine::Vector2>, UnityEngine::ProBuilder::SimpleTuple_2<float, UnityEngine::Vector2>)>(&UnityEngine::ProBuilder::Projection::$$c::$Sort$b__6_0)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Projection::$$c*), "<Sort>b__6_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::ProBuilder::SimpleTuple_2<float, UnityEngine::Vector2>>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::ProBuilder::SimpleTuple_2<float, UnityEngine::Vector2>>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Projection::$$c::$Sort$b__6_1
// Il2CppName: <Sort>b__6_1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector2 (UnityEngine::ProBuilder::Projection::$$c::*)(UnityEngine::ProBuilder::SimpleTuple_2<float, UnityEngine::Vector2>)>(&UnityEngine::ProBuilder::Projection::$$c::$Sort$b__6_1)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Projection::$$c*), "<Sort>b__6_1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::ProBuilder::SimpleTuple_2<float, UnityEngine::Vector2>>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Projection::$$c::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
