// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Xml.XmlTextReaderImpl
#include "System/Xml/XmlTextReaderImpl.hpp"
// Including type: System.Xml.IDtdParserAdapterV1
#include "System/Xml/IDtdParserAdapterV1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Xml
namespace System::Xml {
  // Forward declaring type: XmlNameTable
  class XmlNameTable;
  // Forward declaring type: IXmlNamespaceResolver
  class IXmlNamespaceResolver;
  // Forward declaring type: IValidationEventHandling
  class IValidationEventHandling;
  // Forward declaring type: IDtdEntityInfo
  class IDtdEntityInfo;
  // Forward declaring type: LineInfo
  struct LineInfo;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Uri
  class Uri;
  // Forward declaring type: Exception
  class Exception;
}
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: StringBuilder
  class StringBuilder;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Xml::XmlTextReaderImpl::DtdParserProxy);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::XmlTextReaderImpl::DtdParserProxy*, "System.Xml", "XmlTextReaderImpl/DtdParserProxy");
// Type namespace: System.Xml
namespace System::Xml {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: System.Xml.XmlTextReaderImpl/System.Xml.DtdParserProxy
  // [TokenAttribute] Offset: FFFFFFFF
  class XmlTextReaderImpl::DtdParserProxy : public ::Il2CppObject/*, public ::System::Xml::IDtdParserAdapterV1*/ {
    public:
    public:
    // private System.Xml.XmlTextReaderImpl reader
    // Size: 0x8
    // Offset: 0x10
    ::System::Xml::XmlTextReaderImpl* reader;
    // Field size check
    static_assert(sizeof(::System::Xml::XmlTextReaderImpl*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::System::Xml::IDtdParserAdapterV1
    operator ::System::Xml::IDtdParserAdapterV1() noexcept {
      return *reinterpret_cast<::System::Xml::IDtdParserAdapterV1*>(this);
    }
    // Creating interface conversion operator: i_IDtdParserAdapterV1
    inline ::System::Xml::IDtdParserAdapterV1* i_IDtdParserAdapterV1() noexcept {
      return reinterpret_cast<::System::Xml::IDtdParserAdapterV1*>(this);
    }
    // Creating conversion operator: operator ::System::Xml::XmlTextReaderImpl*
    constexpr operator ::System::Xml::XmlTextReaderImpl*() const noexcept {
      return reader;
    }
    // Get instance field reference: private System.Xml.XmlTextReaderImpl reader
    [[deprecated("Use field access instead!")]] ::System::Xml::XmlTextReaderImpl*& dyn_reader();
    // private System.Xml.XmlNameTable System.Xml.IDtdParserAdapter.get_NameTable()
    // Offset: 0x26FE544
    ::System::Xml::XmlNameTable* System_Xml_IDtdParserAdapter_get_NameTable();
    // private System.Xml.IXmlNamespaceResolver System.Xml.IDtdParserAdapter.get_NamespaceResolver()
    // Offset: 0x26FE560
    ::System::Xml::IXmlNamespaceResolver* System_Xml_IDtdParserAdapter_get_NamespaceResolver();
    // private System.Uri System.Xml.IDtdParserAdapter.get_BaseUri()
    // Offset: 0x26FE57C
    ::System::Uri* System_Xml_IDtdParserAdapter_get_BaseUri();
    // private System.Boolean System.Xml.IDtdParserAdapter.get_IsEof()
    // Offset: 0x26FE598
    bool System_Xml_IDtdParserAdapter_get_IsEof();
    // private System.Char[] System.Xml.IDtdParserAdapter.get_ParsingBuffer()
    // Offset: 0x26FE5B4
    ::ArrayW<::Il2CppChar> System_Xml_IDtdParserAdapter_get_ParsingBuffer();
    // private System.Int32 System.Xml.IDtdParserAdapter.get_ParsingBufferLength()
    // Offset: 0x26FE5D0
    int System_Xml_IDtdParserAdapter_get_ParsingBufferLength();
    // private System.Int32 System.Xml.IDtdParserAdapter.get_CurrentPosition()
    // Offset: 0x26FE5EC
    int System_Xml_IDtdParserAdapter_get_CurrentPosition();
    // private System.Void System.Xml.IDtdParserAdapter.set_CurrentPosition(System.Int32 value)
    // Offset: 0x26FE608
    void System_Xml_IDtdParserAdapter_set_CurrentPosition(int value);
    // private System.Int32 System.Xml.IDtdParserAdapter.get_EntityStackLength()
    // Offset: 0x26FE624
    int System_Xml_IDtdParserAdapter_get_EntityStackLength();
    // private System.Boolean System.Xml.IDtdParserAdapter.get_IsEntityEolNormalized()
    // Offset: 0x26FE640
    bool System_Xml_IDtdParserAdapter_get_IsEntityEolNormalized();
    // private System.Int32 System.Xml.IDtdParserAdapter.get_LineNo()
    // Offset: 0x26FE678
    int System_Xml_IDtdParserAdapter_get_LineNo();
    // private System.Int32 System.Xml.IDtdParserAdapter.get_LineStartPosition()
    // Offset: 0x26FE694
    int System_Xml_IDtdParserAdapter_get_LineStartPosition();
    // private System.Boolean System.Xml.IDtdParserAdapterWithValidation.get_DtdValidation()
    // Offset: 0x26FE804
    bool System_Xml_IDtdParserAdapterWithValidation_get_DtdValidation();
    // private System.Xml.IValidationEventHandling System.Xml.IDtdParserAdapterWithValidation.get_ValidationEventHandling()
    // Offset: 0x26FE820
    ::System::Xml::IValidationEventHandling* System_Xml_IDtdParserAdapterWithValidation_get_ValidationEventHandling();
    // private System.Boolean System.Xml.IDtdParserAdapterV1.get_Normalization()
    // Offset: 0x26FE83C
    bool System_Xml_IDtdParserAdapterV1_get_Normalization();
    // private System.Boolean System.Xml.IDtdParserAdapterV1.get_Namespaces()
    // Offset: 0x26FE858
    bool System_Xml_IDtdParserAdapterV1_get_Namespaces();
    // private System.Boolean System.Xml.IDtdParserAdapterV1.get_V1CompatibilityMode()
    // Offset: 0x26FE874
    bool System_Xml_IDtdParserAdapterV1_get_V1CompatibilityMode();
    // System.Void .ctor(System.Xml.XmlTextReaderImpl reader)
    // Offset: 0x26FE518
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static XmlTextReaderImpl::DtdParserProxy* New_ctor(::System::Xml::XmlTextReaderImpl* reader) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Xml::XmlTextReaderImpl::DtdParserProxy::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<XmlTextReaderImpl::DtdParserProxy*, creationType>(reader)));
    }
    // private System.Void System.Xml.IDtdParserAdapter.OnNewLine(System.Int32 pos)
    // Offset: 0x26FE65C
    void System_Xml_IDtdParserAdapter_OnNewLine(int pos);
    // private System.Int32 System.Xml.IDtdParserAdapter.ReadData()
    // Offset: 0x26FE6B0
    int System_Xml_IDtdParserAdapter_ReadData();
    // private System.Int32 System.Xml.IDtdParserAdapter.ParseNumericCharRef(System.Text.StringBuilder internalSubsetBuilder)
    // Offset: 0x26FE6CC
    int System_Xml_IDtdParserAdapter_ParseNumericCharRef(::System::Text::StringBuilder* internalSubsetBuilder);
    // private System.Int32 System.Xml.IDtdParserAdapter.ParseNamedCharRef(System.Boolean expand, System.Text.StringBuilder internalSubsetBuilder)
    // Offset: 0x26FE6E8
    int System_Xml_IDtdParserAdapter_ParseNamedCharRef(bool expand, ::System::Text::StringBuilder* internalSubsetBuilder);
    // private System.Void System.Xml.IDtdParserAdapter.ParsePI(System.Text.StringBuilder sb)
    // Offset: 0x26FE708
    void System_Xml_IDtdParserAdapter_ParsePI(::System::Text::StringBuilder* sb);
    // private System.Void System.Xml.IDtdParserAdapter.ParseComment(System.Text.StringBuilder sb)
    // Offset: 0x26FE724
    void System_Xml_IDtdParserAdapter_ParseComment(::System::Text::StringBuilder* sb);
    // private System.Boolean System.Xml.IDtdParserAdapter.PushEntity(System.Xml.IDtdEntityInfo entity, out System.Int32 entityId)
    // Offset: 0x26FE740
    bool System_Xml_IDtdParserAdapter_PushEntity(::System::Xml::IDtdEntityInfo* entity, ByRef<int> entityId);
    // private System.Boolean System.Xml.IDtdParserAdapter.PopEntity(out System.Xml.IDtdEntityInfo oldEntity, out System.Int32 newEntityId)
    // Offset: 0x26FE75C
    bool System_Xml_IDtdParserAdapter_PopEntity(ByRef<::System::Xml::IDtdEntityInfo*> oldEntity, ByRef<int> newEntityId);
    // private System.Boolean System.Xml.IDtdParserAdapter.PushExternalSubset(System.String systemId, System.String publicId)
    // Offset: 0x26FE778
    bool System_Xml_IDtdParserAdapter_PushExternalSubset(::StringW systemId, ::StringW publicId);
    // private System.Void System.Xml.IDtdParserAdapter.PushInternalDtd(System.String baseUri, System.String internalDtd)
    // Offset: 0x26FE794
    void System_Xml_IDtdParserAdapter_PushInternalDtd(::StringW baseUri, ::StringW internalDtd);
    // private System.Void System.Xml.IDtdParserAdapter.Throw(System.Exception e)
    // Offset: 0x26FE7B0
    void System_Xml_IDtdParserAdapter_Throw(::System::Exception* e);
    // private System.Void System.Xml.IDtdParserAdapter.OnSystemId(System.String systemId, System.Xml.LineInfo keywordLineInfo, System.Xml.LineInfo systemLiteralLineInfo)
    // Offset: 0x26FE7CC
    void System_Xml_IDtdParserAdapter_OnSystemId(::StringW systemId, ::System::Xml::LineInfo keywordLineInfo, ::System::Xml::LineInfo systemLiteralLineInfo);
    // private System.Void System.Xml.IDtdParserAdapter.OnPublicId(System.String publicId, System.Xml.LineInfo keywordLineInfo, System.Xml.LineInfo publicLiteralLineInfo)
    // Offset: 0x26FE7E8
    void System_Xml_IDtdParserAdapter_OnPublicId(::StringW publicId, ::System::Xml::LineInfo keywordLineInfo, ::System::Xml::LineInfo publicLiteralLineInfo);
  }; // System.Xml.XmlTextReaderImpl/System.Xml.DtdParserProxy
  #pragma pack(pop)
  static check_size<sizeof(XmlTextReaderImpl::DtdParserProxy), 16 + sizeof(::System::Xml::XmlTextReaderImpl*)> __System_Xml_XmlTextReaderImpl_DtdParserProxySizeCheck;
  static_assert(sizeof(XmlTextReaderImpl::DtdParserProxy) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Xml::XmlTextReaderImpl::DtdParserProxy::System_Xml_IDtdParserAdapter_get_NameTable
// Il2CppName: System.Xml.IDtdParserAdapter.get_NameTable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlNameTable* (System::Xml::XmlTextReaderImpl::DtdParserProxy::*)()>(&System::Xml::XmlTextReaderImpl::DtdParserProxy::System_Xml_IDtdParserAdapter_get_NameTable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlTextReaderImpl::DtdParserProxy*), "System.Xml.IDtdParserAdapter.get_NameTable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlTextReaderImpl::DtdParserProxy::System_Xml_IDtdParserAdapter_get_NamespaceResolver
// Il2CppName: System.Xml.IDtdParserAdapter.get_NamespaceResolver
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::IXmlNamespaceResolver* (System::Xml::XmlTextReaderImpl::DtdParserProxy::*)()>(&System::Xml::XmlTextReaderImpl::DtdParserProxy::System_Xml_IDtdParserAdapter_get_NamespaceResolver)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlTextReaderImpl::DtdParserProxy*), "System.Xml.IDtdParserAdapter.get_NamespaceResolver", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlTextReaderImpl::DtdParserProxy::System_Xml_IDtdParserAdapter_get_BaseUri
// Il2CppName: System.Xml.IDtdParserAdapter.get_BaseUri
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Uri* (System::Xml::XmlTextReaderImpl::DtdParserProxy::*)()>(&System::Xml::XmlTextReaderImpl::DtdParserProxy::System_Xml_IDtdParserAdapter_get_BaseUri)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlTextReaderImpl::DtdParserProxy*), "System.Xml.IDtdParserAdapter.get_BaseUri", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlTextReaderImpl::DtdParserProxy::System_Xml_IDtdParserAdapter_get_IsEof
// Il2CppName: System.Xml.IDtdParserAdapter.get_IsEof
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::XmlTextReaderImpl::DtdParserProxy::*)()>(&System::Xml::XmlTextReaderImpl::DtdParserProxy::System_Xml_IDtdParserAdapter_get_IsEof)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlTextReaderImpl::DtdParserProxy*), "System.Xml.IDtdParserAdapter.get_IsEof", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlTextReaderImpl::DtdParserProxy::System_Xml_IDtdParserAdapter_get_ParsingBuffer
// Il2CppName: System.Xml.IDtdParserAdapter.get_ParsingBuffer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::Il2CppChar> (System::Xml::XmlTextReaderImpl::DtdParserProxy::*)()>(&System::Xml::XmlTextReaderImpl::DtdParserProxy::System_Xml_IDtdParserAdapter_get_ParsingBuffer)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlTextReaderImpl::DtdParserProxy*), "System.Xml.IDtdParserAdapter.get_ParsingBuffer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlTextReaderImpl::DtdParserProxy::System_Xml_IDtdParserAdapter_get_ParsingBufferLength
// Il2CppName: System.Xml.IDtdParserAdapter.get_ParsingBufferLength
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Xml::XmlTextReaderImpl::DtdParserProxy::*)()>(&System::Xml::XmlTextReaderImpl::DtdParserProxy::System_Xml_IDtdParserAdapter_get_ParsingBufferLength)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlTextReaderImpl::DtdParserProxy*), "System.Xml.IDtdParserAdapter.get_ParsingBufferLength", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlTextReaderImpl::DtdParserProxy::System_Xml_IDtdParserAdapter_get_CurrentPosition
// Il2CppName: System.Xml.IDtdParserAdapter.get_CurrentPosition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Xml::XmlTextReaderImpl::DtdParserProxy::*)()>(&System::Xml::XmlTextReaderImpl::DtdParserProxy::System_Xml_IDtdParserAdapter_get_CurrentPosition)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlTextReaderImpl::DtdParserProxy*), "System.Xml.IDtdParserAdapter.get_CurrentPosition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlTextReaderImpl::DtdParserProxy::System_Xml_IDtdParserAdapter_set_CurrentPosition
// Il2CppName: System.Xml.IDtdParserAdapter.set_CurrentPosition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlTextReaderImpl::DtdParserProxy::*)(int)>(&System::Xml::XmlTextReaderImpl::DtdParserProxy::System_Xml_IDtdParserAdapter_set_CurrentPosition)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlTextReaderImpl::DtdParserProxy*), "System.Xml.IDtdParserAdapter.set_CurrentPosition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlTextReaderImpl::DtdParserProxy::System_Xml_IDtdParserAdapter_get_EntityStackLength
// Il2CppName: System.Xml.IDtdParserAdapter.get_EntityStackLength
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Xml::XmlTextReaderImpl::DtdParserProxy::*)()>(&System::Xml::XmlTextReaderImpl::DtdParserProxy::System_Xml_IDtdParserAdapter_get_EntityStackLength)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlTextReaderImpl::DtdParserProxy*), "System.Xml.IDtdParserAdapter.get_EntityStackLength", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlTextReaderImpl::DtdParserProxy::System_Xml_IDtdParserAdapter_get_IsEntityEolNormalized
// Il2CppName: System.Xml.IDtdParserAdapter.get_IsEntityEolNormalized
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::XmlTextReaderImpl::DtdParserProxy::*)()>(&System::Xml::XmlTextReaderImpl::DtdParserProxy::System_Xml_IDtdParserAdapter_get_IsEntityEolNormalized)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlTextReaderImpl::DtdParserProxy*), "System.Xml.IDtdParserAdapter.get_IsEntityEolNormalized", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlTextReaderImpl::DtdParserProxy::System_Xml_IDtdParserAdapter_get_LineNo
// Il2CppName: System.Xml.IDtdParserAdapter.get_LineNo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Xml::XmlTextReaderImpl::DtdParserProxy::*)()>(&System::Xml::XmlTextReaderImpl::DtdParserProxy::System_Xml_IDtdParserAdapter_get_LineNo)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlTextReaderImpl::DtdParserProxy*), "System.Xml.IDtdParserAdapter.get_LineNo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlTextReaderImpl::DtdParserProxy::System_Xml_IDtdParserAdapter_get_LineStartPosition
// Il2CppName: System.Xml.IDtdParserAdapter.get_LineStartPosition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Xml::XmlTextReaderImpl::DtdParserProxy::*)()>(&System::Xml::XmlTextReaderImpl::DtdParserProxy::System_Xml_IDtdParserAdapter_get_LineStartPosition)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlTextReaderImpl::DtdParserProxy*), "System.Xml.IDtdParserAdapter.get_LineStartPosition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlTextReaderImpl::DtdParserProxy::System_Xml_IDtdParserAdapterWithValidation_get_DtdValidation
// Il2CppName: System.Xml.IDtdParserAdapterWithValidation.get_DtdValidation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::XmlTextReaderImpl::DtdParserProxy::*)()>(&System::Xml::XmlTextReaderImpl::DtdParserProxy::System_Xml_IDtdParserAdapterWithValidation_get_DtdValidation)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlTextReaderImpl::DtdParserProxy*), "System.Xml.IDtdParserAdapterWithValidation.get_DtdValidation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlTextReaderImpl::DtdParserProxy::System_Xml_IDtdParserAdapterWithValidation_get_ValidationEventHandling
// Il2CppName: System.Xml.IDtdParserAdapterWithValidation.get_ValidationEventHandling
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::IValidationEventHandling* (System::Xml::XmlTextReaderImpl::DtdParserProxy::*)()>(&System::Xml::XmlTextReaderImpl::DtdParserProxy::System_Xml_IDtdParserAdapterWithValidation_get_ValidationEventHandling)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlTextReaderImpl::DtdParserProxy*), "System.Xml.IDtdParserAdapterWithValidation.get_ValidationEventHandling", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlTextReaderImpl::DtdParserProxy::System_Xml_IDtdParserAdapterV1_get_Normalization
// Il2CppName: System.Xml.IDtdParserAdapterV1.get_Normalization
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::XmlTextReaderImpl::DtdParserProxy::*)()>(&System::Xml::XmlTextReaderImpl::DtdParserProxy::System_Xml_IDtdParserAdapterV1_get_Normalization)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlTextReaderImpl::DtdParserProxy*), "System.Xml.IDtdParserAdapterV1.get_Normalization", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlTextReaderImpl::DtdParserProxy::System_Xml_IDtdParserAdapterV1_get_Namespaces
// Il2CppName: System.Xml.IDtdParserAdapterV1.get_Namespaces
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::XmlTextReaderImpl::DtdParserProxy::*)()>(&System::Xml::XmlTextReaderImpl::DtdParserProxy::System_Xml_IDtdParserAdapterV1_get_Namespaces)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlTextReaderImpl::DtdParserProxy*), "System.Xml.IDtdParserAdapterV1.get_Namespaces", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlTextReaderImpl::DtdParserProxy::System_Xml_IDtdParserAdapterV1_get_V1CompatibilityMode
// Il2CppName: System.Xml.IDtdParserAdapterV1.get_V1CompatibilityMode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::XmlTextReaderImpl::DtdParserProxy::*)()>(&System::Xml::XmlTextReaderImpl::DtdParserProxy::System_Xml_IDtdParserAdapterV1_get_V1CompatibilityMode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlTextReaderImpl::DtdParserProxy*), "System.Xml.IDtdParserAdapterV1.get_V1CompatibilityMode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlTextReaderImpl::DtdParserProxy::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Xml::XmlTextReaderImpl::DtdParserProxy::System_Xml_IDtdParserAdapter_OnNewLine
// Il2CppName: System.Xml.IDtdParserAdapter.OnNewLine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlTextReaderImpl::DtdParserProxy::*)(int)>(&System::Xml::XmlTextReaderImpl::DtdParserProxy::System_Xml_IDtdParserAdapter_OnNewLine)> {
  static const MethodInfo* get() {
    static auto* pos = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlTextReaderImpl::DtdParserProxy*), "System.Xml.IDtdParserAdapter.OnNewLine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pos});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlTextReaderImpl::DtdParserProxy::System_Xml_IDtdParserAdapter_ReadData
