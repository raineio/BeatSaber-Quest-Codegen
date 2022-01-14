// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Oculus::Platform
namespace Oculus::Platform {
  // Forward declaring type: Request`1<T>
  template<typename T>
  class Request_1;
}
// Forward declaring namespace: Oculus::Platform::Models
namespace Oculus::Platform::Models {
  // Forward declaring type: AchievementUpdate
  class AchievementUpdate;
  // Forward declaring type: AchievementDefinitionList
  class AchievementDefinitionList;
  // Forward declaring type: AchievementProgressList
  class AchievementProgressList;
}
// Completed forward declares
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Forward declaring type: Achievements
  class Achievements;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(Oculus::Platform::Achievements);
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::Achievements*, "Oculus.Platform", "Achievements");
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Platform.Achievements
  // [TokenAttribute] Offset: FFFFFFFF
  class Achievements : public ::Il2CppObject {
    public:
    // static public Oculus.Platform.Request`1<Oculus.Platform.Models.AchievementUpdate> AddCount(System.String name, System.UInt64 count)
    // Offset: 0x1D6CF5C
    static Oculus::Platform::Request_1<Oculus::Platform::Models::AchievementUpdate*>* AddCount(::StringW name, uint64_t count);
    // static public Oculus.Platform.Request`1<Oculus.Platform.Models.AchievementUpdate> AddFields(System.String name, System.String fields)
    // Offset: 0x1D6D134
    static Oculus::Platform::Request_1<Oculus::Platform::Models::AchievementUpdate*>* AddFields(::StringW name, ::StringW fields);
    // static public Oculus.Platform.Request`1<Oculus.Platform.Models.AchievementDefinitionList> GetAllDefinitions()
    // Offset: 0x1D6D328
    static Oculus::Platform::Request_1<Oculus::Platform::Models::AchievementDefinitionList*>* GetAllDefinitions();
    // static public Oculus.Platform.Request`1<Oculus.Platform.Models.AchievementProgressList> GetAllProgress()
    // Offset: 0x1D6D4A4
    static Oculus::Platform::Request_1<Oculus::Platform::Models::AchievementProgressList*>* GetAllProgress();
    // static public Oculus.Platform.Request`1<Oculus.Platform.Models.AchievementDefinitionList> GetDefinitionsByName(System.String[] names)
    // Offset: 0x1D6D620
    static Oculus::Platform::Request_1<Oculus::Platform::Models::AchievementDefinitionList*>* GetDefinitionsByName(::ArrayW<::StringW> names);
    // static public Oculus.Platform.Request`1<Oculus.Platform.Models.AchievementProgressList> GetProgressByName(System.String[] names)
    // Offset: 0x1D6D8A0
    static Oculus::Platform::Request_1<Oculus::Platform::Models::AchievementProgressList*>* GetProgressByName(::ArrayW<::StringW> names);
    // static public Oculus.Platform.Request`1<Oculus.Platform.Models.AchievementUpdate> Unlock(System.String name)
    // Offset: 0x1D6DB20
    static Oculus::Platform::Request_1<Oculus::Platform::Models::AchievementUpdate*>* Unlock(::StringW name);
    // static public Oculus.Platform.Request`1<Oculus.Platform.Models.AchievementDefinitionList> GetNextAchievementDefinitionListPage(Oculus.Platform.Models.AchievementDefinitionList list)
    // Offset: 0x1D6DCE0
    static Oculus::Platform::Request_1<Oculus::Platform::Models::AchievementDefinitionList*>* GetNextAchievementDefinitionListPage(Oculus::Platform::Models::AchievementDefinitionList* list);
    // static public Oculus.Platform.Request`1<Oculus.Platform.Models.AchievementProgressList> GetNextAchievementProgressListPage(Oculus.Platform.Models.AchievementProgressList list)
    // Offset: 0x1D6DF00
    static Oculus::Platform::Request_1<Oculus::Platform::Models::AchievementProgressList*>* GetNextAchievementProgressListPage(Oculus::Platform::Models::AchievementProgressList* list);
  }; // Oculus.Platform.Achievements
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Platform::Achievements::AddCount
// Il2CppName: AddCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Oculus::Platform::Request_1<Oculus::Platform::Models::AchievementUpdate*>* (*)(::StringW, uint64_t)>(&Oculus::Platform::Achievements::AddCount)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::Achievements*), "AddCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name, count});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::Achievements::AddFields
// Il2CppName: AddFields
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Oculus::Platform::Request_1<Oculus::Platform::Models::AchievementUpdate*>* (*)(::StringW, ::StringW)>(&Oculus::Platform::Achievements::AddFields)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* fields = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::Achievements*), "AddFields", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name, fields});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::Achievements::GetAllDefinitions
// Il2CppName: GetAllDefinitions
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Oculus::Platform::Request_1<Oculus::Platform::Models::AchievementDefinitionList*>* (*)()>(&Oculus::Platform::Achievements::GetAllDefinitions)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::Achievements*), "GetAllDefinitions", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::Achievements::GetAllProgress
// Il2CppName: GetAllProgress
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Oculus::Platform::Request_1<Oculus::Platform::Models::AchievementProgressList*>* (*)()>(&Oculus::Platform::Achievements::GetAllProgress)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::Achievements*), "GetAllProgress", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::Achievements::GetDefinitionsByName
// Il2CppName: GetDefinitionsByName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Oculus::Platform::Request_1<Oculus::Platform::Models::AchievementDefinitionList*>* (*)(::ArrayW<::StringW>)>(&Oculus::Platform::Achievements::GetDefinitionsByName)> {
  static const MethodInfo* get() {
    static auto* names = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "String"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::Achievements*), "GetDefinitionsByName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{names});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::Achievements::GetProgressByName
// Il2CppName: GetProgressByName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Oculus::Platform::Request_1<Oculus::Platform::Models::AchievementProgressList*>* (*)(::ArrayW<::StringW>)>(&Oculus::Platform::Achievements::GetProgressByName)> {
  static const MethodInfo* get() {
    static auto* names = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "String"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::Achievements*), "GetProgressByName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{names});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::Achievements::Unlock
// Il2CppName: Unlock
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Oculus::Platform::Request_1<Oculus::Platform::Models::AchievementUpdate*>* (*)(::StringW)>(&Oculus::Platform::Achievements::Unlock)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::Achievements*), "Unlock", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::Achievements::GetNextAchievementDefinitionListPage
// Il2CppName: GetNextAchievementDefinitionListPage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Oculus::Platform::Request_1<Oculus::Platform::Models::AchievementDefinitionList*>* (*)(Oculus::Platform::Models::AchievementDefinitionList*)>(&Oculus::Platform::Achievements::GetNextAchievementDefinitionListPage)> {
  static const MethodInfo* get() {
    static auto* list = &::il2cpp_utils::GetClassFromName("Oculus.Platform.Models", "AchievementDefinitionList")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::Achievements*), "GetNextAchievementDefinitionListPage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{list});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::Achievements::GetNextAchievementProgressListPage
// Il2CppName: GetNextAchievementProgressListPage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Oculus::Platform::Request_1<Oculus::Platform::Models::AchievementProgressList*>* (*)(Oculus::Platform::Models::AchievementProgressList*)>(&Oculus::Platform::Achievements::GetNextAchievementProgressListPage)> {
  static const MethodInfo* get() {
    static auto* list = &::il2cpp_utils::GetClassFromName("Oculus.Platform.Models", "AchievementProgressList")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::Achievements*), "GetNextAchievementProgressListPage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{list});
  }
};
