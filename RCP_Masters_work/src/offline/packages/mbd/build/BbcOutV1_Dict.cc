// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME BbcOutV1_Dict
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
#include "../BbcOutV1.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static void *new_BbcOutV1(void *p = nullptr);
   static void *newArray_BbcOutV1(Long_t size, void *p);
   static void delete_BbcOutV1(void *p);
   static void deleteArray_BbcOutV1(void *p);
   static void destruct_BbcOutV1(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BbcOutV1*)
   {
      ::BbcOutV1 *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BbcOutV1 >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BbcOutV1", ::BbcOutV1::Class_Version(), "", 16,
                  typeid(::BbcOutV1), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BbcOutV1::Dictionary, isa_proxy, 4,
                  sizeof(::BbcOutV1) );
      instance.SetNew(&new_BbcOutV1);
      instance.SetNewArray(&newArray_BbcOutV1);
      instance.SetDelete(&delete_BbcOutV1);
      instance.SetDeleteArray(&deleteArray_BbcOutV1);
      instance.SetDestructor(&destruct_BbcOutV1);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BbcOutV1*)
   {
      return GenerateInitInstanceLocal(static_cast<::BbcOutV1*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::BbcOutV1*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr BbcOutV1::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BbcOutV1::Class_Name()
{
   return "BbcOutV1";
}

//______________________________________________________________________________
const char *BbcOutV1::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BbcOutV1*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BbcOutV1::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BbcOutV1*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BbcOutV1::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BbcOutV1*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BbcOutV1::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BbcOutV1*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void BbcOutV1::Streamer(TBuffer &R__b)
{
   // Stream an object of class BbcOutV1.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BbcOutV1::Class(),this);
   } else {
      R__b.WriteClassBuffer(BbcOutV1::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BbcOutV1(void *p) {
      return  p ? new(p) ::BbcOutV1 : new ::BbcOutV1;
   }
   static void *newArray_BbcOutV1(Long_t nElements, void *p) {
      return p ? new(p) ::BbcOutV1[nElements] : new ::BbcOutV1[nElements];
   }
   // Wrapper around operator delete
   static void delete_BbcOutV1(void *p) {
      delete (static_cast<::BbcOutV1*>(p));
   }
   static void deleteArray_BbcOutV1(void *p) {
      delete [] (static_cast<::BbcOutV1*>(p));
   }
   static void destruct_BbcOutV1(void *p) {
      typedef ::BbcOutV1 current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::BbcOutV1

namespace {
  void TriggerDictionaryInitialization_BbcOutV1_Dict_Impl() {
    static const char* headers[] = {
"0",
nullptr
    };
    static const char* includePaths[] = {
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "BbcOutV1_Dict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
class BbcOutV1;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "BbcOutV1_Dict dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
// Tell emacs that this is a C++ source
//  -*- C++ -*-.
#ifndef BBC_BBCOUTV1_H
#define BBC_BBCOUTV1_H

#include "BbcOut.h"

#include <iostream>
#include <limits>

class TClonesArray;

///
class BbcOutV1 : public BbcOut
{
 public:
  ///
  BbcOutV1() = default;
  ///
  ~BbcOutV1() override = default;

  /// Clear Event from memory
  virtual void Reset() override;

  /** identify Function from PHObject
      @param os Output Stream
   */
  void identify(std::ostream &out = std::cout) const override;

  /// isValid returns non zero if object contains vailid data
  int isValid() const override;

  /// get ZVertex determined by Bbc
  Float_t get_zvtx() const override { return bz; }

  /// get Error on ZVertex determined by Bbc
  Float_t get_zvtxerr() const override { return bzerr; }

  /// get T0 determined by Bbc
  Float_t get_t0() const override { return bt0; }

  /// get Error on T0 determined by Bbc
  Float_t get_t0err() const override { return bt0err; }

  /** set T0 for Bbc
      @param t0 Bbc T0
      @param t0err Bbc T0 error
   */
  void set_t0(const Float_t t0, const Float_t t0err = 0) override;

  //! set vertex
  void set_zvtx(const Float_t vtx, const Float_t vtxerr = 0) override;

  /** set Vtx Error for Bbc
      @param vtxerr Bbc Vtx Error
  */
  void set_zvtxerr(const Float_t vtxerr) override;

  /** Add Bbc North/South data containing Number of pmt's, Energy and Timing
      @param npmt Number of PMT's fired
      @param energy Energy in North/South
      @param timing Timing of North/South
      @param iarm  Arm, use Bbc::North and Bbc::South
   */
  void set_arm(const int iarm, const Short_t npmt, const Float_t chargesum, const Float_t timing) override;

  /** get Number of PMT's fired in North/South Bbc
      @param iarm  Arm, use Bbc::North and Bbc::South
   */
  Short_t get_npmt(const int iarm) const override;

  /** get Number of Charged Particles into North/South Bbc
      @param iarm  Arm, use Bbc::North and Bbc::South
   */
  Float_t get_q(const int iarm) const override;

  /** get Timing of North/South Bbc
      @param iarm  Arm, use Bbc::North and Bbc::South
   */
  Float_t get_time(const int iarm) const override;

 private:
  Float_t bz{std::numeric_limits<Float_t>::quiet_NaN()};
  Float_t bzerr{std::numeric_limits<Float_t>::quiet_NaN()};
  Float_t bt0{std::numeric_limits<Float_t>::quiet_NaN()};
  Float_t bt0err{std::numeric_limits<Float_t>::quiet_NaN()};
  Float_t bns{0};
  Float_t bnn{0};
  Float_t bqs{0};
  Float_t bqn{0};
  Float_t bts{std::numeric_limits<Float_t>::quiet_NaN()};
  Float_t btn{std::numeric_limits<Float_t>::quiet_NaN()};

  ClassDefOverride(BbcOutV1, 1)
};

#endif

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"BbcOutV1", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("BbcOutV1_Dict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_BbcOutV1_Dict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_BbcOutV1_Dict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_BbcOutV1_Dict() {
  TriggerDictionaryInitialization_BbcOutV1_Dict_Impl();
}
