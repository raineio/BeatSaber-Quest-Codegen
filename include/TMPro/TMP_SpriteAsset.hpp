// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: TMPro.TMP_Asset
#include "TMPro/TMP_Asset.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: TMPro
namespace TMPro {
  // Forward declaring type: TMP_SpriteCharacter
  class TMP_SpriteCharacter;
  // Forward declaring type: TMP_SpriteGlyph
  class TMP_SpriteGlyph;
  // Forward declaring type: TMP_Sprite
  class TMP_Sprite;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Texture
  class Texture;
  // Forward declaring type: Material
  class Material;
}
// Completed forward declares
// Type namespace: TMPro
namespace TMPro {
  // Forward declaring type: TMP_SpriteAsset
  class TMP_SpriteAsset;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(TMPro::TMP_SpriteAsset);
DEFINE_IL2CPP_ARG_TYPE(TMPro::TMP_SpriteAsset*, "TMPro", "TMP_SpriteAsset");
// Type namespace: TMPro
namespace TMPro {
  // Size: 0x79
  #pragma pack(push, 1)
  // Autogenerated type: TMPro.TMP_SpriteAsset
  // [TokenAttribute] Offset: FFFFFFFF
  class TMP_SpriteAsset : public TMPro::TMP_Asset {
    public:
    // Writing base type padding for base size: 0x2C to desired offset: 0x30
    char ___base_padding[0x4] = {};
    // Nested type: TMPro::TMP_SpriteAsset::$$c
    class $$c;
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // System.Collections.Generic.Dictionary`2<System.UInt32,System.Int32> m_UnicodeLookup
    // Size: 0x8
    // Offset: 0x30
    System::Collections::Generic::Dictionary_2<uint, int>* m_UnicodeLookup;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::Dictionary_2<uint, int>*) == 0x8);
    // System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> m_NameLookup
    // Size: 0x8
    // Offset: 0x38
    System::Collections::Generic::Dictionary_2<int, int>* m_NameLookup;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::Dictionary_2<int, int>*) == 0x8);
    // System.Collections.Generic.Dictionary`2<System.UInt32,System.Int32> m_GlyphIndexLookup
    // Size: 0x8
    // Offset: 0x40
    System::Collections::Generic::Dictionary_2<uint, int>* m_GlyphIndexLookup;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::Dictionary_2<uint, int>*) == 0x8);
    // private System.String m_Version
    // Size: 0x8
    // Offset: 0x48
    ::Il2CppString* m_Version;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public UnityEngine.Texture spriteSheet
    // Size: 0x8
    // Offset: 0x50
    UnityEngine::Texture* spriteSheet;
    // Field size check
    static_assert(sizeof(UnityEngine::Texture*) == 0x8);
    // private System.Collections.Generic.List`1<TMPro.TMP_SpriteCharacter> m_SpriteCharacterTable
    // Size: 0x8
    // Offset: 0x58
    System::Collections::Generic::List_1<TMPro::TMP_SpriteCharacter*>* m_SpriteCharacterTable;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<TMPro::TMP_SpriteCharacter*>*) == 0x8);
    // private System.Collections.Generic.List`1<TMPro.TMP_SpriteGlyph> m_SpriteGlyphTable
    // Size: 0x8
    // Offset: 0x60
    System::Collections::Generic::List_1<TMPro::TMP_SpriteGlyph*>* m_SpriteGlyphTable;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<TMPro::TMP_SpriteGlyph*>*) == 0x8);
    // public System.Collections.Generic.List`1<TMPro.TMP_Sprite> spriteInfoList
    // Size: 0x8
    // Offset: 0x68
    System::Collections::Generic::List_1<TMPro::TMP_Sprite*>* spriteInfoList;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<TMPro::TMP_Sprite*>*) == 0x8);
    // public System.Collections.Generic.List`1<TMPro.TMP_SpriteAsset> fallbackSpriteAssets
    // Size: 0x8
    // Offset: 0x70
    System::Collections::Generic::List_1<TMPro::TMP_SpriteAsset*>* fallbackSpriteAssets;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<TMPro::TMP_SpriteAsset*>*) == 0x8);
    // System.Boolean m_IsSpriteAssetLookupTablesDirty
    // Size: 0x1
    // Offset: 0x78
    bool m_IsSpriteAssetLookupTablesDirty;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get static field: static private System.Collections.Generic.List`1<System.Int32> k_searchedSpriteAssets
    static System::Collections::Generic::List_1<int>* _get_k_searchedSpriteAssets();
    // Set static field: static private System.Collections.Generic.List`1<System.Int32> k_searchedSpriteAssets
    static void _set_k_searchedSpriteAssets(System::Collections::Generic::List_1<int>* value);
    // Get instance field reference: System.Collections.Generic.Dictionary`2<System.UInt32,System.Int32> m_UnicodeLookup
    System::Collections::Generic::Dictionary_2<uint, int>*& dyn_m_UnicodeLookup();
    // Get instance field reference: System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> m_NameLookup
    System::Collections::Generic::Dictionary_2<int, int>*& dyn_m_NameLookup();
    // Get instance field reference: System.Collections.Generic.Dictionary`2<System.UInt32,System.Int32> m_GlyphIndexLookup
    System::Collections::Generic::Dictionary_2<uint, int>*& dyn_m_GlyphIndexLookup();
    // Get instance field reference: private System.String m_Version
    ::Il2CppString*& dyn_m_Version();
    // Get instance field reference: public UnityEngine.Texture spriteSheet
    UnityEngine::Texture*& dyn_spriteSheet();
    // Get instance field reference: private System.Collections.Generic.List`1<TMPro.TMP_SpriteCharacter> m_SpriteCharacterTable
    System::Collections::Generic::List_1<TMPro::TMP_SpriteCharacter*>*& dyn_m_SpriteCharacterTable();
    // Get instance field reference: private System.Collections.Generic.List`1<TMPro.TMP_SpriteGlyph> m_SpriteGlyphTable
    System::Collections::Generic::List_1<TMPro::TMP_SpriteGlyph*>*& dyn_m_SpriteGlyphTable();
    // Get instance field reference: public System.Collections.Generic.List`1<TMPro.TMP_Sprite> spriteInfoList
    System::Collections::Generic::List_1<TMPro::TMP_Sprite*>*& dyn_spriteInfoList();
    // Get instance field reference: public System.Collections.Generic.List`1<TMPro.TMP_SpriteAsset> fallbackSpriteAssets
    System::Collections::Generic::List_1<TMPro::TMP_SpriteAsset*>*& dyn_fallbackSpriteAssets();
    // Get instance field reference: System.Boolean m_IsSpriteAssetLookupTablesDirty
    bool& dyn_m_IsSpriteAssetLookupTablesDirty();
    // public System.String get_version()
    // Offset: 0x12614A4
    ::Il2CppString* get_version();
    // System.Void set_version(System.String value)
    // Offset: 0x12614AC
    void set_version(::Il2CppString* value);
    // public System.Collections.Generic.List`1<TMPro.TMP_SpriteCharacter> get_spriteCharacterTable()
    // Offset: 0x1261404
    System::Collections::Generic::List_1<TMPro::TMP_SpriteCharacter*>* get_spriteCharacterTable();
    // System.Void set_spriteCharacterTable(System.Collections.Generic.List`1<TMPro.TMP_SpriteCharacter> value)
    // Offset: 0x1261864
    void set_spriteCharacterTable(System::Collections::Generic::List_1<TMPro::TMP_SpriteCharacter*>* value);
    // public System.Collections.Generic.List`1<TMPro.TMP_SpriteGlyph> get_spriteGlyphTable()
    // Offset: 0x126186C
    System::Collections::Generic::List_1<TMPro::TMP_SpriteGlyph*>* get_spriteGlyphTable();
    // System.Void set_spriteGlyphTable(System.Collections.Generic.List`1<TMPro.TMP_SpriteGlyph> value)
    // Offset: 0x1261874
    void set_spriteGlyphTable(System::Collections::Generic::List_1<TMPro::TMP_SpriteGlyph*>* value);
    // private System.Void Awake()
    // Offset: 0x126187C
    void Awake();
    // private UnityEngine.Material GetDefaultSpriteMaterial()
    // Offset: 0x1261D18
    UnityEngine::Material* GetDefaultSpriteMaterial();
    // public System.Void UpdateLookupTables()
    // Offset: 0x12614B4
    void UpdateLookupTables();
    // public System.Int32 GetSpriteIndexFromHashcode(System.Int32 hashCode)
    // Offset: 0x1261DFC
    int GetSpriteIndexFromHashcode(int hashCode);
    // public System.Int32 GetSpriteIndexFromUnicode(System.UInt32 unicode)
    // Offset: 0x1261E8C
    int GetSpriteIndexFromUnicode(uint unicode);
    // public System.Int32 GetSpriteIndexFromName(System.String name)
    // Offset: 0x1261F1C
    int GetSpriteIndexFromName(::Il2CppString* name);
    // static public TMPro.TMP_SpriteAsset SearchForSpriteByUnicode(TMPro.TMP_SpriteAsset spriteAsset, System.UInt32 unicode, System.Boolean includeFallbacks, out System.Int32 spriteIndex)
    // Offset: 0x1261FAC
    static TMPro::TMP_SpriteAsset* SearchForSpriteByUnicode(TMPro::TMP_SpriteAsset* spriteAsset, uint unicode, bool includeFallbacks, ByRef<int> spriteIndex);
    // static private TMPro.TMP_SpriteAsset SearchForSpriteByUnicodeInternal(System.Collections.Generic.List`1<TMPro.TMP_SpriteAsset> spriteAssets, System.UInt32 unicode, System.Boolean includeFallbacks, out System.Int32 spriteIndex)
    // Offset: 0x12621BC
    static TMPro::TMP_SpriteAsset* SearchForSpriteByUnicodeInternal(System::Collections::Generic::List_1<TMPro::TMP_SpriteAsset*>* spriteAssets, uint unicode, bool includeFallbacks, ByRef<int> spriteIndex);
    // static private TMPro.TMP_SpriteAsset SearchForSpriteByUnicodeInternal(TMPro.TMP_SpriteAsset spriteAsset, System.UInt32 unicode, System.Boolean includeFallbacks, out System.Int32 spriteIndex)
    // Offset: 0x1262368
    static TMPro::TMP_SpriteAsset* SearchForSpriteByUnicodeInternal(TMPro::TMP_SpriteAsset* spriteAsset, uint unicode, bool includeFallbacks, ByRef<int> spriteIndex);
    // static public TMPro.TMP_SpriteAsset SearchForSpriteByHashCode(TMPro.TMP_SpriteAsset spriteAsset, System.Int32 hashCode, System.Boolean includeFallbacks, out System.Int32 spriteIndex)
    // Offset: 0x126242C
    static TMPro::TMP_SpriteAsset* SearchForSpriteByHashCode(TMPro::TMP_SpriteAsset* spriteAsset, int hashCode, bool includeFallbacks, ByRef<int> spriteIndex);
    // static private TMPro.TMP_SpriteAsset SearchForSpriteByHashCodeInternal(System.Collections.Generic.List`1<TMPro.TMP_SpriteAsset> spriteAssets, System.Int32 hashCode, System.Boolean searchFallbacks, out System.Int32 spriteIndex)
    // Offset: 0x126263C
    static TMPro::TMP_SpriteAsset* SearchForSpriteByHashCodeInternal(System::Collections::Generic::List_1<TMPro::TMP_SpriteAsset*>* spriteAssets, int hashCode, bool searchFallbacks, ByRef<int> spriteIndex);
    // static private TMPro.TMP_SpriteAsset SearchForSpriteByHashCodeInternal(TMPro.TMP_SpriteAsset spriteAsset, System.Int32 hashCode, System.Boolean searchFallbacks, out System.Int32 spriteIndex)
    // Offset: 0x12627E8
    static TMPro::TMP_SpriteAsset* SearchForSpriteByHashCodeInternal(TMPro::TMP_SpriteAsset* spriteAsset, int hashCode, bool searchFallbacks, ByRef<int> spriteIndex);
    // public System.Void SortGlyphTable()
    // Offset: 0x12628AC
    void SortGlyphTable();
    // System.Void SortCharacterTable()
    // Offset: 0x12629C8
    void SortCharacterTable();
    // System.Void SortGlyphAndCharacterTables()
    // Offset: 0x1262AE8
    void SortGlyphAndCharacterTables();
    // private System.Void UpgradeSpriteAsset()
    // Offset: 0x1261914
    void UpgradeSpriteAsset();
    // public System.Void .ctor()
    // Offset: 0x1262C08
    // Implemented from: TMPro.TMP_Asset
    // Base method: System.Void TMP_Asset::.ctor()
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TMP_SpriteAsset* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("TMPro::TMP_SpriteAsset::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TMP_SpriteAsset*, creationType>()));
    }
  }; // TMPro.TMP_SpriteAsset
  #pragma pack(pop)
  static check_size<sizeof(TMP_SpriteAsset), 120 + sizeof(bool)> __TMPro_TMP_SpriteAssetSizeCheck;
  static_assert(sizeof(TMP_SpriteAsset) == 0x79);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: TMPro::TMP_SpriteAsset::get_version
