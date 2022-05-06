// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Newtonsoft::Json
namespace Newtonsoft::Json {
  // Forward declaring type: IArrayPool`1<T>
  template<typename T>
  class IArrayPool_1;
}
// Completed forward declares
// Type namespace: Newtonsoft.Json.Utilities
namespace Newtonsoft::Json::Utilities {
  // Forward declaring type: BufferUtils
  class BufferUtils;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Newtonsoft::Json::Utilities::BufferUtils);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Utilities::BufferUtils*, "Newtonsoft.Json.Utilities", "BufferUtils");
// Type namespace: Newtonsoft.Json.Utilities
namespace Newtonsoft::Json::Utilities {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Newtonsoft.Json.Utilities.BufferUtils
  // [TokenAttribute] Offset: FFFFFFFF
  // [PreserveAttribute] Offset: 10AF004
  class BufferUtils : public ::Il2CppObject {
    public:
    // static public System.Char[] RentBuffer(Newtonsoft.Json.IArrayPool`1<System.Char> bufferPool, System.Int32 minSize)
    // Offset: 0x2088498
    static ::ArrayW<::Il2CppChar> RentBuffer(::Newtonsoft::Json::IArrayPool_1<::Il2CppChar>* bufferPool, int minSize);
    // static public System.Void ReturnBuffer(Newtonsoft.Json.IArrayPool`1<System.Char> bufferPool, System.Char[] buffer)
    // Offset: 0x2088570
    static void ReturnBuffer(::Newtonsoft::Json::IArrayPool_1<::Il2CppChar>* bufferPool, ::ArrayW<::Il2CppChar> buffer);
    // static public System.Char[] EnsureBufferSize(Newtonsoft.Json.IArrayPool`1<System.Char> bufferPool, System.Int32 size, System.Char[] buffer)
    // Offset: 0x208863C
    static ::ArrayW<::Il2CppChar> EnsureBufferSize(::Newtonsoft::Json::IArrayPool_1<::Il2CppChar>* bufferPool, int size, ::ArrayW<::Il2CppChar> buffer);
  }; // Newtonsoft.Json.Utilities.BufferUtils
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Newtonsoft::Json::Utilities::BufferUtils::RentBuffer
// Il2CppName: RentBuffer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::Il2CppChar> (*)(::Newtonsoft::Json::IArrayPool_1<::Il2CppChar>*, int)>(&Newtonsoft::Json::Utilities::BufferUtils::RentBuffer)> {
  static const MethodInfo* get() {
    static auto* bufferPool = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("Newtonsoft.Json", "IArrayPool`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Char")})->byval_arg;
    static auto* minSize = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Utilities::BufferUtils*), "RentBuffer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bufferPool, minSize});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Utilities::BufferUtils::ReturnBuffer
// Il2CppName: ReturnBuffer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Newtonsoft::Json::IArrayPool_1<::Il2CppChar>*, ::ArrayW<::Il2CppChar>)>(&Newtonsoft::Json::Utilities::BufferUtils::ReturnBuffer)> {
  static const MethodInfo* get() {
    static auto* bufferPool = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("Newtonsoft.Json", "IArrayPool`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Char")})->byval_arg;
    static auto* buffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Char"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Utilities::BufferUtils*), "ReturnBuffer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bufferPool, buffer});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Utilities::BufferUtils::EnsureBufferSize
// Il2CppName: EnsureBufferSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::Il2CppChar> (*)(::Newtonsoft::Json::IArrayPool_1<::Il2CppChar>*, int, ::ArrayW<::Il2CppChar>)>(&Newtonsoft::Json::Utilities::BufferUtils::EnsureBufferSize)> {
  static const MethodInfo* get() {
    static auto* bufferPool = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("Newtonsoft.Json", "IArrayPool`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Char")})->byval_arg;
    static auto* size = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* buffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Char"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Utilities::BufferUtils*), "EnsureBufferSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bufferPool, size, buffer});
  }
};
