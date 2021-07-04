// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Collections.Generic.KeyValuePair`2
#include "System/Collections/Generic/KeyValuePair_2.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: NUnit::Framework::Constraints
namespace NUnit::Framework::Constraints {
  // Forward declaring type: EqualityAdapter
  class EqualityAdapter;
  // Forward declaring type: Tolerance
  class Tolerance;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: IList`1<T>
  template<typename T>
  class IList_1;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
  // Forward declaring type: Array
  class Array;
}
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: MethodInfo
  class MethodInfo;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IDictionary
  class IDictionary;
  // Forward declaring type: DictionaryEntry
  struct DictionaryEntry;
  // Forward declaring type: IEnumerable
  class IEnumerable;
}
// Forward declaring namespace: System::IO
namespace System::IO {
  // Forward declaring type: DirectoryInfo
  class DirectoryInfo;
  // Forward declaring type: Stream
  class Stream;
}
// Completed forward declares
// Type namespace: NUnit.Framework.Constraints
namespace NUnit::Framework::Constraints {
  // Size: 0x29
  #pragma pack(push, 1)
  // Autogenerated type: NUnit.Framework.Constraints.NUnitEqualityComparer
  class NUnitEqualityComparer : public ::Il2CppObject {
    public:
    // Nested type: NUnit::Framework::Constraints::NUnitEqualityComparer::FailurePoint
    class FailurePoint;
    // private System.Boolean caseInsensitive
    // Size: 0x1
    // Offset: 0x10
    bool caseInsensitive;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean compareAsCollection
    // Size: 0x1
    // Offset: 0x11
    bool compareAsCollection;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: compareAsCollection and: externalComparers
    char __padding1[0x6] = {};
    // private System.Collections.Generic.List`1<NUnit.Framework.Constraints.EqualityAdapter> externalComparers
    // Size: 0x8
    // Offset: 0x18
    System::Collections::Generic::List_1<NUnit::Framework::Constraints::EqualityAdapter*>* externalComparers;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<NUnit::Framework::Constraints::EqualityAdapter*>*) == 0x8);
    // private System.Collections.Generic.List`1<NUnit.Framework.Constraints.NUnitEqualityComparer/FailurePoint> failurePoints
    // Size: 0x8
    // Offset: 0x20
    System::Collections::Generic::List_1<NUnit::Framework::Constraints::NUnitEqualityComparer::FailurePoint*>* failurePoints;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<NUnit::Framework::Constraints::NUnitEqualityComparer::FailurePoint*>*) == 0x8);
    // [DebuggerBrowsableAttribute] Offset: 0xE06000
    // [CompilerGeneratedAttribute] Offset: 0xE06000
    // private System.Boolean <WithSameOffset>k__BackingField
    // Size: 0x1
    // Offset: 0x28
    bool WithSameOffset;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: NUnitEqualityComparer
    NUnitEqualityComparer(bool caseInsensitive_ = {}, bool compareAsCollection_ = {}, System::Collections::Generic::List_1<NUnit::Framework::Constraints::EqualityAdapter*>* externalComparers_ = {}, System::Collections::Generic::List_1<NUnit::Framework::Constraints::NUnitEqualityComparer::FailurePoint*>* failurePoints_ = {}, bool WithSameOffset_ = {}) noexcept : caseInsensitive{caseInsensitive_}, compareAsCollection{compareAsCollection_}, externalComparers{externalComparers_}, failurePoints{failurePoints_}, WithSameOffset{WithSameOffset_} {}
    // Get static field: static private readonly System.Int32 BUFFER_SIZE
    static int _get_BUFFER_SIZE();
    // Set static field: static private readonly System.Int32 BUFFER_SIZE
    static void _set_BUFFER_SIZE(int value);
    // Get static field: static private readonly System.Type GameObjectType
    static System::Type* _get_GameObjectType();
    // Set static field: static private readonly System.Type GameObjectType
    static void _set_GameObjectType(System::Type* value);
    // public System.Boolean get_IgnoreCase()
    // Offset: 0x1724A54
    bool get_IgnoreCase();
    // public System.Collections.Generic.IList`1<NUnit.Framework.Constraints.NUnitEqualityComparer/FailurePoint> get_FailurePoints()
    // Offset: 0x1724A8C
    System::Collections::Generic::IList_1<NUnit::Framework::Constraints::NUnitEqualityComparer::FailurePoint*>* get_FailurePoints();
    // public System.Boolean get_WithSameOffset()
    // Offset: 0x172A678
    bool get_WithSameOffset();
    // public System.Boolean AreEqual(System.Object x, System.Object y, ref NUnit.Framework.Constraints.Tolerance tolerance)
    // Offset: 0x17228E4
    bool AreEqual(::Il2CppObject* x, ::Il2CppObject* y, NUnit::Framework::Constraints::Tolerance*& tolerance);
    // static private System.Reflection.MethodInfo FirstImplementsIEquatableOfSecond(System.Type first, System.Type second)
    // Offset: 0x172BCFC
    static System::Reflection::MethodInfo* FirstImplementsIEquatableOfSecond(System::Type* first, System::Type* second);
    // static private System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.Type,System.Reflection.MethodInfo>> GetEquatableGenericArguments(System.Type type)
    // Offset: 0x172C774
    static System::Collections::Generic::IList_1<System::Collections::Generic::KeyValuePair_2<System::Type*, System::Reflection::MethodInfo*>>* GetEquatableGenericArguments(System::Type* type);
    // static private System.Boolean InvokeFirstIEquatableEqualsSecond(System.Object first, System.Object second, System.Reflection.MethodInfo equals)
    // Offset: 0x172BFF0
    static bool InvokeFirstIEquatableEqualsSecond(::Il2CppObject* first, ::Il2CppObject* second, System::Reflection::MethodInfo* equals);
    // private NUnit.Framework.Constraints.EqualityAdapter GetExternalComparer(System.Object x, System.Object y)
    // Offset: 0x172A680
    NUnit::Framework::Constraints::EqualityAdapter* GetExternalComparer(::Il2CppObject* x, ::Il2CppObject* y);
    // private System.Boolean ArraysEqual(System.Array x, System.Array y, ref NUnit.Framework.Constraints.Tolerance tolerance)
    // Offset: 0x172A7AC
    bool ArraysEqual(System::Array* x, System::Array* y, NUnit::Framework::Constraints::Tolerance*& tolerance);
    // private System.Boolean DictionariesEqual(System.Collections.IDictionary x, System.Collections.IDictionary y, ref NUnit.Framework.Constraints.Tolerance tolerance)
    // Offset: 0x172A88C
    bool DictionariesEqual(System::Collections::IDictionary* x, System::Collections::IDictionary* y, NUnit::Framework::Constraints::Tolerance*& tolerance);
    // private System.Boolean DictionaryEntriesEqual(System.Collections.DictionaryEntry x, System.Collections.DictionaryEntry y, ref NUnit.Framework.Constraints.Tolerance tolerance)
    // Offset: 0x172AE9C
    bool DictionaryEntriesEqual(System::Collections::DictionaryEntry x, System::Collections::DictionaryEntry y, NUnit::Framework::Constraints::Tolerance*& tolerance);
    // private System.Boolean StringsEqual(System.String x, System.String y)
    // Offset: 0x172AFB4
    bool StringsEqual(::Il2CppString* x, ::Il2CppString* y);
    // private System.Boolean CharsEqual(System.Char x, System.Char y)
    // Offset: 0x172B658
    bool CharsEqual(::Il2CppChar x, ::Il2CppChar y);
    // private System.Boolean EnumerablesEqual(System.Collections.IEnumerable x, System.Collections.IEnumerable y, ref NUnit.Framework.Constraints.Tolerance tolerance)
    // Offset: 0x172C194
    bool EnumerablesEqual(System::Collections::IEnumerable* x, System::Collections::IEnumerable* y, NUnit::Framework::Constraints::Tolerance*& tolerance);
    // static private System.Boolean DirectoriesEqual(System.IO.DirectoryInfo x, System.IO.DirectoryInfo y)
    // Offset: 0x172B71C
    static bool DirectoriesEqual(System::IO::DirectoryInfo* x, System::IO::DirectoryInfo* y);
    // private System.Boolean StreamsEqual(System.IO.Stream x, System.IO.Stream y)
    // Offset: 0x172B02C
    bool StreamsEqual(System::IO::Stream* x, System::IO::Stream* y);
    // static System.Void CheckGameObjectReference(ref T value)
    // Offset: 0xFFFFFFFF
    template<class T>
    static void CheckGameObjectReference(T& value) {
      static auto ___internal__logger = ::Logger::get().WithContext("NUnit::Framework::Constraints::NUnitEqualityComparer::CheckGameObjectReference");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("NUnit.Framework.Constraints", "NUnitEqualityComparer", "CheckGameObjectReference", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(value)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      ::il2cpp_utils::RunMethodThrow<void, false>(static_cast<Il2CppClass*>(nullptr), ___generic__method, value);
    }
    // static private System.Void .cctor()
    // Offset: 0x172C9E8
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0x17249C0
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NUnitEqualityComparer* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("NUnit::Framework::Constraints::NUnitEqualityComparer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NUnitEqualityComparer*, creationType>()));
    }
  }; // NUnit.Framework.Constraints.NUnitEqualityComparer
  #pragma pack(pop)
  static check_size<sizeof(NUnitEqualityComparer), 40 + sizeof(bool)> __NUnit_Framework_Constraints_NUnitEqualityComparerSizeCheck;
  static_assert(sizeof(NUnitEqualityComparer) == 0x29);
}
DEFINE_IL2CPP_ARG_TYPE(NUnit::Framework::Constraints::NUnitEqualityComparer*, "NUnit.Framework.Constraints", "NUnitEqualityComparer");
// Writing MetadataGetter for method: NUnit::Framework::Constraints::NUnitEqualityComparer::get_IgnoreCase
// Il2CppName: get_IgnoreCase
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (NUnit::Framework::Constraints::NUnitEqualityComparer::*)()>(&NUnit::Framework::Constraints::NUnitEqualityComparer::get_IgnoreCase)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Constraints::NUnitEqualityComparer*), "get_IgnoreCase", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Constraints::NUnitEqualityComparer::get_FailurePoints
// Il2CppName: get_FailurePoints
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::IList_1<NUnit::Framework::Constraints::NUnitEqualityComparer::FailurePoint*>* (NUnit::Framework::Constraints::NUnitEqualityComparer::*)()>(&NUnit::Framework::Constraints::NUnitEqualityComparer::get_FailurePoints)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Constraints::NUnitEqualityComparer*), "get_FailurePoints", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Constraints::NUnitEqualityComparer::get_WithSameOffset
// Il2CppName: get_WithSameOffset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (NUnit::Framework::Constraints::NUnitEqualityComparer::*)()>(&NUnit::Framework::Constraints::NUnitEqualityComparer::get_WithSameOffset)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Constraints::NUnitEqualityComparer*), "get_WithSameOffset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Constraints::NUnitEqualityComparer::AreEqual
// Il2CppName: AreEqual
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (NUnit::Framework::Constraints::NUnitEqualityComparer::*)(::Il2CppObject*, ::Il2CppObject*, NUnit::Framework::Constraints::Tolerance*&)>(&NUnit::Framework::Constraints::NUnitEqualityComparer::AreEqual)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Constraints::NUnitEqualityComparer*), "AreEqual", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppObject*>(), ::il2cpp_utils::ExtractIndependentType<::Il2CppObject*>(), ::il2cpp_utils::ExtractIndependentType<NUnit::Framework::Constraints::Tolerance*&>()});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Constraints::NUnitEqualityComparer::FirstImplementsIEquatableOfSecond
// Il2CppName: FirstImplementsIEquatableOfSecond
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Reflection::MethodInfo* (*)(System::Type*, System::Type*)>(&NUnit::Framework::Constraints::NUnitEqualityComparer::FirstImplementsIEquatableOfSecond)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Constraints::NUnitEqualityComparer*), "FirstImplementsIEquatableOfSecond", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Type*>(), ::il2cpp_utils::ExtractIndependentType<System::Type*>()});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Constraints::NUnitEqualityComparer::GetEquatableGenericArguments
// Il2CppName: GetEquatableGenericArguments
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::IList_1<System::Collections::Generic::KeyValuePair_2<System::Type*, System::Reflection::MethodInfo*>>* (*)(System::Type*)>(&NUnit::Framework::Constraints::NUnitEqualityComparer::GetEquatableGenericArguments)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Constraints::NUnitEqualityComparer*), "GetEquatableGenericArguments", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Type*>()});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Constraints::NUnitEqualityComparer::InvokeFirstIEquatableEqualsSecond
// Il2CppName: InvokeFirstIEquatableEqualsSecond
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Il2CppObject*, ::Il2CppObject*, System::Reflection::MethodInfo*)>(&NUnit::Framework::Constraints::NUnitEqualityComparer::InvokeFirstIEquatableEqualsSecond)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Constraints::NUnitEqualityComparer*), "InvokeFirstIEquatableEqualsSecond", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppObject*>(), ::il2cpp_utils::ExtractIndependentType<::Il2CppObject*>(), ::il2cpp_utils::ExtractIndependentType<System::Reflection::MethodInfo*>()});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Constraints::NUnitEqualityComparer::GetExternalComparer
// Il2CppName: GetExternalComparer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<NUnit::Framework::Constraints::EqualityAdapter* (NUnit::Framework::Constraints::NUnitEqualityComparer::*)(::Il2CppObject*, ::Il2CppObject*)>(&NUnit::Framework::Constraints::NUnitEqualityComparer::GetExternalComparer)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Constraints::NUnitEqualityComparer*), "GetExternalComparer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppObject*>(), ::il2cpp_utils::ExtractIndependentType<::Il2CppObject*>()});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Constraints::NUnitEqualityComparer::ArraysEqual
// Il2CppName: ArraysEqual
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (NUnit::Framework::Constraints::NUnitEqualityComparer::*)(System::Array*, System::Array*, NUnit::Framework::Constraints::Tolerance*&)>(&NUnit::Framework::Constraints::NUnitEqualityComparer::ArraysEqual)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Constraints::NUnitEqualityComparer*), "ArraysEqual", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Array*>(), ::il2cpp_utils::ExtractIndependentType<System::Array*>(), ::il2cpp_utils::ExtractIndependentType<NUnit::Framework::Constraints::Tolerance*&>()});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Constraints::NUnitEqualityComparer::DictionariesEqual
// Il2CppName: DictionariesEqual
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (NUnit::Framework::Constraints::NUnitEqualityComparer::*)(System::Collections::IDictionary*, System::Collections::IDictionary*, NUnit::Framework::Constraints::Tolerance*&)>(&NUnit::Framework::Constraints::NUnitEqualityComparer::DictionariesEqual)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Constraints::NUnitEqualityComparer*), "DictionariesEqual", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Collections::IDictionary*>(), ::il2cpp_utils::ExtractIndependentType<System::Collections::IDictionary*>(), ::il2cpp_utils::ExtractIndependentType<NUnit::Framework::Constraints::Tolerance*&>()});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Constraints::NUnitEqualityComparer::DictionaryEntriesEqual
// Il2CppName: DictionaryEntriesEqual
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (NUnit::Framework::Constraints::NUnitEqualityComparer::*)(System::Collections::DictionaryEntry, System::Collections::DictionaryEntry, NUnit::Framework::Constraints::Tolerance*&)>(&NUnit::Framework::Constraints::NUnitEqualityComparer::DictionaryEntriesEqual)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Constraints::NUnitEqualityComparer*), "DictionaryEntriesEqual", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Collections::DictionaryEntry>(), ::il2cpp_utils::ExtractIndependentType<System::Collections::DictionaryEntry>(), ::il2cpp_utils::ExtractIndependentType<NUnit::Framework::Constraints::Tolerance*&>()});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Constraints::NUnitEqualityComparer::StringsEqual
// Il2CppName: StringsEqual
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (NUnit::Framework::Constraints::NUnitEqualityComparer::*)(::Il2CppString*, ::Il2CppString*)>(&NUnit::Framework::Constraints::NUnitEqualityComparer::StringsEqual)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Constraints::NUnitEqualityComparer*), "StringsEqual", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>(), ::il2cpp_utils::ExtractIndependentType<::Il2CppString*>()});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Constraints::NUnitEqualityComparer::CharsEqual
// Il2CppName: CharsEqual
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (NUnit::Framework::Constraints::NUnitEqualityComparer::*)(::Il2CppChar, ::Il2CppChar)>(&NUnit::Framework::Constraints::NUnitEqualityComparer::CharsEqual)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Constraints::NUnitEqualityComparer*), "CharsEqual", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppChar>(), ::il2cpp_utils::ExtractIndependentType<::Il2CppChar>()});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Constraints::NUnitEqualityComparer::EnumerablesEqual
// Il2CppName: EnumerablesEqual
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (NUnit::Framework::Constraints::NUnitEqualityComparer::*)(System::Collections::IEnumerable*, System::Collections::IEnumerable*, NUnit::Framework::Constraints::Tolerance*&)>(&NUnit::Framework::Constraints::NUnitEqualityComparer::EnumerablesEqual)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Constraints::NUnitEqualityComparer*), "EnumerablesEqual", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Collections::IEnumerable*>(), ::il2cpp_utils::ExtractIndependentType<System::Collections::IEnumerable*>(), ::il2cpp_utils::ExtractIndependentType<NUnit::Framework::Constraints::Tolerance*&>()});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Constraints::NUnitEqualityComparer::DirectoriesEqual
// Il2CppName: DirectoriesEqual
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(System::IO::DirectoryInfo*, System::IO::DirectoryInfo*)>(&NUnit::Framework::Constraints::NUnitEqualityComparer::DirectoriesEqual)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Constraints::NUnitEqualityComparer*), "DirectoriesEqual", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::IO::DirectoryInfo*>(), ::il2cpp_utils::ExtractIndependentType<System::IO::DirectoryInfo*>()});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Constraints::NUnitEqualityComparer::StreamsEqual
// Il2CppName: StreamsEqual
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (NUnit::Framework::Constraints::NUnitEqualityComparer::*)(System::IO::Stream*, System::IO::Stream*)>(&NUnit::Framework::Constraints::NUnitEqualityComparer::StreamsEqual)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Constraints::NUnitEqualityComparer*), "StreamsEqual", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::IO::Stream*>(), ::il2cpp_utils::ExtractIndependentType<System::IO::Stream*>()});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Constraints::NUnitEqualityComparer::CheckGameObjectReference
// Il2CppName: CheckGameObjectReference
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: NUnit::Framework::Constraints::NUnitEqualityComparer::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&NUnit::Framework::Constraints::NUnitEqualityComparer::_cctor)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Constraints::NUnitEqualityComparer*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Constraints::NUnitEqualityComparer::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