// Il2CppName: get_version
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (TMPro::TMP_SpriteAsset::*)()>(&TMPro::TMP_SpriteAsset::get_version)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_SpriteAsset*), "get_version", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_SpriteAsset::set_version
// Il2CppName: set_version
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (TMPro::TMP_SpriteAsset::*)(::Il2CppString*)>(&TMPro::TMP_SpriteAsset::set_version)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_SpriteAsset*), "set_version", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_SpriteAsset::get_spriteCharacterTable
// Il2CppName: get_spriteCharacterTable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::List_1<TMPro::TMP_SpriteCharacter*>* (TMPro::TMP_SpriteAsset::*)()>(&TMPro::TMP_SpriteAsset::get_spriteCharacterTable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_SpriteAsset*), "get_spriteCharacterTable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_SpriteAsset::set_spriteCharacterTable
// Il2CppName: set_spriteCharacterTable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (TMPro::TMP_SpriteAsset::*)(System::Collections::Generic::List_1<TMPro::TMP_SpriteCharacter*>*)>(&TMPro::TMP_SpriteAsset::set_spriteCharacterTable)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("TMPro", "TMP_SpriteCharacter")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_SpriteAsset*), "set_spriteCharacterTable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_SpriteAsset::get_spriteGlyphTable
// Il2CppName: get_spriteGlyphTable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::List_1<TMPro::TMP_SpriteGlyph*>* (TMPro::TMP_SpriteAsset::*)()>(&TMPro::TMP_SpriteAsset::get_spriteGlyphTable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_SpriteAsset*), "get_spriteGlyphTable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_SpriteAsset::set_spriteGlyphTable
// Il2CppName: set_spriteGlyphTable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (TMPro::TMP_SpriteAsset::*)(System::Collections::Generic::List_1<TMPro::TMP_SpriteGlyph*>*)>(&TMPro::TMP_SpriteAsset::set_spriteGlyphTable)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("TMPro", "TMP_SpriteGlyph")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_SpriteAsset*), "set_spriteGlyphTable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_SpriteAsset::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (TMPro::TMP_SpriteAsset::*)()>(&TMPro::TMP_SpriteAsset::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_SpriteAsset*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_SpriteAsset::GetDefaultSpriteMaterial
// Il2CppName: GetDefaultSpriteMaterial
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Material* (TMPro::TMP_SpriteAsset::*)()>(&TMPro::TMP_SpriteAsset::GetDefaultSpriteMaterial)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_SpriteAsset*), "GetDefaultSpriteMaterial", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_SpriteAsset::UpdateLookupTables
// Il2CppName: UpdateLookupTables
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (TMPro::TMP_SpriteAsset::*)()>(&TMPro::TMP_SpriteAsset::UpdateLookupTables)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_SpriteAsset*), "UpdateLookupTables", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_SpriteAsset::GetSpriteIndexFromHashcode
// Il2CppName: GetSpriteIndexFromHashcode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (TMPro::TMP_SpriteAsset::*)(int)>(&TMPro::TMP_SpriteAsset::GetSpriteIndexFromHashcode)> {
  static const MethodInfo* get() {
    static auto* hashCode = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_SpriteAsset*), "GetSpriteIndexFromHashcode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{hashCode});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_SpriteAsset::GetSpriteIndexFromUnicode
