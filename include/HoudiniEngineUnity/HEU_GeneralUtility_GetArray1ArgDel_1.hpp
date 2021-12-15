// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: HoudiniEngineUnity.HEU_GeneralUtility
#include "HoudiniEngineUnity/HEU_GeneralUtility.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "extern/beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(HoudiniEngineUnity::HEU_GeneralUtility::GetArray1ArgDel_1, "HoudiniEngineUnity", "HEU_GeneralUtility/GetArray1ArgDel`1");
// Type namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // WARNING Size may be invalid!
  // Autogenerated type: HoudiniEngineUnity.HEU_GeneralUtility/HoudiniEngineUnity.GetArray1ArgDel`1
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename T>
  class HEU_GeneralUtility::GetArray1ArgDel_1 : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0xFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HEU_GeneralUtility::GetArray1ArgDel_1<T>* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("HoudiniEngineUnity::HEU_GeneralUtility::GetArray1ArgDel_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HEU_GeneralUtility::GetArray1ArgDel_1<T>*, creationType>(object, method)));
    }
    // public System.Boolean Invoke(System.Int32 arg1, out T[] data, System.Int32 start, System.Int32 length)
    // Offset: 0xFFFFFFFF
    bool Invoke(int arg1, ByRef<::ArrayW<T>> data, int start, int length) {
      static auto ___internal__logger = ::Logger::get().WithContext("HoudiniEngineUnity::HEU_GeneralUtility::GetArray1ArgDel_1::Invoke");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Invoke", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(arg1), ::il2cpp_utils::ExtractIndependentType<::ArrayW<T>&>(), ::il2cpp_utils::ExtractType(start), ::il2cpp_utils::ExtractType(length)})));
      return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___internal__method, arg1, byref(data), start, length);
    }
    // public System.IAsyncResult BeginInvoke(System.Int32 arg1, out T[] data, System.Int32 start, System.Int32 length, System.AsyncCallback callback, System.Object object)
    // Offset: 0xFFFFFFFF
    System::IAsyncResult* BeginInvoke(int arg1, ByRef<::ArrayW<T>> data, int start, int length, System::AsyncCallback* callback, ::Il2CppObject* object) {
      static auto ___internal__logger = ::Logger::get().WithContext("HoudiniEngineUnity::HEU_GeneralUtility::GetArray1ArgDel_1::BeginInvoke");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "BeginInvoke", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(arg1), ::il2cpp_utils::ExtractIndependentType<::ArrayW<T>&>(), ::il2cpp_utils::ExtractType(start), ::il2cpp_utils::ExtractType(length), ::il2cpp_utils::ExtractType(callback), ::il2cpp_utils::ExtractType(object)})));
      return ::il2cpp_utils::RunMethodThrow<System::IAsyncResult*, false>(this, ___internal__method, arg1, byref(data), start, length, callback, object);
    }
    // public System.Boolean EndInvoke(System.IAsyncResult result)
    // Offset: 0xFFFFFFFF
    bool EndInvoke(System::IAsyncResult* result) {
      static auto ___internal__logger = ::Logger::get().WithContext("HoudiniEngineUnity::HEU_GeneralUtility::GetArray1ArgDel_1::EndInvoke");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "EndInvoke", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(result)})));
      return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___internal__method, result);
    }
  }; // HoudiniEngineUnity.HEU_GeneralUtility/HoudiniEngineUnity.GetArray1ArgDel`1
  // Could not write size check! Type: HoudiniEngineUnity.HEU_GeneralUtility/HoudiniEngineUnity.GetArray1ArgDel`1 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
