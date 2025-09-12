// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME MbdOutV2_Dict
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
#include "../MbdOutV2.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static void *new_MbdOutV2(void *p = nullptr);
   static void *newArray_MbdOutV2(Long_t size, void *p);
   static void delete_MbdOutV2(void *p);
   static void deleteArray_MbdOutV2(void *p);
   static void destruct_MbdOutV2(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::MbdOutV2*)
   {
      ::MbdOutV2 *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::MbdOutV2 >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("MbdOutV2", ::MbdOutV2::Class_Version(), "", 14,
                  typeid(::MbdOutV2), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::MbdOutV2::Dictionary, isa_proxy, 4,
                  sizeof(::MbdOutV2) );
      instance.SetNew(&new_MbdOutV2);
      instance.SetNewArray(&newArray_MbdOutV2);
      instance.SetDelete(&delete_MbdOutV2);
      instance.SetDeleteArray(&deleteArray_MbdOutV2);
      instance.SetDestructor(&destruct_MbdOutV2);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::MbdOutV2*)
   {
      return GenerateInitInstanceLocal(static_cast<::MbdOutV2*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::MbdOutV2*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr MbdOutV2::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *MbdOutV2::Class_Name()
{
   return "MbdOutV2";
}

//______________________________________________________________________________
const char *MbdOutV2::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::MbdOutV2*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int MbdOutV2::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::MbdOutV2*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *MbdOutV2::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::MbdOutV2*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *MbdOutV2::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::MbdOutV2*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void MbdOutV2::Streamer(TBuffer &R__b)
{
   // Stream an object of class MbdOutV2.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(MbdOutV2::Class(),this);
   } else {
      R__b.WriteClassBuffer(MbdOutV2::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_MbdOutV2(void *p) {
      return  p ? new(p) ::MbdOutV2 : new ::MbdOutV2;
   }
   static void *newArray_MbdOutV2(Long_t nElements, void *p) {
      return p ? new(p) ::MbdOutV2[nElements] : new ::MbdOutV2[nElements];
   }
   // Wrapper around operator delete
   static void delete_MbdOutV2(void *p) {
      delete (static_cast<::MbdOutV2*>(p));
   }
   static void deleteArray_MbdOutV2(void *p) {
      delete [] (static_cast<::MbdOutV2*>(p));
   }
   static void destruct_MbdOutV2(void *p) {
      typedef ::MbdOutV2 current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::MbdOutV2

namespace {
  void TriggerDictionaryInitialization_MbdOutV2_Dict_Impl() {
    static const char* headers[] = {
"0",
nullptr
    };
    static const char* includePaths[] = {
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "MbdOutV2_Dict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
class MbdOutV2;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "MbdOutV2_Dict dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#ifndef MBD_MBDOUTV2_H
#define MBD_MBDOUTV2_H

#include "MbdOut.h"

#include <iostream>
#include <limits>

class TClonesArray;

///
class MbdOutV2 : public MbdOut
{
 public:
  ///
  MbdOutV2() = default;
  ///
  ~MbdOutV2() override = default;

  /// Clear Event from memory
  void Reset() override;

  /** identify Function from PHObject
      @param os Output Stream
   */
  void identify(std::ostream &out = std::cout) const override;

  /// isValid returns non zero if object contains vailid data
  int isValid() const override;

  ///  functions to copy nodes for embedding
  PHObject* CloneMe() const override { return new MbdOutV2(*this); }
  void CopyTo(MbdOut *mbd) override;

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

  /** Add Bbc data containing evt, clk, and femclk
      @param ievt   Event number
      @param iclk    XMIT clock
      @param ifemclk FEM clock
   */
  virtual void set_clocks(const Int_t ievt, const UShort_t iclk, const UShort_t ifemclk) override;

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

  /** get Event Number
   */
  virtual Int_t get_evt() const override;

  /** get XMIT Clock Counter
   */
  virtual UShort_t get_clock() const override;

  /** get FEM Clock Counter
   */
  virtual UShort_t get_femclock() const override;

 private:
  Float_t bz{std::numeric_limits<Float_t>::quiet_NaN()};
  Float_t bzerr{std::numeric_limits<Float_t>::quiet_NaN()};
  Float_t bt0{std::numeric_limits<Float_t>::quiet_NaN()};
  Float_t bt0err{std::numeric_limits<Float_t>::quiet_NaN()};
  Float_t bqs{0};
  Float_t bqn{0};
  Float_t bts{std::numeric_limits<Float_t>::quiet_NaN()};
  Float_t btn{std::numeric_limits<Float_t>::quiet_NaN()};
  Short_t bns{0};
  Short_t bnn{0};
  Int_t evt{-1};
  UShort_t clk{0};
  UShort_t femclk{0};

  ClassDefOverride(MbdOutV2, 1)
};

#endif

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"MbdOutV2", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("MbdOutV2_Dict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_MbdOutV2_Dict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_MbdOutV2_Dict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_MbdOutV2_Dict() {
  TriggerDictionaryInitialization_MbdOutV2_Dict_Impl();
}
