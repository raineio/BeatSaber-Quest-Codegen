// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.PropertyAttribute
#include "UnityEngine/PropertyAttribute.hpp"
// Completed includes
// Type namespace: UnityEngine
namespace UnityEngine {
  // Autogenerated type: UnityEngine.HeaderAttribute
  class HeaderAttribute : public UnityEngine::PropertyAttribute {
    public:
    // public readonly System.String header
    // Offset: 0x10
    ::Il2CppString* header;
    // Creating conversion operator: operator ::Il2CppString*
    constexpr operator ::Il2CppString*() const noexcept {
      return header;
    }
    // public System.Void .ctor(System.String header)
    // Offset: 0x1797920
    static HeaderAttribute* New_ctor(::Il2CppString* header);
  }; // UnityEngine.HeaderAttribute
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::HeaderAttribute*, "UnityEngine", "HeaderAttribute");
#pragma pack(pop)
