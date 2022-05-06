// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Resources.IResourceGroveler
#include "System/Resources/IResourceGroveler.hpp"
// Including type: System.Resources.ResourceManager
#include "System/Resources/ResourceManager.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: System.Resources
namespace System::Resources {
  // Forward declaring type: FileBasedResourceGroveler
  class FileBasedResourceGroveler;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Resources::FileBasedResourceGroveler);
DEFINE_IL2CPP_ARG_TYPE(::System::Resources::FileBasedResourceGroveler*, "System.Resources", "FileBasedResourceGroveler");
// Type namespace: System.Resources
namespace System::Resources {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: System.Resources.FileBasedResourceGroveler
  // [TokenAttribute] Offset: FFFFFFFF
  class FileBasedResourceGroveler : public ::Il2CppObject/*, public ::System::Resources::IResourceGroveler*/ {
    public:
    public:
    // private System.Resources.ResourceManager/System.Resources.ResourceManagerMediator _mediator
    // Size: 0x8
    // Offset: 0x10
    ::System::Resources::ResourceManager::ResourceManagerMediator* mediator;
    // Field size check
    static_assert(sizeof(::System::Resources::ResourceManager::ResourceManagerMediator*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::System::Resources::IResourceGroveler
    operator ::System::Resources::IResourceGroveler() noexcept {
      return *reinterpret_cast<::System::Resources::IResourceGroveler*>(this);
    }
    // Creating conversion operator: operator ::System::Resources::ResourceManager::ResourceManagerMediator*
    constexpr operator ::System::Resources::ResourceManager::ResourceManagerMediator*() const noexcept {
      return mediator;
    }
    // Get instance field reference: private System.Resources.ResourceManager/System.Resources.ResourceManagerMediator _mediator
    [[deprecated("Use field access instead!")]] ::System::Resources::ResourceManager::ResourceManagerMediator*& dyn__mediator();
    // public System.Void .ctor(System.Resources.ResourceManager/System.Resources.ResourceManagerMediator mediator)
    // Offset: 0x1D7CB18
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FileBasedResourceGroveler* New_ctor(::System::Resources::ResourceManager::ResourceManagerMediator* mediator) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Resources::FileBasedResourceGroveler::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FileBasedResourceGroveler*, creationType>(mediator)));
    }
  }; // System.Resources.FileBasedResourceGroveler
  #pragma pack(pop)
  static check_size<sizeof(FileBasedResourceGroveler), 16 + sizeof(::System::Resources::ResourceManager::ResourceManagerMediator*)> __System_Resources_FileBasedResourceGrovelerSizeCheck;
  static_assert(sizeof(FileBasedResourceGroveler) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Resources::FileBasedResourceGroveler::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
