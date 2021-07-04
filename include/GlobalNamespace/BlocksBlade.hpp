// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
// Including type: UnityEngine.Vector4
#include "UnityEngine/Vector4.hpp"
// Including type: UnityEngine.Matrix4x4
#include "UnityEngine/Matrix4x4.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
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
  // Size: 0x8C
  #pragma pack(push, 1)
  // Autogenerated type: BlocksBlade
  class BlocksBlade : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::BlocksBlade::Element
    class Element;
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
    // [CompilerGeneratedAttribute] Offset: 0xE1F3D8
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
    ::Array<UnityEngine::Vector4>* positions;
    // Field size check
    static_assert(sizeof(::Array<UnityEngine::Vector4>*) == 0x8);
    // private UnityEngine.Vector4[] _sizes
    // Size: 0x8
    // Offset: 0x68
    ::Array<UnityEngine::Vector4>* sizes;
    // Field size check
    static_assert(sizeof(::Array<UnityEngine::Vector4>*) == 0x8);
    // private UnityEngine.Vector4[] _colors
    // Size: 0x8
    // Offset: 0x70
    ::Array<UnityEngine::Vector4>* colors;
    // Field size check
    static_assert(sizeof(::Array<UnityEngine::Vector4>*) == 0x8);
    // private UnityEngine.Matrix4x4[] _matrices
    // Size: 0x8
    // Offset: 0x78
    ::Array<UnityEngine::Matrix4x4>* matrices;
    // Field size check
    static_assert(sizeof(::Array<UnityEngine::Matrix4x4>*) == 0x8);
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
    // Creating value type constructor for type: BlocksBlade
    BlocksBlade(UnityEngine::Mesh* elementMesh_ = {}, UnityEngine::Material* material_ = {}, int numberOfElements_ = {}, float radius_ = {}, float length_ = {}, float minVelocity_ = {}, float maxVelocity_ = {}, float elementWidth_ = {}, float minElementLength_ = {}, float maxElementLength_ = {}, UnityEngine::Color color_ = {}, System::Collections::Generic::List_1<GlobalNamespace::BlocksBlade::Element*>* elements_ = {}, ::Array<UnityEngine::Vector4>* positions_ = {}, ::Array<UnityEngine::Vector4>* sizes_ = {}, ::Array<UnityEngine::Vector4>* colors_ = {}, ::Array<UnityEngine::Matrix4x4>* matrices_ = {}, UnityEngine::MaterialPropertyBlock* materialPropertyBlock_ = {}, int layer_ = {}) noexcept : elementMesh{elementMesh_}, material{material_}, numberOfElements{numberOfElements_}, radius{radius_}, length{length_}, minVelocity{minVelocity_}, maxVelocity{maxVelocity_}, elementWidth{elementWidth_}, minElementLength{minElementLength_}, maxElementLength{maxElementLength_}, color{color_}, elements{elements_}, positions{positions_}, sizes{sizes_}, colors{colors_}, matrices{matrices_}, materialPropertyBlock{materialPropertyBlock_}, layer{layer_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0xE1F3E8
    // Get static field: static private readonly System.Int32 _positionPropertyID
    static int _get__positionPropertyID();
    // Set static field: static private readonly System.Int32 _positionPropertyID
    static void _set__positionPropertyID(int value);
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0xE1F3F8
    // Get static field: static private readonly System.Int32 _sizePropertyID
    static int _get__sizePropertyID();
    // Set static field: static private readonly System.Int32 _sizePropertyID
    static void _set__sizePropertyID(int value);
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0xE1F408
    // Get static field: static private readonly System.Int32 _colorPropertyID
    static int _get__colorPropertyID();
    // Set static field: static private readonly System.Int32 _colorPropertyID
    static void _set__colorPropertyID(int value);
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0xE1F418
    // Get static field: static private readonly System.Int32 _zClipPropertyID
    static int _get__zClipPropertyID();
    // Set static field: static private readonly System.Int32 _zClipPropertyID
    static void _set__zClipPropertyID(int value);
    // public UnityEngine.Color get_color()
    // Offset: 0x110FA08
    UnityEngine::Color get_color();
    // public System.Void set_color(UnityEngine.Color value)
    // Offset: 0x110FA14
    void set_color(UnityEngine::Color value);
    // protected System.Void Start()
    // Offset: 0x110FA20
    void Start();
    // protected System.Void Update()
    // Offset: 0x110FDB8
    void Update();
    // private System.Void SetUpElement(BlocksBlade/Element element, System.Single velocity, UnityEngine.Color color)
    // Offset: 0x110FBD8
    void SetUpElement(GlobalNamespace::BlocksBlade::Element* element, float velocity, UnityEngine::Color color);
    // private UnityEngine.Vector2 RandomPointOnCircle(System.Single radius)
    // Offset: 0x11101A4
    UnityEngine::Vector2 RandomPointOnCircle(float radius);
    // public System.Void .ctor()
    // Offset: 0x1110264
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
    // Offset: 0x111029C
    // Implemented from: UnityEngine.Object
    // Base method: System.Void Object::.cctor()
    static void _cctor();
  }; // BlocksBlade
  #pragma pack(pop)
  static check_size<sizeof(BlocksBlade), 136 + sizeof(int)> __GlobalNamespace_BlocksBladeSizeCheck;
  static_assert(sizeof(BlocksBlade) == 0x8C);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BlocksBlade*, "", "BlocksBlade");
// Writing MetadataGetter for method: GlobalNamespace::BlocksBlade::get_color
// Il2CppName: get_color
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Color (GlobalNamespace::BlocksBlade::*)()>(&GlobalNamespace::BlocksBlade::get_color)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BlocksBlade*), "get_color", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BlocksBlade::set_color
// Il2CppName: set_color
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BlocksBlade::*)(UnityEngine::Color)>(&GlobalNamespace::BlocksBlade::set_color)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BlocksBlade*), "set_color", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::Color>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BlocksBlade::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BlocksBlade::*)()>(&GlobalNamespace::BlocksBlade::Start)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BlocksBlade*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BlocksBlade::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BlocksBlade::*)()>(&GlobalNamespace::BlocksBlade::Update)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BlocksBlade*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BlocksBlade::SetUpElement
// Il2CppName: SetUpElement
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BlocksBlade::*)(GlobalNamespace::BlocksBlade::Element*, float, UnityEngine::Color)>(&GlobalNamespace::BlocksBlade::SetUpElement)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BlocksBlade*), "SetUpElement", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<GlobalNamespace::BlocksBlade::Element*>(), ::il2cpp_utils::ExtractIndependentType<float>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::Color>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BlocksBlade::RandomPointOnCircle
// Il2CppName: RandomPointOnCircle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector2 (GlobalNamespace::BlocksBlade::*)(float)>(&GlobalNamespace::BlocksBlade::RandomPointOnCircle)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BlocksBlade*), "RandomPointOnCircle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<float>()});
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
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BlocksBlade*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
