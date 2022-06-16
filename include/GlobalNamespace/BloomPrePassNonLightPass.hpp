// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Skipping declaration: ExecutionTimeType because it is already included!
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: RenderTexture
  class RenderTexture;
  // Forward declaring type: Matrix4x4
  struct Matrix4x4;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: BloomPrePassNonLightPass
  class BloomPrePassNonLightPass;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::BloomPrePassNonLightPass);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BloomPrePassNonLightPass*, "", "BloomPrePassNonLightPass");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: BloomPrePassNonLightPass
  // [TokenAttribute] Offset: FFFFFFFF
  // [ExecuteAlways] Offset: FFFFFFFF
  class BloomPrePassNonLightPass : public ::UnityEngine::MonoBehaviour {
    public:
    // Nested type: ::GlobalNamespace::BloomPrePassNonLightPass::ExecutionTimeType
    struct ExecutionTimeType;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: BloomPrePassNonLightPass/ExecutionTimeType
    // [TokenAttribute] Offset: FFFFFFFF
    struct ExecutionTimeType/*, public ::System::Enum*/ {
      public:
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      public:
      // Creating value type constructor for type: ExecutionTimeType
      constexpr ExecutionTimeType(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator ::System::Enum
      operator ::System::Enum() noexcept {
        return *reinterpret_cast<::System::Enum*>(this);
      }
      // Creating interface conversion operator: i_Enum
      inline ::System::Enum* i_Enum() noexcept {
        return reinterpret_cast<::System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public BloomPrePassNonLightPass/ExecutionTimeType None
      static constexpr const int None = 0;
      // Get static field: static public BloomPrePassNonLightPass/ExecutionTimeType None
      static ::GlobalNamespace::BloomPrePassNonLightPass::ExecutionTimeType _get_None();
      // Set static field: static public BloomPrePassNonLightPass/ExecutionTimeType None
      static void _set_None(::GlobalNamespace::BloomPrePassNonLightPass::ExecutionTimeType value);
      // static field const value: static public BloomPrePassNonLightPass/ExecutionTimeType BeforeBlur
      static constexpr const int BeforeBlur = 1;
      // Get static field: static public BloomPrePassNonLightPass/ExecutionTimeType BeforeBlur
      static ::GlobalNamespace::BloomPrePassNonLightPass::ExecutionTimeType _get_BeforeBlur();
      // Set static field: static public BloomPrePassNonLightPass/ExecutionTimeType BeforeBlur
      static void _set_BeforeBlur(::GlobalNamespace::BloomPrePassNonLightPass::ExecutionTimeType value);
      // static field const value: static public BloomPrePassNonLightPass/ExecutionTimeType AfterBlur
      static constexpr const int AfterBlur = 2;
      // Get static field: static public BloomPrePassNonLightPass/ExecutionTimeType AfterBlur
      static ::GlobalNamespace::BloomPrePassNonLightPass::ExecutionTimeType _get_AfterBlur();
      // Set static field: static public BloomPrePassNonLightPass/ExecutionTimeType AfterBlur
      static void _set_AfterBlur(::GlobalNamespace::BloomPrePassNonLightPass::ExecutionTimeType value);
      // Get instance field reference: public System.Int32 value__
      [[deprecated("Use field access instead!")]] int& dyn_value__();
    }; // BloomPrePassNonLightPass/ExecutionTimeType
    #pragma pack(pop)
    static check_size<sizeof(BloomPrePassNonLightPass::ExecutionTimeType), 0 + sizeof(int)> __GlobalNamespace_BloomPrePassNonLightPass_ExecutionTimeTypeSizeCheck;
    static_assert(sizeof(BloomPrePassNonLightPass::ExecutionTimeType) == 0x4);
    public:
    // private BloomPrePassNonLightPass/ExecutionTimeType _executionTimeType
    // Size: 0x4
    // Offset: 0x18
    ::GlobalNamespace::BloomPrePassNonLightPass::ExecutionTimeType executionTimeType;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::BloomPrePassNonLightPass::ExecutionTimeType) == 0x4);
    // private BloomPrePassNonLightPass/ExecutionTimeType _registeredExecutionTimeType
    // Size: 0x4
    // Offset: 0x1C
    ::GlobalNamespace::BloomPrePassNonLightPass::ExecutionTimeType registeredExecutionTimeType;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::BloomPrePassNonLightPass::ExecutionTimeType) == 0x4);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get static field: static private System.Collections.Generic.List`1<BloomPrePassNonLightPass> _bloomPrePassAfterBlurList
    static ::System::Collections::Generic::List_1<::GlobalNamespace::BloomPrePassNonLightPass*>* _get__bloomPrePassAfterBlurList();
    // Set static field: static private System.Collections.Generic.List`1<BloomPrePassNonLightPass> _bloomPrePassAfterBlurList
    static void _set__bloomPrePassAfterBlurList(::System::Collections::Generic::List_1<::GlobalNamespace::BloomPrePassNonLightPass*>* value);
    // Get static field: static private System.Collections.Generic.List`1<BloomPrePassNonLightPass> _bloomPrePassBeforeBlurList
    static ::System::Collections::Generic::List_1<::GlobalNamespace::BloomPrePassNonLightPass*>* _get__bloomPrePassBeforeBlurList();
    // Set static field: static private System.Collections.Generic.List`1<BloomPrePassNonLightPass> _bloomPrePassBeforeBlurList
    static void _set__bloomPrePassBeforeBlurList(::System::Collections::Generic::List_1<::GlobalNamespace::BloomPrePassNonLightPass*>* value);
    // Get instance field reference: private BloomPrePassNonLightPass/ExecutionTimeType _executionTimeType
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::BloomPrePassNonLightPass::ExecutionTimeType& dyn__executionTimeType();
    // Get instance field reference: private BloomPrePassNonLightPass/ExecutionTimeType _registeredExecutionTimeType
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::BloomPrePassNonLightPass::ExecutionTimeType& dyn__registeredExecutionTimeType();
    // public BloomPrePassNonLightPass/ExecutionTimeType get_executionTimeType()
    // Offset: 0x1E6DDE8
    ::GlobalNamespace::BloomPrePassNonLightPass::ExecutionTimeType get_executionTimeType();
    // static public System.Collections.Generic.List`1<BloomPrePassNonLightPass> get_bloomPrePassAfterBlurList()
    // Offset: 0x1E6DDF0
    static ::System::Collections::Generic::List_1<::GlobalNamespace::BloomPrePassNonLightPass*>* get_bloomPrePassAfterBlurList();
    // static public System.Collections.Generic.List`1<BloomPrePassNonLightPass> get_bloomPrePassBeforeBlurList()
    // Offset: 0x1E6DE58
    static ::System::Collections::Generic::List_1<::GlobalNamespace::BloomPrePassNonLightPass*>* get_bloomPrePassBeforeBlurList();
    // protected System.Void .ctor()
    // Offset: 0x1E6B36C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BloomPrePassNonLightPass* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::BloomPrePassNonLightPass::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BloomPrePassNonLightPass*, creationType>()));
    }
    // static private System.Void .cctor()
    // Offset: 0x1E6DEC4
    static void _cctor();
    // protected System.Void OnEnable()
    // Offset: 0x1E6CA6C
    void OnEnable();
    // protected System.Void OnDisable()
    // Offset: 0x1E6DEC0
    void OnDisable();
    // protected System.Void Register()
    // Offset: 0x1E6C92C
    void Register();
    // protected System.Void Unregister()
    // Offset: 0x1E6C85C
    void Unregister();
    // protected System.Void OnValidate()
    // Offset: 0x1E6D2E4
    void OnValidate();
    // public System.Void Render(UnityEngine.RenderTexture dest, UnityEngine.Matrix4x4 viewMatrix, UnityEngine.Matrix4x4 projectionMatrix)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void Render(::UnityEngine::RenderTexture* dest, ::UnityEngine::Matrix4x4 viewMatrix, ::UnityEngine::Matrix4x4 projectionMatrix);
  }; // BloomPrePassNonLightPass
  #pragma pack(pop)
  static check_size<sizeof(BloomPrePassNonLightPass), 28 + sizeof(::GlobalNamespace::BloomPrePassNonLightPass::ExecutionTimeType)> __GlobalNamespace_BloomPrePassNonLightPassSizeCheck;
  static_assert(sizeof(BloomPrePassNonLightPass) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BloomPrePassNonLightPass::ExecutionTimeType, "", "BloomPrePassNonLightPass/ExecutionTimeType");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BloomPrePassNonLightPass::get_executionTimeType
