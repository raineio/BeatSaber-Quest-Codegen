// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Experimental.TerrainAPI.TerrainCallbacks
#include "UnityEngine/Experimental/TerrainAPI/TerrainCallbacks.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Terrain
  class Terrain;
  // Forward declaring type: RectInt
  struct RectInt;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
// Type namespace: UnityEngine.Experimental.TerrainAPI
namespace UnityEngine::Experimental::TerrainAPI {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Experimental.TerrainAPI.TerrainCallbacks/UnityEngine.Experimental.TerrainAPI.HeightmapChangedCallback
  // [TokenAttribute] Offset: FFFFFFFF
  class TerrainCallbacks::HeightmapChangedCallback : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x25E80D0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TerrainCallbacks::HeightmapChangedCallback* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Experimental::TerrainAPI::TerrainCallbacks::HeightmapChangedCallback::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TerrainCallbacks::HeightmapChangedCallback*, creationType>(object, method)));
    }
    // public System.Void Invoke(UnityEngine.Terrain terrain, UnityEngine.RectInt heightRegion, System.Boolean synched)
    // Offset: 0x25E76F0
    void Invoke(UnityEngine::Terrain* terrain, UnityEngine::RectInt heightRegion, bool synched);
    // public System.IAsyncResult BeginInvoke(UnityEngine.Terrain terrain, UnityEngine.RectInt heightRegion, System.Boolean synched, System.AsyncCallback callback, System.Object object)
    // Offset: 0x25E80E0
    System::IAsyncResult* BeginInvoke(UnityEngine::Terrain* terrain, UnityEngine::RectInt heightRegion, bool synched, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0x25E81A0
    void EndInvoke(System::IAsyncResult* result);
  }; // UnityEngine.Experimental.TerrainAPI.TerrainCallbacks/UnityEngine.Experimental.TerrainAPI.HeightmapChangedCallback
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Experimental::TerrainAPI::TerrainCallbacks::HeightmapChangedCallback*, "UnityEngine.Experimental.TerrainAPI", "TerrainCallbacks/HeightmapChangedCallback");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Experimental::TerrainAPI::TerrainCallbacks::HeightmapChangedCallback::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::Experimental::TerrainAPI::TerrainCallbacks::HeightmapChangedCallback::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Experimental::TerrainAPI::TerrainCallbacks::HeightmapChangedCallback::*)(UnityEngine::Terrain*, UnityEngine::RectInt, bool)>(&UnityEngine::Experimental::TerrainAPI::TerrainCallbacks::HeightmapChangedCallback::Invoke)> {
  static const MethodInfo* get() {
    static auto* terrain = &::il2cpp_utils::GetClassFromName("UnityEngine", "Terrain")->byval_arg;
    static auto* heightRegion = &::il2cpp_utils::GetClassFromName("UnityEngine", "RectInt")->byval_arg;
    static auto* synched = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Experimental::TerrainAPI::TerrainCallbacks::HeightmapChangedCallback*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{terrain, heightRegion, synched});
  }
};
// Writing MetadataGetter for method: UnityEngine::Experimental::TerrainAPI::TerrainCallbacks::HeightmapChangedCallback::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult* (UnityEngine::Experimental::TerrainAPI::TerrainCallbacks::HeightmapChangedCallback::*)(UnityEngine::Terrain*, UnityEngine::RectInt, bool, System::AsyncCallback*, ::Il2CppObject*)>(&UnityEngine::Experimental::TerrainAPI::TerrainCallbacks::HeightmapChangedCallback::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* terrain = &::il2cpp_utils::GetClassFromName("UnityEngine", "Terrain")->byval_arg;
    static auto* heightRegion = &::il2cpp_utils::GetClassFromName("UnityEngine", "RectInt")->byval_arg;
    static auto* synched = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Experimental::TerrainAPI::TerrainCallbacks::HeightmapChangedCallback*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{terrain, heightRegion, synched, callback, object});
  }
};
// Writing MetadataGetter for method: UnityEngine::Experimental::TerrainAPI::TerrainCallbacks::HeightmapChangedCallback::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Experimental::TerrainAPI::TerrainCallbacks::HeightmapChangedCallback::*)(System::IAsyncResult*)>(&UnityEngine::Experimental::TerrainAPI::TerrainCallbacks::HeightmapChangedCallback::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Experimental::TerrainAPI::TerrainCallbacks::HeightmapChangedCallback*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};