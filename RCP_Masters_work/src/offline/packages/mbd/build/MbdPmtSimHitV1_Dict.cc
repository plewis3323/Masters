// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME MbdPmtSimHitV1_Dict
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
#include "../MbdPmtSimHitV1.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static void *new_MbdPmtSimHitV1(void *p = nullptr);
   static void *newArray_MbdPmtSimHitV1(Long_t size, void *p);
   static void delete_MbdPmtSimHitV1(void *p);
   static void deleteArray_MbdPmtSimHitV1(void *p);
   static void destruct_MbdPmtSimHitV1(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::MbdPmtSimHitV1*)
   {
      ::MbdPmtSimHitV1 *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::MbdPmtSimHitV1 >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("MbdPmtSimHitV1", ::MbdPmtSimHitV1::Class_Version(), "", 12,
                  typeid(::MbdPmtSimHitV1), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::MbdPmtSimHitV1::Dictionary, isa_proxy, 4,
                  sizeof(::MbdPmtSimHitV1) );
      instance.SetNew(&new_MbdPmtSimHitV1);
      instance.SetNewArray(&newArray_MbdPmtSimHitV1);
      instance.SetDelete(&delete_MbdPmtSimHitV1);
      instance.SetDeleteArray(&deleteArray_MbdPmtSimHitV1);
      instance.SetDestructor(&destruct_MbdPmtSimHitV1);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::MbdPmtSimHitV1*)
   {
      return GenerateInitInstanceLocal(static_cast<::MbdPmtSimHitV1*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::MbdPmtSimHitV1*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr MbdPmtSimHitV1::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *MbdPmtSimHitV1::Class_Name()
{
   return "MbdPmtSimHitV1";
}

//______________________________________________________________________________
const char *MbdPmtSimHitV1::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::MbdPmtSimHitV1*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int MbdPmtSimHitV1::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::MbdPmtSimHitV1*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *MbdPmtSimHitV1::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::MbdPmtSimHitV1*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *MbdPmtSimHitV1::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::MbdPmtSimHitV1*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void MbdPmtSimHitV1::Streamer(TBuffer &R__b)
{
   // Stream an object of class MbdPmtSimHitV1.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(MbdPmtSimHitV1::Class(),this);
   } else {
      R__b.WriteClassBuffer(MbdPmtSimHitV1::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_MbdPmtSimHitV1(void *p) {
      return  p ? new(p) ::MbdPmtSimHitV1 : new ::MbdPmtSimHitV1;
   }
   static void *newArray_MbdPmtSimHitV1(Long_t nElements, void *p) {
      return p ? new(p) ::MbdPmtSimHitV1[nElements] : new ::MbdPmtSimHitV1[nElements];
   }
   // Wrapper around operator delete
   static void delete_MbdPmtSimHitV1(void *p) {
      delete (static_cast<::MbdPmtSimHitV1*>(p));
   }
   static void deleteArray_MbdPmtSimHitV1(void *p) {
      delete [] (static_cast<::MbdPmtSimHitV1*>(p));
   }
   static void destruct_MbdPmtSimHitV1(void *p) {
      typedef ::MbdPmtSimHitV1 current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::MbdPmtSimHitV1

namespace {
  void TriggerDictionaryInitialization_MbdPmtSimHitV1_Dict_Impl() {
    static const char* headers[] = {
"0",
nullptr
    };
    static const char* includePaths[] = {
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "MbdPmtSimHitV1_Dict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
class MbdPmtSimHitV1;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "MbdPmtSimHitV1_Dict dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#ifndef MBD_MBDPMTSIMHITV1_H
#define MBD_MBDPMTSIMHITV1_H

#include "MbdPmtHit.h"

#include <cmath>
#include <iostream>
#include <limits>

class MbdPmtSimHitV1 : public MbdPmtHit
{
 public:
  MbdPmtSimHitV1() = default;
  ~MbdPmtSimHitV1() override = default;

  //! Just does a clear
  void Reset() override;

  //! Clear is used by TClonesArray to reset the tower to initial state without calling destructor/constructor
  void Clear(Option_t* = "") override;

  //! PMT number
  Short_t get_pmt() const override { return bpmt; }

  //! Effective Nch in PMT
  Float_t get_q() const override { return bq; }

  //! Time from time channel
  Float_t get_tt() const override { return btt; }
  Float_t get_time() const override { return btt; }

  //! Time from charge channel
  Float_t get_tq() const override { return btq; }

  //! n.p.e. from sim
  Float_t get_npe() const override { return bnpe; }

  void set_pmt(const Short_t ipmt, const Float_t q, const Float_t tt, const Float_t tq) override
  {
    bpmt = ipmt;
    bq = q;
    btt = tt;
    btq = tq;
  }

  void set_simpmt(const Float_t npe) override
  {
    bnpe = npe;
  }

  void set_npe(const Float_t npe) override
  {
    bnpe = npe;
  }

  //! Prints out exact identity of object
  void identify(std::ostream& out = std::cout) const override;

  //! isValid returns non zero if object contains valid data
  virtual int isValid() const override
  {
    if (std::isnan(get_time())) return 0;
    return 1;
  }

 private:
  Short_t bpmt{-1};
  Float_t bq{std::numeric_limits<float>::quiet_NaN()};
  Float_t btt{std::numeric_limits<float>::quiet_NaN()};
  Float_t btq{std::numeric_limits<float>::quiet_NaN()};
  Float_t bnpe{std::numeric_limits<float>::quiet_NaN()};

  ClassDefOverride(MbdPmtSimHitV1, 1)
};

#endif

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"MbdPmtSimHitV1", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("MbdPmtSimHitV1_Dict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_MbdPmtSimHitV1_Dict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_MbdPmtSimHitV1_Dict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_MbdPmtSimHitV1_Dict() {
  TriggerDictionaryInitialization_MbdPmtSimHitV1_Dict_Impl();
}
