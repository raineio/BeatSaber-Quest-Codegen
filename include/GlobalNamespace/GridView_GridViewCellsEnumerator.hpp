// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: GridView
#include "GlobalNamespace/GridView.hpp"
// Including type: System.Collections.Generic.IEnumerable`1
#include "System/Collections/Generic/IEnumerable_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: MonoBehaviour
  class MonoBehaviour;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IEnumerator`1<T>
  template<typename T>
  class IEnumerator_1;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: GridView/GridViewCellsEnumerator
  // [TokenAttribute] Offset: FFFFFFFF
  class GridView::GridViewCellsEnumerator : public ::Il2CppObject/*, public System::Collections::Generic::IEnumerable_1<UnityEngine::MonoBehaviour*>*/ {
    public:
    // Nested type: GlobalNamespace::GridView::GridViewCellsEnumerator::$GetEnumerator$d__1
    class $GetEnumerator$d__1;
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    private:
    #endif
    // private readonly GridView _gridView
    // Size: 0x8
    // Offset: 0x10
    GlobalNamespace::GridView* gridView;
    // Field size check
    static_assert(sizeof(GlobalNamespace::GridView*) == 0x8);
    public:
    // Creating interface conversion operator: operator System::Collections::Generic::IEnumerable_1<UnityEngine::MonoBehaviour*>
    operator System::Collections::Generic::IEnumerable_1<UnityEngine::MonoBehaviour*>() noexcept {
      return *reinterpret_cast<System::Collections::Generic::IEnumerable_1<UnityEngine::MonoBehaviour*>*>(this);
    }
    // Creating conversion operator: operator GlobalNamespace::GridView*
    constexpr operator GlobalNamespace::GridView*() const noexcept {
      return gridView;
    }
    // Get instance field reference: private readonly GridView _gridView
    GlobalNamespace::GridView*& dyn__gridView();
    // public System.Void .ctor(GridView gridView)
    // Offset: 0x1141864
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GridView::GridViewCellsEnumerator* New_ctor(GlobalNamespace::GridView* gridView) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::GridView::GridViewCellsEnumerator::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GridView::GridViewCellsEnumerator*, creationType>(gridView)));
    }
    // public System.Collections.Generic.IEnumerator`1<UnityEngine.MonoBehaviour> GetEnumerator()
    // Offset: 0x1142054
    System::Collections::Generic::IEnumerator_1<UnityEngine::MonoBehaviour*>* GetEnumerator();
    // private System.Collections.IEnumerator System.Collections.IEnumerable.GetEnumerator()
    // Offset: 0x11420F0
    System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();
  }; // GridView/GridViewCellsEnumerator
  #pragma pack(pop)
  static check_size<sizeof(GridView::GridViewCellsEnumerator), 16 + sizeof(GlobalNamespace::GridView*)> __GlobalNamespace_GridView_GridViewCellsEnumeratorSizeCheck;
  static_assert(sizeof(GridView::GridViewCellsEnumerator) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GridView::GridViewCellsEnumerator*, "", "GridView/GridViewCellsEnumerator");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::GridView::GridViewCellsEnumerator::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::GridView::GridViewCellsEnumerator::GetEnumerator
// Il2CppName: GetEnumerator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::IEnumerator_1<UnityEngine::MonoBehaviour*>* (GlobalNamespace::GridView::GridViewCellsEnumerator::*)()>(&GlobalNamespace::GridView::GridViewCellsEnumerator::GetEnumerator)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GridView::GridViewCellsEnumerator*), "GetEnumerator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GridView::GridViewCellsEnumerator::System_Collections_IEnumerable_GetEnumerator
// Il2CppName: System.Collections.IEnumerable.GetEnumerator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::IEnumerator* (GlobalNamespace::GridView::GridViewCellsEnumerator::*)()>(&GlobalNamespace::GridView::GridViewCellsEnumerator::System_Collections_IEnumerable_GetEnumerator)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GridView::GridViewCellsEnumerator*), "System.Collections.IEnumerable.GetEnumerator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
