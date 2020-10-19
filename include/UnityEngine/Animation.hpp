// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.Behaviour
#include "UnityEngine/Behaviour.hpp"
// Including type: System.Collections.IEnumerable
#include "System/Collections/IEnumerable.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AnimationClip
  class AnimationClip;
  // Forward declaring type: AnimationState
  class AnimationState;
  // Forward declaring type: PlayMode
  struct PlayMode;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Autogenerated type: UnityEngine.Animation
  class Animation : public UnityEngine::Behaviour, public System::Collections::IEnumerable {
    public:
    // Nested type: UnityEngine::Animation::Enumerator
    class Enumerator;
    // public UnityEngine.AnimationClip get_clip()
    // Offset: 0x1F39B84
    UnityEngine::AnimationClip* get_clip();
    // public System.Void Rewind()
    // Offset: 0x1F39BC4
    void Rewind();
    // static private System.Void INTERNAL_CALL_Rewind(UnityEngine.Animation self)
    // Offset: 0x1F39C04
    static void INTERNAL_CALL_Rewind(UnityEngine::Animation* self);
    // public UnityEngine.AnimationState get_Item(System.String name)
    // Offset: 0x1F39C44
    UnityEngine::AnimationState* get_Item(::Il2CppString* name);
    // public System.Boolean Play()
    // Offset: 0x1F39CE4
    bool Play();
    // public System.Boolean Play(UnityEngine.PlayMode mode)
    // Offset: 0x1F39D28
    bool Play(UnityEngine::PlayMode mode);
    // public System.Void CrossFade(System.String animation, System.Single fadeLength, UnityEngine.PlayMode mode)
    // Offset: 0x1F39DC8
    void CrossFade(::Il2CppString* animation, float fadeLength, UnityEngine::PlayMode mode);
    // public System.Void CrossFade(System.String animation, System.Single fadeLength)
    // Offset: 0x1F39E30
    void CrossFade(::Il2CppString* animation, float fadeLength);
    // private System.Boolean PlayDefaultAnimation(UnityEngine.PlayMode mode)
    // Offset: 0x1F39D78
    bool PlayDefaultAnimation(UnityEngine::PlayMode mode);
    // UnityEngine.AnimationState GetState(System.String name)
    // Offset: 0x1F39C94
    UnityEngine::AnimationState* GetState(::Il2CppString* name);
    // UnityEngine.AnimationState GetStateAtIndex(System.Int32 index)
    // Offset: 0x1F39F48
    UnityEngine::AnimationState* GetStateAtIndex(int index);
    // System.Int32 GetStateCount()
    // Offset: 0x1F39F98
    int GetStateCount();
    // public System.Boolean get_animatePhysics()
    // Offset: 0x1F39FD8
    bool get_animatePhysics();
    // public System.Collections.IEnumerator GetEnumerator()
    // Offset: 0x1F39E94
    // Implemented from: System.Collections.IEnumerable
    // Base method: System.Collections.IEnumerator IEnumerable::GetEnumerator()
    System::Collections::IEnumerator* GetEnumerator();
    // Creating proxy method: System_Collections_IEnumerable_GetEnumerator
    // Maps to method: GetEnumerator
    System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();
  }; // UnityEngine.Animation
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Animation*, "UnityEngine", "Animation");
#pragma pack(pop)
