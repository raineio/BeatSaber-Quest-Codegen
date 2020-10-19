// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include <initializer_list>
// Including type: System.Diagnostics.Tracing.EventTags
#include "System/Diagnostics/Tracing/EventTags.hpp"
// Including type: System.Diagnostics.Tracing.EventKeywords
#include "System/Diagnostics/Tracing/EventKeywords.hpp"
// Including type: System.Diagnostics.Tracing.ConcurrentSet`2
#include "System/Diagnostics/Tracing/ConcurrentSet_2.hpp"
// Including type: System.Collections.Generic.KeyValuePair`2
#include "System/Collections/Generic/KeyValuePair_2.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Diagnostics::Tracing
namespace System::Diagnostics::Tracing {
  // Forward declaring type: TraceLoggingTypeInfo
  class TraceLoggingTypeInfo;
  // Forward declaring type: NameInfo
  class NameInfo;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: ParameterInfo
  class ParameterInfo;
}
// Completed forward declares
// Type namespace: System.Diagnostics.Tracing
namespace System::Diagnostics::Tracing {
  // Autogenerated type: System.Diagnostics.Tracing.TraceLoggingEventTypes
  class TraceLoggingEventTypes : public ::Il2CppObject {
    public:
    // readonly System.Diagnostics.Tracing.TraceLoggingTypeInfo[] typeInfos
    // Offset: 0x10
    ::Array<System::Diagnostics::Tracing::TraceLoggingTypeInfo*>* typeInfos;
    // readonly System.String name
    // Offset: 0x18
    ::Il2CppString* name;
    // readonly System.Diagnostics.Tracing.EventTags tags
    // Offset: 0x20
    System::Diagnostics::Tracing::EventTags tags;
    // readonly System.Byte level
    // Offset: 0x24
    uint8_t level;
    // readonly System.Byte opcode
    // Offset: 0x25
    uint8_t opcode;
    // readonly System.Diagnostics.Tracing.EventKeywords keywords
    // Offset: 0x28
    System::Diagnostics::Tracing::EventKeywords keywords;
    // readonly System.Byte[] typeMetadata
    // Offset: 0x30
    ::Array<uint8_t>* typeMetadata;
    // readonly System.Int32 scratchSize
    // Offset: 0x38
    int scratchSize;
    // readonly System.Int32 dataCount
    // Offset: 0x3C
    int dataCount;
    // readonly System.Int32 pinCount
    // Offset: 0x40
    int pinCount;
    // private System.Diagnostics.Tracing.ConcurrentSet`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Diagnostics.Tracing.EventTags>,System.Diagnostics.Tracing.NameInfo> nameInfos
    // Offset: 0x48
    System::Diagnostics::Tracing::ConcurrentSet_2<System::Collections::Generic::KeyValuePair_2<::Il2CppString*, System::Diagnostics::Tracing::EventTags>, System::Diagnostics::Tracing::NameInfo*> nameInfos;
    // System.Void .ctor(System.String name, System.Diagnostics.Tracing.EventTags tags, params System.Type[] types)
    // Offset: 0x104980C
    static TraceLoggingEventTypes* New_ctor(::Il2CppString* name, System::Diagnostics::Tracing::EventTags tags, ::Array<System::Type*>* types);
    // Creating initializer_list -> params proxy for: System.Void .ctor(System.String name, System.Diagnostics.Tracing.EventTags tags, params System.Type[] types)
    static TraceLoggingEventTypes* New_ctor(::Il2CppString* name, System::Diagnostics::Tracing::EventTags tags, std::initializer_list<System::Type*> types);
    // Creating TArgs -> initializer_list proxy for: System.Void .ctor(System.String name, System.Diagnostics.Tracing.EventTags tags, params System.Type[] types)
    template<class ...TParams>
    static TraceLoggingEventTypes* New_ctor(::Il2CppString* name, System::Diagnostics::Tracing::EventTags tags, TParams&&... types) {
      return New_ctor(name, tags, {types...});
    }
    // System.Void .ctor(System.String name, System.Diagnostics.Tracing.EventTags tags, System.Reflection.ParameterInfo[] paramInfos)
    // Offset: 0x1049BF8
    static TraceLoggingEventTypes* New_ctor(::Il2CppString* name, System::Diagnostics::Tracing::EventTags tags, ::Array<System::Reflection::ParameterInfo*>* paramInfos);
    // private System.Void .ctor(System.Diagnostics.Tracing.EventTags tags, System.String defaultName, System.Diagnostics.Tracing.TraceLoggingTypeInfo[] typeInfos)
    // Offset: 0x10499F8
    static TraceLoggingEventTypes* New_ctor(System::Diagnostics::Tracing::EventTags tags, ::Il2CppString* defaultName, ::Array<System::Diagnostics::Tracing::TraceLoggingTypeInfo*>* typeInfos);
    // System.String get_Name()
    // Offset: 0x104A150
    ::Il2CppString* get_Name();
    // System.Diagnostics.Tracing.EventTags get_Tags()
    // Offset: 0x104A158
    System::Diagnostics::Tracing::EventTags get_Tags();
    // System.Diagnostics.Tracing.NameInfo GetNameInfo(System.String name, System.Diagnostics.Tracing.EventTags tags)
    // Offset: 0x104A160
    System::Diagnostics::Tracing::NameInfo* GetNameInfo(::Il2CppString* name, System::Diagnostics::Tracing::EventTags tags);
    // private System.Diagnostics.Tracing.TraceLoggingTypeInfo[] MakeArray(System.Reflection.ParameterInfo[] paramInfos)
    // Offset: 0x1049E40
    ::Array<System::Diagnostics::Tracing::TraceLoggingTypeInfo*>* MakeArray(::Array<System::Reflection::ParameterInfo*>* paramInfos);
    // static private System.Diagnostics.Tracing.TraceLoggingTypeInfo[] MakeArray(System.Type[] types)
    // Offset: 0x1049850
    static ::Array<System::Diagnostics::Tracing::TraceLoggingTypeInfo*>* MakeArray(::Array<System::Type*>* types);
  }; // System.Diagnostics.Tracing.TraceLoggingEventTypes
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Diagnostics::Tracing::TraceLoggingEventTypes*, "System.Diagnostics.Tracing", "TraceLoggingEventTypes");
#pragma pack(pop)