// Il2CppName: System.Xml.IDtdParserAdapter.ReadData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Xml::XmlTextReaderImpl::DtdParserProxy::*)()>(&System::Xml::XmlTextReaderImpl::DtdParserProxy::System_Xml_IDtdParserAdapter_ReadData)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlTextReaderImpl::DtdParserProxy*), "System.Xml.IDtdParserAdapter.ReadData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlTextReaderImpl::DtdParserProxy::System_Xml_IDtdParserAdapter_ParseNumericCharRef
// Il2CppName: System.Xml.IDtdParserAdapter.ParseNumericCharRef
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Xml::XmlTextReaderImpl::DtdParserProxy::*)(::System::Text::StringBuilder*)>(&System::Xml::XmlTextReaderImpl::DtdParserProxy::System_Xml_IDtdParserAdapter_ParseNumericCharRef)> {
  static const MethodInfo* get() {
    static auto* internalSubsetBuilder = &::il2cpp_utils::GetClassFromName("System.Text", "StringBuilder")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlTextReaderImpl::DtdParserProxy*), "System.Xml.IDtdParserAdapter.ParseNumericCharRef", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{internalSubsetBuilder});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlTextReaderImpl::DtdParserProxy::System_Xml_IDtdParserAdapter_ParseNamedCharRef
