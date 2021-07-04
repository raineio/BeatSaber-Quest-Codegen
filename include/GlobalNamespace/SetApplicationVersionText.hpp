// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: TMPro
namespace TMPro {
  // Forward declaring type: TextMeshPro
  class TextMeshPro;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: SetApplicationVersionText
  class SetApplicationVersionText : public UnityEngine::MonoBehaviour {
    public:
    // private TMPro.TextMeshPro _versionText
    // Size: 0x8
    // Offset: 0x18
    TMPro::TextMeshPro* versionText;
    // Field size check
    static_assert(sizeof(TMPro::TextMeshPro*) == 0x8);
    // Creating value type constructor for type: SetApplicationVersionText
    SetApplicationVersionText(TMPro::TextMeshPro* versionText_ = {}) noexcept : versionText{versionText_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // protected System.Void Start()
    // Offset: 0x10DC0F8
    void Start();
    // public System.Void .ctor()
    // Offset: 0x10DC130
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SetApplicationVersionText* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::SetApplicationVersionText::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SetApplicationVersionText*, creationType>()));
    }
  }; // SetApplicationVersionText
  #pragma pack(pop)
  static check_size<sizeof(SetApplicationVersionText), 24 + sizeof(TMPro::TextMeshPro*)> __GlobalNamespace_SetApplicationVersionTextSizeCheck;
  static_assert(sizeof(SetApplicationVersionText) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SetApplicationVersionText*, "", "SetApplicationVersionText");
// Writing MetadataGetter for method: GlobalNamespace::SetApplicationVersionText::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SetApplicationVersionText::*)()>(&GlobalNamespace::SetApplicationVersionText::Start)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SetApplicationVersionText*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SetApplicationVersionText::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
