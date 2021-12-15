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
// Type namespace: System.Threading
namespace System::Threading {
  // Forward declaring type: AtomicBoolean
  class AtomicBoolean;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(System::Threading::AtomicBoolean);
DEFINE_IL2CPP_ARG_TYPE(System::Threading::AtomicBoolean*, "System.Threading", "AtomicBoolean");
// Type namespace: System.Threading
namespace System::Threading {
  // Size: 0x14
  #pragma pack(push, 1)
  // Autogenerated type: System.Threading.AtomicBoolean
  // [TokenAttribute] Offset: FFFFFFFF
  class AtomicBoolean : public ::Il2CppObject {
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
    // private System.Int32 flag
    // Size: 0x4
    // Offset: 0x10
    int flag;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return flag;
    }
    // Get instance field reference: private System.Int32 flag
    int& dyn_flag();
    // public System.Boolean TryRelaxedSet()
    // Offset: 0x1A59B50
    bool TryRelaxedSet();
    // public System.Boolean Exchange(System.Boolean newVal)
    // Offset: 0x1A59B80
    bool Exchange(bool newVal);
    // public System.Boolean Equals(System.Threading.AtomicBoolean rhs)
    // Offset: 0x1A59BA8
    bool Equals(System::Threading::AtomicBoolean* rhs);
    // public System.Void .ctor()
    // Offset: 0x1A59C74
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AtomicBoolean* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Threading::AtomicBoolean::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AtomicBoolean*, creationType>()));
    }
    // public override System.Boolean Equals(System.Object rhs)
    // Offset: 0x1A59BCC
    // Implemented from: System.Object
    // Base method: System.Boolean Object::Equals(System.Object rhs)
    bool Equals(::Il2CppObject* rhs);
    // public override System.Int32 GetHashCode()
    // Offset: 0x1A59C68
    // Implemented from: System.Object
    // Base method: System.Int32 Object::GetHashCode()
    int GetHashCode();
  }; // System.Threading.AtomicBoolean
  #pragma pack(pop)
  static check_size<sizeof(AtomicBoolean), 16 + sizeof(int)> __System_Threading_AtomicBooleanSizeCheck;
  static_assert(sizeof(AtomicBoolean) == 0x14);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Threading::AtomicBoolean::TryRelaxedSet
// Il2CppName: TryRelaxedSet
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Threading::AtomicBoolean::*)()>(&System::Threading::AtomicBoolean::TryRelaxedSet)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Threading::AtomicBoolean*), "TryRelaxedSet", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Threading::AtomicBoolean::Exchange
// Il2CppName: Exchange
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Threading::AtomicBoolean::*)(bool)>(&System::Threading::AtomicBoolean::Exchange)> {
  static const MethodInfo* get() {
    static auto* newVal = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Threading::AtomicBoolean*), "Exchange", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{newVal});
  }
};
// Writing MetadataGetter for method: System::Threading::AtomicBoolean::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Threading::AtomicBoolean::*)(System::Threading::AtomicBoolean*)>(&System::Threading::AtomicBoolean::Equals)> {
  static const MethodInfo* get() {
    static auto* rhs = &::il2cpp_utils::GetClassFromName("System.Threading", "AtomicBoolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Threading::AtomicBoolean*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rhs});
  }
};
// Writing MetadataGetter for method: System::Threading::AtomicBoolean::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Threading::AtomicBoolean::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Threading::AtomicBoolean::*)(::Il2CppObject*)>(&System::Threading::AtomicBoolean::Equals)> {
  static const MethodInfo* get() {
    static auto* rhs = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Threading::AtomicBoolean*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rhs});
  }
};
// Writing MetadataGetter for method: System::Threading::AtomicBoolean::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Threading::AtomicBoolean::*)()>(&System::Threading::AtomicBoolean::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Threading::AtomicBoolean*), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
