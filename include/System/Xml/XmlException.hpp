// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.SystemException
#include "System/SystemException.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Skipping declaration: Exception because it is already included!
}
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: SerializationInfo
  class SerializationInfo;
}
// Completed forward declares
// Type namespace: System.Xml
namespace System::Xml {
  // Forward declaring type: XmlException
  class XmlException;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(System::Xml::XmlException);
DEFINE_IL2CPP_ARG_TYPE(System::Xml::XmlException*, "System.Xml", "XmlException");
// Type namespace: System.Xml
namespace System::Xml {
  // Size: 0xB0
  #pragma pack(push, 1)
  // Autogenerated type: System.Xml.XmlException
  // [TokenAttribute] Offset: FFFFFFFF
  class XmlException : public System::SystemException {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // private System.String res
    // Size: 0x8
    // Offset: 0x88
    ::StringW res;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.String[] args
    // Size: 0x8
    // Offset: 0x90
    ::ArrayW<::StringW> args;
    // Field size check
    static_assert(sizeof(::ArrayW<::StringW>) == 0x8);
    // private System.Int32 lineNumber
    // Size: 0x4
    // Offset: 0x98
    int lineNumber;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 linePosition
    // Size: 0x4
    // Offset: 0x9C
    int linePosition;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // [OptionalFieldAttribute] Offset: 0xEA9E58
    // private System.String sourceUri
    // Size: 0x8
    // Offset: 0xA0
    ::StringW sourceUri;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.String message
    // Size: 0x8
    // Offset: 0xA8
    ::StringW message;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Get instance field reference: private System.String res
    ::StringW& dyn_res();
    // Get instance field reference: private System.String[] args
    ::ArrayW<::StringW>& dyn_args();
    // Get instance field reference: private System.Int32 lineNumber
    int& dyn_lineNumber();
    // Get instance field reference: private System.Int32 linePosition
    int& dyn_linePosition();
    // Get instance field reference: private System.String sourceUri
    ::StringW& dyn_sourceUri();
    // Get instance field reference: private System.String message
    ::StringW& dyn_message();
    // public System.Void .ctor(System.String message, System.Exception innerException, System.Int32 lineNumber, System.Int32 linePosition)
    // Offset: 0x1B69170
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static XmlException* New_ctor(::StringW message, System::Exception* innerException, int lineNumber, int linePosition) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Xml::XmlException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<XmlException*, creationType>(message, innerException, lineNumber, linePosition)));
    }
    // System.Void .ctor(System.String message, System.Exception innerException, System.Int32 lineNumber, System.Int32 linePosition, System.String sourceUri)
    // Offset: 0x1B69178
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static XmlException* New_ctor(::StringW message, System::Exception* innerException, int lineNumber, int linePosition, ::StringW sourceUri) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Xml::XmlException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<XmlException*, creationType>(message, innerException, lineNumber, linePosition, sourceUri)));
    }
    // System.Void .ctor(System.String res, System.String[] args)
    // Offset: 0x1B69390
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static XmlException* New_ctor(::StringW res, ::ArrayW<::StringW> args) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Xml::XmlException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<XmlException*, creationType>(res, args)));
    }
    // System.Void .ctor(System.String res, System.String arg)
    // Offset: 0x1B60FA4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static XmlException* New_ctor(::StringW res, ::StringW arg) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Xml::XmlException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<XmlException*, creationType>(res, arg)));
    }
    // System.Void .ctor(System.String res, System.String arg, System.Int32 lineNumber, System.Int32 linePosition)
    // Offset: 0x1B64C00
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static XmlException* New_ctor(::StringW res, ::StringW arg, int lineNumber, int linePosition) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Xml::XmlException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<XmlException*, creationType>(res, arg, lineNumber, linePosition)));
    }
    // System.Void .ctor(System.String res, System.String[] args, System.Int32 lineNumber, System.Int32 linePosition)
    // Offset: 0x1B64D80
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static XmlException* New_ctor(::StringW res, ::ArrayW<::StringW> args, int lineNumber, int linePosition) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Xml::XmlException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<XmlException*, creationType>(res, args, lineNumber, linePosition)));
    }
    // System.Void .ctor(System.String res, System.String[] args, System.Exception innerException, System.Int32 lineNumber, System.Int32 linePosition, System.String sourceUri)
    // Offset: 0x1B693F8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static XmlException* New_ctor(::StringW res, ::ArrayW<::StringW> args, System::Exception* innerException, int lineNumber, int linePosition, ::StringW sourceUri) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Xml::XmlException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<XmlException*, creationType>(res, args, innerException, lineNumber, linePosition, sourceUri)));
    }
    // static private System.String FormatUserMessage(System.String message, System.Int32 lineNumber, System.Int32 linePosition)
    // Offset: 0x1B692A0
    static ::StringW FormatUserMessage(::StringW message, int lineNumber, int linePosition);
    // static private System.String CreateMessage(System.String res, System.String[] args, System.Int32 lineNumber, System.Int32 linePosition)
    // Offset: 0x1B68D80
    static ::StringW CreateMessage(::StringW res, ::ArrayW<::StringW> args, int lineNumber, int linePosition);
    // static System.String[] BuildCharExceptionArgs(System.String data, System.Int32 invCharIndex)
    // Offset: 0x1B64840
    static ::ArrayW<::StringW> BuildCharExceptionArgs(::StringW data, int invCharIndex);
    // static System.String[] BuildCharExceptionArgs(System.Char invChar, System.Char nextChar)
    // Offset: 0x1B6530C
    static ::ArrayW<::StringW> BuildCharExceptionArgs(::Il2CppChar invChar, ::Il2CppChar nextChar);
    // public override System.String get_Message()
    // Offset: 0x1B69484
    // Implemented from: System.Exception
    // Base method: System.String Exception::get_Message()
    ::StringW get_Message();
    // protected System.Void .ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x1B68A68
    // Implemented from: System.SystemException
    // Base method: System.Void SystemException::.ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Base method: System.Void Exception::.ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static XmlException* New_ctor(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Xml::XmlException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<XmlException*, creationType>(info, context)));
    }
    // public System.Void .ctor()
    // Offset: 0x1B69144
    // Implemented from: System.SystemException
    // Base method: System.Void SystemException::.ctor()
    // Base method: System.Void Exception::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static XmlException* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Xml::XmlException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<XmlException*, creationType>()));
    }
    // public System.Void .ctor(System.String message)
    // Offset: 0x1B6915C
    // Implemented from: System.SystemException
    // Base method: System.Void SystemException::.ctor(System.String message)
    // Base method: System.Void Exception::.ctor(System.String message)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static XmlException* New_ctor(::StringW message) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Xml::XmlException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<XmlException*, creationType>(message)));
    }
    // public override System.Void GetObjectData(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x1B6901C
    // Implemented from: System.Exception
    // Base method: System.Void Exception::GetObjectData(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    void GetObjectData(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context);
  }; // System.Xml.XmlException
  #pragma pack(pop)
  static check_size<sizeof(XmlException), 168 + sizeof(::StringW)> __System_Xml_XmlExceptionSizeCheck;
  static_assert(sizeof(XmlException) == 0xB0);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Xml::XmlException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Xml::XmlException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Xml::XmlException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Xml::XmlException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Xml::XmlException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Xml::XmlException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Xml::XmlException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Xml::XmlException::FormatUserMessage
