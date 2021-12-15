// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Rect
  struct Rect;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: RectOffset
  class RectOffset;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(UnityEngine::RectOffset);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::RectOffset*, "UnityEngine", "RectOffset");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x20
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.RectOffset
  // [TokenAttribute] Offset: FFFFFFFF
  // [UsedByNativeCodeAttribute] Offset: EB2F50
  // [NativeHeaderAttribute] Offset: EB2F50
  class RectOffset : public ::Il2CppObject {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // System.IntPtr m_Ptr
    // Size: 0x8
    // Offset: 0x10
    System::IntPtr m_Ptr;
    // Field size check
    static_assert(sizeof(System::IntPtr) == 0x8);
    // private readonly System.Object m_SourceStyle
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppObject* m_SourceStyle;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    public:
    // Get instance field reference: System.IntPtr m_Ptr
    System::IntPtr& dyn_m_Ptr();
    // Get instance field reference: private readonly System.Object m_SourceStyle
    ::Il2CppObject*& dyn_m_SourceStyle();
    // public System.Int32 get_left()
    // Offset: 0x1DF3064
    int get_left();
    // public System.Void set_left(System.Int32 value)
    // Offset: 0x1DF2CE0
    void set_left(int value);
    // public System.Int32 get_right()
    // Offset: 0x1DF30A4
    int get_right();
    // public System.Void set_right(System.Int32 value)
    // Offset: 0x1DF2D30
    void set_right(int value);
    // public System.Int32 get_top()
    // Offset: 0x1DF30E4
    int get_top();
    // public System.Void set_top(System.Int32 value)
    // Offset: 0x1DF2D80
    void set_top(int value);
    // public System.Int32 get_bottom()
    // Offset: 0x1DF3124
    int get_bottom();
    // public System.Void set_bottom(System.Int32 value)
    // Offset: 0x1DF2DD0
    void set_bottom(int value);
    // public System.Int32 get_horizontal()
    // Offset: 0x1DF31A4
    int get_horizontal();
    // public System.Int32 get_vertical()
    // Offset: 0x1DF31E4
    int get_vertical();
    // System.Void .ctor(System.Object sourceStyle, System.IntPtr source)
    // Offset: 0x1DF2A90
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RectOffset* New_ctor(::Il2CppObject* sourceStyle, System::IntPtr source) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::RectOffset::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RectOffset*, creationType>(sourceStyle, source)));
    }
    // public System.Void .ctor(System.Int32 left, System.Int32 right, System.Int32 top, System.Int32 bottom)
    // Offset: 0x1DF2BC8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RectOffset* New_ctor(int left, int right, int top, int bottom) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::RectOffset::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RectOffset*, creationType>(left, right, top, bottom)));
    }
    // private System.Void Destroy()
    // Offset: 0x1DF2B3C
    void Destroy();
    // static private System.IntPtr InternalCreate()
    // Offset: 0x1DF2A5C
    static System::IntPtr InternalCreate();
    // static private System.Void InternalDestroy(System.IntPtr ptr)
    // Offset: 0x1DF3164
    static void InternalDestroy(System::IntPtr ptr);
    // public UnityEngine.Rect Remove(UnityEngine.Rect rect)
    // Offset: 0x1DF3224
    UnityEngine::Rect Remove(UnityEngine::Rect rect);
    // private System.Void Remove_Injected(ref UnityEngine.Rect rect, out UnityEngine.Rect ret)
    // Offset: 0x1DF328C
    void Remove_Injected(ByRef<UnityEngine::Rect> rect, ByRef<UnityEngine::Rect> ret);
    // public System.Void .ctor()
    // Offset: 0x1DF2A10
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RectOffset* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::RectOffset::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RectOffset*, creationType>()));
    }
    // protected override System.Void Finalize()
    // Offset: 0x1DF2AC8
    // Implemented from: System.Object
    // Base method: System.Void Object::Finalize()
    void Finalize();
    // public override System.String ToString()
    // Offset: 0x1DF2E20
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::Il2CppString* ToString();
  }; // UnityEngine.RectOffset
  #pragma pack(pop)
  static check_size<sizeof(RectOffset), 24 + sizeof(::Il2CppObject*)> __UnityEngine_RectOffsetSizeCheck;
  static_assert(sizeof(RectOffset) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::RectOffset::get_left
// Il2CppName: get_left
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::RectOffset::*)()>(&UnityEngine::RectOffset::get_left)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::RectOffset*), "get_left", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::RectOffset::set_left
// Il2CppName: set_left
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::RectOffset::*)(int)>(&UnityEngine::RectOffset::set_left)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::RectOffset*), "set_left", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::RectOffset::get_right
// Il2CppName: get_right
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::RectOffset::*)()>(&UnityEngine::RectOffset::get_right)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::RectOffset*), "get_right", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::RectOffset::set_right
// Il2CppName: set_right
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::RectOffset::*)(int)>(&UnityEngine::RectOffset::set_right)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::RectOffset*), "set_right", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::RectOffset::get_top
// Il2CppName: get_top
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::RectOffset::*)()>(&UnityEngine::RectOffset::get_top)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::RectOffset*), "get_top", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::RectOffset::set_top
// Il2CppName: set_top
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::RectOffset::*)(int)>(&UnityEngine::RectOffset::set_top)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::RectOffset*), "set_top", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::RectOffset::get_bottom
// Il2CppName: get_bottom
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::RectOffset::*)()>(&UnityEngine::RectOffset::get_bottom)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::RectOffset*), "get_bottom", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::RectOffset::set_bottom
// Il2CppName: set_bottom
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::RectOffset::*)(int)>(&UnityEngine::RectOffset::set_bottom)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::RectOffset*), "set_bottom", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::RectOffset::get_horizontal
// Il2CppName: get_horizontal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::RectOffset::*)()>(&UnityEngine::RectOffset::get_horizontal)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::RectOffset*), "get_horizontal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::RectOffset::get_vertical
// Il2CppName: get_vertical
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::RectOffset::*)()>(&UnityEngine::RectOffset::get_vertical)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::RectOffset*), "get_vertical", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::RectOffset::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::RectOffset::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::RectOffset::Destroy
// Il2CppName: Destroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::RectOffset::*)()>(&UnityEngine::RectOffset::Destroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::RectOffset*), "Destroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::RectOffset::InternalCreate
// Il2CppName: InternalCreate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IntPtr (*)()>(&UnityEngine::RectOffset::InternalCreate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::RectOffset*), "InternalCreate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::RectOffset::InternalDestroy
// Il2CppName: InternalDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::IntPtr)>(&UnityEngine::RectOffset::InternalDestroy)> {
  static const MethodInfo* get() {
    static auto* ptr = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::RectOffset*), "InternalDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ptr});
  }
};
// Writing MetadataGetter for method: UnityEngine::RectOffset::Remove
// Il2CppName: Remove
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Rect (UnityEngine::RectOffset::*)(UnityEngine::Rect)>(&UnityEngine::RectOffset::Remove)> {
  static const MethodInfo* get() {
    static auto* rect = &::il2cpp_utils::GetClassFromName("UnityEngine", "Rect")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::RectOffset*), "Remove", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rect});
  }
};
// Writing MetadataGetter for method: UnityEngine::RectOffset::Remove_Injected
// Il2CppName: Remove_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::RectOffset::*)(ByRef<UnityEngine::Rect>, ByRef<UnityEngine::Rect>)>(&UnityEngine::RectOffset::Remove_Injected)> {
  static const MethodInfo* get() {
    static auto* rect = &::il2cpp_utils::GetClassFromName("UnityEngine", "Rect")->this_arg;
    static auto* ret = &::il2cpp_utils::GetClassFromName("UnityEngine", "Rect")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::RectOffset*), "Remove_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rect, ret});
  }
};
// Writing MetadataGetter for method: UnityEngine::RectOffset::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::RectOffset::Finalize
// Il2CppName: Finalize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::RectOffset::*)()>(&UnityEngine::RectOffset::Finalize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::RectOffset*), "Finalize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::RectOffset::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (UnityEngine::RectOffset::*)()>(&UnityEngine::RectOffset::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::RectOffset*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
