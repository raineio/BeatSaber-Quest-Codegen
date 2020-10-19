// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IntPtr
  struct IntPtr;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: jvalue
  struct jvalue;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Autogenerated type: UnityEngine.AndroidJNISafe
  class AndroidJNISafe : public ::Il2CppObject {
    public:
    // static public System.Void CheckException()
    // Offset: 0x1F03A54
    static void CheckException();
    // static public System.Void DeleteGlobalRef(System.IntPtr globalref)
    // Offset: 0x1F03E58
    static void DeleteGlobalRef(System::IntPtr globalref);
    // static public System.Void DeleteWeakGlobalRef(System.IntPtr globalref)
    // Offset: 0x1F03EDC
    static void DeleteWeakGlobalRef(System::IntPtr globalref);
    // static public System.Void DeleteLocalRef(System.IntPtr localref)
    // Offset: 0x1F03DD4
    static void DeleteLocalRef(System::IntPtr localref);
    // static public System.IntPtr NewString(System.String chars)
    // Offset: 0x1F03F60
    static System::IntPtr NewString(::Il2CppString* chars);
    // static public System.String GetStringChars(System.IntPtr str)
    // Offset: 0x1F03FDC
    static ::Il2CppString* GetStringChars(System::IntPtr str);
    // static public System.IntPtr GetObjectClass(System.IntPtr ptr)
    // Offset: 0x1F04058
    static System::IntPtr GetObjectClass(System::IntPtr ptr);
    // static public System.IntPtr GetStaticMethodID(System.IntPtr clazz, System.String name, System.String sig)
    // Offset: 0x1F040D4
    static System::IntPtr GetStaticMethodID(System::IntPtr clazz, ::Il2CppString* name, ::Il2CppString* sig);
    // static public System.IntPtr GetMethodID(System.IntPtr obj, System.String name, System.String sig)
    // Offset: 0x1F04168
    static System::IntPtr GetMethodID(System::IntPtr obj, ::Il2CppString* name, ::Il2CppString* sig);
    // static public System.IntPtr GetFieldID(System.IntPtr clazz, System.String name, System.String sig)
    // Offset: 0x1F041FC
    static System::IntPtr GetFieldID(System::IntPtr clazz, ::Il2CppString* name, ::Il2CppString* sig);
    // static public System.IntPtr GetStaticFieldID(System.IntPtr clazz, System.String name, System.String sig)
    // Offset: 0x1F04290
    static System::IntPtr GetStaticFieldID(System::IntPtr clazz, ::Il2CppString* name, ::Il2CppString* sig);
    // static public System.IntPtr FromReflectedMethod(System.IntPtr refMethod)
    // Offset: 0x1F04324
    static System::IntPtr FromReflectedMethod(System::IntPtr refMethod);
    // static public System.IntPtr FindClass(System.String name)
    // Offset: 0x1F043A0
    static System::IntPtr FindClass(::Il2CppString* name);
    // static public System.IntPtr NewObject(System.IntPtr clazz, System.IntPtr methodID, UnityEngine.jvalue[] args)
    // Offset: 0x1F0441C
    static System::IntPtr NewObject(System::IntPtr clazz, System::IntPtr methodID, ::Array<UnityEngine::jvalue>* args);
    // static public System.Void SetStaticObjectField(System.IntPtr clazz, System.IntPtr fieldID, System.IntPtr val)
    // Offset: 0x1F044B0
    static void SetStaticObjectField(System::IntPtr clazz, System::IntPtr fieldID, System::IntPtr val);
    // static public System.Void SetStaticStringField(System.IntPtr clazz, System.IntPtr fieldID, System.String val)
    // Offset: 0x1F04548
    static void SetStaticStringField(System::IntPtr clazz, System::IntPtr fieldID, ::Il2CppString* val);
    // static public System.Void SetStaticCharField(System.IntPtr clazz, System.IntPtr fieldID, System.Char val)
    // Offset: 0x1F045E0
    static void SetStaticCharField(System::IntPtr clazz, System::IntPtr fieldID, ::Il2CppChar val);
    // static public System.Void SetStaticDoubleField(System.IntPtr clazz, System.IntPtr fieldID, System.Double val)
    // Offset: 0x1F04678
    static void SetStaticDoubleField(System::IntPtr clazz, System::IntPtr fieldID, double val);
    // static public System.Void SetStaticFloatField(System.IntPtr clazz, System.IntPtr fieldID, System.Single val)
    // Offset: 0x1F0471C
    static void SetStaticFloatField(System::IntPtr clazz, System::IntPtr fieldID, float val);
    // static public System.Void SetStaticLongField(System.IntPtr clazz, System.IntPtr fieldID, System.Int64 val)
    // Offset: 0x1F047C0
    static void SetStaticLongField(System::IntPtr clazz, System::IntPtr fieldID, int64_t val);
    // static public System.Void SetStaticShortField(System.IntPtr clazz, System.IntPtr fieldID, System.Int16 val)
    // Offset: 0x1F04858
    static void SetStaticShortField(System::IntPtr clazz, System::IntPtr fieldID, int16_t val);
    // static public System.Void SetStaticSByteField(System.IntPtr clazz, System.IntPtr fieldID, System.SByte val)
    // Offset: 0x1F048F0
    static void SetStaticSByteField(System::IntPtr clazz, System::IntPtr fieldID, int8_t val);
    // static public System.Void SetStaticBooleanField(System.IntPtr clazz, System.IntPtr fieldID, System.Boolean val)
    // Offset: 0x1F04988
    static void SetStaticBooleanField(System::IntPtr clazz, System::IntPtr fieldID, bool val);
    // static public System.Void SetStaticIntField(System.IntPtr clazz, System.IntPtr fieldID, System.Int32 val)
    // Offset: 0x1F04A20
    static void SetStaticIntField(System::IntPtr clazz, System::IntPtr fieldID, int val);
    // static public System.IntPtr GetStaticObjectField(System.IntPtr clazz, System.IntPtr fieldID)
    // Offset: 0x1F04AB8
    static System::IntPtr GetStaticObjectField(System::IntPtr clazz, System::IntPtr fieldID);
    // static public System.String GetStaticStringField(System.IntPtr clazz, System.IntPtr fieldID)
    // Offset: 0x1F04B44
    static ::Il2CppString* GetStaticStringField(System::IntPtr clazz, System::IntPtr fieldID);
    // static public System.Char GetStaticCharField(System.IntPtr clazz, System.IntPtr fieldID)
    // Offset: 0x1F04BD0
    static ::Il2CppChar GetStaticCharField(System::IntPtr clazz, System::IntPtr fieldID);
    // static public System.Double GetStaticDoubleField(System.IntPtr clazz, System.IntPtr fieldID)
    // Offset: 0x1F04C5C
    static double GetStaticDoubleField(System::IntPtr clazz, System::IntPtr fieldID);
    // static public System.Single GetStaticFloatField(System.IntPtr clazz, System.IntPtr fieldID)
    // Offset: 0x1F04CF4
    static float GetStaticFloatField(System::IntPtr clazz, System::IntPtr fieldID);
    // static public System.Int64 GetStaticLongField(System.IntPtr clazz, System.IntPtr fieldID)
    // Offset: 0x1F04D8C
    static int64_t GetStaticLongField(System::IntPtr clazz, System::IntPtr fieldID);
    // static public System.Int16 GetStaticShortField(System.IntPtr clazz, System.IntPtr fieldID)
    // Offset: 0x1F04E18
    static int16_t GetStaticShortField(System::IntPtr clazz, System::IntPtr fieldID);
    // static public System.SByte GetStaticSByteField(System.IntPtr clazz, System.IntPtr fieldID)
    // Offset: 0x1F04EA4
    static int8_t GetStaticSByteField(System::IntPtr clazz, System::IntPtr fieldID);
    // static public System.Boolean GetStaticBooleanField(System.IntPtr clazz, System.IntPtr fieldID)
    // Offset: 0x1F04F30
    static bool GetStaticBooleanField(System::IntPtr clazz, System::IntPtr fieldID);
    // static public System.Int32 GetStaticIntField(System.IntPtr clazz, System.IntPtr fieldID)
    // Offset: 0x1F04FBC
    static int GetStaticIntField(System::IntPtr clazz, System::IntPtr fieldID);
    // static public System.Void CallStaticVoidMethod(System.IntPtr clazz, System.IntPtr methodID, UnityEngine.jvalue[] args)
    // Offset: 0x1F05048
    static void CallStaticVoidMethod(System::IntPtr clazz, System::IntPtr methodID, ::Array<UnityEngine::jvalue>* args);
    // static public System.IntPtr CallStaticObjectMethod(System.IntPtr clazz, System.IntPtr methodID, UnityEngine.jvalue[] args)
    // Offset: 0x1F050E0
    static System::IntPtr CallStaticObjectMethod(System::IntPtr clazz, System::IntPtr methodID, ::Array<UnityEngine::jvalue>* args);
    // static public System.String CallStaticStringMethod(System.IntPtr clazz, System.IntPtr methodID, UnityEngine.jvalue[] args)
    // Offset: 0x1F05174
    static ::Il2CppString* CallStaticStringMethod(System::IntPtr clazz, System::IntPtr methodID, ::Array<UnityEngine::jvalue>* args);
    // static public System.Char CallStaticCharMethod(System.IntPtr clazz, System.IntPtr methodID, UnityEngine.jvalue[] args)
    // Offset: 0x1F05208
    static ::Il2CppChar CallStaticCharMethod(System::IntPtr clazz, System::IntPtr methodID, ::Array<UnityEngine::jvalue>* args);
    // static public System.Double CallStaticDoubleMethod(System.IntPtr clazz, System.IntPtr methodID, UnityEngine.jvalue[] args)
    // Offset: 0x1F0529C
    static double CallStaticDoubleMethod(System::IntPtr clazz, System::IntPtr methodID, ::Array<UnityEngine::jvalue>* args);
    // static public System.Single CallStaticFloatMethod(System.IntPtr clazz, System.IntPtr methodID, UnityEngine.jvalue[] args)
    // Offset: 0x1F0533C
    static float CallStaticFloatMethod(System::IntPtr clazz, System::IntPtr methodID, ::Array<UnityEngine::jvalue>* args);
    // static public System.Int64 CallStaticLongMethod(System.IntPtr clazz, System.IntPtr methodID, UnityEngine.jvalue[] args)
    // Offset: 0x1F053DC
    static int64_t CallStaticLongMethod(System::IntPtr clazz, System::IntPtr methodID, ::Array<UnityEngine::jvalue>* args);
    // static public System.Int16 CallStaticShortMethod(System.IntPtr clazz, System.IntPtr methodID, UnityEngine.jvalue[] args)
    // Offset: 0x1F05470
    static int16_t CallStaticShortMethod(System::IntPtr clazz, System::IntPtr methodID, ::Array<UnityEngine::jvalue>* args);
    // static public System.SByte CallStaticSByteMethod(System.IntPtr clazz, System.IntPtr methodID, UnityEngine.jvalue[] args)
    // Offset: 0x1F05504
    static int8_t CallStaticSByteMethod(System::IntPtr clazz, System::IntPtr methodID, ::Array<UnityEngine::jvalue>* args);
    // static public System.Boolean CallStaticBooleanMethod(System.IntPtr clazz, System.IntPtr methodID, UnityEngine.jvalue[] args)
    // Offset: 0x1F05598
    static bool CallStaticBooleanMethod(System::IntPtr clazz, System::IntPtr methodID, ::Array<UnityEngine::jvalue>* args);
    // static public System.Int32 CallStaticIntMethod(System.IntPtr clazz, System.IntPtr methodID, UnityEngine.jvalue[] args)
    // Offset: 0x1F0562C
    static int CallStaticIntMethod(System::IntPtr clazz, System::IntPtr methodID, ::Array<UnityEngine::jvalue>* args);
    // static public System.Void SetObjectField(System.IntPtr obj, System.IntPtr fieldID, System.IntPtr val)
    // Offset: 0x1F056C0
    static void SetObjectField(System::IntPtr obj, System::IntPtr fieldID, System::IntPtr val);
    // static public System.Void SetStringField(System.IntPtr obj, System.IntPtr fieldID, System.String val)
    // Offset: 0x1F05758
    static void SetStringField(System::IntPtr obj, System::IntPtr fieldID, ::Il2CppString* val);
    // static public System.Void SetCharField(System.IntPtr obj, System.IntPtr fieldID, System.Char val)
    // Offset: 0x1F057F0
    static void SetCharField(System::IntPtr obj, System::IntPtr fieldID, ::Il2CppChar val);
    // static public System.Void SetDoubleField(System.IntPtr obj, System.IntPtr fieldID, System.Double val)
    // Offset: 0x1F05888
    static void SetDoubleField(System::IntPtr obj, System::IntPtr fieldID, double val);
    // static public System.Void SetFloatField(System.IntPtr obj, System.IntPtr fieldID, System.Single val)
    // Offset: 0x1F0592C
    static void SetFloatField(System::IntPtr obj, System::IntPtr fieldID, float val);
    // static public System.Void SetLongField(System.IntPtr obj, System.IntPtr fieldID, System.Int64 val)
    // Offset: 0x1F059D0
    static void SetLongField(System::IntPtr obj, System::IntPtr fieldID, int64_t val);
    // static public System.Void SetShortField(System.IntPtr obj, System.IntPtr fieldID, System.Int16 val)
    // Offset: 0x1F05A68
    static void SetShortField(System::IntPtr obj, System::IntPtr fieldID, int16_t val);
    // static public System.Void SetSByteField(System.IntPtr obj, System.IntPtr fieldID, System.SByte val)
    // Offset: 0x1F05B00
    static void SetSByteField(System::IntPtr obj, System::IntPtr fieldID, int8_t val);
    // static public System.Void SetBooleanField(System.IntPtr obj, System.IntPtr fieldID, System.Boolean val)
    // Offset: 0x1F05B98
    static void SetBooleanField(System::IntPtr obj, System::IntPtr fieldID, bool val);
    // static public System.Void SetIntField(System.IntPtr obj, System.IntPtr fieldID, System.Int32 val)
    // Offset: 0x1F05C30
    static void SetIntField(System::IntPtr obj, System::IntPtr fieldID, int val);
    // static public System.IntPtr GetObjectField(System.IntPtr obj, System.IntPtr fieldID)
    // Offset: 0x1F05CC8
    static System::IntPtr GetObjectField(System::IntPtr obj, System::IntPtr fieldID);
    // static public System.String GetStringField(System.IntPtr obj, System.IntPtr fieldID)
    // Offset: 0x1F05D54
    static ::Il2CppString* GetStringField(System::IntPtr obj, System::IntPtr fieldID);
    // static public System.Char GetCharField(System.IntPtr obj, System.IntPtr fieldID)
    // Offset: 0x1F05DE0
    static ::Il2CppChar GetCharField(System::IntPtr obj, System::IntPtr fieldID);
    // static public System.Double GetDoubleField(System.IntPtr obj, System.IntPtr fieldID)
    // Offset: 0x1F05E6C
    static double GetDoubleField(System::IntPtr obj, System::IntPtr fieldID);
    // static public System.Single GetFloatField(System.IntPtr obj, System.IntPtr fieldID)
    // Offset: 0x1F05F04
    static float GetFloatField(System::IntPtr obj, System::IntPtr fieldID);
    // static public System.Int64 GetLongField(System.IntPtr obj, System.IntPtr fieldID)
    // Offset: 0x1F05F9C
    static int64_t GetLongField(System::IntPtr obj, System::IntPtr fieldID);
    // static public System.Int16 GetShortField(System.IntPtr obj, System.IntPtr fieldID)
    // Offset: 0x1F06028
    static int16_t GetShortField(System::IntPtr obj, System::IntPtr fieldID);
    // static public System.SByte GetSByteField(System.IntPtr obj, System.IntPtr fieldID)
    // Offset: 0x1F060B4
    static int8_t GetSByteField(System::IntPtr obj, System::IntPtr fieldID);
    // static public System.Boolean GetBooleanField(System.IntPtr obj, System.IntPtr fieldID)
    // Offset: 0x1F06140
    static bool GetBooleanField(System::IntPtr obj, System::IntPtr fieldID);
    // static public System.Int32 GetIntField(System.IntPtr obj, System.IntPtr fieldID)
    // Offset: 0x1F061CC
    static int GetIntField(System::IntPtr obj, System::IntPtr fieldID);
    // static public System.Void CallVoidMethod(System.IntPtr obj, System.IntPtr methodID, UnityEngine.jvalue[] args)
    // Offset: 0x1F06258
    static void CallVoidMethod(System::IntPtr obj, System::IntPtr methodID, ::Array<UnityEngine::jvalue>* args);
    // static public System.IntPtr CallObjectMethod(System.IntPtr obj, System.IntPtr methodID, UnityEngine.jvalue[] args)
    // Offset: 0x1F062F0
    static System::IntPtr CallObjectMethod(System::IntPtr obj, System::IntPtr methodID, ::Array<UnityEngine::jvalue>* args);
    // static public System.String CallStringMethod(System.IntPtr obj, System.IntPtr methodID, UnityEngine.jvalue[] args)
    // Offset: 0x1F06384
    static ::Il2CppString* CallStringMethod(System::IntPtr obj, System::IntPtr methodID, ::Array<UnityEngine::jvalue>* args);
    // static public System.Char CallCharMethod(System.IntPtr obj, System.IntPtr methodID, UnityEngine.jvalue[] args)
    // Offset: 0x1F06418
    static ::Il2CppChar CallCharMethod(System::IntPtr obj, System::IntPtr methodID, ::Array<UnityEngine::jvalue>* args);
    // static public System.Double CallDoubleMethod(System.IntPtr obj, System.IntPtr methodID, UnityEngine.jvalue[] args)
    // Offset: 0x1F064AC
    static double CallDoubleMethod(System::IntPtr obj, System::IntPtr methodID, ::Array<UnityEngine::jvalue>* args);
    // static public System.Single CallFloatMethod(System.IntPtr obj, System.IntPtr methodID, UnityEngine.jvalue[] args)
    // Offset: 0x1F0654C
    static float CallFloatMethod(System::IntPtr obj, System::IntPtr methodID, ::Array<UnityEngine::jvalue>* args);
    // static public System.Int64 CallLongMethod(System.IntPtr obj, System.IntPtr methodID, UnityEngine.jvalue[] args)
    // Offset: 0x1F065EC
    static int64_t CallLongMethod(System::IntPtr obj, System::IntPtr methodID, ::Array<UnityEngine::jvalue>* args);
    // static public System.Int16 CallShortMethod(System.IntPtr obj, System.IntPtr methodID, UnityEngine.jvalue[] args)
    // Offset: 0x1F06680
    static int16_t CallShortMethod(System::IntPtr obj, System::IntPtr methodID, ::Array<UnityEngine::jvalue>* args);
    // static public System.SByte CallSByteMethod(System.IntPtr obj, System.IntPtr methodID, UnityEngine.jvalue[] args)
    // Offset: 0x1F06714
    static int8_t CallSByteMethod(System::IntPtr obj, System::IntPtr methodID, ::Array<UnityEngine::jvalue>* args);
    // static public System.Boolean CallBooleanMethod(System.IntPtr obj, System.IntPtr methodID, UnityEngine.jvalue[] args)
    // Offset: 0x1F067A8
    static bool CallBooleanMethod(System::IntPtr obj, System::IntPtr methodID, ::Array<UnityEngine::jvalue>* args);
    // static public System.Int32 CallIntMethod(System.IntPtr obj, System.IntPtr methodID, UnityEngine.jvalue[] args)
    // Offset: 0x1F0683C
    static int CallIntMethod(System::IntPtr obj, System::IntPtr methodID, ::Array<UnityEngine::jvalue>* args);
    // static public System.Char[] FromCharArray(System.IntPtr array)
    // Offset: 0x1F068D0
    static ::Array<::Il2CppChar>* FromCharArray(System::IntPtr array);
    // static public System.Double[] FromDoubleArray(System.IntPtr array)
    // Offset: 0x1F0694C
    static ::Array<double>* FromDoubleArray(System::IntPtr array);
    // static public System.Single[] FromFloatArray(System.IntPtr array)
    // Offset: 0x1F069C8
    static ::Array<float>* FromFloatArray(System::IntPtr array);
    // static public System.Int64[] FromLongArray(System.IntPtr array)
    // Offset: 0x1F06A44
    static ::Array<int64_t>* FromLongArray(System::IntPtr array);
    // static public System.Int16[] FromShortArray(System.IntPtr array)
    // Offset: 0x1F06AC0
    static ::Array<int16_t>* FromShortArray(System::IntPtr array);
    // static public System.Byte[] FromByteArray(System.IntPtr array)
    // Offset: 0x1F06B3C
    static ::Array<uint8_t>* FromByteArray(System::IntPtr array);
    // static public System.SByte[] FromSByteArray(System.IntPtr array)
    // Offset: 0x1F06BB8
    static ::Array<int8_t>* FromSByteArray(System::IntPtr array);
    // static public System.Boolean[] FromBooleanArray(System.IntPtr array)
    // Offset: 0x1F06C34
    static ::Array<bool>* FromBooleanArray(System::IntPtr array);
    // static public System.Int32[] FromIntArray(System.IntPtr array)
    // Offset: 0x1F06CB0
    static ::Array<int>* FromIntArray(System::IntPtr array);
    // static public System.IntPtr ToObjectArray(System.IntPtr[] array, System.IntPtr type)
    // Offset: 0x1F06D2C
    static System::IntPtr ToObjectArray(::Array<System::IntPtr>* array, System::IntPtr type);
    // static public System.IntPtr ToCharArray(System.Char[] array)
    // Offset: 0x1F06DB8
    static System::IntPtr ToCharArray(::Array<::Il2CppChar>* array);
    // static public System.IntPtr ToDoubleArray(System.Double[] array)
    // Offset: 0x1F06E34
    static System::IntPtr ToDoubleArray(::Array<double>* array);
    // static public System.IntPtr ToFloatArray(System.Single[] array)
    // Offset: 0x1F06EB0
    static System::IntPtr ToFloatArray(::Array<float>* array);
    // static public System.IntPtr ToLongArray(System.Int64[] array)
    // Offset: 0x1F06F2C
    static System::IntPtr ToLongArray(::Array<int64_t>* array);
    // static public System.IntPtr ToShortArray(System.Int16[] array)
    // Offset: 0x1F06FA8
    static System::IntPtr ToShortArray(::Array<int16_t>* array);
    // static public System.IntPtr ToByteArray(System.Byte[] array)
    // Offset: 0x1F07024
    static System::IntPtr ToByteArray(::Array<uint8_t>* array);
    // static public System.IntPtr ToSByteArray(System.SByte[] array)
    // Offset: 0x1F070A0
    static System::IntPtr ToSByteArray(::Array<int8_t>* array);
    // static public System.IntPtr ToBooleanArray(System.Boolean[] array)
    // Offset: 0x1F0711C
    static System::IntPtr ToBooleanArray(::Array<bool>* array);
    // static public System.IntPtr ToIntArray(System.Int32[] array)
    // Offset: 0x1F07198
    static System::IntPtr ToIntArray(::Array<int>* array);
    // static public System.IntPtr GetObjectArrayElement(System.IntPtr array, System.Int32 index)
    // Offset: 0x1F07214
    static System::IntPtr GetObjectArrayElement(System::IntPtr array, int index);
    // static public System.Int32 GetArrayLength(System.IntPtr array)
    // Offset: 0x1F072A0
    static int GetArrayLength(System::IntPtr array);
  }; // UnityEngine.AndroidJNISafe
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::AndroidJNISafe*, "UnityEngine", "AndroidJNISafe");
#pragma pack(pop)
