// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.ResourceManagement.Util.IAllocationStrategy
#include "UnityEngine/ResourceManagement/Util/IAllocationStrategy.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: UnityEngine.ResourceManagement.Util
namespace UnityEngine::ResourceManagement::Util {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ResourceManagement.Util.LRUCacheAllocationStrategy
  class LRUCacheAllocationStrategy : public ::Il2CppObject/*, public UnityEngine::ResourceManagement::Util::IAllocationStrategy*/ {
    public:
    // private System.Int32 m_poolMaxSize
    // Size: 0x4
    // Offset: 0x10
    int m_poolMaxSize;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 m_poolInitialCapacity
    // Size: 0x4
    // Offset: 0x14
    int m_poolInitialCapacity;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 m_poolCacheMaxSize
    // Size: 0x4
    // Offset: 0x18
    int m_poolCacheMaxSize;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: m_poolCacheMaxSize and: m_poolCache
    char __padding2[0x4] = {};
    // private System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.Object>> m_poolCache
    // Size: 0x8
    // Offset: 0x20
    System::Collections::Generic::List_1<System::Collections::Generic::List_1<::Il2CppObject*>*>* m_poolCache;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<System::Collections::Generic::List_1<::Il2CppObject*>*>*) == 0x8);
    // private System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<System.Object>> m_cache
    // Size: 0x8
    // Offset: 0x28
    System::Collections::Generic::Dictionary_2<int, System::Collections::Generic::List_1<::Il2CppObject*>*>* m_cache;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::Dictionary_2<int, System::Collections::Generic::List_1<::Il2CppObject*>*>*) == 0x8);
    // Creating value type constructor for type: LRUCacheAllocationStrategy
    LRUCacheAllocationStrategy(int m_poolMaxSize_ = {}, int m_poolInitialCapacity_ = {}, int m_poolCacheMaxSize_ = {}, System::Collections::Generic::List_1<System::Collections::Generic::List_1<::Il2CppObject*>*>* m_poolCache_ = {}, System::Collections::Generic::Dictionary_2<int, System::Collections::Generic::List_1<::Il2CppObject*>*>* m_cache_ = {}) noexcept : m_poolMaxSize{m_poolMaxSize_}, m_poolInitialCapacity{m_poolInitialCapacity_}, m_poolCacheMaxSize{m_poolCacheMaxSize_}, m_poolCache{m_poolCache_}, m_cache{m_cache_} {}
    // Creating interface conversion operator: operator UnityEngine::ResourceManagement::Util::IAllocationStrategy
    operator UnityEngine::ResourceManagement::Util::IAllocationStrategy() noexcept {
      return *reinterpret_cast<UnityEngine::ResourceManagement::Util::IAllocationStrategy*>(this);
    }
    // public System.Void .ctor(System.Int32 poolMaxSize, System.Int32 poolCapacity, System.Int32 poolCacheMaxSize, System.Int32 initialPoolCacheCapacity)
    // Offset: 0x19C3B44
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LRUCacheAllocationStrategy* New_ctor(int poolMaxSize, int poolCapacity, int poolCacheMaxSize, int initialPoolCacheCapacity) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ResourceManagement::Util::LRUCacheAllocationStrategy::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LRUCacheAllocationStrategy*, creationType>(poolMaxSize, poolCapacity, poolCacheMaxSize, initialPoolCacheCapacity)));
    }
    // private System.Collections.Generic.List`1<System.Object> GetPool()
    // Offset: 0x19CEEC4
    System::Collections::Generic::List_1<::Il2CppObject*>* GetPool();
    // private System.Void ReleasePool(System.Collections.Generic.List`1<System.Object> pool)
    // Offset: 0x19CEF6C
    void ReleasePool(System::Collections::Generic::List_1<::Il2CppObject*>* pool);
    // public System.Object New(System.Type type, System.Int32 typeHash)
    // Offset: 0x19CEFF4
    ::Il2CppObject* New(System::Type* type, int typeHash);
    // public System.Void Release(System.Int32 typeHash, System.Object obj)
    // Offset: 0x19CF134
    void Release(int typeHash, ::Il2CppObject* obj);
  }; // UnityEngine.ResourceManagement.Util.LRUCacheAllocationStrategy
  #pragma pack(pop)
  static check_size<sizeof(LRUCacheAllocationStrategy), 40 + sizeof(System::Collections::Generic::Dictionary_2<int, System::Collections::Generic::List_1<::Il2CppObject*>*>*)> __UnityEngine_ResourceManagement_Util_LRUCacheAllocationStrategySizeCheck;
  static_assert(sizeof(LRUCacheAllocationStrategy) == 0x30);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ResourceManagement::Util::LRUCacheAllocationStrategy*, "UnityEngine.ResourceManagement.Util", "LRUCacheAllocationStrategy");
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::Util::LRUCacheAllocationStrategy::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::Util::LRUCacheAllocationStrategy::GetPool
// Il2CppName: GetPool
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::List_1<::Il2CppObject*>* (UnityEngine::ResourceManagement::Util::LRUCacheAllocationStrategy::*)()>(&UnityEngine::ResourceManagement::Util::LRUCacheAllocationStrategy::GetPool)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::Util::LRUCacheAllocationStrategy*), "GetPool", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::Util::LRUCacheAllocationStrategy::ReleasePool
// Il2CppName: ReleasePool
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::Util::LRUCacheAllocationStrategy::*)(System::Collections::Generic::List_1<::Il2CppObject*>*)>(&UnityEngine::ResourceManagement::Util::LRUCacheAllocationStrategy::ReleasePool)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::Util::LRUCacheAllocationStrategy*), "ReleasePool", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Collections::Generic::List_1<::Il2CppObject*>*>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::Util::LRUCacheAllocationStrategy::New
// Il2CppName: New
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (UnityEngine::ResourceManagement::Util::LRUCacheAllocationStrategy::*)(System::Type*, int)>(&UnityEngine::ResourceManagement::Util::LRUCacheAllocationStrategy::New)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::Util::LRUCacheAllocationStrategy*), "New", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Type*>(), ::il2cpp_utils::ExtractIndependentType<int>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::Util::LRUCacheAllocationStrategy::Release
// Il2CppName: Release
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::Util::LRUCacheAllocationStrategy::*)(int, ::Il2CppObject*)>(&UnityEngine::ResourceManagement::Util::LRUCacheAllocationStrategy::Release)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::Util::LRUCacheAllocationStrategy*), "Release", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<int>(), ::il2cpp_utils::ExtractIndependentType<::Il2CppObject*>()});
  }
};
