// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
#include "extern/beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: TMPro
namespace TMPro {
  // Forward declaring type: TMP_Text
  class TMP_Text;
  // Forward declaring type: CaretPosition
  struct CaretPosition;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: String
  class String;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Camera
  class Camera;
  // Forward declaring type: RectTransform
  class RectTransform;
  // Forward declaring type: Transform
  class Transform;
  // Forward declaring type: Vector2
  struct Vector2;
}
// Completed forward declares
// Type namespace: TMPro
namespace TMPro {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: TMPro.TMP_TextUtilities
  // [TokenAttribute] Offset: FFFFFFFF
  class TMP_TextUtilities : public ::Il2CppObject {
    public:
    // Nested type: TMPro::TMP_TextUtilities::LineSegment
    struct LineSegment;
    // Get static field: static private UnityEngine.Vector3[] m_rectWorldCorners
    static ::ArrayW<UnityEngine::Vector3> _get_m_rectWorldCorners();
    // Set static field: static private UnityEngine.Vector3[] m_rectWorldCorners
    static void _set_m_rectWorldCorners(::ArrayW<UnityEngine::Vector3> value);
    // static field const value: static private System.String k_lookupStringL
    static constexpr const char* k_lookupStringL = "-------------------------------- !-#$%&-()*+,-./0123456789:;<=>?@abcdefghijklmnopqrstuvwxyz[-]^_`abcdefghijklmnopqrstuvwxyz{|}~-";
    // Get static field: static private System.String k_lookupStringL
    static ::Il2CppString* _get_k_lookupStringL();
    // Set static field: static private System.String k_lookupStringL
    static void _set_k_lookupStringL(::Il2CppString* value);
    // static field const value: static private System.String k_lookupStringU
    static constexpr const char* k_lookupStringU = "-------------------------------- !-#$%&-()*+,-./0123456789:;<=>?@ABCDEFGHIJKLMNOPQRSTUVWXYZ[-]^_`ABCDEFGHIJKLMNOPQRSTUVWXYZ{|}~-";
    // Get static field: static private System.String k_lookupStringU
    static ::Il2CppString* _get_k_lookupStringU();
    // Set static field: static private System.String k_lookupStringU
    static void _set_k_lookupStringU(::Il2CppString* value);
    // static private System.Void .cctor()
    // Offset: 0x15C2DBC
    static void _cctor();
    // static public System.Int32 GetCursorIndexFromPosition(TMPro.TMP_Text textComponent, UnityEngine.Vector3 position, UnityEngine.Camera camera)
    // Offset: 0x15BF08C
    static int GetCursorIndexFromPosition(TMPro::TMP_Text* textComponent, UnityEngine::Vector3 position, UnityEngine::Camera* camera);
    // static public System.Int32 GetCursorIndexFromPosition(TMPro.TMP_Text textComponent, UnityEngine.Vector3 position, UnityEngine.Camera camera, out TMPro.CaretPosition cursor)
    // Offset: 0x15BF870
    static int GetCursorIndexFromPosition(TMPro::TMP_Text* textComponent, UnityEngine::Vector3 position, UnityEngine::Camera* camera, ByRef<TMPro::CaretPosition> cursor);
    // static public System.Int32 FindNearestLine(TMPro.TMP_Text text, UnityEngine.Vector3 position, UnityEngine.Camera camera)
    // Offset: 0x15BFAAC
    static int FindNearestLine(TMPro::TMP_Text* text, UnityEngine::Vector3 position, UnityEngine::Camera* camera);
    // static public System.Int32 FindNearestCharacterOnLine(TMPro.TMP_Text text, UnityEngine.Vector3 position, System.Int32 line, UnityEngine.Camera camera, System.Boolean visibleOnly)
    // Offset: 0x15BFCE8
    static int FindNearestCharacterOnLine(TMPro::TMP_Text* text, UnityEngine::Vector3 position, int line, UnityEngine::Camera* camera, bool visibleOnly);
    // static public System.Boolean IsIntersectingRectTransform(UnityEngine.RectTransform rectTransform, UnityEngine.Vector3 position, UnityEngine.Camera camera)
    // Offset: 0x15C05E8
    static bool IsIntersectingRectTransform(UnityEngine::RectTransform* rectTransform, UnityEngine::Vector3 position, UnityEngine::Camera* camera);
    // static public System.Int32 FindIntersectingCharacter(TMPro.TMP_Text text, UnityEngine.Vector3 position, UnityEngine.Camera camera, System.Boolean visibleOnly)
    // Offset: 0x15C0764
    static int FindIntersectingCharacter(TMPro::TMP_Text* text, UnityEngine::Vector3 position, UnityEngine::Camera* camera, bool visibleOnly);
    // static public System.Int32 FindNearestCharacter(TMPro.TMP_Text text, UnityEngine.Vector3 position, UnityEngine.Camera camera, System.Boolean visibleOnly)
    // Offset: 0x15BF23C
    static int FindNearestCharacter(TMPro::TMP_Text* text, UnityEngine::Vector3 position, UnityEngine::Camera* camera, bool visibleOnly);
    // static public System.Int32 FindIntersectingWord(TMPro.TMP_Text text, UnityEngine.Vector3 position, UnityEngine.Camera camera)
    // Offset: 0x15C0A10
    static int FindIntersectingWord(TMPro::TMP_Text* text, UnityEngine::Vector3 position, UnityEngine::Camera* camera);
    // static public System.Int32 FindNearestWord(TMPro.TMP_Text text, UnityEngine.Vector3 position, UnityEngine.Camera camera)
    // Offset: 0x15C10D8
    static int FindNearestWord(TMPro::TMP_Text* text, UnityEngine::Vector3 position, UnityEngine::Camera* camera);
    // static public System.Int32 FindIntersectingLine(TMPro.TMP_Text text, UnityEngine.Vector3 position, UnityEngine.Camera camera)
    // Offset: 0x15C1944
    static int FindIntersectingLine(TMPro::TMP_Text* text, UnityEngine::Vector3 position, UnityEngine::Camera* camera);
    // static public System.Int32 FindIntersectingLink(TMPro.TMP_Text text, UnityEngine.Vector3 position, UnityEngine.Camera camera)
    // Offset: 0x15C1B2C
    static int FindIntersectingLink(TMPro::TMP_Text* text, UnityEngine::Vector3 position, UnityEngine::Camera* camera);
    // static public System.Int32 FindNearestLink(TMPro.TMP_Text text, UnityEngine.Vector3 position, UnityEngine.Camera camera)
    // Offset: 0x15C1F70
    static int FindNearestLink(TMPro::TMP_Text* text, UnityEngine::Vector3 position, UnityEngine::Camera* camera);
    // static private System.Boolean PointIntersectRectangle(UnityEngine.Vector3 m, UnityEngine.Vector3 a, UnityEngine.Vector3 b, UnityEngine.Vector3 c, UnityEngine.Vector3 d)
    // Offset: 0x15C0120
    static bool PointIntersectRectangle(UnityEngine::Vector3 m, UnityEngine::Vector3 a, UnityEngine::Vector3 b, UnityEngine::Vector3 c, UnityEngine::Vector3 d);
    // static public System.Boolean ScreenPointToWorldPointInRectangle(UnityEngine.Transform transform, UnityEngine.Vector2 screenPoint, UnityEngine.Camera cam, out UnityEngine.Vector3 worldPoint)
    // Offset: 0x15BF630
    static bool ScreenPointToWorldPointInRectangle(UnityEngine::Transform* transform, UnityEngine::Vector2 screenPoint, UnityEngine::Camera* cam, ByRef<UnityEngine::Vector3> worldPoint);
    // static private System.Boolean IntersectLinePlane(TMPro.TMP_TextUtilities/TMPro.LineSegment line, UnityEngine.Vector3 point, UnityEngine.Vector3 normal, out UnityEngine.Vector3 intersectingPoint)
    // Offset: 0x15C27EC
    static bool IntersectLinePlane(TMPro::TMP_TextUtilities::LineSegment line, UnityEngine::Vector3 point, UnityEngine::Vector3 normal, ByRef<UnityEngine::Vector3> intersectingPoint);
    // static public System.Single DistanceToLine(UnityEngine.Vector3 a, UnityEngine.Vector3 b, UnityEngine.Vector3 point)
    // Offset: 0x15C0378
    static float DistanceToLine(UnityEngine::Vector3 a, UnityEngine::Vector3 b, UnityEngine::Vector3 point);
    // static public System.Char ToLowerFast(System.Char c)
    // Offset: 0x15C2A0C
    static ::Il2CppChar ToLowerFast(::Il2CppChar c);
    // static public System.Char ToUpperFast(System.Char c)
    // Offset: 0x15C2A88
    static ::Il2CppChar ToUpperFast(::Il2CppChar c);
    // static public System.Int32 GetSimpleHashCode(System.String s)
    // Offset: 0x15C2B04
    static int GetSimpleHashCode(::Il2CppString* s);
    // static public System.UInt32 GetSimpleHashCodeLowercase(System.String s)
    // Offset: 0x15C2B7C
    static uint GetSimpleHashCodeLowercase(::Il2CppString* s);
    // static public System.Int32 HexToInt(System.Char hex)
    // Offset: 0x15C2C50
    static int HexToInt(::Il2CppChar hex);
    // static public System.Int32 StringHexToInt(System.String s)
    // Offset: 0x15C2C7C
    static int StringHexToInt(::Il2CppString* s);
  }; // TMPro.TMP_TextUtilities
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(TMPro::TMP_TextUtilities*, "TMPro", "TMP_TextUtilities");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: TMPro::TMP_TextUtilities::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&TMPro::TMP_TextUtilities::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_TextUtilities*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_TextUtilities::GetCursorIndexFromPosition
// Il2CppName: GetCursorIndexFromPosition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(TMPro::TMP_Text*, UnityEngine::Vector3, UnityEngine::Camera*)>(&TMPro::TMP_TextUtilities::GetCursorIndexFromPosition)> {
  static const MethodInfo* get() {
    static auto* textComponent = &::il2cpp_utils::GetClassFromName("TMPro", "TMP_Text")->byval_arg;
    static auto* position = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* camera = &::il2cpp_utils::GetClassFromName("UnityEngine", "Camera")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_TextUtilities*), "GetCursorIndexFromPosition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{textComponent, position, camera});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_TextUtilities::GetCursorIndexFromPosition
// Il2CppName: GetCursorIndexFromPosition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(TMPro::TMP_Text*, UnityEngine::Vector3, UnityEngine::Camera*, ByRef<TMPro::CaretPosition>)>(&TMPro::TMP_TextUtilities::GetCursorIndexFromPosition)> {
  static const MethodInfo* get() {
    static auto* textComponent = &::il2cpp_utils::GetClassFromName("TMPro", "TMP_Text")->byval_arg;
    static auto* position = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* camera = &::il2cpp_utils::GetClassFromName("UnityEngine", "Camera")->byval_arg;
    static auto* cursor = &::il2cpp_utils::GetClassFromName("TMPro", "CaretPosition")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_TextUtilities*), "GetCursorIndexFromPosition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{textComponent, position, camera, cursor});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_TextUtilities::FindNearestLine
// Il2CppName: FindNearestLine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(TMPro::TMP_Text*, UnityEngine::Vector3, UnityEngine::Camera*)>(&TMPro::TMP_TextUtilities::FindNearestLine)> {
  static const MethodInfo* get() {
    static auto* text = &::il2cpp_utils::GetClassFromName("TMPro", "TMP_Text")->byval_arg;
    static auto* position = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* camera = &::il2cpp_utils::GetClassFromName("UnityEngine", "Camera")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_TextUtilities*), "FindNearestLine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{text, position, camera});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_TextUtilities::FindNearestCharacterOnLine
// Il2CppName: FindNearestCharacterOnLine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(TMPro::TMP_Text*, UnityEngine::Vector3, int, UnityEngine::Camera*, bool)>(&TMPro::TMP_TextUtilities::FindNearestCharacterOnLine)> {
  static const MethodInfo* get() {
    static auto* text = &::il2cpp_utils::GetClassFromName("TMPro", "TMP_Text")->byval_arg;
    static auto* position = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* line = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* camera = &::il2cpp_utils::GetClassFromName("UnityEngine", "Camera")->byval_arg;
    static auto* visibleOnly = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_TextUtilities*), "FindNearestCharacterOnLine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{text, position, line, camera, visibleOnly});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_TextUtilities::IsIntersectingRectTransform
// Il2CppName: IsIntersectingRectTransform
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(UnityEngine::RectTransform*, UnityEngine::Vector3, UnityEngine::Camera*)>(&TMPro::TMP_TextUtilities::IsIntersectingRectTransform)> {
  static const MethodInfo* get() {
    static auto* rectTransform = &::il2cpp_utils::GetClassFromName("UnityEngine", "RectTransform")->byval_arg;
    static auto* position = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* camera = &::il2cpp_utils::GetClassFromName("UnityEngine", "Camera")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_TextUtilities*), "IsIntersectingRectTransform", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rectTransform, position, camera});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_TextUtilities::FindIntersectingCharacter
