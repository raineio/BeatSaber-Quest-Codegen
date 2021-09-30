// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.AddressableAssets.ResourceLocators.IResourceLocator
#include "UnityEngine/AddressableAssets/ResourceLocators/IResourceLocator.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
  // Forward declaring type: IList`1<T>
  template<typename T>
  class IList_1;
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Forward declaring namespace: UnityEngine::ResourceManagement::ResourceLocations
namespace UnityEngine::ResourceManagement::ResourceLocations {
  // Forward declaring type: IResourceLocation
  class IResourceLocation;
}
// Forward declaring namespace: UnityEngine::AddressableAssets::ResourceLocators
namespace UnityEngine::AddressableAssets::ResourceLocators {
  // Forward declaring type: ResourceLocationData
  class ResourceLocationData;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: UnityEngine.AddressableAssets.ResourceLocators
namespace UnityEngine::AddressableAssets::ResourceLocators {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.AddressableAssets.ResourceLocators.ResourceLocationMap
  // [TokenAttribute] Offset: FFFFFFFF
  class ResourceLocationMap : public ::Il2CppObject/*, public UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*/ {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    private:
    #endif
    // private System.String <LocatorId>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* LocatorId;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.IList`1<UnityEngine.ResourceManagement.ResourceLocations.IResourceLocation>> <Locations>k__BackingField
    // Size: 0x8
    // Offset: 0x18
    System::Collections::Generic::Dictionary_2<::Il2CppObject*, System::Collections::Generic::IList_1<UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*>* Locations;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::Dictionary_2<::Il2CppObject*, System::Collections::Generic::IList_1<UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*>*) == 0x8);
    public:
    // Creating interface conversion operator: operator UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator
    operator UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator() noexcept {
      return *reinterpret_cast<UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*>(this);
    }
    // Get instance field reference: private System.String <LocatorId>k__BackingField
    ::Il2CppString*& dyn_$LocatorId$k__BackingField();
    // Get instance field reference: private System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.IList`1<UnityEngine.ResourceManagement.ResourceLocations.IResourceLocation>> <Locations>k__BackingField
    System::Collections::Generic::Dictionary_2<::Il2CppObject*, System::Collections::Generic::IList_1<UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*>*& dyn_$Locations$k__BackingField();
    // public System.String get_LocatorId()
    // Offset: 0x15A0524
    ::Il2CppString* get_LocatorId();
    // private System.Void set_LocatorId(System.String value)
    // Offset: 0x15A052C
    void set_LocatorId(::Il2CppString* value);
    // public System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.IList`1<UnityEngine.ResourceManagement.ResourceLocations.IResourceLocation>> get_Locations()
    // Offset: 0x15A067C
    System::Collections::Generic::Dictionary_2<::Il2CppObject*, System::Collections::Generic::IList_1<UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*>* get_Locations();
    // private System.Void set_Locations(System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.IList`1<UnityEngine.ResourceManagement.ResourceLocations.IResourceLocation>> value)
    // Offset: 0x15A0684
    void set_Locations(System::Collections::Generic::Dictionary_2<::Il2CppObject*, System::Collections::Generic::IList_1<UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*>* value);
    // public System.Collections.Generic.IEnumerable`1<System.Object> get_Keys()
    // Offset: 0x15A068C
    System::Collections::Generic::IEnumerable_1<::Il2CppObject*>* get_Keys();
    // public System.Void .ctor(System.String id, System.Int32 capacity)
    // Offset: 0x159F9EC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ResourceLocationMap* New_ctor(::Il2CppString* id, int capacity) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationMap::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ResourceLocationMap*, creationType>(id, capacity)));
    }
    // public System.Void .ctor(System.String id, System.Collections.Generic.IList`1<UnityEngine.AddressableAssets.ResourceLocators.ResourceLocationData> locations)
    // Offset: 0x159C95C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ResourceLocationMap* New_ctor(::Il2CppString* id, System::Collections::Generic::IList_1<UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationData*>* locations) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationMap::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ResourceLocationMap*, creationType>(id, locations)));
    }
    // public System.Boolean Locate(System.Object key, System.Type type, out System.Collections.Generic.IList`1<UnityEngine.ResourceManagement.ResourceLocations.IResourceLocation> locations)
    // Offset: 0x159D1E8
    bool Locate(::Il2CppObject* key, System::Type* type, ByRef<System::Collections::Generic::IList_1<UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*> locations);
    // public System.Void Add(System.Object key, UnityEngine.ResourceManagement.ResourceLocations.IResourceLocation location)
    // Offset: 0x15A0534
    void Add(::Il2CppObject* key, UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* location);
    // public System.Void Add(System.Object key, System.Collections.Generic.IList`1<UnityEngine.ResourceManagement.ResourceLocations.IResourceLocation> locations)
    // Offset: 0x159FCA0
    void Add(::Il2CppObject* key, System::Collections::Generic::IList_1<UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>* locations);
  }; // UnityEngine.AddressableAssets.ResourceLocators.ResourceLocationMap
  #pragma pack(pop)
  static check_size<sizeof(ResourceLocationMap), 24 + sizeof(System::Collections::Generic::Dictionary_2<::Il2CppObject*, System::Collections::Generic::IList_1<UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*>*)> __UnityEngine_AddressableAssets_ResourceLocators_ResourceLocationMapSizeCheck;
  static_assert(sizeof(ResourceLocationMap) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationMap*, "UnityEngine.AddressableAssets.ResourceLocators", "ResourceLocationMap");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationMap::get_LocatorId
