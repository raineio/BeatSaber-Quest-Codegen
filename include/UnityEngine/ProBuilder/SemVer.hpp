// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.IEquatable`1
#include "System/IEquatable_1.hpp"
// Including type: System.IComparable`1
#include "System/IComparable_1.hpp"
// Including type: System.IComparable
#include "System/IComparable.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: String
  class String;
}
// Completed forward declares
// Type namespace: UnityEngine.ProBuilder
namespace UnityEngine::ProBuilder {
  // Forward declaring type: SemVer
  class SemVer;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(UnityEngine::ProBuilder::SemVer);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::SemVer*, "UnityEngine.ProBuilder", "SemVer");
// Type namespace: UnityEngine.ProBuilder
namespace UnityEngine::ProBuilder {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ProBuilder.SemVer
  // [TokenAttribute] Offset: FFFFFFFF
  class SemVer : public ::Il2CppObject/*, public System::IEquatable_1<UnityEngine::ProBuilder::SemVer*>, public System::IComparable_1<UnityEngine::ProBuilder::SemVer*>, public System::IComparable*/ {
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
    // private System.Int32 m_Major
    // Size: 0x4
    // Offset: 0x10
    int m_Major;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 m_Minor
    // Size: 0x4
    // Offset: 0x14
    int m_Minor;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 m_Patch
    // Size: 0x4
    // Offset: 0x18
    int m_Patch;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 m_Build
    // Size: 0x4
    // Offset: 0x1C
    int m_Build;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.String m_Type
    // Size: 0x8
    // Offset: 0x20
    ::Il2CppString* m_Type;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.String m_Metadata
    // Size: 0x8
    // Offset: 0x28
    ::Il2CppString* m_Metadata;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.String m_Date
    // Size: 0x8
    // Offset: 0x30
    ::Il2CppString* m_Date;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    public:
    // Creating interface conversion operator: operator System::IEquatable_1<UnityEngine::ProBuilder::SemVer*>
    operator System::IEquatable_1<UnityEngine::ProBuilder::SemVer*>() noexcept {
      return *reinterpret_cast<System::IEquatable_1<UnityEngine::ProBuilder::SemVer*>*>(this);
    }
    // Creating interface conversion operator: operator System::IComparable_1<UnityEngine::ProBuilder::SemVer*>
    operator System::IComparable_1<UnityEngine::ProBuilder::SemVer*>() noexcept {
      return *reinterpret_cast<System::IComparable_1<UnityEngine::ProBuilder::SemVer*>*>(this);
    }
    // Creating interface conversion operator: operator System::IComparable
    operator System::IComparable() noexcept {
      return *reinterpret_cast<System::IComparable*>(this);
    }
    // static field const value: static public System.String DefaultStringFormat
    static constexpr const char* DefaultStringFormat = "M.m.p-t.b";
    // Get static field: static public System.String DefaultStringFormat
    static ::Il2CppString* _get_DefaultStringFormat();
    // Set static field: static public System.String DefaultStringFormat
    static void _set_DefaultStringFormat(::Il2CppString* value);
    // Get instance field reference: private System.Int32 m_Major
    int& dyn_m_Major();
    // Get instance field reference: private System.Int32 m_Minor
    int& dyn_m_Minor();
    // Get instance field reference: private System.Int32 m_Patch
    int& dyn_m_Patch();
    // Get instance field reference: private System.Int32 m_Build
    int& dyn_m_Build();
    // Get instance field reference: private System.String m_Type
    ::Il2CppString*& dyn_m_Type();
    // Get instance field reference: private System.String m_Metadata
    ::Il2CppString*& dyn_m_Metadata();
    // Get instance field reference: private System.String m_Date
    ::Il2CppString*& dyn_m_Date();
    // public System.Int32 get_major()
    // Offset: 0x17004B0
    int get_major();
    // public System.Int32 get_minor()
    // Offset: 0x17004B8
    int get_minor();
    // public System.Int32 get_patch()
    // Offset: 0x17004C0
    int get_patch();
    // public System.Int32 get_build()
    // Offset: 0x17004C8
    int get_build();
    // public System.String get_type()
    // Offset: 0x17004D0
    ::Il2CppString* get_type();
    // public System.String get_metadata()
    // Offset: 0x1700528
    ::Il2CppString* get_metadata();
    // public System.String get_date()
    // Offset: 0x1700580
    ::Il2CppString* get_date();
    // public UnityEngine.ProBuilder.SemVer get_MajorMinorPatch()
    // Offset: 0x17005D8
    UnityEngine::ProBuilder::SemVer* get_MajorMinorPatch();
    // public System.Void .ctor(System.String formatted, System.String date)
    // Offset: 0x1700714
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SemVer* New_ctor(::Il2CppString* formatted, ::Il2CppString* date) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ProBuilder::SemVer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SemVer*, creationType>(formatted, date)));
    }
    // public System.Void .ctor(System.Int32 major, System.Int32 minor, System.Int32 patch, System.Int32 build, System.String type, System.String date, System.String metadata)
    // Offset: 0x1700664
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SemVer* New_ctor(int major, int minor, int patch, int build, ::Il2CppString* type, ::Il2CppString* date, ::Il2CppString* metadata) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ProBuilder::SemVer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SemVer*, creationType>(major, minor, patch, build, type, date, metadata)));
    }
    // public System.Boolean IsValid()
    // Offset: 0x1700C08
    bool IsValid();
    // public System.Boolean Equals(UnityEngine.ProBuilder.SemVer version)
    // Offset: 0x1700CBC
    bool Equals(UnityEngine::ProBuilder::SemVer* version);
    // public System.Int32 CompareTo(System.Object obj)
    // Offset: 0x17010B8
    int CompareTo(::Il2CppObject* obj);
    // static private System.Int32 WrapNoValue(System.Int32 value)
    // Offset: 0x17012EC
    static int WrapNoValue(int value);
    // public System.Int32 CompareTo(UnityEngine.ProBuilder.SemVer version)
    // Offset: 0x170112C
    int CompareTo(UnityEngine::ProBuilder::SemVer* version);
    // public System.String ToString(System.String format)
    // Offset: 0x1701420
    ::Il2CppString* ToString(::Il2CppString* format);
    // static public System.Boolean TryGetVersionInfo(System.String input, out UnityEngine.ProBuilder.SemVer version)
    // Offset: 0x17007DC
    static bool TryGetVersionInfo(::Il2CppString* input, ByRef<UnityEngine::ProBuilder::SemVer*> version);
    // static private System.Int32 GetBuildNumber(System.String input)
    // Offset: 0x17018B8
    static int GetBuildNumber(::Il2CppString* input);
    // public System.Void .ctor()
    // Offset: 0x17006D4
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SemVer* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ProBuilder::SemVer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SemVer*, creationType>()));
    }
    // public override System.Boolean Equals(System.Object o)
    // Offset: 0x1700C38
    // Implemented from: System.Object
    // Base method: System.Boolean Object::Equals(System.Object o)
    bool Equals(::Il2CppObject* o);
    // public override System.Int32 GetHashCode()
    // Offset: 0x1700EDC
    // Implemented from: System.Object
    // Base method: System.Int32 Object::GetHashCode()
    int GetHashCode();
    // public override System.String ToString()
    // Offset: 0x1701698
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::Il2CppString* ToString();
  }; // UnityEngine.ProBuilder.SemVer
  #pragma pack(pop)
  static check_size<sizeof(SemVer), 48 + sizeof(::Il2CppString*)> __UnityEngine_ProBuilder_SemVerSizeCheck;
  static_assert(sizeof(SemVer) == 0x38);
  // static public System.Boolean op_Equality(UnityEngine.ProBuilder.SemVer left, UnityEngine.ProBuilder.SemVer right)
  // Offset: 0x17012FC
  bool operator ==(UnityEngine::ProBuilder::SemVer* left, UnityEngine::ProBuilder::SemVer& right);
  // static public System.Boolean op_Inequality(UnityEngine.ProBuilder.SemVer left, UnityEngine.ProBuilder.SemVer right)
  // Offset: 0x1701310
  bool operator !=(UnityEngine::ProBuilder::SemVer* left, UnityEngine::ProBuilder::SemVer& right);
  // static public System.Boolean op_LessThan(UnityEngine.ProBuilder.SemVer left, UnityEngine.ProBuilder.SemVer right)
  // Offset: 0x170133C
  bool operator <(UnityEngine::ProBuilder::SemVer* left, UnityEngine::ProBuilder::SemVer& right);
  // static public System.Boolean op_GreaterThan(UnityEngine.ProBuilder.SemVer left, UnityEngine.ProBuilder.SemVer right)
  // Offset: 0x1701364
  bool operator >(UnityEngine::ProBuilder::SemVer* left, UnityEngine::ProBuilder::SemVer& right);
  // static public System.Boolean op_LessThanOrEqual(UnityEngine.ProBuilder.SemVer left, UnityEngine.ProBuilder.SemVer right)
  // Offset: 0x1701384
  bool operator <=(UnityEngine::ProBuilder::SemVer* left, UnityEngine::ProBuilder::SemVer& right);
  // static public System.Boolean op_GreaterThanOrEqual(UnityEngine.ProBuilder.SemVer left, UnityEngine.ProBuilder.SemVer right)
  // Offset: 0x17013C8
  bool operator >=(UnityEngine::ProBuilder::SemVer* left, UnityEngine::ProBuilder::SemVer& right);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::ProBuilder::SemVer::get_major
