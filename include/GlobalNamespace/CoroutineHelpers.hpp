// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: CoroutineHelpers
  class CoroutineHelpers;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::CoroutineHelpers);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::CoroutineHelpers*, "", "CoroutineHelpers");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: CoroutineHelpers
  // [TokenAttribute] Offset: FFFFFFFF
  class CoroutineHelpers : public ::Il2CppObject {
    public:
    // Nested type: ::GlobalNamespace::CoroutineHelpers::$ExecuteAfterDelayCoroutine$d__0
    class $ExecuteAfterDelayCoroutine$d__0;
    // public System.Void .ctor()
    // Offset: 0x161B624
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CoroutineHelpers* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::CoroutineHelpers::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CoroutineHelpers*, creationType>()));
    }
    // static public System.Collections.IEnumerator ExecuteAfterDelayCoroutine(System.Action action, System.Single time)
    // Offset: 0x161B578
    static ::System::Collections::IEnumerator* ExecuteAfterDelayCoroutine(::System::Action* action, float time);
  }; // CoroutineHelpers
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::CoroutineHelpers::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::CoroutineHelpers::ExecuteAfterDelayCoroutine
// Il2CppName: ExecuteAfterDelayCoroutine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (*)(::System::Action*, float)>(&GlobalNamespace::CoroutineHelpers::ExecuteAfterDelayCoroutine)> {
  static const MethodInfo* get() {
    static auto* action = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    static auto* time = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CoroutineHelpers*), "ExecuteAfterDelayCoroutine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{action, time});
  }
};