// Il2CppName: System.Xml.IDtdParserAdapter.ParseNamedCharRef
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Xml::XmlTextReaderImpl::DtdParserProxy::*)(bool, ::System::Text::StringBuilder*)>(&System::Xml::XmlTextReaderImpl::DtdParserProxy::System_Xml_IDtdParserAdapter_ParseNamedCharRef)> {
  static const MethodInfo* get() {
    static auto* expand = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* internalSubsetBuilder = &::il2cpp_utils::GetClassFromName("System.Text", "StringBuilder")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlTextReaderImpl::DtdParserProxy*), "System.Xml.IDtdParserAdapter.ParseNamedCharRef", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{expand, internalSubsetBuilder});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlTextReaderImpl::DtdParserProxy::System_Xml_IDtdParserAdapter_ParsePI
// Il2CppName: System.Xml.IDtdParserAdapter.ParsePI
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlTextReaderImpl::DtdParserProxy::*)(::System::Text::StringBuilder*)>(&System::Xml::XmlTextReaderImpl::DtdParserProxy::System_Xml_IDtdParserAdapter_ParsePI)> {
  static const MethodInfo* get() {
    static auto* sb = &::il2cpp_utils::GetClassFromName("System.Text", "StringBuilder")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlTextReaderImpl::DtdParserProxy*), "System.Xml.IDtdParserAdapter.ParsePI", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sb});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlTextReaderImpl::DtdParserProxy::System_Xml_IDtdParserAdapter_ParseComment