// Il2CppName: get_major
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::ProBuilder::SemVer::*)()>(&UnityEngine::ProBuilder::SemVer::get_major)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::SemVer*), "get_major", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::SemVer::get_minor
// Il2CppName: get_minor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::ProBuilder::SemVer::*)()>(&UnityEngine::ProBuilder::SemVer::get_minor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::SemVer*), "get_minor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::SemVer::get_patch
// Il2CppName: get_patch
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::ProBuilder::SemVer::*)()>(&UnityEngine::ProBuilder::SemVer::get_patch)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::SemVer*), "get_patch", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::SemVer::get_build
// Il2CppName: get_build
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::ProBuilder::SemVer::*)()>(&UnityEngine::ProBuilder::SemVer::get_build)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::SemVer*), "get_build", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::SemVer::get_type
// Il2CppName: get_type
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (UnityEngine::ProBuilder::SemVer::*)()>(&UnityEngine::ProBuilder::SemVer::get_type)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::SemVer*), "get_type", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::SemVer::get_metadata
// Il2CppName: get_metadata
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (UnityEngine::ProBuilder::SemVer::*)()>(&UnityEngine::ProBuilder::SemVer::get_metadata)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::SemVer*), "get_metadata", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::SemVer::get_date
// Il2CppName: get_date
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (UnityEngine::ProBuilder::SemVer::*)()>(&UnityEngine::ProBuilder::SemVer::get_date)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::SemVer*), "get_date", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::SemVer::get_MajorMinorPatch
// Il2CppName: get_MajorMinorPatch
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::ProBuilder::SemVer* (UnityEngine::ProBuilder::SemVer::*)()>(&UnityEngine::ProBuilder::SemVer::get_MajorMinorPatch)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::SemVer*), "get_MajorMinorPatch", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::SemVer::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::ProBuilder::SemVer::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::ProBuilder::SemVer::IsValid
// Il2CppName: IsValid
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::ProBuilder::SemVer::*)()>(&UnityEngine::ProBuilder::SemVer::IsValid)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::SemVer*), "IsValid", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::SemVer::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::ProBuilder::SemVer::*)(UnityEngine::ProBuilder::SemVer*)>(&UnityEngine::ProBuilder::SemVer::Equals)> {
  static const MethodInfo* get() {
    static auto* version = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "SemVer")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::SemVer*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{version});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::SemVer::CompareTo
