// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Skipping declaration: IntPtr because it is already included!
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Forward declaring namespace: Mono::Math
namespace Mono::Math {
  // Forward declaring type: BigInteger
  class BigInteger;
}
// Forward declaring namespace: Mono::Math::Prime
namespace Mono::Math::Prime {
  // Forward declaring type: ConfidenceFactor
  struct ConfidenceFactor;
}
// Completed forward declares
// Type namespace: Mono.Math.Prime
namespace Mono::Math::Prime {
  // Autogenerated type: Mono.Math.Prime.PrimalityTest
  class PrimalityTest : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x191EE14
    static PrimalityTest* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public System.Boolean Invoke(Mono.Math.BigInteger bi, Mono.Math.Prime.ConfidenceFactor confidence)
    // Offset: 0x191F1C8
    bool Invoke(Mono::Math::BigInteger* bi, Mono::Math::Prime::ConfidenceFactor confidence);
    // public System.IAsyncResult BeginInvoke(Mono.Math.BigInteger bi, Mono.Math.Prime.ConfidenceFactor confidence, System.AsyncCallback callback, System.Object object)
    // Offset: 0x191F608
    System::IAsyncResult* BeginInvoke(Mono::Math::BigInteger* bi, Mono::Math::Prime::ConfidenceFactor confidence, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Boolean EndInvoke(System.IAsyncResult result)
    // Offset: 0x191F6A4
    bool EndInvoke(System::IAsyncResult* result);
  }; // Mono.Math.Prime.PrimalityTest
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Mono::Math::Prime::PrimalityTest*, "Mono.Math.Prime", "PrimalityTest");
#pragma pack(pop)
