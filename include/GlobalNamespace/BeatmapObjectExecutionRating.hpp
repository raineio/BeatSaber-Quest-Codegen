// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Skipping declaration: BeatmapObjectExecutionRatingType because it is already included!
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: BeatmapObjectExecutionRating
  // [TokenAttribute] Offset: FFFFFFFF
  class BeatmapObjectExecutionRating : public ::Il2CppObject {
    public:
    // Nested type: GlobalNamespace::BeatmapObjectExecutionRating::BeatmapObjectExecutionRatingType
    struct BeatmapObjectExecutionRatingType;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: BeatmapObjectExecutionRating/BeatmapObjectExecutionRatingType
    // [TokenAttribute] Offset: FFFFFFFF
    struct BeatmapObjectExecutionRatingType/*, public System::Enum*/ {
      public:
      #ifdef USE_CODEGEN_FIELDS
      public:
      #else
      private:
      #endif
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      public:
      // Creating value type constructor for type: BeatmapObjectExecutionRatingType
      constexpr BeatmapObjectExecutionRatingType(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator System::Enum
      operator System::Enum() noexcept {
        return *reinterpret_cast<System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public BeatmapObjectExecutionRating/BeatmapObjectExecutionRatingType Note
      static constexpr const int Note = 0;
      // Get static field: static public BeatmapObjectExecutionRating/BeatmapObjectExecutionRatingType Note
      static GlobalNamespace::BeatmapObjectExecutionRating::BeatmapObjectExecutionRatingType _get_Note();
      // Set static field: static public BeatmapObjectExecutionRating/BeatmapObjectExecutionRatingType Note
      static void _set_Note(GlobalNamespace::BeatmapObjectExecutionRating::BeatmapObjectExecutionRatingType value);
      // static field const value: static public BeatmapObjectExecutionRating/BeatmapObjectExecutionRatingType Bomb
      static constexpr const int Bomb = 1;
      // Get static field: static public BeatmapObjectExecutionRating/BeatmapObjectExecutionRatingType Bomb
      static GlobalNamespace::BeatmapObjectExecutionRating::BeatmapObjectExecutionRatingType _get_Bomb();
      // Set static field: static public BeatmapObjectExecutionRating/BeatmapObjectExecutionRatingType Bomb
      static void _set_Bomb(GlobalNamespace::BeatmapObjectExecutionRating::BeatmapObjectExecutionRatingType value);
      // static field const value: static public BeatmapObjectExecutionRating/BeatmapObjectExecutionRatingType Obstacle
      static constexpr const int Obstacle = 2;
      // Get static field: static public BeatmapObjectExecutionRating/BeatmapObjectExecutionRatingType Obstacle
      static GlobalNamespace::BeatmapObjectExecutionRating::BeatmapObjectExecutionRatingType _get_Obstacle();
      // Set static field: static public BeatmapObjectExecutionRating/BeatmapObjectExecutionRatingType Obstacle
      static void _set_Obstacle(GlobalNamespace::BeatmapObjectExecutionRating::BeatmapObjectExecutionRatingType value);
      // Get instance field reference: public System.Int32 value__
      int& dyn_value__();
    }; // BeatmapObjectExecutionRating/BeatmapObjectExecutionRatingType
    #pragma pack(pop)
    static check_size<sizeof(BeatmapObjectExecutionRating::BeatmapObjectExecutionRatingType), 0 + sizeof(int)> __GlobalNamespace_BeatmapObjectExecutionRating_BeatmapObjectExecutionRatingTypeSizeCheck;
    static_assert(sizeof(BeatmapObjectExecutionRating::BeatmapObjectExecutionRatingType) == 0x4);
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    private:
    #endif
    // private BeatmapObjectExecutionRating/BeatmapObjectExecutionRatingType <beatmapObjectRatingType>k__BackingField
    // Size: 0x4
    // Offset: 0x10
    GlobalNamespace::BeatmapObjectExecutionRating::BeatmapObjectExecutionRatingType beatmapObjectRatingType;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BeatmapObjectExecutionRating::BeatmapObjectExecutionRatingType) == 0x4);
    // private System.Single <time>k__BackingField
    // Size: 0x4
    // Offset: 0x14
    float time;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Get instance field reference: private BeatmapObjectExecutionRating/BeatmapObjectExecutionRatingType <beatmapObjectRatingType>k__BackingField
    GlobalNamespace::BeatmapObjectExecutionRating::BeatmapObjectExecutionRatingType& dyn_$beatmapObjectRatingType$k__BackingField();
    // Get instance field reference: private System.Single <time>k__BackingField
    float& dyn_$time$k__BackingField();
    // public BeatmapObjectExecutionRating/BeatmapObjectExecutionRatingType get_beatmapObjectRatingType()
    // Offset: 0x12A0918
    GlobalNamespace::BeatmapObjectExecutionRating::BeatmapObjectExecutionRatingType get_beatmapObjectRatingType();
    // public System.Void set_beatmapObjectRatingType(BeatmapObjectExecutionRating/BeatmapObjectExecutionRatingType value)
    // Offset: 0x12A0920
    void set_beatmapObjectRatingType(GlobalNamespace::BeatmapObjectExecutionRating::BeatmapObjectExecutionRatingType value);
    // public System.Single get_time()
    // Offset: 0x12A0928
    float get_time();
    // public System.Void set_time(System.Single value)
    // Offset: 0x12A0930
    void set_time(float value);
    // public System.Void .ctor()
    // Offset: 0x12A0938
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BeatmapObjectExecutionRating* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::BeatmapObjectExecutionRating::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BeatmapObjectExecutionRating*, creationType>()));
    }
  }; // BeatmapObjectExecutionRating
  #pragma pack(pop)
  static check_size<sizeof(BeatmapObjectExecutionRating), 20 + sizeof(float)> __GlobalNamespace_BeatmapObjectExecutionRatingSizeCheck;
  static_assert(sizeof(BeatmapObjectExecutionRating) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatmapObjectExecutionRating*, "", "BeatmapObjectExecutionRating");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatmapObjectExecutionRating::BeatmapObjectExecutionRatingType, "", "BeatmapObjectExecutionRating/BeatmapObjectExecutionRatingType");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BeatmapObjectExecutionRating::get_beatmapObjectRatingType
// Il2CppName: get_beatmapObjectRatingType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::BeatmapObjectExecutionRating::BeatmapObjectExecutionRatingType (GlobalNamespace::BeatmapObjectExecutionRating::*)()>(&GlobalNamespace::BeatmapObjectExecutionRating::get_beatmapObjectRatingType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapObjectExecutionRating*), "get_beatmapObjectRatingType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapObjectExecutionRating::set_beatmapObjectRatingType
// Il2CppName: set_beatmapObjectRatingType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapObjectExecutionRating::*)(GlobalNamespace::BeatmapObjectExecutionRating::BeatmapObjectExecutionRatingType)>(&GlobalNamespace::BeatmapObjectExecutionRating::set_beatmapObjectRatingType)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("", "BeatmapObjectExecutionRating/BeatmapObjectExecutionRatingType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapObjectExecutionRating*), "set_beatmapObjectRatingType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapObjectExecutionRating::get_time
// Il2CppName: get_time
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::BeatmapObjectExecutionRating::*)()>(&GlobalNamespace::BeatmapObjectExecutionRating::get_time)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapObjectExecutionRating*), "get_time", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapObjectExecutionRating::set_time
// Il2CppName: set_time
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapObjectExecutionRating::*)(float)>(&GlobalNamespace::BeatmapObjectExecutionRating::set_time)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapObjectExecutionRating*), "set_time", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapObjectExecutionRating::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
