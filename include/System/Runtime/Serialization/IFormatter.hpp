// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: ISurrogateSelector
  class ISurrogateSelector;
}
// Forward declaring namespace: System::IO
namespace System::IO {
  // Forward declaring type: Stream
  class Stream;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct Il2CppObject;
// Completed il2cpp-utils forward declares
// Type namespace: System.Runtime.Serialization
namespace System::Runtime::Serialization {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.Serialization.IFormatter
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: E5F6A4
  class IFormatter {
    public:
    // public System.Void set_SurrogateSelector(System.Runtime.Serialization.ISurrogateSelector value)
    // Offset: 0xFFFFFFFF
    void set_SurrogateSelector(System::Runtime::Serialization::ISurrogateSelector* value);
    // public System.Void Serialize(System.IO.Stream serializationStream, System.Object graph)
    // Offset: 0xFFFFFFFF
    void Serialize(System::IO::Stream* serializationStream, ::Il2CppObject* graph);
  }; // System.Runtime.Serialization.IFormatter
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Serialization::IFormatter*, "System.Runtime.Serialization", "IFormatter");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Runtime::Serialization::IFormatter::set_SurrogateSelector
// Il2CppName: set_SurrogateSelector
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Serialization::IFormatter::*)(System::Runtime::Serialization::ISurrogateSelector*)>(&System::Runtime::Serialization::IFormatter::set_SurrogateSelector)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "ISurrogateSelector")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::IFormatter*), "set_SurrogateSelector", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::IFormatter::Serialize
// Il2CppName: Serialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Serialization::IFormatter::*)(System::IO::Stream*, ::Il2CppObject*)>(&System::Runtime::Serialization::IFormatter::Serialize)> {
  static const MethodInfo* get() {
    static auto* serializationStream = &::il2cpp_utils::GetClassFromName("System.IO", "Stream")->byval_arg;
    static auto* graph = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::IFormatter*), "Serialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{serializationStream, graph});
  }
};