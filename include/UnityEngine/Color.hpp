// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.IEquatable`1
#include "System/IEquatable_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Vector4
  struct Vector4;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct Il2CppString;
struct Il2CppObject;
// Completed il2cpp-utils forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x10
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.Color
  // [NativeHeaderAttribute] Offset: D8F4D8
  // [DefaultMemberAttribute] Offset: D8F4D8
  // [NativeClassAttribute] Offset: D8F4D8
  // [RequiredByNativeCodeAttribute] Offset: D8F4D8
  struct Color/*, public System::ValueType, public System::IEquatable_1<UnityEngine::Color>*/ {
    public:
    // public System.Single r
    // Size: 0x4
    // Offset: 0x0
    float r;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single g
    // Size: 0x4
    // Offset: 0x4
    float g;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single b
    // Size: 0x4
    // Offset: 0x8
    float b;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single a
    // Size: 0x4
    // Offset: 0xC
    float a;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Creating value type constructor for type: Color
    constexpr Color(float r_ = {}, float g_ = {}, float b_ = {}, float a_ = {}) noexcept : r{r_}, g{g_}, b{b_}, a{a_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator System::IEquatable_1<UnityEngine::Color>
    operator System::IEquatable_1<UnityEngine::Color>() noexcept {
      return *reinterpret_cast<System::IEquatable_1<UnityEngine::Color>*>(this);
    }
    // public System.Void .ctor(System.Single r, System.Single g, System.Single b, System.Single a)
    // Offset: 0xF07860
    // template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    // ABORTED: conflicts with another method.  Color(float r, float g, float b, float a)
    // public System.Void .ctor(System.Single r, System.Single g, System.Single b)
    // Offset: 0xF0786C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    Color(float r, float g, float b) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Color::.ctor");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(r), ::il2cpp_utils::ExtractType(g), ::il2cpp_utils::ExtractType(b)})));
      ::il2cpp_utils::RunMethodThrow<void, false>(*this, ___internal__method, r, g, b);
    }
    // public System.String ToString(System.String format)
    // Offset: 0xF07888
    ::Il2CppString* ToString(::Il2CppString* format);
    // public System.Boolean Equals(UnityEngine.Color other)
    // Offset: 0xF078A0
    bool Equals(UnityEngine::Color other);
    // static public UnityEngine.Color Lerp(UnityEngine.Color a, UnityEngine.Color b, System.Single t)
    // Offset: 0x1B907B0
    static UnityEngine::Color Lerp(UnityEngine::Color a, UnityEngine::Color b, float t);
    // static public UnityEngine.Color LerpUnclamped(UnityEngine.Color a, UnityEngine.Color b, System.Single t)
    // Offset: 0x1B90890
    static UnityEngine::Color LerpUnclamped(UnityEngine::Color a, UnityEngine::Color b, float t);
    // UnityEngine.Color RGBMultiplied(System.Single multiplier)
    // Offset: 0xF078A8
    UnityEngine::Color RGBMultiplied(float multiplier);
    // static public UnityEngine.Color get_red()
    // Offset: 0x1B908E4
    static UnityEngine::Color get_red();
    // static public UnityEngine.Color get_green()
    // Offset: 0x1B908F8
    static UnityEngine::Color get_green();
    // static public UnityEngine.Color get_blue()
    // Offset: 0x1B9090C
    static UnityEngine::Color get_blue();
    // static public UnityEngine.Color get_white()
    // Offset: 0x1B90920
    static UnityEngine::Color get_white();
    // static public UnityEngine.Color get_black()
    // Offset: 0x1B90934
    static UnityEngine::Color get_black();
    // static public UnityEngine.Color get_yellow()
    // Offset: 0x1B90948
    static UnityEngine::Color get_yellow();
    // static public UnityEngine.Color get_cyan()
    // Offset: 0x1B90964
    static UnityEngine::Color get_cyan();
    // static public UnityEngine.Color get_magenta()
    // Offset: 0x1B90978
    static UnityEngine::Color get_magenta();
    // static public UnityEngine.Color get_gray()
    // Offset: 0x1B9098C
    static UnityEngine::Color get_gray();
    // static public UnityEngine.Color get_clear()
    // Offset: 0x1B909A0
    static UnityEngine::Color get_clear();
    // public System.Single get_grayscale()
    // Offset: 0xF078C4
    float get_grayscale();
    // public UnityEngine.Color get_linear()
    // Offset: 0xF078FC
    UnityEngine::Color get_linear();
    // public System.Single get_maxColorComponent()
    // Offset: 0xF07904
    float get_maxColorComponent();
    // static public System.Void RGBToHSV(UnityEngine.Color rgbColor, out System.Single H, out System.Single S, out System.Single V)
    // Offset: 0x1B90B24
    static void RGBToHSV(UnityEngine::Color rgbColor, float& H, float& S, float& V);
    // static private System.Void RGBToHSVHelper(System.Single offset, System.Single dominantcolor, System.Single colorone, System.Single colortwo, out System.Single H, out System.Single S, out System.Single V)
    // Offset: 0x1B90C3C
    static void RGBToHSVHelper(float offset, float dominantcolor, float colorone, float colortwo, float& H, float& S, float& V);
    // static public UnityEngine.Color HSVToRGB(System.Single H, System.Single S, System.Single V)
    // Offset: 0x1B90CAC
    static UnityEngine::Color HSVToRGB(float H, float S, float V);
    // static public UnityEngine.Color HSVToRGB(System.Single H, System.Single S, System.Single V, System.Boolean hdr)
    // Offset: 0x1B90CB4
    static UnityEngine::Color HSVToRGB(float H, float S, float V, bool hdr);
    // public override System.String ToString()
    // Offset: 0xF07880
    // Implemented from: System.ValueType
    // Base method: System.String ValueType::ToString()
    ::Il2CppString* ToString();
    // public override System.Int32 GetHashCode()
    // Offset: 0xF07890
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
    // public override System.Boolean Equals(System.Object other)
    // Offset: 0xF07898
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object other)
    bool Equals(::Il2CppObject* other);
  }; // UnityEngine.Color
  #pragma pack(pop)
  static check_size<sizeof(Color), 12 + sizeof(float)> __UnityEngine_ColorSizeCheck;
  static_assert(sizeof(Color) == 0x10);
  // static public UnityEngine.Color op_Addition(UnityEngine.Color a, UnityEngine.Color b)
  // Offset: 0x1B90610
  UnityEngine::Color operator+(const UnityEngine::Color& a, const UnityEngine::Color& b);
  // static public UnityEngine.Color op_Subtraction(UnityEngine.Color a, UnityEngine.Color b)
  // Offset: 0x1B90624
  UnityEngine::Color operator-(const UnityEngine::Color& a, const UnityEngine::Color& b);
  // static public UnityEngine.Color op_Multiply(UnityEngine.Color a, UnityEngine.Color b)
  // Offset: 0x1B90638
  UnityEngine::Color operator*(const UnityEngine::Color& a, const UnityEngine::Color& b);
  // static public UnityEngine.Color op_Multiply(UnityEngine.Color a, System.Single b)
  // Offset: 0x1B9064C
  UnityEngine::Color operator*(const UnityEngine::Color& a, const float& b);
  // static public UnityEngine.Color op_Multiply(System.Single b, UnityEngine.Color a)
  // Offset: 0x1B90660
  UnityEngine::Color operator*(const float& b, const UnityEngine::Color& a);
  // static public UnityEngine.Color op_Division(UnityEngine.Color a, System.Single b)
  // Offset: 0x1B90678
  UnityEngine::Color operator/(const UnityEngine::Color& a, const float& b);
  // static public System.Boolean op_Equality(UnityEngine.Color lhs, UnityEngine.Color rhs)
  // Offset: 0x1B9068C
  bool operator ==(const UnityEngine::Color& lhs, const UnityEngine::Color& rhs);
  // static public System.Boolean op_Inequality(UnityEngine.Color lhs, UnityEngine.Color rhs)
  // Offset: 0x1B90794
  bool operator !=(const UnityEngine::Color& lhs, const UnityEngine::Color& rhs);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Color, "UnityEngine", "Color");
