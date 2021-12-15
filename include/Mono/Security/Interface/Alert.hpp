// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Mono.Security.Interface.AlertLevel
#include "Mono/Security/Interface/AlertLevel.hpp"
// Including type: Mono.Security.Interface.AlertDescription
#include "Mono/Security/Interface/AlertDescription.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: Mono.Security.Interface
namespace Mono::Security::Interface {
  // Forward declaring type: Alert
  class Alert;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(Mono::Security::Interface::Alert);
DEFINE_IL2CPP_ARG_TYPE(Mono::Security::Interface::Alert*, "Mono.Security.Interface", "Alert");
// Type namespace: Mono.Security.Interface
namespace Mono::Security::Interface {
  // Size: 0x12
  #pragma pack(push, 1)
  // Autogenerated type: Mono.Security.Interface.Alert
  // [TokenAttribute] Offset: FFFFFFFF
  class Alert : public ::Il2CppObject {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // private Mono.Security.Interface.AlertLevel level
    // Size: 0x1
    // Offset: 0x10
    Mono::Security::Interface::AlertLevel level;
    // Field size check
    static_assert(sizeof(Mono::Security::Interface::AlertLevel) == 0x1);
    // private Mono.Security.Interface.AlertDescription description
    // Size: 0x1
    // Offset: 0x11
    Mono::Security::Interface::AlertDescription description;
    // Field size check
    static_assert(sizeof(Mono::Security::Interface::AlertDescription) == 0x1);
    public:
    // Get instance field reference: private Mono.Security.Interface.AlertLevel level
    Mono::Security::Interface::AlertLevel& dyn_level();
    // Get instance field reference: private Mono.Security.Interface.AlertDescription description
    Mono::Security::Interface::AlertDescription& dyn_description();
    // public Mono.Security.Interface.AlertLevel get_Level()
    // Offset: 0x1F94330
    Mono::Security::Interface::AlertLevel get_Level();
    // public Mono.Security.Interface.AlertDescription get_Description()
    // Offset: 0x1F94338
    Mono::Security::Interface::AlertDescription get_Description();
    // public System.Void .ctor(Mono.Security.Interface.AlertDescription description)
    // Offset: 0x1F94340
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Alert* New_ctor(Mono::Security::Interface::AlertDescription description) {
      static auto ___internal__logger = ::Logger::get().WithContext("Mono::Security::Interface::Alert::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Alert*, creationType>(description)));
    }
    // private System.Void inferAlertLevel()
    // Offset: 0x1F943B8
    void inferAlertLevel();
    // public override System.String ToString()
    // Offset: 0x1F943F8
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::Il2CppString* ToString();
  }; // Mono.Security.Interface.Alert
  #pragma pack(pop)
  static check_size<sizeof(Alert), 17 + sizeof(Mono::Security::Interface::AlertDescription)> __Mono_Security_Interface_AlertSizeCheck;
  static_assert(sizeof(Alert) == 0x12);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Mono::Security::Interface::Alert::get_Level
// Il2CppName: get_Level
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Mono::Security::Interface::AlertLevel (Mono::Security::Interface::Alert::*)()>(&Mono::Security::Interface::Alert::get_Level)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Interface::Alert*), "get_Level", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Security::Interface::Alert::get_Description
// Il2CppName: get_Description
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Mono::Security::Interface::AlertDescription (Mono::Security::Interface::Alert::*)()>(&Mono::Security::Interface::Alert::get_Description)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Interface::Alert*), "get_Description", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Security::Interface::Alert::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Mono::Security::Interface::Alert::inferAlertLevel
// Il2CppName: inferAlertLevel
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Security::Interface::Alert::*)()>(&Mono::Security::Interface::Alert::inferAlertLevel)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Interface::Alert*), "inferAlertLevel", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Security::Interface::Alert::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (Mono::Security::Interface::Alert::*)()>(&Mono::Security::Interface::Alert::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Interface::Alert*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
