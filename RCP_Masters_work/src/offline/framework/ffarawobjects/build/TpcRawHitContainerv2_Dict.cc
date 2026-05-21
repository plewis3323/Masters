// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME TpcRawHitContainerv2_Dict
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
#include "../TpcRawHitContainerv2.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static void *new_TpcRawHitContainerv2(void *p = nullptr);
   static void *newArray_TpcRawHitContainerv2(Long_t size, void *p);
   static void delete_TpcRawHitContainerv2(void *p);
   static void deleteArray_TpcRawHitContainerv2(void *p);
   static void destruct_TpcRawHitContainerv2(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TpcRawHitContainerv2*)
   {
      ::TpcRawHitContainerv2 *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TpcRawHitContainerv2 >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TpcRawHitContainerv2", ::TpcRawHitContainerv2::Class_Version(), "", 11,
                  typeid(::TpcRawHitContainerv2), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TpcRawHitContainerv2::Dictionary, isa_proxy, 4,
                  sizeof(::TpcRawHitContainerv2) );
      instance.SetNew(&new_TpcRawHitContainerv2);
      instance.SetNewArray(&newArray_TpcRawHitContainerv2);
      instance.SetDelete(&delete_TpcRawHitContainerv2);
      instance.SetDeleteArray(&deleteArray_TpcRawHitContainerv2);
      instance.SetDestructor(&destruct_TpcRawHitContainerv2);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TpcRawHitContainerv2*)
   {
      return GenerateInitInstanceLocal(static_cast<::TpcRawHitContainerv2*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TpcRawHitContainerv2*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr TpcRawHitContainerv2::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TpcRawHitContainerv2::Class_Name()
{
   return "TpcRawHitContainerv2";
}

//______________________________________________________________________________
const char *TpcRawHitContainerv2::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TpcRawHitContainerv2*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TpcRawHitContainerv2::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TpcRawHitContainerv2*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TpcRawHitContainerv2::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TpcRawHitContainerv2*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TpcRawHitContainerv2::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TpcRawHitContainerv2*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void TpcRawHitContainerv2::Streamer(TBuffer &R__b)
{
   // Stream an object of class TpcRawHitContainerv2.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TpcRawHitContainerv2::Class(),this);
   } else {
      R__b.WriteClassBuffer(TpcRawHitContainerv2::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TpcRawHitContainerv2(void *p) {
      return  p ? new(p) ::TpcRawHitContainerv2 : new ::TpcRawHitContainerv2;
   }
   static void *newArray_TpcRawHitContainerv2(Long_t nElements, void *p) {
      return p ? new(p) ::TpcRawHitContainerv2[nElements] : new ::TpcRawHitContainerv2[nElements];
   }
   // Wrapper around operator delete
   static void delete_TpcRawHitContainerv2(void *p) {
      delete (static_cast<::TpcRawHitContainerv2*>(p));
   }
   static void deleteArray_TpcRawHitContainerv2(void *p) {
      delete [] (static_cast<::TpcRawHitContainerv2*>(p));
   }
   static void destruct_TpcRawHitContainerv2(void *p) {
      typedef ::TpcRawHitContainerv2 current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TpcRawHitContainerv2

namespace {
  void TriggerDictionaryInitialization_TpcRawHitContainerv2_Dict_Impl() {
    static const char* headers[] = {
"0",
nullptr
    };
    static const char* includePaths[] = {
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "TpcRawHitContainerv2_Dict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
class TpcRawHitContainerv2;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "TpcRawHitContainerv2_Dict dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#ifndef FUN4ALLRAW_TPCHITRAWCONTAINERV2_H
#define FUN4ALLRAW_TPCHITRAWCONTAINERV2_H

#include "TpcRawHitContainer.h"

class TpcRawHit;
class TClonesArray;

class TpcRawHitContainerv2 : public TpcRawHitContainer
{
 public:
  TpcRawHitContainerv2();
  ~TpcRawHitContainerv2() override;

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

  ClassDefOverride(TpcRawHitContainerv2, 1)
};

#endif

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"TpcRawHitContainerv2", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("TpcRawHitContainerv2_Dict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_TpcRawHitContainerv2_Dict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_TpcRawHitContainerv2_Dict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_TpcRawHitContainerv2_Dict() {
  TriggerDictionaryInitialization_TpcRawHitContainerv2_Dict_Impl();
}