// Il2CppName: System.Xml.IDtdParserAdapter.ParseComment
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlTextReaderImpl::DtdParserProxy::*)(::System::Text::StringBuilder*)>(&System::Xml::XmlTextReaderImpl::DtdParserProxy::System_Xml_IDtdParserAdapter_ParseComment)> {
  static const MethodInfo* get() {
    static auto* sb = &::il2cpp_utils::GetClassFromName("System.Text", "StringBuilder")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlTextReaderImpl::DtdParserProxy*), "System.Xml.IDtdParserAdapter.ParseComment", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sb});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlTextReaderImpl::DtdParserProxy::System_Xml_IDtdParserAdapter_PushEntity
// Il2CppName: System.Xml.IDtdParserAdapter.PushEntity
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::XmlTextReaderImpl::DtdParserProxy::*)(::System::Xml::IDtdEntityInfo*, ByRef<int>)>(&System::Xml::XmlTextReaderImpl::DtdParserProxy::System_Xml_IDtdParserAdapter_PushEntity)> {
  static const MethodInfo* get() {
    static auto* entity = &::il2cpp_utils::GetClassFromName("System.Xml", "IDtdEntityInfo")->byval_arg;
    static auto* entityId = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlTextReaderImpl::DtdParserProxy*), "System.Xml.IDtdParserAdapter.PushEntity", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{entity, entityId});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlTextReaderImpl::DtdParserProxy::System_Xml_IDtdParserAdapter_PopEntity