// Il2CppName: get_executionTimeType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::BloomPrePassNonLightPass::ExecutionTimeType (GlobalNamespace::BloomPrePassNonLightPass::*)()>(&GlobalNamespace::BloomPrePassNonLightPass::get_executionTimeType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BloomPrePassNonLightPass*), "get_executionTimeType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BloomPrePassNonLightPass::get_bloomPrePassAfterBlurList
// Il2CppName: get_bloomPrePassAfterBlurList
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::GlobalNamespace::BloomPrePassNonLightPass*>* (*)()>(&GlobalNamespace::BloomPrePassNonLightPass::get_bloomPrePassAfterBlurList)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BloomPrePassNonLightPass*), "get_bloomPrePassAfterBlurList", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BloomPrePassNonLightPass::get_bloomPrePassBeforeBlurList
// Il2CppName: get_bloomPrePassBeforeBlurList
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::GlobalNamespace::BloomPrePassNonLightPass*>* (*)()>(&GlobalNamespace::BloomPrePassNonLightPass::get_bloomPrePassBeforeBlurList)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BloomPrePassNonLightPass*), "get_bloomPrePassBeforeBlurList", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BloomPrePassNonLightPass::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::BloomPrePassNonLightPass::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::BloomPrePassNonLightPass::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BloomPrePassNonLightPass*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BloomPrePassNonLightPass::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BloomPrePassNonLightPass::*)()>(&GlobalNamespace::BloomPrePassNonLightPass::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BloomPrePassNonLightPass*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BloomPrePassNonLightPass::OnDisable
// Il2CppName: OnDisable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BloomPrePassNonLightPass::*)()>(&GlobalNamespace::BloomPrePassNonLightPass::OnDisable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BloomPrePassNonLightPass*), "OnDisable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BloomPrePassNonLightPass::Register
// Il2CppName: Register
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BloomPrePassNonLightPass::*)()>(&GlobalNamespace::BloomPrePassNonLightPass::Register)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BloomPrePassNonLightPass*), "Register", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BloomPrePassNonLightPass::Unregister
// Il2CppName: Unregister
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BloomPrePassNonLightPass::*)()>(&GlobalNamespace::BloomPrePassNonLightPass::Unregister)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BloomPrePassNonLightPass*), "Unregister", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BloomPrePassNonLightPass::OnValidate
// Il2CppName: OnValidate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BloomPrePassNonLightPass::*)()>(&GlobalNamespace::BloomPrePassNonLightPass::OnValidate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BloomPrePassNonLightPass*), "OnValidate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BloomPrePassNonLightPass::Render
// Il2CppName: Render
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BloomPrePassNonLightPass::*)(::UnityEngine::RenderTexture*, ::UnityEngine::Matrix4x4, ::UnityEngine::Matrix4x4)>(&GlobalNamespace::BloomPrePassNonLightPass::Render)> {
  static const MethodInfo* get() {
    static auto* dest = &::il2cpp_utils::GetClassFromName("UnityEngine", "RenderTexture")->byval_arg;
    static auto* viewMatrix = &::il2cpp_utils::GetClassFromName("UnityEngine", "Matrix4x4")->byval_arg;
    static auto* projectionMatrix = &::il2cpp_utils::GetClassFromName("UnityEngine", "Matrix4x4")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BloomPrePassNonLightPass*), "Render", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{dest, viewMatrix, projectionMatrix});
  }
};
