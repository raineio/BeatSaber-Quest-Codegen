// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Valve.VR.IVRChaperone
#include "Valve/VR/IVRChaperone.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Valve::VR
namespace Valve::VR {
  // Forward declaring type: HmdColor_t
  struct HmdColor_t;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
// Type namespace: Valve.VR
namespace Valve::VR {
  // Forward declaring type: _SetSceneColor
  class _SetSceneColor;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(Valve::VR::IVRChaperone::_SetSceneColor);
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::IVRChaperone::_SetSceneColor*, "Valve.VR", "IVRChaperone/_SetSceneColor");
// Type namespace: Valve.VR
namespace Valve::VR {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: Valve.VR.IVRChaperone/Valve.VR._SetSceneColor
  // [TokenAttribute] Offset: FFFFFFFF
  // [UnmanagedFunctionPointerAttribute] Offset: EF70F8
  class IVRChaperone::_SetSceneColor : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x18D062C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRChaperone::_SetSceneColor* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("Valve::VR::IVRChaperone::_SetSceneColor::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRChaperone::_SetSceneColor*, creationType>(object, method)));
    }
    // public System.Void Invoke(Valve.VR.HmdColor_t color)
    // Offset: 0x18C8DB4
    void Invoke(Valve::VR::HmdColor_t color);
    // public System.IAsyncResult BeginInvoke(Valve.VR.HmdColor_t color, System.AsyncCallback callback, System.Object object)
    // Offset: 0x18D063C
    System::IAsyncResult* BeginInvoke(Valve::VR::HmdColor_t color, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0x18D06CC
    void EndInvoke(System::IAsyncResult* result);
  }; // Valve.VR.IVRChaperone/Valve.VR._SetSceneColor
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Valve::VR::IVRChaperone::_SetSceneColor::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Valve::VR::IVRChaperone::_SetSceneColor::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Valve::VR::IVRChaperone::_SetSceneColor::*)(Valve::VR::HmdColor_t)>(&Valve::VR::IVRChaperone::_SetSceneColor::Invoke)> {
  static const MethodInfo* get() {
    static auto* color = &::il2cpp_utils::GetClassFromName("Valve.VR", "HmdColor_t")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVRChaperone::_SetSceneColor*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{color});
  }
};
// Writing MetadataGetter for method: Valve::VR::IVRChaperone::_SetSceneColor::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult* (Valve::VR::IVRChaperone::_SetSceneColor::*)(Valve::VR::HmdColor_t, System::AsyncCallback*, ::Il2CppObject*)>(&Valve::VR::IVRChaperone::_SetSceneColor::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* color = &::il2cpp_utils::GetClassFromName("Valve.VR", "HmdColor_t")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVRChaperone::_SetSceneColor*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{color, callback, object});
  }
};
// Writing MetadataGetter for method: Valve::VR::IVRChaperone::_SetSceneColor::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Valve::VR::IVRChaperone::_SetSceneColor::*)(System::IAsyncResult*)>(&Valve::VR::IVRChaperone::_SetSceneColor::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVRChaperone::_SetSceneColor*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
