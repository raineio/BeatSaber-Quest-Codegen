// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Runtime.Serialization.ISurrogateSelector
#include "System/Runtime/Serialization/ISurrogateSelector.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Forward declaring namespace: System::Runtime::Remoting::Messaging
namespace System::Runtime::Remoting::Messaging {
  // Forward declaring type: ObjRefSurrogate
  class ObjRefSurrogate;
  // Forward declaring type: RemotingSurrogate
  class RemotingSurrogate;
}
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: ISerializationSurrogate
  class ISerializationSurrogate;
  // Forward declaring type: StreamingContext
  struct StreamingContext;
}
// Completed forward declares
// Type namespace: System.Runtime.Remoting.Messaging
namespace System::Runtime::Remoting::Messaging {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.Remoting.Messaging.RemotingSurrogateSelector
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: E60214
  class RemotingSurrogateSelector : public ::Il2CppObject/*, public System::Runtime::Serialization::ISurrogateSelector*/ {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    private:
    #endif
    // private System.Runtime.Serialization.ISurrogateSelector _next
    // Size: 0x8
    // Offset: 0x10
    System::Runtime::Serialization::ISurrogateSelector* next;
    // Field size check
    static_assert(sizeof(System::Runtime::Serialization::ISurrogateSelector*) == 0x8);
    public:
    // Creating interface conversion operator: operator System::Runtime::Serialization::ISurrogateSelector
    operator System::Runtime::Serialization::ISurrogateSelector() noexcept {
      return *reinterpret_cast<System::Runtime::Serialization::ISurrogateSelector*>(this);
    }
    // Creating conversion operator: operator System::Runtime::Serialization::ISurrogateSelector*
    constexpr operator System::Runtime::Serialization::ISurrogateSelector*() const noexcept {
      return next;
    }
    // Get static field: static private System.Type s_cachedTypeObjRef
    static System::Type* _get_s_cachedTypeObjRef();
    // Set static field: static private System.Type s_cachedTypeObjRef
    static void _set_s_cachedTypeObjRef(System::Type* value);
    // Get static field: static private System.Runtime.Remoting.Messaging.ObjRefSurrogate _objRefSurrogate
    static System::Runtime::Remoting::Messaging::ObjRefSurrogate* _get__objRefSurrogate();
    // Set static field: static private System.Runtime.Remoting.Messaging.ObjRefSurrogate _objRefSurrogate
    static void _set__objRefSurrogate(System::Runtime::Remoting::Messaging::ObjRefSurrogate* value);
    // Get static field: static private System.Runtime.Remoting.Messaging.RemotingSurrogate _objRemotingSurrogate
    static System::Runtime::Remoting::Messaging::RemotingSurrogate* _get__objRemotingSurrogate();
    // Set static field: static private System.Runtime.Remoting.Messaging.RemotingSurrogate _objRemotingSurrogate
    static void _set__objRemotingSurrogate(System::Runtime::Remoting::Messaging::RemotingSurrogate* value);
    // Get instance field reference: private System.Runtime.Serialization.ISurrogateSelector _next
    System::Runtime::Serialization::ISurrogateSelector*& dyn__next();
    // static private System.Void .cctor()
    // Offset: 0x1C1EA18
    static void _cctor();
    // public System.Runtime.Serialization.ISerializationSurrogate GetSurrogate(System.Type type, System.Runtime.Serialization.StreamingContext context, out System.Runtime.Serialization.ISurrogateSelector ssout)
    // Offset: 0x1C1E860
    System::Runtime::Serialization::ISerializationSurrogate* GetSurrogate(System::Type* type, System::Runtime::Serialization::StreamingContext context, ByRef<System::Runtime::Serialization::ISurrogateSelector*> ssout);
    // public System.Void .ctor()
    // Offset: 0x1C1E858
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RemotingSurrogateSelector* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Runtime::Remoting::Messaging::RemotingSurrogateSelector::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RemotingSurrogateSelector*, creationType>()));
    }
  }; // System.Runtime.Remoting.Messaging.RemotingSurrogateSelector
  #pragma pack(pop)
  static check_size<sizeof(RemotingSurrogateSelector), 16 + sizeof(System::Runtime::Serialization::ISurrogateSelector*)> __System_Runtime_Remoting_Messaging_RemotingSurrogateSelectorSizeCheck;
  static_assert(sizeof(RemotingSurrogateSelector) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Remoting::Messaging::RemotingSurrogateSelector*, "System.Runtime.Remoting.Messaging", "RemotingSurrogateSelector");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::RemotingSurrogateSelector::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Runtime::Remoting::Messaging::RemotingSurrogateSelector::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Messaging::RemotingSurrogateSelector*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::RemotingSurrogateSelector::GetSurrogate
// Il2CppName: GetSurrogate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Runtime::Serialization::ISerializationSurrogate* (System::Runtime::Remoting::Messaging::RemotingSurrogateSelector::*)(System::Type*, System::Runtime::Serialization::StreamingContext, ByRef<System::Runtime::Serialization::ISurrogateSelector*>)>(&System::Runtime::Remoting::Messaging::RemotingSurrogateSelector::GetSurrogate)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* context = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "StreamingContext")->byval_arg;
    static auto* ssout = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "ISurrogateSelector")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Messaging::RemotingSurrogateSelector*), "GetSurrogate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type, context, ssout});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::RemotingSurrogateSelector::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