// Il2CppName: get_LocatorId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationMap::*)()>(&UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationMap::get_LocatorId)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationMap*), "get_LocatorId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationMap::set_LocatorId
// Il2CppName: set_LocatorId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationMap::*)(::Il2CppString*)>(&UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationMap::set_LocatorId)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationMap*), "set_LocatorId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationMap::get_Locations
// Il2CppName: get_Locations
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::Dictionary_2<::Il2CppObject*, System::Collections::Generic::IList_1<UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*>* (UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationMap::*)()>(&UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationMap::get_Locations)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationMap*), "get_Locations", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationMap::set_Locations
// Il2CppName: set_Locations
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationMap::*)(System::Collections::Generic::Dictionary_2<::Il2CppObject*, System::Collections::Generic::IList_1<UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*>*)>(&UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationMap::set_Locations)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "Dictionary`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Object"), ::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IList`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine.ResourceManagement.ResourceLocations", "IResourceLocation")})})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationMap*), "set_Locations", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationMap::get_Keys
// Il2CppName: get_Keys
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::IEnumerable_1<::Il2CppObject*>* (UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationMap::*)()>(&UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationMap::get_Keys)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationMap*), "get_Keys", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationMap::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationMap::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationMap::Locate
// Il2CppName: Locate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationMap::*)(::Il2CppObject*, System::Type*, ByRef<System::Collections::Generic::IList_1<UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*>)>(&UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationMap::Locate)> {
  static const MethodInfo* get() {
    static auto* key = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* locations = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IList`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine.ResourceManagement.ResourceLocations", "IResourceLocation")})->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationMap*), "Locate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{key, type, locations});
  }
};
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationMap::Add
// Il2CppName: Add
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationMap::*)(::Il2CppObject*, UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*)>(&UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationMap::Add)> {
  static const MethodInfo* get() {
    static auto* key = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* location = &::il2cpp_utils::GetClassFromName("UnityEngine.ResourceManagement.ResourceLocations", "IResourceLocation")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationMap*), "Add", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{key, location});
  }
};
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationMap::Add
// Il2CppName: Add
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationMap::*)(::Il2CppObject*, System::Collections::Generic::IList_1<UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*)>(&UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationMap::Add)> {
  static const MethodInfo* get() {
    static auto* key = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* locations = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IList`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine.ResourceManagement.ResourceLocations", "IResourceLocation")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationMap*), "Add", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{key, locations});
  }
};
