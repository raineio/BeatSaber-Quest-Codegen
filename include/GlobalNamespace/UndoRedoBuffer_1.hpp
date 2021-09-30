// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
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
  // WARNING Size may be invalid!
  // Autogenerated type: UndoRedoBuffer`1
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename T>
  class UndoRedoBuffer_1 : public ::Il2CppObject {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    private:
    #endif
    // private System.Collections.Generic.List`1<T> _data
    // Size: 0x8
    // Offset: 0x0
    System::Collections::Generic::List_1<T>* data;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<T>*) == 0x8);
    // private System.Int32 _capacity
    // Size: 0x4
    // Offset: 0x0
    int capacity;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 _cursor
    // Size: 0x4
    // Offset: 0x0
    int cursor;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Autogenerated instance field getter
    // Get instance field: private System.Collections.Generic.List`1<T> _data
    System::Collections::Generic::List_1<T>*& dyn__data() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::UndoRedoBuffer_1::dyn__data");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "_data"))->offset;
      return *reinterpret_cast<System::Collections::Generic::List_1<T>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private System.Int32 _capacity
    int& dyn__capacity() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::UndoRedoBuffer_1::dyn__capacity");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "_capacity"))->offset;
      return *reinterpret_cast<int*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private System.Int32 _cursor
    int& dyn__cursor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::UndoRedoBuffer_1::dyn__cursor");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "_cursor"))->offset;
      return *reinterpret_cast<int*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // public System.Void .ctor(System.Int32 capacity)
    // Offset: 0xFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UndoRedoBuffer_1<T>* New_ctor(int capacity) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::UndoRedoBuffer_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UndoRedoBuffer_1<T>*, creationType>(capacity)));
    }
    // public System.Void Add(T item)
    // Offset: 0xFFFFFFFF
    void Add(T item) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::UndoRedoBuffer_1::Add");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Add", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(item)})));
      auto ___instance_arg = this;
      ::il2cpp_utils::RunMethodThrow<void, false>(___instance_arg, ___internal__method, item);
    }
    // public T Undo()
    // Offset: 0xFFFFFFFF
    T Undo() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::UndoRedoBuffer_1::Undo");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Undo", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      auto ___instance_arg = this;
      return ::il2cpp_utils::RunMethodThrow<T, false>(___instance_arg, ___internal__method);
    }
    // public T Redo()
    // Offset: 0xFFFFFFFF
    T Redo() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::UndoRedoBuffer_1::Redo");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Redo", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      auto ___instance_arg = this;
      return ::il2cpp_utils::RunMethodThrow<T, false>(___instance_arg, ___internal__method);
    }
    // public System.Void Clear()
    // Offset: 0xFFFFFFFF
    void Clear() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::UndoRedoBuffer_1::Clear");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Clear", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      auto ___instance_arg = this;
      ::il2cpp_utils::RunMethodThrow<void, false>(___instance_arg, ___internal__method);
    }
  }; // UndoRedoBuffer`1
  // Could not write size check! Type: UndoRedoBuffer`1 is generic, or has no fields that are valid for size checks!
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(GlobalNamespace::UndoRedoBuffer_1, "", "UndoRedoBuffer`1");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
