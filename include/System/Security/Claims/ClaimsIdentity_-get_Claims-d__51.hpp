// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Security.Claims.ClaimsIdentity
#include "System/Security/Claims/ClaimsIdentity.hpp"
// Including type: System.Collections.Generic.IEnumerable`1
#include "System/Collections/Generic/IEnumerable_1.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Security::Claims
namespace System::Security::Claims {
  // Forward declaring type: Claim
  class Claim;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Skipping declaration: IEnumerator because it is already included!
}
// Completed forward declares
// Type namespace: System.Security.Claims
namespace System::Security::Claims {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: System.Security.Claims.ClaimsIdentity/System.Security.Claims.<get_Claims>d__51
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: E5F084
  class ClaimsIdentity::$get_Claims$d__51 : public ::Il2CppObject/*, public System::Collections::Generic::IEnumerable_1<System::Security::Claims::Claim*>, public System::Collections::Generic::IEnumerator_1<System::Security::Claims::Claim*>*/ {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    private:
    #endif
    // private System.Int32 <>1__state
    // Size: 0x4
    // Offset: 0x10
    int $$1__state;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: $$1__state and: $$2__current
    char __padding0[0x4] = {};
    // private System.Security.Claims.Claim <>2__current
    // Size: 0x8
    // Offset: 0x18
    System::Security::Claims::Claim* $$2__current;
    // Field size check
    static_assert(sizeof(System::Security::Claims::Claim*) == 0x8);
    // private System.Int32 <>l__initialThreadId
    // Size: 0x4
    // Offset: 0x20
    int $$l__initialThreadId;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: $$l__initialThreadId and: $$4__this
    char __padding2[0x4] = {};
    // public System.Security.Claims.ClaimsIdentity <>4__this
    // Size: 0x8
    // Offset: 0x28
    System::Security::Claims::ClaimsIdentity* $$4__this;
    // Field size check
    static_assert(sizeof(System::Security::Claims::ClaimsIdentity*) == 0x8);
    // private System.Int32 <i>5__1
    // Size: 0x4
    // Offset: 0x30
    int $i$5__1;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 <j>5__2
    // Size: 0x4
    // Offset: 0x34
    int $j$5__2;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Collections.Generic.IEnumerator`1<System.Security.Claims.Claim> <>7__wrap1
    // Size: 0x8
    // Offset: 0x38
    System::Collections::Generic::IEnumerator_1<System::Security::Claims::Claim*>* $$7__wrap1;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::IEnumerator_1<System::Security::Claims::Claim*>*) == 0x8);
    public:
    // Creating interface conversion operator: operator System::Collections::Generic::IEnumerable_1<System::Security::Claims::Claim*>
    operator System::Collections::Generic::IEnumerable_1<System::Security::Claims::Claim*>() noexcept {
      return *reinterpret_cast<System::Collections::Generic::IEnumerable_1<System::Security::Claims::Claim*>*>(this);
    }
    // Creating interface conversion operator: operator System::Collections::Generic::IEnumerator_1<System::Security::Claims::Claim*>
    operator System::Collections::Generic::IEnumerator_1<System::Security::Claims::Claim*>() noexcept {
      return *reinterpret_cast<System::Collections::Generic::IEnumerator_1<System::Security::Claims::Claim*>*>(this);
    }
    // Get instance field reference: private System.Int32 <>1__state
    int& dyn_$$1__state();
    // Get instance field reference: private System.Security.Claims.Claim <>2__current
    System::Security::Claims::Claim*& dyn_$$2__current();
    // Get instance field reference: private System.Int32 <>l__initialThreadId
    int& dyn_$$l__initialThreadId();
    // Get instance field reference: public System.Security.Claims.ClaimsIdentity <>4__this
    System::Security::Claims::ClaimsIdentity*& dyn_$$4__this();
    // Get instance field reference: private System.Int32 <i>5__1
    int& dyn_$i$5__1();
    // Get instance field reference: private System.Int32 <j>5__2
    int& dyn_$j$5__2();
    // Get instance field reference: private System.Collections.Generic.IEnumerator`1<System.Security.Claims.Claim> <>7__wrap1
    System::Collections::Generic::IEnumerator_1<System::Security::Claims::Claim*>*& dyn_$$7__wrap1();
    // private System.Security.Claims.Claim System.Collections.Generic.IEnumerator<System.Security.Claims.Claim>.get_Current()
    // Offset: 0x1A6B230
    System::Security::Claims::Claim* System_Collections_Generic_IEnumerator$System_Security_Claims_Claim$_get_Current();
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0x1A6B298
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
    // public System.Void .ctor(System.Int32 <>1__state)
    // Offset: 0x1A69D34
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ClaimsIdentity::$get_Claims$d__51* New_ctor(int $$1__state) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Security::Claims::ClaimsIdentity::$get_Claims$d__51::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ClaimsIdentity::$get_Claims$d__51*, creationType>($$1__state)));
    }
    // private System.Void System.IDisposable.Dispose()
    // Offset: 0x1A6ADC4
    void System_IDisposable_Dispose();
    // private System.Boolean MoveNext()
    // Offset: 0x1A6AEA0
    bool MoveNext();
    // private System.Void <>m__Finally1()
    // Offset: 0x1A6ADE0
    void $$m__Finally1();
    // private System.Void System.Collections.IEnumerator.Reset()
    // Offset: 0x1A6B238
    void System_Collections_IEnumerator_Reset();
    // private System.Collections.Generic.IEnumerator`1<System.Security.Claims.Claim> System.Collections.Generic.IEnumerable<System.Security.Claims.Claim>.GetEnumerator()
    // Offset: 0x1A6B2A0
    System::Collections::Generic::IEnumerator_1<System::Security::Claims::Claim*>* System_Collections_Generic_IEnumerable$System_Security_Claims_Claim$_GetEnumerator();
    // private System.Collections.IEnumerator System.Collections.IEnumerable.GetEnumerator()
    // Offset: 0x1A6B34C
    System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();
  }; // System.Security.Claims.ClaimsIdentity/System.Security.Claims.<get_Claims>d__51
  #pragma pack(pop)
  static check_size<sizeof(ClaimsIdentity::$get_Claims$d__51), 56 + sizeof(System::Collections::Generic::IEnumerator_1<System::Security::Claims::Claim*>*)> __System_Security_Claims_ClaimsIdentity_$get_Claims$d__51SizeCheck;
  static_assert(sizeof(ClaimsIdentity::$get_Claims$d__51) == 0x40);
}
DEFINE_IL2CPP_ARG_TYPE(System::Security::Claims::ClaimsIdentity::$get_Claims$d__51*, "System.Security.Claims", "ClaimsIdentity/<get_Claims>d__51");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Security::Claims::ClaimsIdentity::$get_Claims$d__51::System_Collections_Generic_IEnumerator$System_Security_Claims_Claim$_get_Current
// Il2CppName: System.Collections.Generic.IEnumerator<System.Security.Claims.Claim>.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Security::Claims::Claim* (System::Security::Claims::ClaimsIdentity::$get_Claims$d__51::*)()>(&System::Security::Claims::ClaimsIdentity::$get_Claims$d__51::System_Collections_Generic_IEnumerator$System_Security_Claims_Claim$_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Claims::ClaimsIdentity::$get_Claims$d__51*), "System.Collections.Generic.IEnumerator<System.Security.Claims.Claim>.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Claims::ClaimsIdentity::$get_Claims$d__51::System_Collections_IEnumerator_get_Current
// Il2CppName: System.Collections.IEnumerator.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Security::Claims::ClaimsIdentity::$get_Claims$d__51::*)()>(&System::Security::Claims::ClaimsIdentity::$get_Claims$d__51::System_Collections_IEnumerator_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Claims::ClaimsIdentity::$get_Claims$d__51*), "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Claims::ClaimsIdentity::$get_Claims$d__51::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Security::Claims::ClaimsIdentity::$get_Claims$d__51::System_IDisposable_Dispose
// Il2CppName: System.IDisposable.Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Claims::ClaimsIdentity::$get_Claims$d__51::*)()>(&System::Security::Claims::ClaimsIdentity::$get_Claims$d__51::System_IDisposable_Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Claims::ClaimsIdentity::$get_Claims$d__51*), "System.IDisposable.Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Claims::ClaimsIdentity::$get_Claims$d__51::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Security::Claims::ClaimsIdentity::$get_Claims$d__51::*)()>(&System::Security::Claims::ClaimsIdentity::$get_Claims$d__51::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Claims::ClaimsIdentity::$get_Claims$d__51*), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Claims::ClaimsIdentity::$get_Claims$d__51::$$m__Finally1
// Il2CppName: <>m__Finally1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Claims::ClaimsIdentity::$get_Claims$d__51::*)()>(&System::Security::Claims::ClaimsIdentity::$get_Claims$d__51::$$m__Finally1)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Claims::ClaimsIdentity::$get_Claims$d__51*), "<>m__Finally1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Claims::ClaimsIdentity::$get_Claims$d__51::System_Collections_IEnumerator_Reset
// Il2CppName: System.Collections.IEnumerator.Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Claims::ClaimsIdentity::$get_Claims$d__51::*)()>(&System::Security::Claims::ClaimsIdentity::$get_Claims$d__51::System_Collections_IEnumerator_Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Claims::ClaimsIdentity::$get_Claims$d__51*), "System.Collections.IEnumerator.Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Claims::ClaimsIdentity::$get_Claims$d__51::System_Collections_Generic_IEnumerable$System_Security_Claims_Claim$_GetEnumerator
// Il2CppName: System.Collections.Generic.IEnumerable<System.Security.Claims.Claim>.GetEnumerator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::IEnumerator_1<System::Security::Claims::Claim*>* (System::Security::Claims::ClaimsIdentity::$get_Claims$d__51::*)()>(&System::Security::Claims::ClaimsIdentity::$get_Claims$d__51::System_Collections_Generic_IEnumerable$System_Security_Claims_Claim$_GetEnumerator)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Claims::ClaimsIdentity::$get_Claims$d__51*), "System.Collections.Generic.IEnumerable<System.Security.Claims.Claim>.GetEnumerator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Claims::ClaimsIdentity::$get_Claims$d__51::System_Collections_IEnumerable_GetEnumerator
// Il2CppName: System.Collections.IEnumerable.GetEnumerator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::IEnumerator* (System::Security::Claims::ClaimsIdentity::$get_Claims$d__51::*)()>(&System::Security::Claims::ClaimsIdentity::$get_Claims$d__51::System_Collections_IEnumerable_GetEnumerator)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Claims::ClaimsIdentity::$get_Claims$d__51*), "System.Collections.IEnumerable.GetEnumerator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
