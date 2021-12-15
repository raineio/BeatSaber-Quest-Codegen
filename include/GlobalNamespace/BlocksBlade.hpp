// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
// Including type: UnityEngine.Vector4
#include "UnityEngine/Vector4.hpp"
// Including type: UnityEngine.Matrix4x4
#include "UnityEngine/Matrix4x4.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "extern/beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Mesh
  class Mesh;
  // Forward declaring type: Material
  class Material;
  // Forward declaring type: MaterialPropertyBlock
  class MaterialPropertyBlock;
  // Forward declaring type: Vector2
  struct Vector2;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: BlocksBlade
  class BlocksBlade;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(GlobalNamespace::BlocksBlade);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BlocksBlade*, "", "BlocksBlade");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x8C
  #pragma pack(push, 1)
  // Autogenerated type: BlocksBlade
  // [TokenAttribute] Offset: FFFFFFFF
  class BlocksBlade : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::BlocksBlade::Element
    class Element;
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // private UnityEngine.Mesh _elementMesh
    // Size: 0x8
    // Offset: 0x18
    UnityEngine::Mesh* elementMesh;
    // Field size check
    static_assert(sizeof(UnityEngine::Mesh*) == 0x8);
    // private UnityEngine.Material _material
    // Size: 0x8
    // Offset: 0x20
    UnityEngine::Material* material;
    // Field size check
    static_assert(sizeof(UnityEngine::Material*) == 0x8);
    // private System.Int32 _numberOfElements
    // Size: 0x4
    // Offset: 0x28
    int numberOfElements;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Single _radius
    // Size: 0x4
    // Offset: 0x2C
    float radius;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _length
    // Size: 0x4
    // Offset: 0x30
    float length;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _minVelocity
    // Size: 0x4
    // Offset: 0x34
    float minVelocity;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _maxVelocity
    // Size: 0x4
    // Offset: 0x38
    float maxVelocity;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _elementWidth
    // Size: 0x4
    // Offset: 0x3C
    float elementWidth;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _minElementLength
    // Size: 0x4
    // Offset: 0x40
    float minElementLength;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _maxElementLength
    // Size: 0x4
    // Offset: 0x44
    float maxElementLength;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private UnityEngine.Color <color>k__BackingField
    // Size: 0x10
    // Offset: 0x48
    UnityEngine::Color color;
    // Field size check
    static_assert(sizeof(UnityEngine::Color) == 0x10);
    // private System.Collections.Generic.List`1<BlocksBlade/Element> _elements
    // Size: 0x8
    // Offset: 0x58
    System::Collections::Generic::List_1<GlobalNamespace::BlocksBlade::Element*>* elements;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<GlobalNamespace::BlocksBlade::Element*>*) == 0x8);
    // private UnityEngine.Vector4[] _positions
    // Size: 0x8
    // Offset: 0x60
    ::ArrayW<UnityEngine::Vector4> positions;
    // Field size check
    static_assert(sizeof(::ArrayW<UnityEngine::Vector4>) == 0x8);
    // private UnityEngine.Vector4[] _sizes
    // Size: 0x8
    // Offset: 0x68
    ::ArrayW<UnityEngine::Vector4> sizes;
    // Field size check
    static_assert(sizeof(::ArrayW<UnityEngine::Vector4>) == 0x8);
    // private UnityEngine.Vector4[] _colors
    // Size: 0x8
    // Offset: 0x70
    ::ArrayW<UnityEngine::Vector4> colors;
    // Field size check
    static_assert(sizeof(::ArrayW<UnityEngine::Vector4>) == 0x8);
    // private UnityEngine.Matrix4x4[] _matrices
    // Size: 0x8
    // Offset: 0x78
    ::ArrayW<UnityEngine::Matrix4x4> matrices;
    // Field size check
    static_assert(sizeof(::ArrayW<UnityEngine::Matrix4x4>) == 0x8);
    // private UnityEngine.MaterialPropertyBlock _materialPropertyBlock
    // Size: 0x8
    // Offset: 0x80
    UnityEngine::MaterialPropertyBlock* materialPropertyBlock;
    // Field size check
    static_assert(sizeof(UnityEngine::MaterialPropertyBlock*) == 0x8);
    // private System.Int32 _layer
    // Size: 0x4
    // Offset: 0x88
    int layer;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0xF3FA94
    // Get static field: static private readonly System.Int32 _positionPropertyID
    static int _get__positionPropertyID();
    // Set static field: static private readonly System.Int32 _positionPropertyID
    static void _set__positionPropertyID(int value);
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0xF3FAA4
    // Get static field: static private readonly System.Int32 _sizePropertyID
    static int _get__sizePropertyID();
    // Set static field: static private readonly System.Int32 _sizePropertyID
    static void _set__sizePropertyID(int value);
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0xF3FAB4
    // Get static field: static private readonly System.Int32 _colorPropertyID
    static int _get__colorPropertyID();
    // Set static field: static private readonly System.Int32 _colorPropertyID
    static void _set__colorPropertyID(int value);
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0xF3FAC4
    // Get static field: static private readonly System.Int32 _zClipPropertyID
    static int _get__zClipPropertyID();
    // Set static field: static private readonly System.Int32 _zClipPropertyID
    static void _set__zClipPropertyID(int value);
    // Get instance field reference: private UnityEngine.Mesh _elementMesh
    UnityEngine::Mesh*& dyn__elementMesh();
    // Get instance field reference: private UnityEngine.Material _material
    UnityEngine::Material*& dyn__material();
    // Get instance field reference: private System.Int32 _numberOfElements
    int& dyn__numberOfElements();
    // Get instance field reference: private System.Single _radius
    float& dyn__radius();
    // Get instance field reference: private System.Single _length
    float& dyn__length();
    // Get instance field reference: private System.Single _minVelocity
    float& dyn__minVelocity();
    // Get instance field reference: private System.Single _maxVelocity
    float& dyn__maxVelocity();
    // Get instance field reference: private System.Single _elementWidth
    float& dyn__elementWidth();
    // Get instance field reference: private System.Single _minElementLength
    float& dyn__minElementLength();
    // Get instance field reference: private System.Single _maxElementLength
    float& dyn__maxElementLength();
    // Get instance field reference: private UnityEngine.Color <color>k__BackingField
    UnityEngine::Color& dyn_$color$k__BackingField();
    // Get instance field reference: private System.Collections.Generic.List`1<BlocksBlade/Element> _elements
    System::Collections::Generic::List_1<GlobalNamespace::BlocksBlade::Element*>*& dyn__elements();
    // Get instance field reference: private UnityEngine.Vector4[] _positions
    ::ArrayW<UnityEngine::Vector4>& dyn__positions();
    // Get instance field reference: private UnityEngine.Vector4[] _sizes
    ::ArrayW<UnityEngine::Vector4>& dyn__sizes();
    // Get instance field reference: private UnityEngine.Vector4[] _colors
    ::ArrayW<UnityEngine::Vector4>& dyn__colors();
    // Get instance field reference: private UnityEngine.Matrix4x4[] _matrices
    ::ArrayW<UnityEngine::Matrix4x4>& dyn__matrices();
    // Get instance field reference: private UnityEngine.MaterialPropertyBlock _materialPropertyBlock
    UnityEngine::MaterialPropertyBlock*& dyn__materialPropertyBlock();
    // Get instance field reference: private System.Int32 _layer
    int& dyn__layer();
    // public UnityEngine.Color get_color()
    // Offset: 0x1333A78
    UnityEngine::Color get_color();
    // public System.Void set_color(UnityEngine.Color value)
    // Offset: 0x1333A84
    void set_color(UnityEngine::Color value);
    // protected System.Void Start()
    // Offset: 0x1333A90
    void Start();
    // protected System.Void Update()
    // Offset: 0x1333E20
    void Update();
    // private System.Void SetUpElement(BlocksBlade/Element element, System.Single velocity, UnityEngine.Color color)
    // Offset: 0x1333C40
    void SetUpElement(GlobalNamespace::BlocksBlade::Element* element, float velocity, UnityEngine::Color color);
    // private UnityEngine.Vector2 RandomPointOnCircle(System.Single radius)
    // Offset: 0x133420C
    UnityEngine::Vector2 RandomPointOnCircle(float radius);
    // public System.Void .ctor()
    // Offset: 0x13342CC
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BlocksBlade* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::BlocksBlade::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BlocksBlade*, creationType>()));
    }
    // static private System.Void .cctor()
    // Offset: 0x1334304
    // Implemented from: UnityEngine.Object
    // Base method: System.Void Object::.cctor()
    static void _cctor();
  }; // BlocksBlade
  #pragma pack(pop)
  static check_size<sizeof(BlocksBlade), 136 + sizeof(int)> __GlobalNamespace_BlocksBladeSizeCheck;
  static_assert(sizeof(BlocksBlade) == 0x8C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BlocksBlade::get_color
// Il2CppName: get_color
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Color (GlobalNamespace::BlocksBlade::*)()>(&GlobalNamespace::BlocksBlade::get_color)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BlocksBlade*), "get_color", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BlocksBlade::set_color
// Il2CppName: set_color
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BlocksBlade::*)(UnityEngine::Color)>(&GlobalNamespace::BlocksBlade::set_color)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BlocksBlade*), "set_color", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BlocksBlade::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BlocksBlade::*)()>(&GlobalNamespace::BlocksBlade::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BlocksBlade*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BlocksBlade::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BlocksBlade::*)()>(&GlobalNamespace::BlocksBlade::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BlocksBlade*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BlocksBlade::SetUpElement
// Il2CppName: SetUpElement
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BlocksBlade::*)(GlobalNamespace::BlocksBlade::Element*, float, UnityEngine::Color)>(&GlobalNamespace::BlocksBlade::SetUpElement)> {
  static const MethodInfo* get() {
    static auto* element = &::il2cpp_utils::GetClassFromName("", "BlocksBlade/Element")->byval_arg;
    static auto* velocity = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* color = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BlocksBlade*), "SetUpElement", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{element, velocity, color});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BlocksBlade::RandomPointOnCircle
// Il2CppName: RandomPointOnCircle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector2 (GlobalNamespace::BlocksBlade::*)(float)>(&GlobalNamespace::BlocksBlade::RandomPointOnCircle)> {
  static const MethodInfo* get() {
    static auto* radius = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BlocksBlade*), "RandomPointOnCircle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{radius});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BlocksBlade::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::BlocksBlade::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::BlocksBlade::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BlocksBlade*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