// Il2CppName: FormatUserMessage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW, int, int)>(&System::Xml::XmlException::FormatUserMessage)> {
  static const MethodInfo* get() {
    static auto* message = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* lineNumber = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* linePosition = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlException*), "FormatUserMessage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{message, lineNumber, linePosition});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlException::CreateMessage
// Il2CppName: CreateMessage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW, ::ArrayW<::StringW>, int, int)>(&System::Xml::XmlException::CreateMessage)> {
  static const MethodInfo* get() {
    static auto* res = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* args = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "String"), 1)->byval_arg;
    static auto* lineNumber = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* linePosition = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlException*), "CreateMessage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{res, args, lineNumber, linePosition});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlException::BuildCharExceptionArgs
// Il2CppName: BuildCharExceptionArgs
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::StringW> (*)(::StringW, int)>(&System::Xml::XmlException::BuildCharExceptionArgs)> {
  static const MethodInfo* get() {
    static auto* data = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* invCharIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlException*), "BuildCharExceptionArgs", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{data, invCharIndex});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlException::BuildCharExceptionArgs
// Il2CppName: BuildCharExceptionArgs
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::StringW> (*)(::Il2CppChar, ::Il2CppChar)>(&System::Xml::XmlException::BuildCharExceptionArgs)> {
  static const MethodInfo* get() {
    static auto* invChar = &::il2cpp_utils::GetClassFromName("System", "Char")->byval_arg;
    static auto* nextChar = &::il2cpp_utils::GetClassFromName("System", "Char")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlException*), "BuildCharExceptionArgs", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{invChar, nextChar});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlException::get_Message
// Il2CppName: get_Message
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Xml::XmlException::*)()>(&System::Xml::XmlException::get_Message)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlException*), "get_Message", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Xml::XmlException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Xml::XmlException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Xml::XmlException::GetObjectData
// Il2CppName: GetObjectData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlException::*)(System::Runtime::Serialization::SerializationInfo*, System::Runtime::Serialization::StreamingContext)>(&System::Xml::XmlException::GetObjectData)> {
  static const MethodInfo* get() {
    static auto* info = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "SerializationInfo")->byval_arg;
    static auto* context = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "StreamingContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlException*), "GetObjectData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{info, context});
  }
};