// Il2CppName: GetSpriteIndexFromUnicode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (TMPro::TMP_SpriteAsset::*)(uint)>(&TMPro::TMP_SpriteAsset::GetSpriteIndexFromUnicode)> {
  static const MethodInfo* get() {
    static auto* unicode = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_SpriteAsset*), "GetSpriteIndexFromUnicode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{unicode});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_SpriteAsset::GetSpriteIndexFromName
// Il2CppName: GetSpriteIndexFromName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (TMPro::TMP_SpriteAsset::*)(::Il2CppString*)>(&TMPro::TMP_SpriteAsset::GetSpriteIndexFromName)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_SpriteAsset*), "GetSpriteIndexFromName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_SpriteAsset::SearchForSpriteByUnicode
// Il2CppName: SearchForSpriteByUnicode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<TMPro::TMP_SpriteAsset* (*)(TMPro::TMP_SpriteAsset*, uint, bool, ByRef<int>)>(&TMPro::TMP_SpriteAsset::SearchForSpriteByUnicode)> {
  static const MethodInfo* get() {
    static auto* spriteAsset = &::il2cpp_utils::GetClassFromName("TMPro", "TMP_SpriteAsset")->byval_arg;
    static auto* unicode = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* includeFallbacks = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* spriteIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_SpriteAsset*), "SearchForSpriteByUnicode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{spriteAsset, unicode, includeFallbacks, spriteIndex});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_SpriteAsset::SearchForSpriteByUnicodeInternal
