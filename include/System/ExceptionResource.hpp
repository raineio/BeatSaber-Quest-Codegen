// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: System
namespace System {
  // Forward declaring type: ExceptionResource
  struct ExceptionResource;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::ExceptionResource, "System", "ExceptionResource");
// Type namespace: System
namespace System {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: System.ExceptionResource
  // [TokenAttribute] Offset: FFFFFFFF
  struct ExceptionResource/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: ExceptionResource
    constexpr ExceptionResource(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public System.ExceptionResource Argument_ImplementIComparable
    static constexpr const int Argument_ImplementIComparable = 0;
    // Get static field: static public System.ExceptionResource Argument_ImplementIComparable
    static ::System::ExceptionResource _get_Argument_ImplementIComparable();
    // Set static field: static public System.ExceptionResource Argument_ImplementIComparable
    static void _set_Argument_ImplementIComparable(::System::ExceptionResource value);
    // static field const value: static public System.ExceptionResource Argument_InvalidType
    static constexpr const int Argument_InvalidType = 1;
    // Get static field: static public System.ExceptionResource Argument_InvalidType
    static ::System::ExceptionResource _get_Argument_InvalidType();
    // Set static field: static public System.ExceptionResource Argument_InvalidType
    static void _set_Argument_InvalidType(::System::ExceptionResource value);
    // static field const value: static public System.ExceptionResource Argument_InvalidArgumentForComparison
    static constexpr const int Argument_InvalidArgumentForComparison = 2;
    // Get static field: static public System.ExceptionResource Argument_InvalidArgumentForComparison
    static ::System::ExceptionResource _get_Argument_InvalidArgumentForComparison();
    // Set static field: static public System.ExceptionResource Argument_InvalidArgumentForComparison
    static void _set_Argument_InvalidArgumentForComparison(::System::ExceptionResource value);
    // static field const value: static public System.ExceptionResource Argument_InvalidRegistryKeyPermissionCheck
    static constexpr const int Argument_InvalidRegistryKeyPermissionCheck = 3;
    // Get static field: static public System.ExceptionResource Argument_InvalidRegistryKeyPermissionCheck
    static ::System::ExceptionResource _get_Argument_InvalidRegistryKeyPermissionCheck();
    // Set static field: static public System.ExceptionResource Argument_InvalidRegistryKeyPermissionCheck
    static void _set_Argument_InvalidRegistryKeyPermissionCheck(::System::ExceptionResource value);
    // static field const value: static public System.ExceptionResource ArgumentOutOfRange_NeedNonNegNum
    static constexpr const int ArgumentOutOfRange_NeedNonNegNum = 4;
    // Get static field: static public System.ExceptionResource ArgumentOutOfRange_NeedNonNegNum
    static ::System::ExceptionResource _get_ArgumentOutOfRange_NeedNonNegNum();
    // Set static field: static public System.ExceptionResource ArgumentOutOfRange_NeedNonNegNum
    static void _set_ArgumentOutOfRange_NeedNonNegNum(::System::ExceptionResource value);
    // static field const value: static public System.ExceptionResource Arg_ArrayPlusOffTooSmall
    static constexpr const int Arg_ArrayPlusOffTooSmall = 5;
    // Get static field: static public System.ExceptionResource Arg_ArrayPlusOffTooSmall
    static ::System::ExceptionResource _get_Arg_ArrayPlusOffTooSmall();
    // Set static field: static public System.ExceptionResource Arg_ArrayPlusOffTooSmall
    static void _set_Arg_ArrayPlusOffTooSmall(::System::ExceptionResource value);
    // static field const value: static public System.ExceptionResource Arg_NonZeroLowerBound
    static constexpr const int Arg_NonZeroLowerBound = 6;
    // Get static field: static public System.ExceptionResource Arg_NonZeroLowerBound
    static ::System::ExceptionResource _get_Arg_NonZeroLowerBound();
    // Set static field: static public System.ExceptionResource Arg_NonZeroLowerBound
    static void _set_Arg_NonZeroLowerBound(::System::ExceptionResource value);
    // static field const value: static public System.ExceptionResource Arg_RankMultiDimNotSupported
    static constexpr const int Arg_RankMultiDimNotSupported = 7;
    // Get static field: static public System.ExceptionResource Arg_RankMultiDimNotSupported
    static ::System::ExceptionResource _get_Arg_RankMultiDimNotSupported();
    // Set static field: static public System.ExceptionResource Arg_RankMultiDimNotSupported
    static void _set_Arg_RankMultiDimNotSupported(::System::ExceptionResource value);
    // static field const value: static public System.ExceptionResource Arg_RegKeyDelHive
    static constexpr const int Arg_RegKeyDelHive = 8;
    // Get static field: static public System.ExceptionResource Arg_RegKeyDelHive
    static ::System::ExceptionResource _get_Arg_RegKeyDelHive();
    // Set static field: static public System.ExceptionResource Arg_RegKeyDelHive
    static void _set_Arg_RegKeyDelHive(::System::ExceptionResource value);
    // static field const value: static public System.ExceptionResource Arg_RegKeyStrLenBug
    static constexpr const int Arg_RegKeyStrLenBug = 9;
    // Get static field: static public System.ExceptionResource Arg_RegKeyStrLenBug
    static ::System::ExceptionResource _get_Arg_RegKeyStrLenBug();
    // Set static field: static public System.ExceptionResource Arg_RegKeyStrLenBug
    static void _set_Arg_RegKeyStrLenBug(::System::ExceptionResource value);
    // static field const value: static public System.ExceptionResource Arg_RegSetStrArrNull
    static constexpr const int Arg_RegSetStrArrNull = 10;
    // Get static field: static public System.ExceptionResource Arg_RegSetStrArrNull
    static ::System::ExceptionResource _get_Arg_RegSetStrArrNull();
    // Set static field: static public System.ExceptionResource Arg_RegSetStrArrNull
    static void _set_Arg_RegSetStrArrNull(::System::ExceptionResource value);
    // static field const value: static public System.ExceptionResource Arg_RegSetMismatchedKind
    static constexpr const int Arg_RegSetMismatchedKind = 11;
    // Get static field: static public System.ExceptionResource Arg_RegSetMismatchedKind
    static ::System::ExceptionResource _get_Arg_RegSetMismatchedKind();
    // Set static field: static public System.ExceptionResource Arg_RegSetMismatchedKind
    static void _set_Arg_RegSetMismatchedKind(::System::ExceptionResource value);
    // static field const value: static public System.ExceptionResource Arg_RegSubKeyAbsent
    static constexpr const int Arg_RegSubKeyAbsent = 12;
    // Get static field: static public System.ExceptionResource Arg_RegSubKeyAbsent
    static ::System::ExceptionResource _get_Arg_RegSubKeyAbsent();
    // Set static field: static public System.ExceptionResource Arg_RegSubKeyAbsent
    static void _set_Arg_RegSubKeyAbsent(::System::ExceptionResource value);
    // static field const value: static public System.ExceptionResource Arg_RegSubKeyValueAbsent
    static constexpr const int Arg_RegSubKeyValueAbsent = 13;
    // Get static field: static public System.ExceptionResource Arg_RegSubKeyValueAbsent
    static ::System::ExceptionResource _get_Arg_RegSubKeyValueAbsent();
    // Set static field: static public System.ExceptionResource Arg_RegSubKeyValueAbsent
    static void _set_Arg_RegSubKeyValueAbsent(::System::ExceptionResource value);
    // static field const value: static public System.ExceptionResource Argument_AddingDuplicate
    static constexpr const int Argument_AddingDuplicate = 14;
    // Get static field: static public System.ExceptionResource Argument_AddingDuplicate
    static ::System::ExceptionResource _get_Argument_AddingDuplicate();
    // Set static field: static public System.ExceptionResource Argument_AddingDuplicate
    static void _set_Argument_AddingDuplicate(::System::ExceptionResource value);
    // static field const value: static public System.ExceptionResource Serialization_InvalidOnDeser
    static constexpr const int Serialization_InvalidOnDeser = 15;
    // Get static field: static public System.ExceptionResource Serialization_InvalidOnDeser
    static ::System::ExceptionResource _get_Serialization_InvalidOnDeser();
    // Set static field: static public System.ExceptionResource Serialization_InvalidOnDeser
    static void _set_Serialization_InvalidOnDeser(::System::ExceptionResource value);
    // static field const value: static public System.ExceptionResource Serialization_MissingKeys
    static constexpr const int Serialization_MissingKeys = 16;
    // Get static field: static public System.ExceptionResource Serialization_MissingKeys
    static ::System::ExceptionResource _get_Serialization_MissingKeys();
    // Set static field: static public System.ExceptionResource Serialization_MissingKeys
    static void _set_Serialization_MissingKeys(::System::ExceptionResource value);
    // static field const value: static public System.ExceptionResource Serialization_NullKey
    static constexpr const int Serialization_NullKey = 17;
    // Get static field: static public System.ExceptionResource Serialization_NullKey
    static ::System::ExceptionResource _get_Serialization_NullKey();
    // Set static field: static public System.ExceptionResource Serialization_NullKey
    static void _set_Serialization_NullKey(::System::ExceptionResource value);
    // static field const value: static public System.ExceptionResource Argument_InvalidArrayType
    static constexpr const int Argument_InvalidArrayType = 18;
    // Get static field: static public System.ExceptionResource Argument_InvalidArrayType
    static ::System::ExceptionResource _get_Argument_InvalidArrayType();
    // Set static field: static public System.ExceptionResource Argument_InvalidArrayType
    static void _set_Argument_InvalidArrayType(::System::ExceptionResource value);
    // static field const value: static public System.ExceptionResource NotSupported_KeyCollectionSet
    static constexpr const int NotSupported_KeyCollectionSet = 19;
    // Get static field: static public System.ExceptionResource NotSupported_KeyCollectionSet
    static ::System::ExceptionResource _get_NotSupported_KeyCollectionSet();
    // Set static field: static public System.ExceptionResource NotSupported_KeyCollectionSet
    static void _set_NotSupported_KeyCollectionSet(::System::ExceptionResource value);
    // static field const value: static public System.ExceptionResource NotSupported_ValueCollectionSet
    static constexpr const int NotSupported_ValueCollectionSet = 20;
    // Get static field: static public System.ExceptionResource NotSupported_ValueCollectionSet
    static ::System::ExceptionResource _get_NotSupported_ValueCollectionSet();
    // Set static field: static public System.ExceptionResource NotSupported_ValueCollectionSet
    static void _set_NotSupported_ValueCollectionSet(::System::ExceptionResource value);
    // static field const value: static public System.ExceptionResource ArgumentOutOfRange_SmallCapacity
    static constexpr const int ArgumentOutOfRange_SmallCapacity = 21;
    // Get static field: static public System.ExceptionResource ArgumentOutOfRange_SmallCapacity
    static ::System::ExceptionResource _get_ArgumentOutOfRange_SmallCapacity();
    // Set static field: static public System.ExceptionResource ArgumentOutOfRange_SmallCapacity
    static void _set_ArgumentOutOfRange_SmallCapacity(::System::ExceptionResource value);
    // static field const value: static public System.ExceptionResource ArgumentOutOfRange_Index
    static constexpr const int ArgumentOutOfRange_Index = 22;
    // Get static field: static public System.ExceptionResource ArgumentOutOfRange_Index
    static ::System::ExceptionResource _get_ArgumentOutOfRange_Index();
    // Set static field: static public System.ExceptionResource ArgumentOutOfRange_Index
    static void _set_ArgumentOutOfRange_Index(::System::ExceptionResource value);
    // static field const value: static public System.ExceptionResource Argument_InvalidOffLen
    static constexpr const int Argument_InvalidOffLen = 23;
    // Get static field: static public System.ExceptionResource Argument_InvalidOffLen
    static ::System::ExceptionResource _get_Argument_InvalidOffLen();
    // Set static field: static public System.ExceptionResource Argument_InvalidOffLen
    static void _set_Argument_InvalidOffLen(::System::ExceptionResource value);
    // static field const value: static public System.ExceptionResource Argument_ItemNotExist
    static constexpr const int Argument_ItemNotExist = 24;
    // Get static field: static public System.ExceptionResource Argument_ItemNotExist
    static ::System::ExceptionResource _get_Argument_ItemNotExist();
    // Set static field: static public System.ExceptionResource Argument_ItemNotExist
    static void _set_Argument_ItemNotExist(::System::ExceptionResource value);
    // static field const value: static public System.ExceptionResource ArgumentOutOfRange_Count
    static constexpr const int ArgumentOutOfRange_Count = 25;
    // Get static field: static public System.ExceptionResource ArgumentOutOfRange_Count
    static ::System::ExceptionResource _get_ArgumentOutOfRange_Count();
    // Set static field: static public System.ExceptionResource ArgumentOutOfRange_Count
    static void _set_ArgumentOutOfRange_Count(::System::ExceptionResource value);
    // static field const value: static public System.ExceptionResource ArgumentOutOfRange_InvalidThreshold
    static constexpr const int ArgumentOutOfRange_InvalidThreshold = 26;
    // Get static field: static public System.ExceptionResource ArgumentOutOfRange_InvalidThreshold
    static ::System::ExceptionResource _get_ArgumentOutOfRange_InvalidThreshold();
    // Set static field: static public System.ExceptionResource ArgumentOutOfRange_InvalidThreshold
    static void _set_ArgumentOutOfRange_InvalidThreshold(::System::ExceptionResource value);
    // static field const value: static public System.ExceptionResource ArgumentOutOfRange_ListInsert
    static constexpr const int ArgumentOutOfRange_ListInsert = 27;
    // Get static field: static public System.ExceptionResource ArgumentOutOfRange_ListInsert
    static ::System::ExceptionResource _get_ArgumentOutOfRange_ListInsert();
    // Set static field: static public System.ExceptionResource ArgumentOutOfRange_ListInsert
    static void _set_ArgumentOutOfRange_ListInsert(::System::ExceptionResource value);
    // static field const value: static public System.ExceptionResource NotSupported_ReadOnlyCollection
    static constexpr const int NotSupported_ReadOnlyCollection = 28;
    // Get static field: static public System.ExceptionResource NotSupported_ReadOnlyCollection
    static ::System::ExceptionResource _get_NotSupported_ReadOnlyCollection();
    // Set static field: static public System.ExceptionResource NotSupported_ReadOnlyCollection
    static void _set_NotSupported_ReadOnlyCollection(::System::ExceptionResource value);
    // static field const value: static public System.ExceptionResource InvalidOperation_CannotRemoveFromStackOrQueue
    static constexpr const int InvalidOperation_CannotRemoveFromStackOrQueue = 29;
    // Get static field: static public System.ExceptionResource InvalidOperation_CannotRemoveFromStackOrQueue
    static ::System::ExceptionResource _get_InvalidOperation_CannotRemoveFromStackOrQueue();
    // Set static field: static public System.ExceptionResource InvalidOperation_CannotRemoveFromStackOrQueue
    static void _set_InvalidOperation_CannotRemoveFromStackOrQueue(::System::ExceptionResource value);
    // static field const value: static public System.ExceptionResource InvalidOperation_EmptyQueue
    static constexpr const int InvalidOperation_EmptyQueue = 30;
    // Get static field: static public System.ExceptionResource InvalidOperation_EmptyQueue
    static ::System::ExceptionResource _get_InvalidOperation_EmptyQueue();
    // Set static field: static public System.ExceptionResource InvalidOperation_EmptyQueue
    static void _set_InvalidOperation_EmptyQueue(::System::ExceptionResource value);
    // static field const value: static public System.ExceptionResource InvalidOperation_EnumOpCantHappen
    static constexpr const int InvalidOperation_EnumOpCantHappen = 31;
    // Get static field: static public System.ExceptionResource InvalidOperation_EnumOpCantHappen
    static ::System::ExceptionResource _get_InvalidOperation_EnumOpCantHappen();
    // Set static field: static public System.ExceptionResource InvalidOperation_EnumOpCantHappen
    static void _set_InvalidOperation_EnumOpCantHappen(::System::ExceptionResource value);
    // static field const value: static public System.ExceptionResource InvalidOperation_EnumFailedVersion
    static constexpr const int InvalidOperation_EnumFailedVersion = 32;
    // Get static field: static public System.ExceptionResource InvalidOperation_EnumFailedVersion
    static ::System::ExceptionResource _get_InvalidOperation_EnumFailedVersion();
    // Set static field: static public System.ExceptionResource InvalidOperation_EnumFailedVersion
    static void _set_InvalidOperation_EnumFailedVersion(::System::ExceptionResource value);
    // static field const value: static public System.ExceptionResource InvalidOperation_EmptyStack
    static constexpr const int InvalidOperation_EmptyStack = 33;
    // Get static field: static public System.ExceptionResource InvalidOperation_EmptyStack
    static ::System::ExceptionResource _get_InvalidOperation_EmptyStack();
    // Set static field: static public System.ExceptionResource InvalidOperation_EmptyStack
    static void _set_InvalidOperation_EmptyStack(::System::ExceptionResource value);
    // static field const value: static public System.ExceptionResource ArgumentOutOfRange_BiggerThanCollection
    static constexpr const int ArgumentOutOfRange_BiggerThanCollection = 34;
    // Get static field: static public System.ExceptionResource ArgumentOutOfRange_BiggerThanCollection
    static ::System::ExceptionResource _get_ArgumentOutOfRange_BiggerThanCollection();
    // Set static field: static public System.ExceptionResource ArgumentOutOfRange_BiggerThanCollection
    static void _set_ArgumentOutOfRange_BiggerThanCollection(::System::ExceptionResource value);
    // static field const value: static public System.ExceptionResource InvalidOperation_EnumNotStarted
    static constexpr const int InvalidOperation_EnumNotStarted = 35;
    // Get static field: static public System.ExceptionResource InvalidOperation_EnumNotStarted
    static ::System::ExceptionResource _get_InvalidOperation_EnumNotStarted();
    // Set static field: static public System.ExceptionResource InvalidOperation_EnumNotStarted
    static void _set_InvalidOperation_EnumNotStarted(::System::ExceptionResource value);
    // static field const value: static public System.ExceptionResource InvalidOperation_EnumEnded
    static constexpr const int InvalidOperation_EnumEnded = 36;
    // Get static field: static public System.ExceptionResource InvalidOperation_EnumEnded
    static ::System::ExceptionResource _get_InvalidOperation_EnumEnded();
    // Set static field: static public System.ExceptionResource InvalidOperation_EnumEnded
    static void _set_InvalidOperation_EnumEnded(::System::ExceptionResource value);
    // static field const value: static public System.ExceptionResource NotSupported_SortedListNestedWrite
    static constexpr const int NotSupported_SortedListNestedWrite = 37;
    // Get static field: static public System.ExceptionResource NotSupported_SortedListNestedWrite
    static ::System::ExceptionResource _get_NotSupported_SortedListNestedWrite();
    // Set static field: static public System.ExceptionResource NotSupported_SortedListNestedWrite
    static void _set_NotSupported_SortedListNestedWrite(::System::ExceptionResource value);
    // static field const value: static public System.ExceptionResource InvalidOperation_NoValue
    static constexpr const int InvalidOperation_NoValue = 38;
    // Get static field: static public System.ExceptionResource InvalidOperation_NoValue
    static ::System::ExceptionResource _get_InvalidOperation_NoValue();
    // Set static field: static public System.ExceptionResource InvalidOperation_NoValue
    static void _set_InvalidOperation_NoValue(::System::ExceptionResource value);
    // static field const value: static public System.ExceptionResource InvalidOperation_RegRemoveSubKey
    static constexpr const int InvalidOperation_RegRemoveSubKey = 39;
    // Get static field: static public System.ExceptionResource InvalidOperation_RegRemoveSubKey
    static ::System::ExceptionResource _get_InvalidOperation_RegRemoveSubKey();
    // Set static field: static public System.ExceptionResource InvalidOperation_RegRemoveSubKey
    static void _set_InvalidOperation_RegRemoveSubKey(::System::ExceptionResource value);
    // static field const value: static public System.ExceptionResource Security_RegistryPermission
    static constexpr const int Security_RegistryPermission = 40;
    // Get static field: static public System.ExceptionResource Security_RegistryPermission
    static ::System::ExceptionResource _get_Security_RegistryPermission();
    // Set static field: static public System.ExceptionResource Security_RegistryPermission
    static void _set_Security_RegistryPermission(::System::ExceptionResource value);
    // static field const value: static public System.ExceptionResource UnauthorizedAccess_RegistryNoWrite
    static constexpr const int UnauthorizedAccess_RegistryNoWrite = 41;
    // Get static field: static public System.ExceptionResource UnauthorizedAccess_RegistryNoWrite
    static ::System::ExceptionResource _get_UnauthorizedAccess_RegistryNoWrite();
    // Set static field: static public System.ExceptionResource UnauthorizedAccess_RegistryNoWrite
    static void _set_UnauthorizedAccess_RegistryNoWrite(::System::ExceptionResource value);
    // static field const value: static public System.ExceptionResource ObjectDisposed_RegKeyClosed
    static constexpr const int ObjectDisposed_RegKeyClosed = 42;
    // Get static field: static public System.ExceptionResource ObjectDisposed_RegKeyClosed
    static ::System::ExceptionResource _get_ObjectDisposed_RegKeyClosed();
    // Set static field: static public System.ExceptionResource ObjectDisposed_RegKeyClosed
    static void _set_ObjectDisposed_RegKeyClosed(::System::ExceptionResource value);
    // static field const value: static public System.ExceptionResource NotSupported_InComparableType
    static constexpr const int NotSupported_InComparableType = 43;
    // Get static field: static public System.ExceptionResource NotSupported_InComparableType
    static ::System::ExceptionResource _get_NotSupported_InComparableType();
    // Set static field: static public System.ExceptionResource NotSupported_InComparableType
    static void _set_NotSupported_InComparableType(::System::ExceptionResource value);
    // static field const value: static public System.ExceptionResource Argument_InvalidRegistryOptionsCheck
    static constexpr const int Argument_InvalidRegistryOptionsCheck = 44;
    // Get static field: static public System.ExceptionResource Argument_InvalidRegistryOptionsCheck
    static ::System::ExceptionResource _get_Argument_InvalidRegistryOptionsCheck();
    // Set static field: static public System.ExceptionResource Argument_InvalidRegistryOptionsCheck
    static void _set_Argument_InvalidRegistryOptionsCheck(::System::ExceptionResource value);
    // static field const value: static public System.ExceptionResource Argument_InvalidRegistryViewCheck
    static constexpr const int Argument_InvalidRegistryViewCheck = 45;
    // Get static field: static public System.ExceptionResource Argument_InvalidRegistryViewCheck
    static ::System::ExceptionResource _get_Argument_InvalidRegistryViewCheck();
    // Set static field: static public System.ExceptionResource Argument_InvalidRegistryViewCheck
    static void _set_Argument_InvalidRegistryViewCheck(::System::ExceptionResource value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // System.ExceptionResource
  #pragma pack(pop)
  static check_size<sizeof(ExceptionResource), 0 + sizeof(int)> __System_ExceptionResourceSizeCheck;
  static_assert(sizeof(ExceptionResource) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
