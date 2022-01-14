// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Text::RegularExpressions
namespace System::Text::RegularExpressions {
  // Forward declaring type: Match
  class Match;
  // Forward declaring type: Regex
  class Regex;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: TimeSpan
  struct TimeSpan;
}
// Completed forward declares
// Type namespace: System.Text.RegularExpressions
namespace System::Text::RegularExpressions {
  // Forward declaring type: RegexRunner
  class RegexRunner;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(System::Text::RegularExpressions::RegexRunner);
DEFINE_IL2CPP_ARG_TYPE(System::Text::RegularExpressions::RegexRunner*, "System.Text.RegularExpressions", "RegexRunner");
// Type namespace: System.Text.RegularExpressions
namespace System::Text::RegularExpressions {
  // Size: 0x80
  #pragma pack(push, 1)
  // Autogenerated type: System.Text.RegularExpressions.RegexRunner
  // [TokenAttribute] Offset: FFFFFFFF
  // [EditorBrowsableAttribute] Offset: EAA73C
  class RegexRunner : public ::Il2CppObject {
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
    // protected internal System.Int32 runtextbeg
    // Size: 0x4
    // Offset: 0x10
    int runtextbeg;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // protected internal System.Int32 runtextend
    // Size: 0x4
    // Offset: 0x14
    int runtextend;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // protected internal System.Int32 runtextstart
    // Size: 0x4
    // Offset: 0x18
    int runtextstart;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: runtextstart and: runtext
    char __padding2[0x4] = {};
    // protected internal System.String runtext
    // Size: 0x8
    // Offset: 0x20
    ::StringW runtext;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // protected internal System.Int32 runtextpos
    // Size: 0x4
    // Offset: 0x28
    int runtextpos;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: runtextpos and: runtrack
    char __padding4[0x4] = {};
    // protected internal System.Int32[] runtrack
    // Size: 0x8
    // Offset: 0x30
    ::ArrayW<int> runtrack;
    // Field size check
    static_assert(sizeof(::ArrayW<int>) == 0x8);
    // protected internal System.Int32 runtrackpos
    // Size: 0x4
    // Offset: 0x38
    int runtrackpos;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: runtrackpos and: runstack
    char __padding6[0x4] = {};
    // protected internal System.Int32[] runstack
    // Size: 0x8
    // Offset: 0x40
    ::ArrayW<int> runstack;
    // Field size check
    static_assert(sizeof(::ArrayW<int>) == 0x8);
    // protected internal System.Int32 runstackpos
    // Size: 0x4
    // Offset: 0x48
    int runstackpos;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: runstackpos and: runcrawl
    char __padding8[0x4] = {};
    // protected internal System.Int32[] runcrawl
    // Size: 0x8
    // Offset: 0x50
    ::ArrayW<int> runcrawl;
    // Field size check
    static_assert(sizeof(::ArrayW<int>) == 0x8);
    // protected internal System.Int32 runcrawlpos
    // Size: 0x4
    // Offset: 0x58
    int runcrawlpos;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // protected internal System.Int32 runtrackcount
    // Size: 0x4
    // Offset: 0x5C
    int runtrackcount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // protected internal System.Text.RegularExpressions.Match runmatch
    // Size: 0x8
    // Offset: 0x60
    System::Text::RegularExpressions::Match* runmatch;
    // Field size check
    static_assert(sizeof(System::Text::RegularExpressions::Match*) == 0x8);
    // protected internal System.Text.RegularExpressions.Regex runregex
    // Size: 0x8
    // Offset: 0x68
    System::Text::RegularExpressions::Regex* runregex;
    // Field size check
    static_assert(sizeof(System::Text::RegularExpressions::Regex*) == 0x8);
    // private System.Int32 timeout
    // Size: 0x4
    // Offset: 0x70
    int timeout;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Boolean ignoreTimeout
    // Size: 0x1
    // Offset: 0x74
    bool ignoreTimeout;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: ignoreTimeout and: timeoutOccursAt
    char __padding15[0x3] = {};
    // private System.Int32 timeoutOccursAt
    // Size: 0x4
    // Offset: 0x78
    int timeoutOccursAt;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 timeoutChecksToSkip
    // Size: 0x4
    // Offset: 0x7C
    int timeoutChecksToSkip;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Get instance field reference: protected internal System.Int32 runtextbeg
    int& dyn_runtextbeg();
    // Get instance field reference: protected internal System.Int32 runtextend
    int& dyn_runtextend();
    // Get instance field reference: protected internal System.Int32 runtextstart
    int& dyn_runtextstart();
    // Get instance field reference: protected internal System.String runtext
    ::StringW& dyn_runtext();
    // Get instance field reference: protected internal System.Int32 runtextpos
    int& dyn_runtextpos();
    // Get instance field reference: protected internal System.Int32[] runtrack
    ::ArrayW<int>& dyn_runtrack();
    // Get instance field reference: protected internal System.Int32 runtrackpos
    int& dyn_runtrackpos();
    // Get instance field reference: protected internal System.Int32[] runstack
    ::ArrayW<int>& dyn_runstack();
    // Get instance field reference: protected internal System.Int32 runstackpos
    int& dyn_runstackpos();
    // Get instance field reference: protected internal System.Int32[] runcrawl
    ::ArrayW<int>& dyn_runcrawl();
    // Get instance field reference: protected internal System.Int32 runcrawlpos
    int& dyn_runcrawlpos();
    // Get instance field reference: protected internal System.Int32 runtrackcount
    int& dyn_runtrackcount();
    // Get instance field reference: protected internal System.Text.RegularExpressions.Match runmatch
    System::Text::RegularExpressions::Match*& dyn_runmatch();
    // Get instance field reference: protected internal System.Text.RegularExpressions.Regex runregex
    System::Text::RegularExpressions::Regex*& dyn_runregex();
    // Get instance field reference: private System.Int32 timeout
    int& dyn_timeout();
    // Get instance field reference: private System.Boolean ignoreTimeout
    bool& dyn_ignoreTimeout();
    // Get instance field reference: private System.Int32 timeoutOccursAt
    int& dyn_timeoutOccursAt();
    // Get instance field reference: private System.Int32 timeoutChecksToSkip
    int& dyn_timeoutChecksToSkip();
    // protected internal System.Text.RegularExpressions.Match Scan(System.Text.RegularExpressions.Regex regex, System.String text, System.Int32 textbeg, System.Int32 textend, System.Int32 textstart, System.Int32 prevlen, System.Boolean quick, System.TimeSpan timeout)
    // Offset: 0x1A44C94
    System::Text::RegularExpressions::Match* Scan(System::Text::RegularExpressions::Regex* regex, ::StringW text, int textbeg, int textend, int textstart, int prevlen, bool quick, System::TimeSpan timeout);
    // private System.Void StartTimeoutWatch()
    // Offset: 0x1A44FEC
    void StartTimeoutWatch();
    // protected System.Void CheckTimeout()
    // Offset: 0x1A3C978
    void CheckTimeout();
    // private System.Void DoCheckTimeout()
    // Offset: 0x1A4524C
    void DoCheckTimeout();
    // protected System.Void Go()
    // Offset: 0xFFFFFFFF
    void Go();
    // protected System.Boolean FindFirstChar()
    // Offset: 0xFFFFFFFF
    bool FindFirstChar();
    // protected System.Void InitTrackCount()
    // Offset: 0xFFFFFFFF
    void InitTrackCount();
    // private System.Void InitMatch()
    // Offset: 0x1A45030
    void InitMatch();
    // private System.Text.RegularExpressions.Match TidyMatch(System.Boolean quick)
    // Offset: 0x1A451FC
    System::Text::RegularExpressions::Match* TidyMatch(bool quick);
    // protected System.Void EnsureStorage()
    // Offset: 0x1A3A844
    void EnsureStorage();
    // protected System.Boolean IsBoundary(System.Int32 index, System.Int32 startpos, System.Int32 endpos)
    // Offset: 0x1A3CBB0
    bool IsBoundary(int index, int startpos, int endpos);
    // protected System.Boolean IsECMABoundary(System.Int32 index, System.Int32 startpos, System.Int32 endpos)
    // Offset: 0x1A3CCD0
    bool IsECMABoundary(int index, int startpos, int endpos);
    // protected System.Void DoubleTrack()
    // Offset: 0x1A453E0
    void DoubleTrack();
    // protected System.Void DoubleStack()
    // Offset: 0x1A45338
    void DoubleStack();
    // protected System.Void DoubleCrawl()
    // Offset: 0x1A45488
    void DoubleCrawl();
    // protected System.Void Crawl(System.Int32 i)
    // Offset: 0x1A45530
    void Crawl(int i);
    // protected System.Int32 Popcrawl()
    // Offset: 0x1A45598
    int Popcrawl();
    // protected System.Int32 Crawlpos()
    // Offset: 0x1A3CB8C
    int Crawlpos();
    // protected System.Void Capture(System.Int32 capnum, System.Int32 start, System.Int32 end)
    // Offset: 0x1A3CAE4
    void Capture(int capnum, int start, int end);
    // protected System.Void TransferCapture(System.Int32 capnum, System.Int32 uncapnum, System.Int32 start, System.Int32 end)
    // Offset: 0x1A3C9C0
    void TransferCapture(int capnum, int uncapnum, int start, int end);
    // protected System.Void Uncapture()
    // Offset: 0x1A3CB50
    void Uncapture();
    // protected System.Boolean IsMatched(System.Int32 cap)
    // Offset: 0x1A3C9A0
    bool IsMatched(int cap);
    // protected System.Int32 MatchIndex(System.Int32 cap)
    // Offset: 0x1A3CDF0
    int MatchIndex(int cap);
    // protected System.Int32 MatchLength(System.Int32 cap)
    // Offset: 0x1A3CE10
    int MatchLength(int cap);
    // protected internal System.Void .ctor()
    // Offset: 0x1A3A70C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RegexRunner* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Text::RegularExpressions::RegexRunner::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RegexRunner*, creationType>()));
    }
  }; // System.Text.RegularExpressions.RegexRunner
  #pragma pack(pop)
  static check_size<sizeof(RegexRunner), 124 + sizeof(int)> __System_Text_RegularExpressions_RegexRunnerSizeCheck;
  static_assert(sizeof(RegexRunner) == 0x80);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Text::RegularExpressions::RegexRunner::Scan
// Il2CppName: Scan
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Text::RegularExpressions::Match* (System::Text::RegularExpressions::RegexRunner::*)(System::Text::RegularExpressions::Regex*, ::StringW, int, int, int, int, bool, System::TimeSpan)>(&System::Text::RegularExpressions::RegexRunner::Scan)> {
  static const MethodInfo* get() {
    static auto* regex = &::il2cpp_utils::GetClassFromName("System.Text.RegularExpressions", "Regex")->byval_arg;
    static auto* text = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* textbeg = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* textend = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* textstart = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* prevlen = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* quick = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* timeout = &::il2cpp_utils::GetClassFromName("System", "TimeSpan")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::RegularExpressions::RegexRunner*), "Scan", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{regex, text, textbeg, textend, textstart, prevlen, quick, timeout});
  }
};
// Writing MetadataGetter for method: System::Text::RegularExpressions::RegexRunner::StartTimeoutWatch
// Il2CppName: StartTimeoutWatch
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Text::RegularExpressions::RegexRunner::*)()>(&System::Text::RegularExpressions::RegexRunner::StartTimeoutWatch)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Text::RegularExpressions::RegexRunner*), "StartTimeoutWatch", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Text::RegularExpressions::RegexRunner::CheckTimeout
// Il2CppName: CheckTimeout
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Text::RegularExpressions::RegexRunner::*)()>(&System::Text::RegularExpressions::RegexRunner::CheckTimeout)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Text::RegularExpressions::RegexRunner*), "CheckTimeout", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Text::RegularExpressions::RegexRunner::DoCheckTimeout
// Il2CppName: DoCheckTimeout
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Text::RegularExpressions::RegexRunner::*)()>(&System::Text::RegularExpressions::RegexRunner::DoCheckTimeout)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Text::RegularExpressions::RegexRunner*), "DoCheckTimeout", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Text::RegularExpressions::RegexRunner::Go
// Il2CppName: Go
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Text::RegularExpressions::RegexRunner::*)()>(&System::Text::RegularExpressions::RegexRunner::Go)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Text::RegularExpressions::RegexRunner*), "Go", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Text::RegularExpressions::RegexRunner::FindFirstChar
// Il2CppName: FindFirstChar
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Text::RegularExpressions::RegexRunner::*)()>(&System::Text::RegularExpressions::RegexRunner::FindFirstChar)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Text::RegularExpressions::RegexRunner*), "FindFirstChar", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Text::RegularExpressions::RegexRunner::InitTrackCount
// Il2CppName: InitTrackCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Text::RegularExpressions::RegexRunner::*)()>(&System::Text::RegularExpressions::RegexRunner::InitTrackCount)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Text::RegularExpressions::RegexRunner*), "InitTrackCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Text::RegularExpressions::RegexRunner::InitMatch
// Il2CppName: InitMatch
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Text::RegularExpressions::RegexRunner::*)()>(&System::Text::RegularExpressions::RegexRunner::InitMatch)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Text::RegularExpressions::RegexRunner*), "InitMatch", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Text::RegularExpressions::RegexRunner::TidyMatch
// Il2CppName: TidyMatch
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Text::RegularExpressions::Match* (System::Text::RegularExpressions::RegexRunner::*)(bool)>(&System::Text::RegularExpressions::RegexRunner::TidyMatch)> {
  static const MethodInfo* get() {
    static auto* quick = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::RegularExpressions::RegexRunner*), "TidyMatch", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{quick});
  }
};
// Writing MetadataGetter for method: System::Text::RegularExpressions::RegexRunner::EnsureStorage
// Il2CppName: EnsureStorage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Text::RegularExpressions::RegexRunner::*)()>(&System::Text::RegularExpressions::RegexRunner::EnsureStorage)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Text::RegularExpressions::RegexRunner*), "EnsureStorage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Text::RegularExpressions::RegexRunner::IsBoundary
// Il2CppName: IsBoundary
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Text::RegularExpressions::RegexRunner::*)(int, int, int)>(&System::Text::RegularExpressions::RegexRunner::IsBoundary)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* startpos = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* endpos = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::RegularExpressions::RegexRunner*), "IsBoundary", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index, startpos, endpos});
  }
};
// Writing MetadataGetter for method: System::Text::RegularExpressions::RegexRunner::IsECMABoundary
// Il2CppName: IsECMABoundary
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Text::RegularExpressions::RegexRunner::*)(int, int, int)>(&System::Text::RegularExpressions::RegexRunner::IsECMABoundary)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* startpos = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* endpos = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::RegularExpressions::RegexRunner*), "IsECMABoundary", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index, startpos, endpos});
  }
};
// Writing MetadataGetter for method: System::Text::RegularExpressions::RegexRunner::DoubleTrack
// Il2CppName: DoubleTrack
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Text::RegularExpressions::RegexRunner::*)()>(&System::Text::RegularExpressions::RegexRunner::DoubleTrack)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Text::RegularExpressions::RegexRunner*), "DoubleTrack", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Text::RegularExpressions::RegexRunner::DoubleStack
// Il2CppName: DoubleStack
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Text::RegularExpressions::RegexRunner::*)()>(&System::Text::RegularExpressions::RegexRunner::DoubleStack)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Text::RegularExpressions::RegexRunner*), "DoubleStack", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Text::RegularExpressions::RegexRunner::DoubleCrawl
// Il2CppName: DoubleCrawl
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Text::RegularExpressions::RegexRunner::*)()>(&System::Text::RegularExpressions::RegexRunner::DoubleCrawl)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Text::RegularExpressions::RegexRunner*), "DoubleCrawl", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Text::RegularExpressions::RegexRunner::Crawl
// Il2CppName: Crawl
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Text::RegularExpressions::RegexRunner::*)(int)>(&System::Text::RegularExpressions::RegexRunner::Crawl)> {
  static const MethodInfo* get() {
    static auto* i = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::RegularExpressions::RegexRunner*), "Crawl", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{i});
  }
};
// Writing MetadataGetter for method: System::Text::RegularExpressions::RegexRunner::Popcrawl
// Il2CppName: Popcrawl
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Text::RegularExpressions::RegexRunner::*)()>(&System::Text::RegularExpressions::RegexRunner::Popcrawl)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Text::RegularExpressions::RegexRunner*), "Popcrawl", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Text::RegularExpressions::RegexRunner::Crawlpos
// Il2CppName: Crawlpos
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Text::RegularExpressions::RegexRunner::*)()>(&System::Text::RegularExpressions::RegexRunner::Crawlpos)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Text::RegularExpressions::RegexRunner*), "Crawlpos", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Text::RegularExpressions::RegexRunner::Capture
// Il2CppName: Capture
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Text::RegularExpressions::RegexRunner::*)(int, int, int)>(&System::Text::RegularExpressions::RegexRunner::Capture)> {
  static const MethodInfo* get() {
    static auto* capnum = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* start = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* end = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::RegularExpressions::RegexRunner*), "Capture", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{capnum, start, end});
  }
};
// Writing MetadataGetter for method: System::Text::RegularExpressions::RegexRunner::TransferCapture
// Il2CppName: TransferCapture
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Text::RegularExpressions::RegexRunner::*)(int, int, int, int)>(&System::Text::RegularExpressions::RegexRunner::TransferCapture)> {
  static const MethodInfo* get() {
    static auto* capnum = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* uncapnum = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* start = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* end = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::RegularExpressions::RegexRunner*), "TransferCapture", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{capnum, uncapnum, start, end});
  }
};
// Writing MetadataGetter for method: System::Text::RegularExpressions::RegexRunner::Uncapture
// Il2CppName: Uncapture
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Text::RegularExpressions::RegexRunner::*)()>(&System::Text::RegularExpressions::RegexRunner::Uncapture)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Text::RegularExpressions::RegexRunner*), "Uncapture", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Text::RegularExpressions::RegexRunner::IsMatched
// Il2CppName: IsMatched
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Text::RegularExpressions::RegexRunner::*)(int)>(&System::Text::RegularExpressions::RegexRunner::IsMatched)> {
  static const MethodInfo* get() {
    static auto* cap = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::RegularExpressions::RegexRunner*), "IsMatched", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{cap});
  }
};
// Writing MetadataGetter for method: System::Text::RegularExpressions::RegexRunner::MatchIndex
// Il2CppName: MatchIndex
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Text::RegularExpressions::RegexRunner::*)(int)>(&System::Text::RegularExpressions::RegexRunner::MatchIndex)> {
  static const MethodInfo* get() {
    static auto* cap = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::RegularExpressions::RegexRunner*), "MatchIndex", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{cap});
  }
};
// Writing MetadataGetter for method: System::Text::RegularExpressions::RegexRunner::MatchLength
// Il2CppName: MatchLength
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Text::RegularExpressions::RegexRunner::*)(int)>(&System::Text::RegularExpressions::RegexRunner::MatchLength)> {
  static const MethodInfo* get() {
    static auto* cap = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::RegularExpressions::RegexRunner*), "MatchLength", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{cap});
  }
};
// Writing MetadataGetter for method: System::Text::RegularExpressions::RegexRunner::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
