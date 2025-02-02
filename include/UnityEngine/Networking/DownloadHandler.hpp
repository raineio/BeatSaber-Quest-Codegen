// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.IDisposable
#include "System/IDisposable.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: Encoding
  class Encoding;
}
// Forward declaring namespace: UnityEngine::Networking
namespace UnityEngine::Networking {
  // Forward declaring type: UnityWebRequest
  class UnityWebRequest;
}
// Completed forward declares
// Type namespace: UnityEngine.Networking
namespace UnityEngine::Networking {
  // Forward declaring type: DownloadHandler
  class DownloadHandler;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Networking::DownloadHandler);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Networking::DownloadHandler*, "UnityEngine.Networking", "DownloadHandler");
// Type namespace: UnityEngine.Networking
namespace UnityEngine::Networking {
  // Size: 0x18
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.Networking.DownloadHandler
  // [TokenAttribute] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: 10C9988
  class DownloadHandler : public ::Il2CppObject/*, public ::System::IDisposable*/ {
    public:
    public:
    // System.IntPtr m_Ptr
    // Size: 0x8
    // Offset: 0x10
    ::System::IntPtr m_Ptr;
    // Field size check
    static_assert(sizeof(::System::IntPtr) == 0x8);
    public:
    // Creating interface conversion operator: operator ::System::IDisposable
    operator ::System::IDisposable() noexcept {
      return *reinterpret_cast<::System::IDisposable*>(this);
    }
    // Creating interface conversion operator: i_IDisposable
    inline ::System::IDisposable* i_IDisposable() noexcept {
      return reinterpret_cast<::System::IDisposable*>(this);
    }
    // Creating conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept {
      return m_Ptr;
    }
    // Get instance field reference: System.IntPtr m_Ptr
    [[deprecated("Use field access instead!")]] ::System::IntPtr& dyn_m_Ptr();
    // public System.String get_text()
    // Offset: 0x2B70508
    ::StringW get_text();
    // System.Void .ctor()
    // Offset: 0x2B70418
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DownloadHandler* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Networking::DownloadHandler::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DownloadHandler*, creationType>()));
    }
    // private System.Void Release()
    // Offset: 0x2B703D8
    void Release();
    // public System.Void Dispose()
    // Offset: 0x2B70488
    void Dispose();
    // protected System.Byte[] GetData()
    // Offset: 0x2B70514
    ::ArrayW<uint8_t> GetData();
    // protected System.String GetText()
    // Offset: 0x2B7051C
    ::StringW GetText();
    // private System.Text.Encoding GetTextEncoder()
    // Offset: 0x2B705BC
    ::System::Text::Encoding* GetTextEncoder();
    // private System.String GetContentType()
    // Offset: 0x2B70850
    ::StringW GetContentType();
    // static protected T GetCheckedDownloader(UnityEngine.Networking.UnityWebRequest www)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class T>
    static T GetCheckedDownloader(::UnityEngine::Networking::UnityWebRequest* www) {
      static_assert(std::is_convertible_v<T, ::UnityEngine::Networking::DownloadHandler*>);
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Networking::DownloadHandler::GetCheckedDownloader");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("UnityEngine.Networking", "DownloadHandler", "GetCheckedDownloader", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(www)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<T, false>(static_cast<Il2CppObject*>(nullptr), ___generic__method, www);
    }
    // static System.Byte[] InternalGetByteArray(UnityEngine.Networking.DownloadHandler dh)
    // Offset: 0x2B70890
    static ::ArrayW<uint8_t> InternalGetByteArray(::UnityEngine::Networking::DownloadHandler* dh);
    // protected override System.Void Finalize()
    // Offset: 0x2B70420
    // Implemented from: System.Object
    // Base method: System.Void Object::Finalize()
    void Finalize();
  }; // UnityEngine.Networking.DownloadHandler
  #pragma pack(pop)
  static check_size<sizeof(DownloadHandler), 16 + sizeof(::System::IntPtr)> __UnityEngine_Networking_DownloadHandlerSizeCheck;
  static_assert(sizeof(DownloadHandler) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Networking::DownloadHandler::get_text
// Il2CppName: get_text
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::Networking::DownloadHandler::*)()>(&UnityEngine::Networking::DownloadHandler::get_text)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Networking::DownloadHandler*), "get_text", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Networking::DownloadHandler::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::Networking::DownloadHandler::Release
// Il2CppName: Release
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Networking::DownloadHandler::*)()>(&UnityEngine::Networking::DownloadHandler::Release)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Networking::DownloadHandler*), "Release", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Networking::DownloadHandler::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Networking::DownloadHandler::*)()>(&UnityEngine::Networking::DownloadHandler::Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Networking::DownloadHandler*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Networking::DownloadHandler::GetData
// Il2CppName: GetData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (UnityEngine::Networking::DownloadHandler::*)()>(&UnityEngine::Networking::DownloadHandler::GetData)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Networking::DownloadHandler*), "GetData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Networking::DownloadHandler::GetText
// Il2CppName: GetText
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::Networking::DownloadHandler::*)()>(&UnityEngine::Networking::DownloadHandler::GetText)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Networking::DownloadHandler*), "GetText", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Networking::DownloadHandler::GetTextEncoder
// Il2CppName: GetTextEncoder
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Text::Encoding* (UnityEngine::Networking::DownloadHandler::*)()>(&UnityEngine::Networking::DownloadHandler::GetTextEncoder)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Networking::DownloadHandler*), "GetTextEncoder", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Networking::DownloadHandler::GetContentType
// Il2CppName: GetContentType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::Networking::DownloadHandler::*)()>(&UnityEngine::Networking::DownloadHandler::GetContentType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Networking::DownloadHandler*), "GetContentType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Networking::DownloadHandler::GetCheckedDownloader
// Il2CppName: GetCheckedDownloader
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: UnityEngine::Networking::DownloadHandler::InternalGetByteArray
// Il2CppName: InternalGetByteArray
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (*)(::UnityEngine::Networking::DownloadHandler*)>(&UnityEngine::Networking::DownloadHandler::InternalGetByteArray)> {
  static const MethodInfo* get() {
    static auto* dh = &::il2cpp_utils::GetClassFromName("UnityEngine.Networking", "DownloadHandler")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Networking::DownloadHandler*), "InternalGetByteArray", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{dh});
  }
};
// Writing MetadataGetter for method: UnityEngine::Networking::DownloadHandler::Finalize
// Il2CppName: Finalize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Networking::DownloadHandler::*)()>(&UnityEngine::Networking::DownloadHandler::Finalize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Networking::DownloadHandler*), "Finalize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
