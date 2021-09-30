// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.IDisposable
#include "System/IDisposable.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
// Completed includes
// Begin il2cpp-utils forward declares
struct Il2CppString;
// Completed il2cpp-utils forward declares
// Type namespace: Mono
namespace Mono {
  // Size: 0x10
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: Mono.SafeStringMarshal
  // [TokenAttribute] Offset: FFFFFFFF
  struct SafeStringMarshal/*, public System::ValueType, public System::IDisposable*/ {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    private:
    #endif
    // private readonly System.String str
    // Size: 0x8
    // Offset: 0x0
    ::Il2CppString* str;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.IntPtr marshaled_string
    // Size: 0x8
    // Offset: 0x8
    System::IntPtr marshaled_string;
    // Field size check
    static_assert(sizeof(System::IntPtr) == 0x8);
    public:
    // Creating value type constructor for type: SafeStringMarshal
    constexpr SafeStringMarshal(::Il2CppString* str_ = {}, System::IntPtr marshaled_string_ = {}) noexcept : str{str_}, marshaled_string{marshaled_string_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator System::IDisposable
    operator System::IDisposable() noexcept {
      return *reinterpret_cast<System::IDisposable*>(this);
    }
    // Get instance field reference: private readonly System.String str
    ::Il2CppString*& dyn_str();
    // Get instance field reference: private System.IntPtr marshaled_string
    System::IntPtr& dyn_marshaled_string();
    // public System.IntPtr get_Value()
    // Offset: 0x1C40130
    System::IntPtr get_Value();
    // public System.Void .ctor(System.String str)
    // Offset: 0x1C3FDA4
    SafeStringMarshal(::Il2CppString* str);
    // static public System.IntPtr StringToUtf8(System.String str)
    // Offset: 0x1C40128
    static System::IntPtr StringToUtf8(::Il2CppString* str);
    // static public System.Void GFree(System.IntPtr ptr)
    // Offset: 0x1C4012C
    static void GFree(System::IntPtr ptr);
    // public System.Void Dispose()
    // Offset: 0x1C40198
    void Dispose();
  }; // Mono.SafeStringMarshal
  #pragma pack(pop)
  static check_size<sizeof(SafeStringMarshal), 8 + sizeof(System::IntPtr)> __Mono_SafeStringMarshalSizeCheck;
  static_assert(sizeof(SafeStringMarshal) == 0x10);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Mono::SafeStringMarshal, "Mono", "SafeStringMarshal");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Mono::SafeStringMarshal::get_Value
// Il2CppName: get_Value
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IntPtr (Mono::SafeStringMarshal::*)()>(&Mono::SafeStringMarshal::get_Value)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::SafeStringMarshal), "get_Value", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::SafeStringMarshal::SafeStringMarshal
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Mono::SafeStringMarshal::StringToUtf8
// Il2CppName: StringToUtf8
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IntPtr (*)(::Il2CppString*)>(&Mono::SafeStringMarshal::StringToUtf8)> {
  static const MethodInfo* get() {
    static auto* str = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::SafeStringMarshal), "StringToUtf8", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{str});
  }
};
// Writing MetadataGetter for method: Mono::SafeStringMarshal::GFree
// Il2CppName: GFree
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::IntPtr)>(&Mono::SafeStringMarshal::GFree)> {
  static const MethodInfo* get() {
    static auto* ptr = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::SafeStringMarshal), "GFree", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ptr});
  }
};
// Writing MetadataGetter for method: Mono::SafeStringMarshal::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::SafeStringMarshal::*)()>(&Mono::SafeStringMarshal::Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::SafeStringMarshal), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
