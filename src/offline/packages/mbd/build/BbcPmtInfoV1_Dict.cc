// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME BbcPmtInfoV1_Dict
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
#include "../BbcPmtInfoV1.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static void *new_BbcPmtInfoV1(void *p = nullptr);
   static void *newArray_BbcPmtInfoV1(Long_t size, void *p);
   static void delete_BbcPmtInfoV1(void *p);
   static void deleteArray_BbcPmtInfoV1(void *p);
   static void destruct_BbcPmtInfoV1(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BbcPmtInfoV1*)
   {
      ::BbcPmtInfoV1 *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BbcPmtInfoV1 >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BbcPmtInfoV1", ::BbcPmtInfoV1::Class_Version(), "", 12,
                  typeid(::BbcPmtInfoV1), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BbcPmtInfoV1::Dictionary, isa_proxy, 4,
                  sizeof(::BbcPmtInfoV1) );
      instance.SetNew(&new_BbcPmtInfoV1);
      instance.SetNewArray(&newArray_BbcPmtInfoV1);
      instance.SetDelete(&delete_BbcPmtInfoV1);
      instance.SetDeleteArray(&deleteArray_BbcPmtInfoV1);
      instance.SetDestructor(&destruct_BbcPmtInfoV1);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BbcPmtInfoV1*)
   {
      return GenerateInitInstanceLocal(static_cast<::BbcPmtInfoV1*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::BbcPmtInfoV1*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr BbcPmtInfoV1::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BbcPmtInfoV1::Class_Name()
{
   return "BbcPmtInfoV1";
}

//______________________________________________________________________________
const char *BbcPmtInfoV1::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BbcPmtInfoV1*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BbcPmtInfoV1::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BbcPmtInfoV1*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BbcPmtInfoV1::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BbcPmtInfoV1*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BbcPmtInfoV1::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BbcPmtInfoV1*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void BbcPmtInfoV1::Streamer(TBuffer &R__b)
{
   // Stream an object of class BbcPmtInfoV1.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BbcPmtInfoV1::Class(),this);
   } else {
      R__b.WriteClassBuffer(BbcPmtInfoV1::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BbcPmtInfoV1(void *p) {
      return  p ? new(p) ::BbcPmtInfoV1 : new ::BbcPmtInfoV1;
   }
   static void *newArray_BbcPmtInfoV1(Long_t nElements, void *p) {
      return p ? new(p) ::BbcPmtInfoV1[nElements] : new ::BbcPmtInfoV1[nElements];
   }
   // Wrapper around operator delete
   static void delete_BbcPmtInfoV1(void *p) {
      delete (static_cast<::BbcPmtInfoV1*>(p));
   }
   static void deleteArray_BbcPmtInfoV1(void *p) {
      delete [] (static_cast<::BbcPmtInfoV1*>(p));
   }
   static void destruct_BbcPmtInfoV1(void *p) {
      typedef ::BbcPmtInfoV1 current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::BbcPmtInfoV1

namespace {
  void TriggerDictionaryInitialization_BbcPmtInfoV1_Dict_Impl() {
    static const char* headers[] = {
"0",
nullptr
    };
    static const char* includePaths[] = {
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "BbcPmtInfoV1_Dict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
class BbcPmtInfoV1;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "BbcPmtInfoV1_Dict dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#ifndef MBD_BBCPMTINFOV1_H
#define MBD_BBCPMTINFOV1_H

#include <calobase/TowerInfo.h>

#include <phool/PHObject.h>

#include <limits>

class BbcPmtInfoV1 : public TowerInfo
{
 public:
  BbcPmtInfoV1() = default;
  // BbcPmtInfoV1(TowerInfo& tower);
  ~BbcPmtInfoV1() override = default;
  void Reset() override;

  //! Clear is used by TClonesArray to reset the tower to initial state without calling destructor/constructor
  void Clear(Option_t* = "") override;

  //! Prints out exact identity of object
  void identify(std::ostream& out = std::cout) const override;

  //! isValid returns non zero if object contains vailid data
  virtual int isValid() const override
  {
    if (bq == std::numeric_limits<Float_t>::quiet_NaN()) return 0;
    return 1;
  }

  // short get_time() override { return get_t(); } // deprecated for MBD since MBD returns time in ns
  Float_t get_energy() override { return get_q(); }

  // void set_time(short t) override;  // too simple to be used for MBD
  void set_energy(float energy) override { set_q(energy); }

  Short_t get_pmt() { return bpmt; }
  Float_t get_q() { return bq; }
  Float_t get_t() { return btq; }
  Float_t get_tt() { return btt; }
  Float_t get_tq() { return btq; }

  void set_pmt(const Short_t pmt) { bpmt = pmt; }
  void set_q(const Float_t q) { bq = q; }
  void set_tt(const Float_t t) { btt = t; }
  void set_tq(const Float_t t) { btq = t; }
  void set_pmt(const Short_t pmt, const Float_t q, const Float_t tt, const Float_t tq)
  {
    bpmt = pmt;
    bq = q;
    btt = tt;
    btq = tq;
  }

 private:
  Short_t bpmt{-1};  ///
  Float_t bq{std::numeric_limits<Float_t>::quiet_NaN()};
  Float_t btt{std::numeric_limits<Float_t>::quiet_NaN()};
  Float_t btq{std::numeric_limits<Float_t>::quiet_NaN()};

  ClassDefOverride(BbcPmtInfoV1, 1);
};

#endif  // __BBCPMTINFOV1_H__

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"BbcPmtInfoV1", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("BbcPmtInfoV1_Dict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_BbcPmtInfoV1_Dict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_BbcPmtInfoV1_Dict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_BbcPmtInfoV1_Dict() {
  TriggerDictionaryInitialization_BbcPmtInfoV1_Dict_Impl();
}