// Il2CppName: System.Xml.IDtdParserAdapter.PopEntity
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::XmlTextReaderImpl::DtdParserProxy::*)(ByRef<::System::Xml::IDtdEntityInfo*>, ByRef<int>)>(&System::Xml::XmlTextReaderImpl::DtdParserProxy::System_Xml_IDtdParserAdapter_PopEntity)> {
  static const MethodInfo* get() {
    static auto* oldEntity = &::il2cpp_utils::GetClassFromName("System.Xml", "IDtdEntityInfo")->this_arg;
    static auto* newEntityId = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlTextReaderImpl::DtdParserProxy*), "System.Xml.IDtdParserAdapter.PopEntity", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{oldEntity, newEntityId});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlTextReaderImpl::DtdParserProxy::System_Xml_IDtdParserAdapter_PushExternalSubset
// Il2CppName: System.Xml.IDtdParserAdapter.PushExternalSubset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::XmlTextReaderImpl::DtdParserProxy::*)(::StringW, ::StringW)>(&System::Xml::XmlTextReaderImpl::DtdParserProxy::System_Xml_IDtdParserAdapter_PushExternalSubset)> {
  static const MethodInfo* get() {
    static auto* systemId = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* publicId = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlTextReaderImpl::DtdParserProxy*), "System.Xml.IDtdParserAdapter.PushExternalSubset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{systemId, publicId});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlTextReaderImpl::DtdParserProxy::System_Xml_IDtdParserAdapter_PushInternalDtd
