// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: BeatmapObjectExecutionRating
#include "GlobalNamespace/BeatmapObjectExecutionRating.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Skipping declaration: Rating because it is already included!
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: ObstacleExecutionRating
  class ObstacleExecutionRating : public GlobalNamespace::BeatmapObjectExecutionRating {
    public:
    // Nested type: GlobalNamespace::ObstacleExecutionRating::Rating
    struct Rating;
    // Autogenerated type: ObstacleExecutionRating/Rating
    struct Rating : public System::Enum {
      public:
      // public System.Int32 value__
      // Offset: 0x0
      int value;
      // Creating value type constructor for type: Rating
      constexpr Rating(int value_ = {}) noexcept : value{value_} {}
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public ObstacleExecutionRating/Rating OK
      static constexpr const int OK = 0;
      // Get static field: static public ObstacleExecutionRating/Rating OK
      static GlobalNamespace::ObstacleExecutionRating::Rating _get_OK();
      // Set static field: static public ObstacleExecutionRating/Rating OK
      static void _set_OK(GlobalNamespace::ObstacleExecutionRating::Rating value);
      // static field const value: static public ObstacleExecutionRating/Rating NotGood
      static constexpr const int NotGood = 1;
      // Get static field: static public ObstacleExecutionRating/Rating NotGood
      static GlobalNamespace::ObstacleExecutionRating::Rating _get_NotGood();
      // Set static field: static public ObstacleExecutionRating/Rating NotGood
      static void _set_NotGood(GlobalNamespace::ObstacleExecutionRating::Rating value);
    }; // ObstacleExecutionRating/Rating
    // private ObstacleExecutionRating/Rating <rating>k__BackingField
    // Offset: 0x18
    GlobalNamespace::ObstacleExecutionRating::Rating rating;
    // Creating conversion operator: operator GlobalNamespace::ObstacleExecutionRating::Rating
    constexpr operator GlobalNamespace::ObstacleExecutionRating::Rating() const noexcept {
      return rating;
    }
    // public ObstacleExecutionRating/Rating get_rating()
    // Offset: 0x20FD144
    GlobalNamespace::ObstacleExecutionRating::Rating get_rating();
    // public System.Void set_rating(ObstacleExecutionRating/Rating value)
    // Offset: 0x20FD14C
    void set_rating(GlobalNamespace::ObstacleExecutionRating::Rating value);
    // public System.Void .ctor(System.Single time, ObstacleExecutionRating/Rating rating)
    // Offset: 0x20FD154
    static ObstacleExecutionRating* New_ctor(float time, GlobalNamespace::ObstacleExecutionRating::Rating rating);
  }; // ObstacleExecutionRating
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ObstacleExecutionRating*, "", "ObstacleExecutionRating");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ObstacleExecutionRating::Rating, "", "ObstacleExecutionRating/Rating");
#pragma pack(pop)
