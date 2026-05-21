// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME BbcPmtContainerV1_Dict
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
#include "../BbcPmtContainerV1.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static void *new_BbcPmtContainerV1(void *p = nullptr);
   static void *newArray_BbcPmtContainerV1(Long_t size, void *p);
   static void delete_BbcPmtContainerV1(void *p);
   static void deleteArray_BbcPmtContainerV1(void *p);
   static void destruct_BbcPmtContainerV1(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BbcPmtContainerV1*)
   {
      ::BbcPmtContainerV1 *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BbcPmtContainerV1 >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BbcPmtContainerV1", ::BbcPmtContainerV1::Class_Version(), "", 13,
                  typeid(::BbcPmtContainerV1), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BbcPmtContainerV1::Dictionary, isa_proxy, 4,
                  sizeof(::BbcPmtContainerV1) );
      instance.SetNew(&new_BbcPmtContainerV1);
      instance.SetNewArray(&newArray_BbcPmtContainerV1);
      instance.SetDelete(&delete_BbcPmtContainerV1);
      instance.SetDeleteArray(&deleteArray_BbcPmtContainerV1);
      instance.SetDestructor(&destruct_BbcPmtContainerV1);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BbcPmtContainerV1*)
   {
      return GenerateInitInstanceLocal(static_cast<::BbcPmtContainerV1*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::BbcPmtContainerV1*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr BbcPmtContainerV1::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BbcPmtContainerV1::Class_Name()
{
   return "BbcPmtContainerV1";
}

//______________________________________________________________________________
const char *BbcPmtContainerV1::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BbcPmtContainerV1*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BbcPmtContainerV1::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BbcPmtContainerV1*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BbcPmtContainerV1::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BbcPmtContainerV1*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BbcPmtContainerV1::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BbcPmtContainerV1*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void BbcPmtContainerV1::Streamer(TBuffer &R__b)
{
   // Stream an object of class BbcPmtContainerV1.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BbcPmtContainerV1::Class(),this);
   } else {
      R__b.WriteClassBuffer(BbcPmtContainerV1::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BbcPmtContainerV1(void *p) {
      return  p ? new(p) ::BbcPmtContainerV1 : new ::BbcPmtContainerV1;
   }
   static void *newArray_BbcPmtContainerV1(Long_t nElements, void *p) {
      return p ? new(p) ::BbcPmtContainerV1[nElements] : new ::BbcPmtContainerV1[nElements];
   }
   // Wrapper around operator delete
   static void delete_BbcPmtContainerV1(void *p) {
      delete (static_cast<::BbcPmtContainerV1*>(p));
   }
   static void deleteArray_BbcPmtContainerV1(void *p) {
      delete [] (static_cast<::BbcPmtContainerV1*>(p));
   }
   static void destruct_BbcPmtContainerV1(void *p) {
      typedef ::BbcPmtContainerV1 current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::BbcPmtContainerV1

namespace {
  void TriggerDictionaryInitialization_BbcPmtContainerV1_Dict_Impl() {
    static const char* headers[] = {
"0",
nullptr
    };
    static const char* includePaths[] = {
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "BbcPmtContainerV1_Dict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
class BbcPmtContainerV1;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "BbcPmtContainerV1_Dict dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#ifndef MBD_BBCPMTCONTAINERV1_H
#define MBD_BBCPMTCONTAINERV1_H

#include "BbcPmtContainer.h"

#include <iostream>

#include <TClonesArray.h>

///
class BbcPmtContainerV1 : public BbcPmtContainer
{
public:
  /// ctor
  BbcPmtContainerV1();

  /// dtor
  virtual ~BbcPmtContainerV1();

  /// Clear Event
  void Reset() override;

  /** identify Function from PHObject
      @param os Output Stream
   */
  void identify(std::ostream &out = std::cout) const override;

  /// isValid returns non zero if object contains vailid data
  int isValid() const override;

  /** set number of pmts for Bbc
      @param ival Number of Bbc Pmt's
   */
  void set_npmt(const Short_t ival) override
  {
    npmt = ival;
    return;
  }

  /// get Number of Bbc Pmt's
  Short_t get_npmt() const override { return npmt; }

  /** get BbcHitPmt of Pmt iPmt in TClonesArray
      @param iPmt no of Pmt in TClonesArray
   */
  BbcPmtHit *get_pmt(const int iPmt) const override { return (BbcPmtHit*)BbcPmtHits->ConstructedAt(iPmt); }

private:
  TClonesArray *GetBbcPmtHits() const { return BbcPmtHits; }

  Short_t npmt = 0;
  TClonesArray *BbcPmtHits = nullptr;

  ClassDefOverride(BbcPmtContainerV1, 1)
};

#endif

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"BbcPmtContainerV1", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("BbcPmtContainerV1_Dict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_BbcPmtContainerV1_Dict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_BbcPmtContainerV1_Dict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_BbcPmtContainerV1_Dict() {
  TriggerDictionaryInitialization_BbcPmtContainerV1_Dict_Impl();
}
