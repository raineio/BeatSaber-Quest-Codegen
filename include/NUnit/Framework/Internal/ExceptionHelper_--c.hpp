// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: NUnit.Framework.Internal.ExceptionHelper
#include "NUnit/Framework/Internal/ExceptionHelper.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Exception
  class Exception;
}
// Completed forward declares
// Type namespace: NUnit.Framework.Internal
namespace NUnit::Framework::Internal {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: NUnit.Framework.Internal.ExceptionHelper/<>c
  // [CompilerGeneratedAttribute] Offset: E04E1C
  class ExceptionHelper::$$c : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: $$c
    $$c() noexcept {}
    // Get static field: static public readonly NUnit.Framework.Internal.ExceptionHelper/<>c <>9
    static NUnit::Framework::Internal::ExceptionHelper::$$c* _get_$$9();
    // Set static field: static public readonly NUnit.Framework.Internal.ExceptionHelper/<>c <>9
    static void _set_$$9(NUnit::Framework::Internal::ExceptionHelper::$$c* value);
    // static private System.Void .cctor()
    // Offset: 0x1738414
    static void _cctor();
    // System.Void <.cctor>b__1_0(System.Exception _)
    // Offset: 0x1738480
    void $_cctor$b__1_0(System::Exception* _);
    // public System.Void .ctor()
    // Offset: 0x1738478
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ExceptionHelper::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("NUnit::Framework::Internal::ExceptionHelper::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ExceptionHelper::$$c*, creationType>()));
    }
  }; // NUnit.Framework.Internal.ExceptionHelper/<>c
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(NUnit::Framework::Internal::ExceptionHelper::$$c*, "NUnit.Framework.Internal", "ExceptionHelper/<>c");
// Writing MetadataGetter for method: NUnit::Framework::Internal::ExceptionHelper::$$c::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&NUnit::Framework::Internal::ExceptionHelper::$$c::_cctor)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::ExceptionHelper::$$c*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::ExceptionHelper::$$c::$_cctor$b__1_0
// Il2CppName: <.cctor>b__1_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (NUnit::Framework::Internal::ExceptionHelper::$$c::*)(System::Exception*)>(&NUnit::Framework::Internal::ExceptionHelper::$$c::$_cctor$b__1_0)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::ExceptionHelper::$$c*), "<.cctor>b__1_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Exception*>()});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::ExceptionHelper::$$c::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
