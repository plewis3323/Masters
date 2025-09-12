// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME BbcPmtHit_Dict
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
#include "../BbcPmtHit.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static void *new_BbcPmtHit(void *p = nullptr);
   static void *newArray_BbcPmtHit(Long_t size, void *p);
   static void delete_BbcPmtHit(void *p);
   static void deleteArray_BbcPmtHit(void *p);
   static void destruct_BbcPmtHit(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BbcPmtHit*)
   {
      ::BbcPmtHit *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BbcPmtHit >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BbcPmtHit", ::BbcPmtHit::Class_Version(), "", 15,
                  typeid(::BbcPmtHit), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BbcPmtHit::Dictionary, isa_proxy, 4,
                  sizeof(::BbcPmtHit) );
      instance.SetNew(&new_BbcPmtHit);
      instance.SetNewArray(&newArray_BbcPmtHit);
      instance.SetDelete(&delete_BbcPmtHit);
      instance.SetDeleteArray(&deleteArray_BbcPmtHit);
      instance.SetDestructor(&destruct_BbcPmtHit);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BbcPmtHit*)
   {
      return GenerateInitInstanceLocal(static_cast<::BbcPmtHit*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::BbcPmtHit*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr BbcPmtHit::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BbcPmtHit::Class_Name()
{
   return "BbcPmtHit";
}

//______________________________________________________________________________
const char *BbcPmtHit::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BbcPmtHit*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BbcPmtHit::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BbcPmtHit*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BbcPmtHit::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BbcPmtHit*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BbcPmtHit::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BbcPmtHit*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void BbcPmtHit::Streamer(TBuffer &R__b)
{
   // Stream an object of class BbcPmtHit.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BbcPmtHit::Class(),this);
   } else {
      R__b.WriteClassBuffer(BbcPmtHit::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BbcPmtHit(void *p) {
      return  p ? new(p) ::BbcPmtHit : new ::BbcPmtHit;
   }
   static void *newArray_BbcPmtHit(Long_t nElements, void *p) {
      return p ? new(p) ::BbcPmtHit[nElements] : new ::BbcPmtHit[nElements];
   }
   // Wrapper around operator delete
   static void delete_BbcPmtHit(void *p) {
      delete (static_cast<::BbcPmtHit*>(p));
   }
   static void deleteArray_BbcPmtHit(void *p) {
      delete [] (static_cast<::BbcPmtHit*>(p));
   }
   static void destruct_BbcPmtHit(void *p) {
      typedef ::BbcPmtHit current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::BbcPmtHit

namespace {
  void TriggerDictionaryInitialization_BbcPmtHit_Dict_Impl() {
    static const char* headers[] = {
"0",
nullptr
    };
    static const char* includePaths[] = {
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "BbcPmtHit_Dict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
class BbcPmtHit;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "BbcPmtHit_Dict dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
// Tell emacs that this is a C++ source
//  -*- C++ -*-.
#ifndef BBC_BBCPMTHIT_H
#define BBC_BBCPMTHIT_H

#include "BbcReturnCodes.h"

#include <phool/PHObject.h>
#include <phool/phool.h>

#include <iostream>

class BbcPmtHit : public PHObject
{
 public:
  BbcPmtHit() = default;
  ~BbcPmtHit() override = default;

  virtual Short_t get_pmt() const
  {
    PHOOL_VIRTUAL_WARNING;
    return -9999;
  }

  virtual Float_t get_q() const
  {
    PHOOL_VIRTUAL_WARNING;
    return BbcReturnCodes::BBC_INVALID_FLOAT;
  }

  virtual Float_t get_time() const
  {
    PHOOL_VIRTUAL_WARNING;
    return BbcReturnCodes::BBC_INVALID_FLOAT;
  }

  virtual Float_t get_tt() const
  {
    PHOOL_VIRTUAL_WARNING;
    return BbcReturnCodes::BBC_INVALID_FLOAT;
  }

  virtual Float_t get_tq() const
  {
    PHOOL_VIRTUAL_WARNING;
    return BbcReturnCodes::BBC_INVALID_FLOAT;
  }

  virtual void set_pmt(const Short_t /*pmt*/, const Float_t /*q*/, const Float_t /*tt*/, const Float_t /*tq*/)
  {
    PHOOL_VIRTUAL_WARNING;
  }

  virtual void identify(std::ostream& oout = std::cout) const override;

  virtual int isValid() const override { return 0; }

 private:
  ClassDefOverride(BbcPmtHit, 1)
};

#endif

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"BbcPmtHit", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("BbcPmtHit_Dict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_BbcPmtHit_Dict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_BbcPmtHit_Dict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_BbcPmtHit_Dict() {
  TriggerDictionaryInitialization_BbcPmtHit_Dict_Impl();
}
