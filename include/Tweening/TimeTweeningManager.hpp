// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Tweening.TweeningManager
#include "Tweening/TweeningManager.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: Tweening
namespace Tweening {
  // Forward declaring type: TimeTweeningManager
  class TimeTweeningManager;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Tweening::TimeTweeningManager);
DEFINE_IL2CPP_ARG_TYPE(::Tweening::TimeTweeningManager*, "Tweening", "TimeTweeningManager");
// Type namespace: Tweening
namespace Tweening {
  // Size: 0x3C
  #pragma pack(push, 1)
  // Autogenerated type: Tweening.TimeTweeningManager
  // [TokenAttribute] Offset: FFFFFFFF
  class TimeTweeningManager : public ::Tweening::TweeningManager {
    public:
    // public System.Void .ctor()
    // Offset: 0x1493190
    // Implemented from: Tweening.TweeningManager
    // Base method: System.Void TweeningManager::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TimeTweeningManager* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Tweening::TimeTweeningManager::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TimeTweeningManager*, creationType>()));
    }
    // protected override System.Single GetTime()
    // Offset: 0x1493188
    // Implemented from: Tweening.TweeningManager
    // Base method: System.Single TweeningManager::GetTime()
    float GetTime();
  }; // Tweening.TimeTweeningManager
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Tweening::TimeTweeningManager::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Tweening::TimeTweeningManager::GetTime
// Il2CppName: GetTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (Tweening::TimeTweeningManager::*)()>(&Tweening::TimeTweeningManager::GetTime)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Tweening::TimeTweeningManager*), "GetTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