// Il2CppName: System.Xml.IDtdParserAdapter.PushInternalDtd
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlTextReaderImpl::DtdParserProxy::*)(::StringW, ::StringW)>(&System::Xml::XmlTextReaderImpl::DtdParserProxy::System_Xml_IDtdParserAdapter_PushInternalDtd)> {
  static const MethodInfo* get() {
    static auto* baseUri = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* internalDtd = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlTextReaderImpl::DtdParserProxy*), "System.Xml.IDtdParserAdapter.PushInternalDtd", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{baseUri, internalDtd});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlTextReaderImpl::DtdParserProxy::System_Xml_IDtdParserAdapter_Throw
// Il2CppName: System.Xml.IDtdParserAdapter.Throw
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlTextReaderImpl::DtdParserProxy::*)(::System::Exception*)>(&System::Xml::XmlTextReaderImpl::DtdParserProxy::System_Xml_IDtdParserAdapter_Throw)> {
  static const MethodInfo* get() {
    static auto* e = &::il2cpp_utils::GetClassFromName("System", "Exception")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlTextReaderImpl::DtdParserProxy*), "System.Xml.IDtdParserAdapter.Throw", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{e});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlTextReaderImpl::DtdParserProxy::System_Xml_IDtdParserAdapter_OnSystemId
