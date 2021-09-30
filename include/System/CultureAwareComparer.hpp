// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.StringComparer
#include "System/StringComparer.hpp"
// Including type: System.Globalization.CompareOptions
#include "System/Globalization/CompareOptions.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Globalization
namespace System::Globalization {
  // Forward declaring type: CompareInfo
  class CompareInfo;
  // Forward declaring type: CultureInfo
  class CultureInfo;
}
// Completed forward declares
// Type namespace: System
namespace System {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: System.CultureAwareComparer
  // [TokenAttribute] Offset: FFFFFFFF
  class CultureAwareComparer : public System::StringComparer {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    private:
    #endif
    // private System.Globalization.CompareInfo _compareInfo
    // Size: 0x8
    // Offset: 0x10
    System::Globalization::CompareInfo* compareInfo;
    // Field size check
    static_assert(sizeof(System::Globalization::CompareInfo*) == 0x8);
    // private System.Boolean _ignoreCase
    // Size: 0x1
    // Offset: 0x18
    bool ignoreCase;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: ignoreCase and: options
    char __padding1[0x3] = {};
    // [OptionalFieldAttribute] Offset: 0xE62AA0
    // private System.Globalization.CompareOptions _options
    // Size: 0x4
    // Offset: 0x1C
    System::Globalization::CompareOptions options;
    // Field size check
    static_assert(sizeof(System::Globalization::CompareOptions) == 0x4);
    public:
    // Get instance field reference: private System.Globalization.CompareInfo _compareInfo
    System::Globalization::CompareInfo*& dyn__compareInfo();
    // Get instance field reference: private System.Boolean _ignoreCase
    bool& dyn__ignoreCase();
    // Get instance field reference: private System.Globalization.CompareOptions _options
    System::Globalization::CompareOptions& dyn__options();
    // System.Void .ctor(System.Globalization.CultureInfo culture, System.Boolean ignoreCase)
    // Offset: 0x1B236B4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CultureAwareComparer* New_ctor(System::Globalization::CultureInfo* culture, bool ignoreCase) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::CultureAwareComparer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CultureAwareComparer*, creationType>(culture, ignoreCase)));
    }
    // public override System.Int32 Compare(System.String x, System.String y)
    // Offset: 0x1B2375C
    // Implemented from: System.StringComparer
    // Base method: System.Int32 StringComparer::Compare(System.String x, System.String y)
    int Compare(::Il2CppString* x, ::Il2CppString* y);
    // public override System.Boolean Equals(System.String x, System.String y)
    // Offset: 0x1B237AC
    // Implemented from: System.StringComparer
    // Base method: System.Boolean StringComparer::Equals(System.String x, System.String y)
    bool Equals(::Il2CppString* x, ::Il2CppString* y);
    // public override System.Int32 GetHashCode(System.String obj)
    // Offset: 0x1B23800
    // Implemented from: System.StringComparer
    // Base method: System.Int32 StringComparer::GetHashCode(System.String obj)
    int GetHashCode(::Il2CppString* obj);
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x1B238A4
    // Implemented from: System.Object
    // Base method: System.Boolean Object::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0x1B2396C
    // Implemented from: System.Object
    // Base method: System.Int32 Object::GetHashCode()
    int GetHashCode();
  }; // System.CultureAwareComparer
  #pragma pack(pop)
  static check_size<sizeof(CultureAwareComparer), 28 + sizeof(System::Globalization::CompareOptions)> __System_CultureAwareComparerSizeCheck;
  static_assert(sizeof(CultureAwareComparer) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(System::CultureAwareComparer*, "System", "CultureAwareComparer");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::CultureAwareComparer::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::CultureAwareComparer::Compare
// Il2CppName: Compare
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::CultureAwareComparer::*)(::Il2CppString*, ::Il2CppString*)>(&System::CultureAwareComparer::Compare)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* y = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::CultureAwareComparer*), "Compare", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, y});
  }
};
// Writing MetadataGetter for method: System::CultureAwareComparer::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::CultureAwareComparer::*)(::Il2CppString*, ::Il2CppString*)>(&System::CultureAwareComparer::Equals)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* y = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::CultureAwareComparer*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, y});
  }
};
// Writing MetadataGetter for method: System::CultureAwareComparer::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::CultureAwareComparer::*)(::Il2CppString*)>(&System::CultureAwareComparer::GetHashCode)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::CultureAwareComparer*), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: System::CultureAwareComparer::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::CultureAwareComparer::*)(::Il2CppObject*)>(&System::CultureAwareComparer::Equals)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::CultureAwareComparer*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: System::CultureAwareComparer::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::CultureAwareComparer::*)()>(&System::CultureAwareComparer::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::CultureAwareComparer*), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
