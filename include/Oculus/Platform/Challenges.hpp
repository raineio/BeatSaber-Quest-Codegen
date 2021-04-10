// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Oculus::Platform
namespace Oculus::Platform {
  // Forward declaring type: Request`1<T>
  template<typename T>
  class Request_1;
  // Forward declaring type: ChallengeOptions
  class ChallengeOptions;
  // Forward declaring type: Request
  class Request;
  // Forward declaring type: LeaderboardFilterType
  struct LeaderboardFilterType;
  // Forward declaring type: LeaderboardStartAt
  struct LeaderboardStartAt;
}
// Forward declaring namespace: Oculus::Platform::Models
namespace Oculus::Platform::Models {
  // Forward declaring type: ChallengeEntryList
  class ChallengeEntryList;
  // Forward declaring type: ChallengeList
  class ChallengeList;
  // Forward declaring type: Challenge
  class Challenge;
}
// Completed forward declares
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Platform.Challenges
  // [] Offset: FFFFFFFF
  class Challenges : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: Challenges
    Challenges() noexcept {}
    // static public Oculus.Platform.Request`1<Oculus.Platform.Models.ChallengeEntryList> GetNextEntries(Oculus.Platform.Models.ChallengeEntryList list)
    // Offset: 0x137B4C0
    static Oculus::Platform::Request_1<Oculus::Platform::Models::ChallengeEntryList*>* GetNextEntries(Oculus::Platform::Models::ChallengeEntryList* list);
    // static public Oculus.Platform.Request`1<Oculus.Platform.Models.ChallengeEntryList> GetPreviousEntries(Oculus.Platform.Models.ChallengeEntryList list)
    // Offset: 0x137B5F0
    static Oculus::Platform::Request_1<Oculus::Platform::Models::ChallengeEntryList*>* GetPreviousEntries(Oculus::Platform::Models::ChallengeEntryList* list);
    // static public Oculus.Platform.Request`1<Oculus.Platform.Models.ChallengeList> GetNextChallenges(Oculus.Platform.Models.ChallengeList list)
    // Offset: 0x137B720
    static Oculus::Platform::Request_1<Oculus::Platform::Models::ChallengeList*>* GetNextChallenges(Oculus::Platform::Models::ChallengeList* list);
    // static public Oculus.Platform.Request`1<Oculus.Platform.Models.ChallengeList> GetPreviousChallenges(Oculus.Platform.Models.ChallengeList list)
    // Offset: 0x137B850
    static Oculus::Platform::Request_1<Oculus::Platform::Models::ChallengeList*>* GetPreviousChallenges(Oculus::Platform::Models::ChallengeList* list);
    // static public Oculus.Platform.Request`1<Oculus.Platform.Models.Challenge> Create(System.String leaderboardName, Oculus.Platform.ChallengeOptions challengeOptions)
    // Offset: 0x137B980
    static Oculus::Platform::Request_1<Oculus::Platform::Models::Challenge*>* Create(::Il2CppString* leaderboardName, Oculus::Platform::ChallengeOptions* challengeOptions);
    // static public Oculus.Platform.Request`1<Oculus.Platform.Models.Challenge> DeclineInvite(System.UInt64 challengeID)
    // Offset: 0x137BAD0
    static Oculus::Platform::Request_1<Oculus::Platform::Models::Challenge*>* DeclineInvite(uint64_t challengeID);
    // static public Oculus.Platform.Request Delete(System.UInt64 challengeID)
    // Offset: 0x137BBEC
    static Oculus::Platform::Request* Delete(uint64_t challengeID);
    // static public Oculus.Platform.Request`1<Oculus.Platform.Models.Challenge> Get(System.UInt64 challengeID)
    // Offset: 0x137BD2C
    static Oculus::Platform::Request_1<Oculus::Platform::Models::Challenge*>* Get(uint64_t challengeID);
    // static public Oculus.Platform.Request`1<Oculus.Platform.Models.ChallengeEntryList> GetEntries(System.UInt64 challengeID, System.Int32 limit, Oculus.Platform.LeaderboardFilterType filter, Oculus.Platform.LeaderboardStartAt startAt)
    // Offset: 0x137BE48
    static Oculus::Platform::Request_1<Oculus::Platform::Models::ChallengeEntryList*>* GetEntries(uint64_t challengeID, int limit, Oculus::Platform::LeaderboardFilterType filter, Oculus::Platform::LeaderboardStartAt startAt);
    // static public Oculus.Platform.Request`1<Oculus.Platform.Models.ChallengeEntryList> GetEntriesAfterRank(System.UInt64 challengeID, System.Int32 limit, System.UInt64 afterRank)
    // Offset: 0x137BF84
    static Oculus::Platform::Request_1<Oculus::Platform::Models::ChallengeEntryList*>* GetEntriesAfterRank(uint64_t challengeID, int limit, uint64_t afterRank);
    // static public Oculus.Platform.Request`1<Oculus.Platform.Models.ChallengeEntryList> GetEntriesByIds(System.UInt64 challengeID, System.Int32 limit, Oculus.Platform.LeaderboardStartAt startAt, System.UInt64[] userIDs)
    // Offset: 0x137C0B8
    static Oculus::Platform::Request_1<Oculus::Platform::Models::ChallengeEntryList*>* GetEntriesByIds(uint64_t challengeID, int limit, Oculus::Platform::LeaderboardStartAt startAt, ::Array<uint64_t>* userIDs);
    // static public Oculus.Platform.Request`1<Oculus.Platform.Models.ChallengeList> GetList(Oculus.Platform.ChallengeOptions challengeOptions, System.Int32 limit)
    // Offset: 0x137C208
    static Oculus::Platform::Request_1<Oculus::Platform::Models::ChallengeList*>* GetList(Oculus::Platform::ChallengeOptions* challengeOptions, int limit);
    // static public Oculus.Platform.Request`1<Oculus.Platform.Models.Challenge> Join(System.UInt64 challengeID)
    // Offset: 0x137C358
    static Oculus::Platform::Request_1<Oculus::Platform::Models::Challenge*>* Join(uint64_t challengeID);
    // static public Oculus.Platform.Request`1<Oculus.Platform.Models.Challenge> Leave(System.UInt64 challengeID)
    // Offset: 0x137C474
    static Oculus::Platform::Request_1<Oculus::Platform::Models::Challenge*>* Leave(uint64_t challengeID);
    // static public Oculus.Platform.Request`1<Oculus.Platform.Models.Challenge> UpdateInfo(System.UInt64 challengeID, Oculus.Platform.ChallengeOptions challengeOptions)
    // Offset: 0x137C590
    static Oculus::Platform::Request_1<Oculus::Platform::Models::Challenge*>* UpdateInfo(uint64_t challengeID, Oculus::Platform::ChallengeOptions* challengeOptions);
  }; // Oculus.Platform.Challenges
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::Challenges*, "Oculus.Platform", "Challenges");