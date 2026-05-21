// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME OfflinePacketv1_Dict
#define R__NO_DEPRECATION

/*******************************************************************/
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#define G__DICTIONARY
#include "ROOT/RConfig.hxx"
#include "TClass.h"
#include "TDictAttributeMap.h"
#include "TInterpreter.h"
#include "TROOT.h"
#include "TBuffer.h"
#include "TMemberInspector.h"
#include "TInterpreter.h"
#include "TVirtualMutex.h"
#include "TError.h"

#ifndef G__ROOT
#define G__ROOT
#endif

#include "RtypesImp.h"
#include "TIsAProxy.h"
#include "TFileMergeInfo.h"
#include <algorithm>
#include "TCollectionProxyInfo.h"
/*******************************************************************/

#include "TDataMember.h"

// Header files passed as explicit arguments
#include "../OfflinePacketv1.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static void *new_OfflinePacketv1(void *p = nullptr);
   static void *newArray_OfflinePacketv1(Long_t size, void *p);
   static void delete_OfflinePacketv1(void *p);
   static void deleteArray_OfflinePacketv1(void *p);
   static void destruct_OfflinePacketv1(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::OfflinePacketv1*)
   {
      ::OfflinePacketv1 *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::OfflinePacketv1 >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("OfflinePacketv1", ::OfflinePacketv1::Class_Version(), "", 10,
                  typeid(::OfflinePacketv1), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::OfflinePacketv1::Dictionary, isa_proxy, 4,
                  sizeof(::OfflinePacketv1) );
      instance.SetNew(&new_OfflinePacketv1);
      instance.SetNewArray(&newArray_OfflinePacketv1);
      instance.SetDelete(&delete_OfflinePacketv1);
      instance.SetDeleteArray(&deleteArray_OfflinePacketv1);
      instance.SetDestructor(&destruct_OfflinePacketv1);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::OfflinePacketv1*)
   {
      return GenerateInitInstanceLocal(static_cast<::OfflinePacketv1*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::OfflinePacketv1*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr OfflinePacketv1::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *OfflinePacketv1::Class_Name()
{
   return "OfflinePacketv1";
}

//______________________________________________________________________________
const char *OfflinePacketv1::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::OfflinePacketv1*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int OfflinePacketv1::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::OfflinePacketv1*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *OfflinePacketv1::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::OfflinePacketv1*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *OfflinePacketv1::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::OfflinePacketv1*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void OfflinePacketv1::Streamer(TBuffer &R__b)
{
   // Stream an object of class OfflinePacketv1.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(OfflinePacketv1::Class(),this);
   } else {
      R__b.WriteClassBuffer(OfflinePacketv1::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_OfflinePacketv1(void *p) {
      return  p ? new(p) ::OfflinePacketv1 : new ::OfflinePacketv1;
   }
   static void *newArray_OfflinePacketv1(Long_t nElements, void *p) {
      return p ? new(p) ::OfflinePacketv1[nElements] : new ::OfflinePacketv1[nElements];
   }
   // Wrapper around operator delete
   static void delete_OfflinePacketv1(void *p) {
      delete (static_cast<::OfflinePacketv1*>(p));
   }
   static void deleteArray_OfflinePacketv1(void *p) {
      delete [] (static_cast<::OfflinePacketv1*>(p));
   }
   static void destruct_OfflinePacketv1(void *p) {
      typedef ::OfflinePacketv1 current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::OfflinePacketv1

namespace {
  void TriggerDictionaryInitialization_OfflinePacketv1_Dict_Impl() {
    static const char* headers[] = {
"0",
nullptr
    };
    static const char* includePaths[] = {
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "OfflinePacketv1_Dict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
class OfflinePacketv1;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "OfflinePacketv1_Dict dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#ifndef FUN4ALLRAW_OFFLINEPACKETV1_H
#define FUN4ALLRAW_OFFLINEPACKETV1_H

#include "OfflinePacket.h"

#include <limits>

class OfflinePacketv1 : public OfflinePacket
{
 public:
  OfflinePacketv1() = default;
  OfflinePacketv1(OfflinePacket *);
  ~OfflinePacketv1() override = default;
  void Reset() override;
  void identify(std::ostream &os = std::cout) const override;
  void FillFrom(const OfflinePacket *pkt) override;

  int getIdentifier() const override { return packetid; }
  // cppcheck-suppress virtualCallInConstructor
  void setIdentifier(const int i) override { packetid = i; }
  int getHitFormat() const override { return hitformat; }
  void setHitFormat(const int i) override { hitformat = i; }
  // cppcheck-suppress virtualCallInConstructor
  int getEvtSequence() const override { return evtseq; }
  // cppcheck-suppress virtualCallInConstructor
  void setEvtSequence(const int i) override { evtseq = i; }
  uint64_t getBCO() const override { return bco; }
  // cppcheck-suppress virtualCallInConstructor
  void setBCO(const uint64_t ui) override { bco = ui; }

 protected:
  int evtseq{std::numeric_limits<int>::min()};
  int hitformat{std::numeric_limits<int>::min()};
  int packetid{std::numeric_limits<int>::min()};
  uint64_t bco{std::numeric_limits<uint64_t>::max()};

 private:
  ClassDefOverride(OfflinePacketv1, 1)
};

#endif

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"OfflinePacketv1", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("OfflinePacketv1_Dict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_OfflinePacketv1_Dict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_OfflinePacketv1_Dict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_OfflinePacketv1_Dict() {
  TriggerDictionaryInitialization_OfflinePacketv1_Dict_Impl();
}
