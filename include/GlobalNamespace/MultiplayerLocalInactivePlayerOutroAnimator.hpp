// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Playables
namespace UnityEngine::Playables {
  // Forward declaring type: PlayableDirector
  class PlayableDirector;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: MultiplayerController
  class MultiplayerController;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: MultiplayerLocalInactivePlayerOutroAnimator
  // [TokenAttribute] Offset: FFFFFFFF
  class MultiplayerLocalInactivePlayerOutroAnimator : public UnityEngine::MonoBehaviour {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    private:
    #endif
    // private UnityEngine.Playables.PlayableDirector _outroPlayableDirector
    // Size: 0x8
    // Offset: 0x18
    UnityEngine::Playables::PlayableDirector* outroPlayableDirector;
    // Field size check
    static_assert(sizeof(UnityEngine::Playables::PlayableDirector*) == 0x8);
    // [InjectAttribute] Offset: 0xF08DC8
    // private readonly MultiplayerController _multiplayerController
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::MultiplayerController* multiplayerController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MultiplayerController*) == 0x8);
    public:
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get instance field reference: private UnityEngine.Playables.PlayableDirector _outroPlayableDirector
    UnityEngine::Playables::PlayableDirector*& dyn__outroPlayableDirector();
    // Get instance field reference: private readonly MultiplayerController _multiplayerController
    GlobalNamespace::MultiplayerController*& dyn__multiplayerController();
    // protected System.Void Start()
    // Offset: 0x1176E90
    void Start();
    // public System.Void .ctor()
    // Offset: 0x1176ED0
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MultiplayerLocalInactivePlayerOutroAnimator* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MultiplayerLocalInactivePlayerOutroAnimator::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MultiplayerLocalInactivePlayerOutroAnimator*, creationType>()));
    }
  }; // MultiplayerLocalInactivePlayerOutroAnimator
  #pragma pack(pop)
  static check_size<sizeof(MultiplayerLocalInactivePlayerOutroAnimator), 32 + sizeof(GlobalNamespace::MultiplayerController*)> __GlobalNamespace_MultiplayerLocalInactivePlayerOutroAnimatorSizeCheck;
  static_assert(sizeof(MultiplayerLocalInactivePlayerOutroAnimator) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerLocalInactivePlayerOutroAnimator*, "", "MultiplayerLocalInactivePlayerOutroAnimator");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLocalInactivePlayerOutroAnimator::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLocalInactivePlayerOutroAnimator::*)()>(&GlobalNamespace::MultiplayerLocalInactivePlayerOutroAnimator::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLocalInactivePlayerOutroAnimator*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLocalInactivePlayerOutroAnimator::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
