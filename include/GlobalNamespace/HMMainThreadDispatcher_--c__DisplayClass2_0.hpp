// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: HMMainThreadDispatcher
#include "GlobalNamespace/HMMainThreadDispatcher.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::HMMainThreadDispatcher::$$c__DisplayClass2_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::HMMainThreadDispatcher::$$c__DisplayClass2_0*, "", "HMMainThreadDispatcher/<>c__DisplayClass2_0");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: HMMainThreadDispatcher/<>c__DisplayClass2_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class HMMainThreadDispatcher::$$c__DisplayClass2_0 : public ::Il2CppObject {
    public:
    public:
    // public HMMainThreadDispatcher <>4__this
    // Size: 0x8
    // Offset: 0x10
    ::GlobalNamespace::HMMainThreadDispatcher* $$4__this;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::HMMainThreadDispatcher*) == 0x8);
    // public System.Collections.IEnumerator action
    // Size: 0x8
    // Offset: 0x18
    ::System::Collections::IEnumerator* action;
    // Field size check
    static_assert(sizeof(::System::Collections::IEnumerator*) == 0x8);
    public:
    // Get instance field reference: public HMMainThreadDispatcher <>4__this
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::HMMainThreadDispatcher*& dyn_$$4__this();
    // Get instance field reference: public System.Collections.IEnumerator action
    [[deprecated("Use field access instead!")]] ::System::Collections::IEnumerator*& dyn_action();
    // public System.Void .ctor()
    // Offset: 0x162733C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HMMainThreadDispatcher::$$c__DisplayClass2_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::HMMainThreadDispatcher::$$c__DisplayClass2_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HMMainThreadDispatcher::$$c__DisplayClass2_0*, creationType>()));
    }
    // System.Void <Enqueue>b__0()
    // Offset: 0x16274EC
    void $Enqueue$b__0();
  }; // HMMainThreadDispatcher/<>c__DisplayClass2_0
  #pragma pack(pop)
  static check_size<sizeof(HMMainThreadDispatcher::$$c__DisplayClass2_0), 24 + sizeof(::System::Collections::IEnumerator*)> __GlobalNamespace_HMMainThreadDispatcher_$$c__DisplayClass2_0SizeCheck;
  static_assert(sizeof(HMMainThreadDispatcher::$$c__DisplayClass2_0) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::HMMainThreadDispatcher::$$c__DisplayClass2_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::HMMainThreadDispatcher::$$c__DisplayClass2_0::$Enqueue$b__0
// Il2CppName: <Enqueue>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::HMMainThreadDispatcher::$$c__DisplayClass2_0::*)()>(&GlobalNamespace::HMMainThreadDispatcher::$$c__DisplayClass2_0::$Enqueue$b__0)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::HMMainThreadDispatcher::$$c__DisplayClass2_0*), "<Enqueue>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