// Il2CppName: SearchForSpriteByUnicodeInternal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<TMPro::TMP_SpriteAsset* (*)(System::Collections::Generic::List_1<TMPro::TMP_SpriteAsset*>*, uint, bool, ByRef<int>)>(&TMPro::TMP_SpriteAsset::SearchForSpriteByUnicodeInternal)> {
  static const MethodInfo* get() {
    static auto* spriteAssets = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("TMPro", "TMP_SpriteAsset")})->byval_arg;
    static auto* unicode = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* includeFallbacks = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* spriteIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_SpriteAsset*), "SearchForSpriteByUnicodeInternal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{spriteAssets, unicode, includeFallbacks, spriteIndex});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_SpriteAsset::SearchForSpriteByUnicodeInternal
// Il2CppName: SearchForSpriteByUnicodeInternal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<TMPro::TMP_SpriteAsset* (*)(TMPro::TMP_SpriteAsset*, uint, bool, ByRef<int>)>(&TMPro::TMP_SpriteAsset::SearchForSpriteByUnicodeInternal)> {
  static const MethodInfo* get() {
    static auto* spriteAsset = &::il2cpp_utils::GetClassFromName("TMPro", "TMP_SpriteAsset")->byval_arg;
    static auto* unicode = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* includeFallbacks = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* spriteIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_SpriteAsset*), "SearchForSpriteByUnicodeInternal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{spriteAsset, unicode, includeFallbacks, spriteIndex});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_SpriteAsset::SearchForSpriteByHashCode
