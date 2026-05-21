// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME TpcRawHitContainerv3_Dict
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
#include "../TpcRawHitContainerv3.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static void *new_TpcRawHitContainerv3(void *p = nullptr);
   static void *newArray_TpcRawHitContainerv3(Long_t size, void *p);
   static void delete_TpcRawHitContainerv3(void *p);
   static void deleteArray_TpcRawHitContainerv3(void *p);
   static void destruct_TpcRawHitContainerv3(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TpcRawHitContainerv3*)
   {
      ::TpcRawHitContainerv3 *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TpcRawHitContainerv3 >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TpcRawHitContainerv3", ::TpcRawHitContainerv3::Class_Version(), "", 12,
                  typeid(::TpcRawHitContainerv3), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TpcRawHitContainerv3::Dictionary, isa_proxy, 4,
                  sizeof(::TpcRawHitContainerv3) );
      instance.SetNew(&new_TpcRawHitContainerv3);
      instance.SetNewArray(&newArray_TpcRawHitContainerv3);
      instance.SetDelete(&delete_TpcRawHitContainerv3);
      instance.SetDeleteArray(&deleteArray_TpcRawHitContainerv3);
      instance.SetDestructor(&destruct_TpcRawHitContainerv3);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TpcRawHitContainerv3*)
   {
      return GenerateInitInstanceLocal(static_cast<::TpcRawHitContainerv3*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TpcRawHitContainerv3*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr TpcRawHitContainerv3::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TpcRawHitContainerv3::Class_Name()
{
   return "TpcRawHitContainerv3";
}

//______________________________________________________________________________
const char *TpcRawHitContainerv3::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TpcRawHitContainerv3*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TpcRawHitContainerv3::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TpcRawHitContainerv3*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TpcRawHitContainerv3::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TpcRawHitContainerv3*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TpcRawHitContainerv3::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TpcRawHitContainerv3*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void TpcRawHitContainerv3::Streamer(TBuffer &R__b)
{
   // Stream an object of class TpcRawHitContainerv3.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TpcRawHitContainerv3::Class(),this);
   } else {
      R__b.WriteClassBuffer(TpcRawHitContainerv3::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TpcRawHitContainerv3(void *p) {
      return  p ? new(p) ::TpcRawHitContainerv3 : new ::TpcRawHitContainerv3;
   }
   static void *newArray_TpcRawHitContainerv3(Long_t nElements, void *p) {
      return p ? new(p) ::TpcRawHitContainerv3[nElements] : new ::TpcRawHitContainerv3[nElements];
   }
   // Wrapper around operator delete
   static void delete_TpcRawHitContainerv3(void *p) {
      delete (static_cast<::TpcRawHitContainerv3*>(p));
   }
   static void deleteArray_TpcRawHitContainerv3(void *p) {
      delete [] (static_cast<::TpcRawHitContainerv3*>(p));
   }
   static void destruct_TpcRawHitContainerv3(void *p) {
      typedef ::TpcRawHitContainerv3 current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TpcRawHitContainerv3

namespace {
  void TriggerDictionaryInitialization_TpcRawHitContainerv3_Dict_Impl() {
    static const char* headers[] = {
"0",
nullptr
    };
    static const char* includePaths[] = {
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "TpcRawHitContainerv3_Dict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
class TpcRawHitContainerv3;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "TpcRawHitContainerv3_Dict dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#ifndef FUN4ALLRAW_TPCHITRAWCONTAINERv3_H
#define FUN4ALLRAW_TPCHITRAWCONTAINERv3_H

#include "TpcRawHitContainer.h"

class TpcRawHit;
class TClonesArray;

// NOLINTNEXTLINE(hicpp-special-member-functions)
class TpcRawHitContainerv3 : public TpcRawHitContainer
{
 public:
  TpcRawHitContainerv3();
  ~TpcRawHitContainerv3() override;

  /// Clear Event
  void Reset() override;

  /** identify Function from PHObject
      @param os Output Stream
   */
  void identify(std::ostream &os = std::cout) const override;

  /// isValid returns non zero if object contains vailid data
  int isValid() const override;

  TpcRawHit *AddHit() override;
  TpcRawHit *AddHit(TpcRawHit *tpchit) override;
  unsigned int get_nhits() override;
  TpcRawHit *get_hit(unsigned int index) override;
  void setStatus(const unsigned int i) override { status = i; }
  unsigned int getStatus() const override { return status; }
  void setBco(const uint64_t i) override { bco = i; }
  uint64_t getBco() const override { return bco; }

 private:
  TClonesArray *TpcRawHitsTCArray{nullptr};
  uint64_t bco{0};
  unsigned int status{0};

  ClassDefOverride(TpcRawHitContainerv3, 1)
};

#endif

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"TpcRawHitContainerv3", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("TpcRawHitContainerv3_Dict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_TpcRawHitContainerv3_Dict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_TpcRawHitContainerv3_Dict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_TpcRawHitContainerv3_Dict() {
  TriggerDictionaryInitialization_TpcRawHitContainerv3_Dict_Impl();
}
