// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Net.MonoChunkStream/Chunk
#include "System/Net/MonoChunkStream_Chunk.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: System.Net.MonoChunkStream/Chunk..ctor
System::Net::MonoChunkStream::Chunk* System::Net::MonoChunkStream::Chunk::New_ctor(::Array<uint8_t>* chunk) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Net").WithContext("Chunk").WithContext(".ctor");
  return THROW_UNLESS(::il2cpp_utils::New<MonoChunkStream::Chunk*>(chunk));
}
// Autogenerated method: System.Net.MonoChunkStream/Chunk.Read
int System::Net::MonoChunkStream::Chunk::Read(::Array<uint8_t>* buffer, int offset, int size) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Net").WithContext("Chunk").WithContext("Read");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<int>(), "Read", {}, ::il2cpp_utils::ExtractTypes(buffer, offset, size)));
  return ::il2cpp_utils::RunMethodThrow<int, false>(this, ___internal__method, buffer, offset, size);
}