// Writing MetadataGetter for method: UnityEngine::Color::Color
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::Color::Color
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::Color::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (UnityEngine::Color::*)(::Il2CppString*)>(&UnityEngine::Color::ToString)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Color), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::Color::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Color::*)(UnityEngine::Color)>(&UnityEngine::Color::Equals)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Color), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::Color>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::Color::Lerp
// Il2CppName: Lerp
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Color (*)(UnityEngine::Color, UnityEngine::Color, float)>(&UnityEngine::Color::Lerp)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Color), "Lerp", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::Color>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::Color>(), ::il2cpp_utils::ExtractIndependentType<float>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::Color::LerpUnclamped
// Il2CppName: LerpUnclamped
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Color (*)(UnityEngine::Color, UnityEngine::Color, float)>(&UnityEngine::Color::LerpUnclamped)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Color), "LerpUnclamped", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::Color>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::Color>(), ::il2cpp_utils::ExtractIndependentType<float>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::Color::RGBMultiplied
// Il2CppName: RGBMultiplied
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Color (UnityEngine::Color::*)(float)>(&UnityEngine::Color::RGBMultiplied)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Color), "RGBMultiplied", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<float>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::Color::get_red
// Il2CppName: get_red
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Color (*)()>(&UnityEngine::Color::get_red)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Color), "get_red", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Color::get_green
// Il2CppName: get_green
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Color (*)()>(&UnityEngine::Color::get_green)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Color), "get_green", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Color::get_blue
// Il2CppName: get_blue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Color (*)()>(&UnityEngine::Color::get_blue)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Color), "get_blue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Color::get_white
// Il2CppName: get_white
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Color (*)()>(&UnityEngine::Color::get_white)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Color), "get_white", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Color::get_black
// Il2CppName: get_black
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Color (*)()>(&UnityEngine::Color::get_black)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Color), "get_black", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Color::get_yellow
// Il2CppName: get_yellow
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Color (*)()>(&UnityEngine::Color::get_yellow)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Color), "get_yellow", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Color::get_cyan
// Il2CppName: get_cyan
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Color (*)()>(&UnityEngine::Color::get_cyan)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Color), "get_cyan", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Color::get_magenta
// Il2CppName: get_magenta
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Color (*)()>(&UnityEngine::Color::get_magenta)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Color), "get_magenta", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Color::get_gray
// Il2CppName: get_gray
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Color (*)()>(&UnityEngine::Color::get_gray)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Color), "get_gray", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Color::get_clear
// Il2CppName: get_clear
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Color (*)()>(&UnityEngine::Color::get_clear)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Color), "get_clear", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Color::get_grayscale
// Il2CppName: get_grayscale
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::Color::*)()>(&UnityEngine::Color::get_grayscale)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Color), "get_grayscale", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Color::get_linear
// Il2CppName: get_linear
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Color (UnityEngine::Color::*)()>(&UnityEngine::Color::get_linear)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Color), "get_linear", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Color::get_maxColorComponent
// Il2CppName: get_maxColorComponent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::Color::*)()>(&UnityEngine::Color::get_maxColorComponent)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Color), "get_maxColorComponent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Color::RGBToHSV
// Il2CppName: RGBToHSV
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::Color, float&, float&, float&)>(&UnityEngine::Color::RGBToHSV)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Color), "RGBToHSV", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::Color>(), ::il2cpp_utils::ExtractIndependentType<float&>(), ::il2cpp_utils::ExtractIndependentType<float&>(), ::il2cpp_utils::ExtractIndependentType<float&>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::Color::RGBToHSVHelper
// Il2CppName: RGBToHSVHelper
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(float, float, float, float, float&, float&, float&)>(&UnityEngine::Color::RGBToHSVHelper)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Color), "RGBToHSVHelper", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<float>(), ::il2cpp_utils::ExtractIndependentType<float>(), ::il2cpp_utils::ExtractIndependentType<float>(), ::il2cpp_utils::ExtractIndependentType<float>(), ::il2cpp_utils::ExtractIndependentType<float&>(), ::il2cpp_utils::ExtractIndependentType<float&>(), ::il2cpp_utils::ExtractIndependentType<float&>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::Color::HSVToRGB
// Il2CppName: HSVToRGB
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Color (*)(float, float, float)>(&UnityEngine::Color::HSVToRGB)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Color), "HSVToRGB", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<float>(), ::il2cpp_utils::ExtractIndependentType<float>(), ::il2cpp_utils::ExtractIndependentType<float>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::Color::HSVToRGB
// Il2CppName: HSVToRGB
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Color (*)(float, float, float, bool)>(&UnityEngine::Color::HSVToRGB)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Color), "HSVToRGB", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<float>(), ::il2cpp_utils::ExtractIndependentType<float>(), ::il2cpp_utils::ExtractIndependentType<float>(), ::il2cpp_utils::ExtractIndependentType<bool>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::Color::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (UnityEngine::Color::*)()>(&UnityEngine::Color::ToString)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Color), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Color::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::Color::*)()>(&UnityEngine::Color::GetHashCode)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Color), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Color::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Color::*)(::Il2CppObject*)>(&UnityEngine::Color::Equals)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Color), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppObject*>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::Color::operator+
// Il2CppName: op_Addition
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::Color::operator-
// Il2CppName: op_Subtraction
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::Color::operator*
// Il2CppName: op_Multiply
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::Color::operator*
// Il2CppName: op_Multiply
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::Color::operator*
// Il2CppName: op_Multiply
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::Color::operator/
// Il2CppName: op_Division
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::Color::operator ==
// Il2CppName: op_Equality
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::Color::operator !=
// Il2CppName: op_Inequality
// Cannot perform method pointer template specialization from operators!