// Il2CppName: SearchForSpriteByHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<TMPro::TMP_SpriteAsset* (*)(TMPro::TMP_SpriteAsset*, int, bool, ByRef<int>)>(&TMPro::TMP_SpriteAsset::SearchForSpriteByHashCode)> {
  static const MethodInfo* get() {
    static auto* spriteAsset = &::il2cpp_utils::GetClassFromName("TMPro", "TMP_SpriteAsset")->byval_arg;
    static auto* hashCode = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* includeFallbacks = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* spriteIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_SpriteAsset*), "SearchForSpriteByHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{spriteAsset, hashCode, includeFallbacks, spriteIndex});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_SpriteAsset::SearchForSpriteByHashCodeInternal
// Il2CppName: SearchForSpriteByHashCodeInternal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<TMPro::TMP_SpriteAsset* (*)(System::Collections::Generic::List_1<TMPro::TMP_SpriteAsset*>*, int, bool, ByRef<int>)>(&TMPro::TMP_SpriteAsset::SearchForSpriteByHashCodeInternal)> {
  static const MethodInfo* get() {
    static auto* spriteAssets = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("TMPro", "TMP_SpriteAsset")})->byval_arg;
    static auto* hashCode = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* searchFallbacks = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* spriteIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_SpriteAsset*), "SearchForSpriteByHashCodeInternal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{spriteAssets, hashCode, searchFallbacks, spriteIndex});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_SpriteAsset::SearchForSpriteByHashCodeInternal
// Il2CppName: SearchForSpriteByHashCodeInternal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<TMPro::TMP_SpriteAsset* (*)(TMPro::TMP_SpriteAsset*, int, bool, ByRef<int>)>(&TMPro::TMP_SpriteAsset::SearchForSpriteByHashCodeInternal)> {
  static const MethodInfo* get() {
    static auto* spriteAsset = &::il2cpp_utils::GetClassFromName("TMPro", "TMP_SpriteAsset")->byval_arg;
    static auto* hashCode = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* searchFallbacks = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* spriteIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_SpriteAsset*), "SearchForSpriteByHashCodeInternal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{spriteAsset, hashCode, searchFallbacks, spriteIndex});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_SpriteAsset::SortGlyphTable
// Il2CppName: SortGlyphTable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (TMPro::TMP_SpriteAsset::*)()>(&TMPro::TMP_SpriteAsset::SortGlyphTable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_SpriteAsset*), "SortGlyphTable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_SpriteAsset::SortCharacterTable
// Il2CppName: SortCharacterTable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (TMPro::TMP_SpriteAsset::*)()>(&TMPro::TMP_SpriteAsset::SortCharacterTable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_SpriteAsset*), "SortCharacterTable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_SpriteAsset::SortGlyphAndCharacterTables
// Il2CppName: SortGlyphAndCharacterTables
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (TMPro::TMP_SpriteAsset::*)()>(&TMPro::TMP_SpriteAsset::SortGlyphAndCharacterTables)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_SpriteAsset*), "SortGlyphAndCharacterTables", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_SpriteAsset::UpgradeSpriteAsset
// Il2CppName: UpgradeSpriteAsset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (TMPro::TMP_SpriteAsset::*)()>(&TMPro::TMP_SpriteAsset::UpgradeSpriteAsset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_SpriteAsset*), "UpgradeSpriteAsset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_SpriteAsset::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
