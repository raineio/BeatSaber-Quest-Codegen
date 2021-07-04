// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: EncoderFallbackBuffer
  class EncoderFallbackBuffer;
}
// Completed forward declares
// Type namespace: System.Text
namespace System::Text {
  // Size: 0x11
  #pragma pack(push, 1)
  // Autogenerated type: System.Text.EncoderFallback
  class EncoderFallback : public ::Il2CppObject {
    public:
    // System.Boolean bIsMicrosoftBestFitFallback
    // Size: 0x1
    // Offset: 0x10
    bool bIsMicrosoftBestFitFallback;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: EncoderFallback
    EncoderFallback(bool bIsMicrosoftBestFitFallback_ = {}) noexcept : bIsMicrosoftBestFitFallback{bIsMicrosoftBestFitFallback_} {}
    // Creating conversion operator: operator bool
    constexpr operator bool() const noexcept {
      return bIsMicrosoftBestFitFallback;
    }
    // Get static field: static private System.Text.EncoderFallback replacementFallback
    static System::Text::EncoderFallback* _get_replacementFallback();
    // Set static field: static private System.Text.EncoderFallback replacementFallback
    static void _set_replacementFallback(System::Text::EncoderFallback* value);
    // Get static field: static private System.Text.EncoderFallback exceptionFallback
    static System::Text::EncoderFallback* _get_exceptionFallback();
    // Set static field: static private System.Text.EncoderFallback exceptionFallback
    static void _set_exceptionFallback(System::Text::EncoderFallback* value);
    // Get static field: static private System.Object s_InternalSyncObject
    static ::Il2CppObject* _get_s_InternalSyncObject();
    // Set static field: static private System.Object s_InternalSyncObject
    static void _set_s_InternalSyncObject(::Il2CppObject* value);
    // static private System.Object get_InternalSyncObject()
    // Offset: 0x1B6465C
    static ::Il2CppObject* get_InternalSyncObject();
    // static public System.Text.EncoderFallback get_ReplacementFallback()
    // Offset: 0x1B5F23C
    static System::Text::EncoderFallback* get_ReplacementFallback();
    // static public System.Text.EncoderFallback get_ExceptionFallback()
    // Offset: 0x1B646F0
    static System::Text::EncoderFallback* get_ExceptionFallback();
    // public System.Text.EncoderFallbackBuffer CreateFallbackBuffer()
    // Offset: 0xFFFFFFFF
    System::Text::EncoderFallbackBuffer* CreateFallbackBuffer();
    // public System.Int32 get_MaxCharCount()
    // Offset: 0xFFFFFFFF
    int get_MaxCharCount();
    // protected System.Void .ctor()
    // Offset: 0x1B640A0
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static EncoderFallback* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Text::EncoderFallback::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<EncoderFallback*, creationType>()));
    }
  }; // System.Text.EncoderFallback
  #pragma pack(pop)
  static check_size<sizeof(EncoderFallback), 16 + sizeof(bool)> __System_Text_EncoderFallbackSizeCheck;
  static_assert(sizeof(EncoderFallback) == 0x11);
}
DEFINE_IL2CPP_ARG_TYPE(System::Text::EncoderFallback*, "System.Text", "EncoderFallback");
// Writing MetadataGetter for method: System::Text::EncoderFallback::get_InternalSyncObject
// Il2CppName: get_InternalSyncObject
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (*)()>(&System::Text::EncoderFallback::get_InternalSyncObject)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Text::EncoderFallback*), "get_InternalSyncObject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Text::EncoderFallback::get_ReplacementFallback
// Il2CppName: get_ReplacementFallback
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Text::EncoderFallback* (*)()>(&System::Text::EncoderFallback::get_ReplacementFallback)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Text::EncoderFallback*), "get_ReplacementFallback", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Text::EncoderFallback::get_ExceptionFallback
// Il2CppName: get_ExceptionFallback
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Text::EncoderFallback* (*)()>(&System::Text::EncoderFallback::get_ExceptionFallback)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Text::EncoderFallback*), "get_ExceptionFallback", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Text::EncoderFallback::CreateFallbackBuffer
// Il2CppName: CreateFallbackBuffer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Text::EncoderFallbackBuffer* (System::Text::EncoderFallback::*)()>(&System::Text::EncoderFallback::CreateFallbackBuffer)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Text::EncoderFallback*), "CreateFallbackBuffer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Text::EncoderFallback::get_MaxCharCount
// Il2CppName: get_MaxCharCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Text::EncoderFallback::*)()>(&System::Text::EncoderFallback::get_MaxCharCount)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Text::EncoderFallback*), "get_MaxCharCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Text::EncoderFallback::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