// Il2CppName: System.Xml.IDtdParserAdapter.OnSystemId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlTextReaderImpl::DtdParserProxy::*)(::StringW, ::System::Xml::LineInfo, ::System::Xml::LineInfo)>(&System::Xml::XmlTextReaderImpl::DtdParserProxy::System_Xml_IDtdParserAdapter_OnSystemId)> {
  static const MethodInfo* get() {
    static auto* systemId = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* keywordLineInfo = &::il2cpp_utils::GetClassFromName("System.Xml", "LineInfo")->byval_arg;
    static auto* systemLiteralLineInfo = &::il2cpp_utils::GetClassFromName("System.Xml", "LineInfo")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlTextReaderImpl::DtdParserProxy*), "System.Xml.IDtdParserAdapter.OnSystemId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{systemId, keywordLineInfo, systemLiteralLineInfo});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlTextReaderImpl::DtdParserProxy::System_Xml_IDtdParserAdapter_OnPublicId
// Il2CppName: System.Xml.IDtdParserAdapter.OnPublicId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlTextReaderImpl::DtdParserProxy::*)(::StringW, ::System::Xml::LineInfo, ::System::Xml::LineInfo)>(&System::Xml::XmlTextReaderImpl::DtdParserProxy::System_Xml_IDtdParserAdapter_OnPublicId)> {
  static const MethodInfo* get() {
    static auto* publicId = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* keywordLineInfo = &::il2cpp_utils::GetClassFromName("System.Xml", "LineInfo")->byval_arg;
    static auto* publicLiteralLineInfo = &::il2cpp_utils::GetClassFromName("System.Xml", "LineInfo")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlTextReaderImpl::DtdParserProxy*), "System.Xml.IDtdParserAdapter.OnPublicId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{publicId, keywordLineInfo, publicLiteralLineInfo});
  }
};