// Il2CppName: CompareTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::ProBuilder::SemVer::*)(::Il2CppObject*)>(&UnityEngine::ProBuilder::SemVer::CompareTo)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::SemVer*), "CompareTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::SemVer::WrapNoValue
// Il2CppName: WrapNoValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(int)>(&UnityEngine::ProBuilder::SemVer::WrapNoValue)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::SemVer*), "WrapNoValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::SemVer::CompareTo
// Il2CppName: CompareTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::ProBuilder::SemVer::*)(UnityEngine::ProBuilder::SemVer*)>(&UnityEngine::ProBuilder::SemVer::CompareTo)> {
  static const MethodInfo* get() {
    static auto* version = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "SemVer")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::SemVer*), "CompareTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{version});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::SemVer::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (UnityEngine::ProBuilder::SemVer::*)(::Il2CppString*)>(&UnityEngine::ProBuilder::SemVer::ToString)> {
  static const MethodInfo* get() {
    static auto* format = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::SemVer*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{format});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::SemVer::TryGetVersionInfo
// Il2CppName: TryGetVersionInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Il2CppString*, ByRef<UnityEngine::ProBuilder::SemVer*>)>(&UnityEngine::ProBuilder::SemVer::TryGetVersionInfo)> {
  static const MethodInfo* get() {
    static auto* input = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* version = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "SemVer")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::SemVer*), "TryGetVersionInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{input, version});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::SemVer::GetBuildNumber
// Il2CppName: GetBuildNumber
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::Il2CppString*)>(&UnityEngine::ProBuilder::SemVer::GetBuildNumber)> {
  static const MethodInfo* get() {
    static auto* input = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::SemVer*), "GetBuildNumber", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{input});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::SemVer::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::ProBuilder::SemVer::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::ProBuilder::SemVer::*)(::Il2CppObject*)>(&UnityEngine::ProBuilder::SemVer::Equals)> {
  static const MethodInfo* get() {
    static auto* o = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::SemVer*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{o});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::SemVer::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::ProBuilder::SemVer::*)()>(&UnityEngine::ProBuilder::SemVer::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::SemVer*), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::SemVer::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (UnityEngine::ProBuilder::SemVer::*)()>(&UnityEngine::ProBuilder::SemVer::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::SemVer*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::SemVer::operator ==
// Il2CppName: op_Equality
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::ProBuilder::SemVer::operator !=
// Il2CppName: op_Inequality
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::ProBuilder::SemVer::operator <
// Il2CppName: op_LessThan
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::ProBuilder::SemVer::operator >
// Il2CppName: op_GreaterThan
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::ProBuilder::SemVer::operator <=
// Il2CppName: op_LessThanOrEqual
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::ProBuilder::SemVer::operator >=
// Il2CppName: op_GreaterThanOrEqual
// Cannot perform method pointer template specialization from operators!
