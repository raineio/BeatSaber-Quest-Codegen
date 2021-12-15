// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Exception
#include "System/Exception.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Forward declaring type: HEU_HoudiniEngineError
  class HEU_HoudiniEngineError;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(HoudiniEngineUnity::HEU_HoudiniEngineError);
DEFINE_IL2CPP_ARG_TYPE(HoudiniEngineUnity::HEU_HoudiniEngineError*, "HoudiniEngineUnity", "HEU_HoudiniEngineError");
// Type namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Size: 0x90
  #pragma pack(push, 1)
  // Autogenerated type: HoudiniEngineUnity.HEU_HoudiniEngineError
  // [TokenAttribute] Offset: FFFFFFFF
  class HEU_HoudiniEngineError : public System::Exception {
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
    // protected System.String _errorMsg
    // Size: 0x8
    // Offset: 0x88
    ::Il2CppString* errorMsg;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    public:
    // Creating conversion operator: operator ::Il2CppString*
    constexpr operator ::Il2CppString*() const noexcept {
      return errorMsg;
    }
    // Get instance field reference: protected System.String _errorMsg
    ::Il2CppString*& dyn__errorMsg();
    // public System.Void .ctor()
    // Offset: 0x158AAD0
    // Implemented from: System.Exception
    // Base method: System.Void Exception::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HEU_HoudiniEngineError* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("HoudiniEngineUnity::HEU_HoudiniEngineError::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HEU_HoudiniEngineError*, creationType>()));
    }
    // public System.Void .ctor(System.String errorMsg)
    // Offset: 0x158AB48
    // Implemented from: System.Exception
    // Base method: System.Void Exception::.ctor(System.String errorMsg)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HEU_HoudiniEngineError* New_ctor(::Il2CppString* errorMsg) {
      static auto ___internal__logger = ::Logger::get().WithContext("HoudiniEngineUnity::HEU_HoudiniEngineError::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HEU_HoudiniEngineError*, creationType>(errorMsg)));
    }
    // public override System.String ToString()
    // Offset: 0x158ABD4
    // Implemented from: System.Exception
    // Base method: System.String Exception::ToString()
    ::Il2CppString* ToString();
  }; // HoudiniEngineUnity.HEU_HoudiniEngineError
  #pragma pack(pop)
  static check_size<sizeof(HEU_HoudiniEngineError), 136 + sizeof(::Il2CppString*)> __HoudiniEngineUnity_HEU_HoudiniEngineErrorSizeCheck;
  static_assert(sizeof(HEU_HoudiniEngineError) == 0x90);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_HoudiniEngineError::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_HoudiniEngineError::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_HoudiniEngineError::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (HoudiniEngineUnity::HEU_HoudiniEngineError::*)()>(&HoudiniEngineUnity::HEU_HoudiniEngineError::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_HoudiniEngineError*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
