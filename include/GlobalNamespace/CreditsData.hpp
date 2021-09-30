// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
#include "extern/beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: CreditsData
  // [TokenAttribute] Offset: FFFFFFFF
  class CreditsData : public ::Il2CppObject {
    public:
    // Nested type: GlobalNamespace::CreditsData::TextStyle
    struct TextStyle;
    // Nested type: GlobalNamespace::CreditsData::Text
    class Text;
    // Nested type: GlobalNamespace::CreditsData::RootCreditsItem
    class RootCreditsItem;
    // Nested type: GlobalNamespace::CreditsData::ChildCreditsItem
    class ChildCreditsItem;
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    private:
    #endif
    // public CreditsData/RootCreditsItem[] creditsItems
    // Size: 0x8
    // Offset: 0x10
    ::ArrayW<GlobalNamespace::CreditsData::RootCreditsItem*> creditsItems;
    // Field size check
    static_assert(sizeof(::ArrayW<GlobalNamespace::CreditsData::RootCreditsItem*>) == 0x8);
    public:
    // Creating conversion operator: operator ::ArrayW<GlobalNamespace::CreditsData::RootCreditsItem*>
    constexpr operator ::ArrayW<GlobalNamespace::CreditsData::RootCreditsItem*>() const noexcept {
      return creditsItems;
    }
    // Get instance field reference: public CreditsData/RootCreditsItem[] creditsItems
    ::ArrayW<GlobalNamespace::CreditsData::RootCreditsItem*>& dyn_creditsItems();
    // static public CreditsData Deserialize(System.String text)
    // Offset: 0x11A000C
    static GlobalNamespace::CreditsData* Deserialize(::Il2CppString* text);
    // public System.Void .ctor()
    // Offset: 0x11A00D0
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CreditsData* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::CreditsData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CreditsData*, creationType>()));
    }
  }; // CreditsData
  #pragma pack(pop)
  static check_size<sizeof(CreditsData), 16 + sizeof(::ArrayW<GlobalNamespace::CreditsData::RootCreditsItem*>)> __GlobalNamespace_CreditsDataSizeCheck;
  static_assert(sizeof(CreditsData) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::CreditsData*, "", "CreditsData");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::CreditsData::Deserialize
// Il2CppName: Deserialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::CreditsData* (*)(::Il2CppString*)>(&GlobalNamespace::CreditsData::Deserialize)> {
  static const MethodInfo* get() {
    static auto* text = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CreditsData*), "Deserialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{text});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CreditsData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
