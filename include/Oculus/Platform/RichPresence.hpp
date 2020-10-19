// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Oculus::Platform
namespace Oculus::Platform {
  // Forward declaring type: Request
  class Request;
  // Forward declaring type: Request`1<T>
  template<typename T>
  class Request_1;
  // Forward declaring type: RichPresenceOptions
  class RichPresenceOptions;
}
// Forward declaring namespace: Oculus::Platform::Models
namespace Oculus::Platform::Models {
  // Forward declaring type: DestinationList
  class DestinationList;
}
// Completed forward declares
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Autogenerated type: Oculus.Platform.RichPresence
  class RichPresence : public ::Il2CppObject {
    public:
    // static public Oculus.Platform.Request Clear()
    // Offset: 0x11434F8
    static Oculus::Platform::Request* Clear();
    // static public Oculus.Platform.Request`1<Oculus.Platform.Models.DestinationList> GetDestinations()
    // Offset: 0x11435FC
    static Oculus::Platform::Request_1<Oculus::Platform::Models::DestinationList*>* GetDestinations();
    // static public Oculus.Platform.Request Set(Oculus.Platform.RichPresenceOptions richPresenceOptions)
    // Offset: 0x1143708
    static Oculus::Platform::Request* Set(Oculus::Platform::RichPresenceOptions* richPresenceOptions);
    // static public Oculus.Platform.Request`1<Oculus.Platform.Models.DestinationList> GetNextDestinationListPage(Oculus.Platform.Models.DestinationList list)
    // Offset: 0x1143898
    static Oculus::Platform::Request_1<Oculus::Platform::Models::DestinationList*>* GetNextDestinationListPage(Oculus::Platform::Models::DestinationList* list);
  }; // Oculus.Platform.RichPresence
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::RichPresence*, "Oculus.Platform", "RichPresence");
#pragma pack(pop)