// Il2CppName: FindIntersectingCharacter
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(TMPro::TMP_Text*, UnityEngine::Vector3, UnityEngine::Camera*, bool)>(&TMPro::TMP_TextUtilities::FindIntersectingCharacter)> {
  static const MethodInfo* get() {
    static auto* text = &::il2cpp_utils::GetClassFromName("TMPro", "TMP_Text")->byval_arg;
    static auto* position = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* camera = &::il2cpp_utils::GetClassFromName("UnityEngine", "Camera")->byval_arg;
    static auto* visibleOnly = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_TextUtilities*), "FindIntersectingCharacter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{text, position, camera, visibleOnly});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_TextUtilities::FindNearestCharacter
// Il2CppName: FindNearestCharacter
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(TMPro::TMP_Text*, UnityEngine::Vector3, UnityEngine::Camera*, bool)>(&TMPro::TMP_TextUtilities::FindNearestCharacter)> {
  static const MethodInfo* get() {
    static auto* text = &::il2cpp_utils::GetClassFromName("TMPro", "TMP_Text")->byval_arg;
    static auto* position = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* camera = &::il2cpp_utils::GetClassFromName("UnityEngine", "Camera")->byval_arg;
    static auto* visibleOnly = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_TextUtilities*), "FindNearestCharacter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{text, position, camera, visibleOnly});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_TextUtilities::FindIntersectingWord
// Il2CppName: FindIntersectingWord
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(TMPro::TMP_Text*, UnityEngine::Vector3, UnityEngine::Camera*)>(&TMPro::TMP_TextUtilities::FindIntersectingWord)> {
  static const MethodInfo* get() {
    static auto* text = &::il2cpp_utils::GetClassFromName("TMPro", "TMP_Text")->byval_arg;
    static auto* position = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* camera = &::il2cpp_utils::GetClassFromName("UnityEngine", "Camera")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_TextUtilities*), "FindIntersectingWord", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{text, position, camera});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_TextUtilities::FindNearestWord
// Il2CppName: FindNearestWord
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(TMPro::TMP_Text*, UnityEngine::Vector3, UnityEngine::Camera*)>(&TMPro::TMP_TextUtilities::FindNearestWord)> {
  static const MethodInfo* get() {
    static auto* text = &::il2cpp_utils::GetClassFromName("TMPro", "TMP_Text")->byval_arg;
    static auto* position = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* camera = &::il2cpp_utils::GetClassFromName("UnityEngine", "Camera")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_TextUtilities*), "FindNearestWord", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{text, position, camera});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_TextUtilities::FindIntersectingLine
// Il2CppName: FindIntersectingLine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(TMPro::TMP_Text*, UnityEngine::Vector3, UnityEngine::Camera*)>(&TMPro::TMP_TextUtilities::FindIntersectingLine)> {
  static const MethodInfo* get() {
    static auto* text = &::il2cpp_utils::GetClassFromName("TMPro", "TMP_Text")->byval_arg;
    static auto* position = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* camera = &::il2cpp_utils::GetClassFromName("UnityEngine", "Camera")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_TextUtilities*), "FindIntersectingLine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{text, position, camera});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_TextUtilities::FindIntersectingLink
// Il2CppName: FindIntersectingLink
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(TMPro::TMP_Text*, UnityEngine::Vector3, UnityEngine::Camera*)>(&TMPro::TMP_TextUtilities::FindIntersectingLink)> {
  static const MethodInfo* get() {
    static auto* text = &::il2cpp_utils::GetClassFromName("TMPro", "TMP_Text")->byval_arg;
    static auto* position = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* camera = &::il2cpp_utils::GetClassFromName("UnityEngine", "Camera")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_TextUtilities*), "FindIntersectingLink", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{text, position, camera});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_TextUtilities::FindNearestLink
// Il2CppName: FindNearestLink
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(TMPro::TMP_Text*, UnityEngine::Vector3, UnityEngine::Camera*)>(&TMPro::TMP_TextUtilities::FindNearestLink)> {
  static const MethodInfo* get() {
    static auto* text = &::il2cpp_utils::GetClassFromName("TMPro", "TMP_Text")->byval_arg;
    static auto* position = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* camera = &::il2cpp_utils::GetClassFromName("UnityEngine", "Camera")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_TextUtilities*), "FindNearestLink", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{text, position, camera});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_TextUtilities::PointIntersectRectangle
// Il2CppName: PointIntersectRectangle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(UnityEngine::Vector3, UnityEngine::Vector3, UnityEngine::Vector3, UnityEngine::Vector3, UnityEngine::Vector3)>(&TMPro::TMP_TextUtilities::PointIntersectRectangle)> {
  static const MethodInfo* get() {
    static auto* m = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* a = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* b = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* c = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* d = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_TextUtilities*), "PointIntersectRectangle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{m, a, b, c, d});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_TextUtilities::ScreenPointToWorldPointInRectangle
// Il2CppName: ScreenPointToWorldPointInRectangle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(UnityEngine::Transform*, UnityEngine::Vector2, UnityEngine::Camera*, ByRef<UnityEngine::Vector3>)>(&TMPro::TMP_TextUtilities::ScreenPointToWorldPointInRectangle)> {
  static const MethodInfo* get() {
    static auto* transform = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    static auto* screenPoint = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    static auto* cam = &::il2cpp_utils::GetClassFromName("UnityEngine", "Camera")->byval_arg;
    static auto* worldPoint = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_TextUtilities*), "ScreenPointToWorldPointInRectangle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{transform, screenPoint, cam, worldPoint});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_TextUtilities::IntersectLinePlane
// Il2CppName: IntersectLinePlane
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(TMPro::TMP_TextUtilities::LineSegment, UnityEngine::Vector3, UnityEngine::Vector3, ByRef<UnityEngine::Vector3>)>(&TMPro::TMP_TextUtilities::IntersectLinePlane)> {
  static const MethodInfo* get() {
    static auto* line = &::il2cpp_utils::GetClassFromName("TMPro", "TMP_TextUtilities/LineSegment")->byval_arg;
    static auto* point = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* normal = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* intersectingPoint = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_TextUtilities*), "IntersectLinePlane", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{line, point, normal, intersectingPoint});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_TextUtilities::DistanceToLine
// Il2CppName: DistanceToLine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)(UnityEngine::Vector3, UnityEngine::Vector3, UnityEngine::Vector3)>(&TMPro::TMP_TextUtilities::DistanceToLine)> {
  static const MethodInfo* get() {
    static auto* a = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* b = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* point = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_TextUtilities*), "DistanceToLine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{a, b, point});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_TextUtilities::ToLowerFast
// Il2CppName: ToLowerFast
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppChar (*)(::Il2CppChar)>(&TMPro::TMP_TextUtilities::ToLowerFast)> {
  static const MethodInfo* get() {
    static auto* c = &::il2cpp_utils::GetClassFromName("System", "Char")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_TextUtilities*), "ToLowerFast", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{c});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_TextUtilities::ToUpperFast
// Il2CppName: ToUpperFast
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppChar (*)(::Il2CppChar)>(&TMPro::TMP_TextUtilities::ToUpperFast)> {
  static const MethodInfo* get() {
    static auto* c = &::il2cpp_utils::GetClassFromName("System", "Char")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_TextUtilities*), "ToUpperFast", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{c});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_TextUtilities::GetSimpleHashCode
// Il2CppName: GetSimpleHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::Il2CppString*)>(&TMPro::TMP_TextUtilities::GetSimpleHashCode)> {
  static const MethodInfo* get() {
    static auto* s = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_TextUtilities*), "GetSimpleHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{s});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_TextUtilities::GetSimpleHashCodeLowercase
// Il2CppName: GetSimpleHashCodeLowercase
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (*)(::Il2CppString*)>(&TMPro::TMP_TextUtilities::GetSimpleHashCodeLowercase)> {
  static const MethodInfo* get() {
    static auto* s = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_TextUtilities*), "GetSimpleHashCodeLowercase", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{s});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_TextUtilities::HexToInt
// Il2CppName: HexToInt
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::Il2CppChar)>(&TMPro::TMP_TextUtilities::HexToInt)> {
  static const MethodInfo* get() {
    static auto* hex = &::il2cpp_utils::GetClassFromName("System", "Char")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_TextUtilities*), "HexToInt", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{hex});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_TextUtilities::StringHexToInt
// Il2CppName: StringHexToInt
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::Il2CppString*)>(&TMPro::TMP_TextUtilities::StringHexToInt)> {
  static const MethodInfo* get() {
    static auto* s = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_TextUtilities*), "StringHexToInt", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{s});
  }
};
