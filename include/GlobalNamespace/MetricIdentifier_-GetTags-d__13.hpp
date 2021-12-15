// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: MetricIdentifier
#include "GlobalNamespace/MetricIdentifier.hpp"
// Including type: System.Collections.Generic.IEnumerable`1
#include "System/Collections/Generic/IEnumerable_1.hpp"
// Including type: System.ValueTuple`2
#include "System/ValueTuple_2.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Skipping declaration: IEnumerator because it is already included!
}
// Completed forward declares
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(GlobalNamespace::MetricIdentifier::$GetTags$d__13);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MetricIdentifier::$GetTags$d__13*, "", "MetricIdentifier/<GetTags>d__13");
// Type namespace: 
namespace GlobalNamespace {
  // WARNING Size may be invalid!
  // Autogenerated type: MetricIdentifier/<GetTags>d__13
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class MetricIdentifier::$GetTags$d__13 : public ::Il2CppObject/*, public System::Collections::Generic::IEnumerable_1<System::ValueTuple_2<::Il2CppString*, ::Il2CppString*>>, public System::Collections::Generic::IEnumerator_1<System::ValueTuple_2<::Il2CppString*, ::Il2CppString*>>*/ {
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
    // private System.Int32 <>1__state
    // Size: 0x4
    // Offset: 0x10
    int $$1__state;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // [TupleElementNamesAttribute] Offset: 0xF1DE84
    // private System.ValueTuple`2<System.String,System.String> <>2__current
    // Size: 0xFFFFFFFF
    // Offset: 0x18
    System::ValueTuple_2<::Il2CppString*, ::Il2CppString*> $$2__current;
    // private System.Int32 <>l__initialThreadId
    // Size: 0x4
    // Offset: 0x28
    int $$l__initialThreadId;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public MetricIdentifier <>4__this
    // Size: 0xFFFFFFFF
    // Offset: 0x30
    GlobalNamespace::MetricIdentifier $$4__this;
    // public MetricIdentifier <>3__<>4__this
    // Size: 0xFFFFFFFF
    // Offset: 0x78
    GlobalNamespace::MetricIdentifier $$3__$$4__this;
    public:
    // Creating interface conversion operator: operator System::Collections::Generic::IEnumerable_1<System::ValueTuple_2<::Il2CppString*, ::Il2CppString*>>
    operator System::Collections::Generic::IEnumerable_1<System::ValueTuple_2<::Il2CppString*, ::Il2CppString*>>() noexcept {
      return *reinterpret_cast<System::Collections::Generic::IEnumerable_1<System::ValueTuple_2<::Il2CppString*, ::Il2CppString*>>*>(this);
    }
    // Creating interface conversion operator: operator System::Collections::Generic::IEnumerator_1<System::ValueTuple_2<::Il2CppString*, ::Il2CppString*>>
    operator System::Collections::Generic::IEnumerator_1<System::ValueTuple_2<::Il2CppString*, ::Il2CppString*>>() noexcept {
      return *reinterpret_cast<System::Collections::Generic::IEnumerator_1<System::ValueTuple_2<::Il2CppString*, ::Il2CppString*>>*>(this);
    }
    // Get instance field reference: private System.Int32 <>1__state
    int& dyn_$$1__state();
    // Get instance field reference: private System.ValueTuple`2<System.String,System.String> <>2__current
    System::ValueTuple_2<::Il2CppString*, ::Il2CppString*>& dyn_$$2__current();
    // Get instance field reference: private System.Int32 <>l__initialThreadId
    int& dyn_$$l__initialThreadId();
    // Get instance field reference: public MetricIdentifier <>4__this
    GlobalNamespace::MetricIdentifier& dyn_$$4__this();
    // Get instance field reference: public MetricIdentifier <>3__<>4__this
    GlobalNamespace::MetricIdentifier& dyn_$$3__$$4__this();
    // private System.ValueTuple`2<System.String,System.String> System.Collections.Generic.IEnumerator<(System.Stringkey,System.Stringvalue)>.get_Current()
    // Offset: 0x1805F08
    System::ValueTuple_2<::Il2CppString*, ::Il2CppString*> System_Collections_Generic_IEnumerator$_System_Stringkey_System_Stringvalue_$_get_Current();
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0x1805F74
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
    // public System.Void .ctor(System.Int32 <>1__state)
    // Offset: 0x1805DAC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MetricIdentifier::$GetTags$d__13* New_ctor(int $$1__state) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MetricIdentifier::$GetTags$d__13::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MetricIdentifier::$GetTags$d__13*, creationType>($$1__state)));
    }
    // private System.Void System.IDisposable.Dispose()
    // Offset: 0x1805E44
    void System_IDisposable_Dispose();
    // private System.Boolean MoveNext()
    // Offset: 0x1805E48
    bool MoveNext();
    // private System.Void System.Collections.IEnumerator.Reset()
    // Offset: 0x1805F14
    void System_Collections_IEnumerator_Reset();
    // private System.Collections.Generic.IEnumerator`1<System.ValueTuple`2<System.String,System.String>> System.Collections.Generic.IEnumerable<(System.Stringkey,System.Stringvalue)>.GetEnumerator()
    // Offset: 0x1805FD8
    System::Collections::Generic::IEnumerator_1<System::ValueTuple_2<::Il2CppString*, ::Il2CppString*>>* System_Collections_Generic_IEnumerable$_System_Stringkey_System_Stringvalue_$_GetEnumerator();
    // private System.Collections.IEnumerator System.Collections.IEnumerable.GetEnumerator()
    // Offset: 0x18060C4
    System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();
  }; // MetricIdentifier/<GetTags>d__13
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MetricIdentifier::$GetTags$d__13::System_Collections_Generic_IEnumerator$_System_Stringkey_System_Stringvalue_$_get_Current
// Il2CppName: System.Collections.Generic.IEnumerator<(System.Stringkey,System.Stringvalue)>.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::ValueTuple_2<::Il2CppString*, ::Il2CppString*> (GlobalNamespace::MetricIdentifier::$GetTags$d__13::*)()>(&GlobalNamespace::MetricIdentifier::$GetTags$d__13::System_Collections_Generic_IEnumerator$_System_Stringkey_System_Stringvalue_$_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MetricIdentifier::$GetTags$d__13*), "System.Collections.Generic.IEnumerator<(System.Stringkey,System.Stringvalue)>.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MetricIdentifier::$GetTags$d__13::System_Collections_IEnumerator_get_Current
// Il2CppName: System.Collections.IEnumerator.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (GlobalNamespace::MetricIdentifier::$GetTags$d__13::*)()>(&GlobalNamespace::MetricIdentifier::$GetTags$d__13::System_Collections_IEnumerator_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MetricIdentifier::$GetTags$d__13*), "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MetricIdentifier::$GetTags$d__13::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::MetricIdentifier::$GetTags$d__13::System_IDisposable_Dispose
// Il2CppName: System.IDisposable.Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MetricIdentifier::$GetTags$d__13::*)()>(&GlobalNamespace::MetricIdentifier::$GetTags$d__13::System_IDisposable_Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MetricIdentifier::$GetTags$d__13*), "System.IDisposable.Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MetricIdentifier::$GetTags$d__13::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::MetricIdentifier::$GetTags$d__13::*)()>(&GlobalNamespace::MetricIdentifier::$GetTags$d__13::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MetricIdentifier::$GetTags$d__13*), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MetricIdentifier::$GetTags$d__13::System_Collections_IEnumerator_Reset
// Il2CppName: System.Collections.IEnumerator.Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MetricIdentifier::$GetTags$d__13::*)()>(&GlobalNamespace::MetricIdentifier::$GetTags$d__13::System_Collections_IEnumerator_Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MetricIdentifier::$GetTags$d__13*), "System.Collections.IEnumerator.Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MetricIdentifier::$GetTags$d__13::System_Collections_Generic_IEnumerable$_System_Stringkey_System_Stringvalue_$_GetEnumerator
// Il2CppName: System.Collections.Generic.IEnumerable<(System.Stringkey,System.Stringvalue)>.GetEnumerator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::IEnumerator_1<System::ValueTuple_2<::Il2CppString*, ::Il2CppString*>>* (GlobalNamespace::MetricIdentifier::$GetTags$d__13::*)()>(&GlobalNamespace::MetricIdentifier::$GetTags$d__13::System_Collections_Generic_IEnumerable$_System_Stringkey_System_Stringvalue_$_GetEnumerator)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MetricIdentifier::$GetTags$d__13*), "System.Collections.Generic.IEnumerable<(System.Stringkey,System.Stringvalue)>.GetEnumerator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MetricIdentifier::$GetTags$d__13::System_Collections_IEnumerable_GetEnumerator
// Il2CppName: System.Collections.IEnumerable.GetEnumerator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::IEnumerator* (GlobalNamespace::MetricIdentifier::$GetTags$d__13::*)()>(&GlobalNamespace::MetricIdentifier::$GetTags$d__13::System_Collections_IEnumerable_GetEnumerator)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MetricIdentifier::$GetTags$d__13*), "System.Collections.IEnumerable.GetEnumerator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
