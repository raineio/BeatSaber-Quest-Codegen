// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.TestTools.Utils.StackTraceFilter
#include "UnityEngine/TestTools/Utils/StackTraceFilter.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::TestTools::Utils::StackTraceFilter::$$c__DisplayClass2_0);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TestTools::Utils::StackTraceFilter::$$c__DisplayClass2_0*, "UnityEngine.TestTools.Utils", "StackTraceFilter/<>c__DisplayClass2_0");
// Type namespace: UnityEngine.TestTools.Utils
namespace UnityEngine::TestTools::Utils {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.TestTools.Utils.StackTraceFilter/UnityEngine.TestTools.Utils.<>c__DisplayClass2_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class StackTraceFilter::$$c__DisplayClass2_0 : public ::Il2CppObject {
    public:
    public:
    // public System.String line
    // Size: 0x8
    // Offset: 0x10
    ::StringW line;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Creating conversion operator: operator ::StringW
    constexpr operator ::StringW() const noexcept {
      return line;
    }
    // Get instance field reference: public System.String line
    [[deprecated("Use field access instead!")]] ::StringW& dyn_line();
    // public System.Void .ctor()
    // Offset: 0x2AC7334
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static StackTraceFilter::$$c__DisplayClass2_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::TestTools::Utils::StackTraceFilter::$$c__DisplayClass2_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<StackTraceFilter::$$c__DisplayClass2_0*, creationType>()));
    }
    // System.Boolean <Filter>b__0(System.String s)
    // Offset: 0x2AC751C
    bool $Filter$b__0(::StringW s);
  }; // UnityEngine.TestTools.Utils.StackTraceFilter/UnityEngine.TestTools.Utils.<>c__DisplayClass2_0
  #pragma pack(pop)
  static check_size<sizeof(StackTraceFilter::$$c__DisplayClass2_0), 16 + sizeof(::StringW)> __UnityEngine_TestTools_Utils_StackTraceFilter_$$c__DisplayClass2_0SizeCheck;
  static_assert(sizeof(StackTraceFilter::$$c__DisplayClass2_0) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::TestTools::Utils::StackTraceFilter::$$c__DisplayClass2_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::TestTools::Utils::StackTraceFilter::$$c__DisplayClass2_0::$Filter$b__0
// Il2CppName: <Filter>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::TestTools::Utils::StackTraceFilter::$$c__DisplayClass2_0::*)(::StringW)>(&UnityEngine::TestTools::Utils::StackTraceFilter::$$c__DisplayClass2_0::$Filter$b__0)> {
  static const MethodInfo* get() {
    static auto* s = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestTools::Utils::StackTraceFilter::$$c__DisplayClass2_0*), "<Filter>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{s});
  }
};
