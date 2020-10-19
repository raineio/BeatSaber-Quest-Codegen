// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Oculus.Platform.CAPI
#include "Oculus/Platform/CAPI.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Skipping declaration: IntPtr because it is already included!
  // Forward declaring type: UIntPtr
  struct UIntPtr;
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Autogenerated type: Oculus.Platform.CAPI/FilterCallback
  class CAPI::FilterCallback : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x112CD78
    static CAPI::FilterCallback* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public System.Void Invoke(in System.Int16[] pcmData, System.UIntPtr pcmDataLength, System.Int32 frequency, System.Int32 numChannels)
    // Offset: 0x112CD8C
    void Invoke(::Array<int16_t>*& pcmData, System::UIntPtr pcmDataLength, int frequency, int numChannels);
    // public System.IAsyncResult BeginInvoke(in System.Int16[] pcmData, System.UIntPtr pcmDataLength, System.Int32 frequency, System.Int32 numChannels, System.AsyncCallback callback, System.Object object)
    // Offset: 0x112D024
    System::IAsyncResult* BeginInvoke(::Array<int16_t>*& pcmData, System::UIntPtr pcmDataLength, int frequency, int numChannels, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0x112D0F4
    void EndInvoke(System::IAsyncResult* result);
  }; // Oculus.Platform.CAPI/FilterCallback
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::CAPI::FilterCallback*, "Oculus.Platform", "CAPI/FilterCallback");
#pragma pack(pop)
