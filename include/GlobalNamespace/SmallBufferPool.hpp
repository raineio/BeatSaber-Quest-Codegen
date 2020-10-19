// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Int32
#include "System/Int32.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: SmallBufferPool
  class SmallBufferPool : public ::Il2CppObject {
    public:
    // private readonly System.Collections.Generic.List`1<System.Byte[]> _cacheSmall
    // Offset: 0x10
    System::Collections::Generic::List_1<::Array<uint8_t>*>* cacheSmall;
    // private readonly System.Collections.Generic.List`1<System.Byte[]> _cacheMedium
    // Offset: 0x18
    System::Collections::Generic::List_1<::Array<uint8_t>*>* cacheMedium;
    // private readonly System.Collections.Generic.List`1<System.Byte[]> _cacheLarge
    // Offset: 0x20
    System::Collections::Generic::List_1<::Array<uint8_t>*>* cacheLarge;
    // private readonly System.Collections.Generic.List`1<System.Byte[]> _cacheMax
    // Offset: 0x28
    System::Collections::Generic::List_1<::Array<uint8_t>*>* cacheMax;
    // static field const value: static private System.Int32 kCacheSmallSize
    static constexpr const int kCacheSmallSize = 512;
    // Get static field: static private System.Int32 kCacheSmallSize
    static int _get_kCacheSmallSize();
    // Set static field: static private System.Int32 kCacheSmallSize
    static void _set_kCacheSmallSize(int value);
    // static field const value: static private System.Int32 kCacheMediumSize
    static constexpr const int kCacheMediumSize = 1024;
    // Get static field: static private System.Int32 kCacheMediumSize
    static int _get_kCacheMediumSize();
    // Set static field: static private System.Int32 kCacheMediumSize
    static void _set_kCacheMediumSize(int value);
    // static field const value: static private System.Int32 kCacheLargeSize
    static constexpr const int kCacheLargeSize = 2048;
    // Get static field: static private System.Int32 kCacheLargeSize
    static int _get_kCacheLargeSize();
    // Set static field: static private System.Int32 kCacheLargeSize
    static void _set_kCacheLargeSize(int value);
    // static field const value: static private System.Int32 kCacheMaxSize
    static constexpr const int kCacheMaxSize = 4096;
    // Get static field: static private System.Int32 kCacheMaxSize
    static int _get_kCacheMaxSize();
    // Set static field: static private System.Int32 kCacheMaxSize
    static void _set_kCacheMaxSize(int value);
    // static field const value: static private System.Int32 kCacheSmallMaxCapacity
    static constexpr const int kCacheSmallMaxCapacity = 128;
    // Get static field: static private System.Int32 kCacheSmallMaxCapacity
    static int _get_kCacheSmallMaxCapacity();
    // Set static field: static private System.Int32 kCacheSmallMaxCapacity
    static void _set_kCacheSmallMaxCapacity(int value);
    // static field const value: static private System.Int32 kCacheMediumMaxCapacity
    static constexpr const int kCacheMediumMaxCapacity = 32;
    // Get static field: static private System.Int32 kCacheMediumMaxCapacity
    static int _get_kCacheMediumMaxCapacity();
    // Set static field: static private System.Int32 kCacheMediumMaxCapacity
    static void _set_kCacheMediumMaxCapacity(int value);
    // static field const value: static private System.Int32 kCacheLargeMaxCapacity
    static constexpr const int kCacheLargeMaxCapacity = 16;
    // Get static field: static private System.Int32 kCacheLargeMaxCapacity
    static int _get_kCacheLargeMaxCapacity();
    // Set static field: static private System.Int32 kCacheLargeMaxCapacity
    static void _set_kCacheLargeMaxCapacity(int value);
    // static field const value: static private System.Int32 kCacheMaxMaxCapacity
    static constexpr const int kCacheMaxMaxCapacity = 8;
    // Get static field: static private System.Int32 kCacheMaxMaxCapacity
    static int _get_kCacheMaxMaxCapacity();
    // Set static field: static private System.Int32 kCacheMaxMaxCapacity
    static void _set_kCacheMaxMaxCapacity(int value);
    // public System.Byte[] GetBuffer(System.Int32 length)
    // Offset: 0x21FC310
    ::Array<uint8_t>* GetBuffer(int length);
    // public System.Void ReleaseBuffer(System.Byte[] buffer)
    // Offset: 0x21FC4EC
    void ReleaseBuffer(::Array<uint8_t>* buffer);
    // public System.Void .ctor()
    // Offset: 0x21FC63C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static SmallBufferPool* New_ctor();
  }; // SmallBufferPool
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SmallBufferPool*, "", "SmallBufferPool");
#pragma pack(pop)
