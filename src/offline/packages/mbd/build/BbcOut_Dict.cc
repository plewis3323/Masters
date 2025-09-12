// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME BbcOut_Dict
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
#include "../BbcOut.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static void *new_BbcOut(void *p = nullptr);
   static void *newArray_BbcOut(Long_t size, void *p);
   static void delete_BbcOut(void *p);
   static void deleteArray_BbcOut(void *p);
   static void destruct_BbcOut(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BbcOut*)
   {
      ::BbcOut *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BbcOut >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BbcOut", ::BbcOut::Class_Version(), "", 13,
                  typeid(::BbcOut), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BbcOut::Dictionary, isa_proxy, 4,
                  sizeof(::BbcOut) );
      instance.SetNew(&new_BbcOut);
      instance.SetNewArray(&newArray_BbcOut);
      instance.SetDelete(&delete_BbcOut);
      instance.SetDeleteArray(&deleteArray_BbcOut);
      instance.SetDestructor(&destruct_BbcOut);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BbcOut*)
   {
      return GenerateInitInstanceLocal(static_cast<::BbcOut*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::BbcOut*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr BbcOut::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BbcOut::Class_Name()
{
   return "BbcOut";
}

//______________________________________________________________________________
const char *BbcOut::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BbcOut*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BbcOut::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BbcOut*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BbcOut::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BbcOut*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BbcOut::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BbcOut*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void BbcOut::Streamer(TBuffer &R__b)
{
   // Stream an object of class BbcOut.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BbcOut::Class(),this);
   } else {
      R__b.WriteClassBuffer(BbcOut::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BbcOut(void *p) {
      return  p ? new(p) ::BbcOut : new ::BbcOut;
   }
   static void *newArray_BbcOut(Long_t nElements, void *p) {
      return p ? new(p) ::BbcOut[nElements] : new ::BbcOut[nElements];
   }
   // Wrapper around operator delete
   static void delete_BbcOut(void *p) {
      delete (static_cast<::BbcOut*>(p));
   }
   static void deleteArray_BbcOut(void *p) {
      delete [] (static_cast<::BbcOut*>(p));
   }
   static void destruct_BbcOut(void *p) {
      typedef ::BbcOut current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::BbcOut

namespace {
  void TriggerDictionaryInitialization_BbcOut_Dict_Impl() {
    static const char* headers[] = {
"0",
nullptr
    };
    static const char* includePaths[] = {
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "BbcOut_Dict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
class BbcOut;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "BbcOut_Dict dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
// Tell emacs that this is a C++ source
//  -*- C++ -*-.
#ifndef BBC_BBCOUT_H
#define BBC_BBCOUT_H

#include <phool/PHObject.h>

#include <string>

///
class BbcOut : public PHObject
{
 public:
  ///
  ~BbcOut() override = default;

  /** identify Function from PHObject
      @param os Output Stream
   */
  void identify(std::ostream& os = std::cout) const override;

  /// Clear Event
  virtual void Reset() override;

  /// isValid returns non zero if object contains vailid data
  int isValid() const override;

  /// get ZVertex determined by Bbc
  virtual Float_t get_zvtx() const;

  /// get Error on ZVertex determined by Bbc
  virtual Float_t get_zvtxerr() const;

  /// get T0 determined by Bbc
  virtual Float_t get_t0() const;

  /// get Error on T0 determined by Bbc
  virtual Float_t get_t0err() const;

  /** set T0, Error on T0, ZVertex and Error on ZVertex
      @param t0 Bbc T0
      @param t0err Bbc Error on T0
      @param vtx Bbc ZVertex
      @param vtxerr Bbc Error on ZVertex
   */
  virtual void set_t0zvtx(const Float_t t0, const Float_t t0err, const Float_t vtx, const Float_t vtxerr)
  {
    set_t0(t0, t0err);
    set_zvtx(vtx, vtxerr);
  }

  /** set T0 for Bbc
      @param t0 Bbc T0
      @param t0err Bbc T0 error
   */
  virtual void set_t0(const Float_t t0, const Float_t t0err = 0);

  //! set vertex
  virtual void set_zvtx(const Float_t vtx, const Float_t vtxerr);

  /** set Vtx Error for Bbc
      @param vtxerr Bbc Vtx Error
   */
  virtual void set_zvtxerr(const Float_t vtxerr);

  /** Add Bbc North/South data containing Number of pmt's, Energy and Timing
      @param npmt Number of PMT's fired
      @param ncharge Number of Charged Particles into North/South
      @param timing Timing of North/South
      @param iarm  Arm, use Bbc::North and Bbc::South
   */
  virtual void set_arm(const int iarm, const Short_t npmt, const Float_t ncharge, const Float_t timing);

  /** Add Bbc data containing evt, clk, and femclk
      @param ievt   Event number
      @param iclk    XMIT clock
      @param ifemclk FEM clock
   */
  virtual void set_clocks(const Int_t ievt, const UShort_t iclk, const UShort_t ifemclk);

  /** get Number of PMT's fired in North/South Bbc
      @param iarm  Arm, use Bbc::North and Bbc::South
   */
  virtual Short_t get_npmt(const int iarm) const;

  /** get Number of Charged Particles into North/South Bbc
      @param iarm  Arm, use Bbc::North and Bbc::South
   */
  virtual Float_t get_q(const int iarm) const;

  /** get Timing of North/South Bbc
      @param iarm  Arm, use Bbc::North and Bbc::South
   */
  virtual Float_t get_time(const int iarm) const;

  /** get Event Number
   */
  virtual Int_t get_evt() const;

  /** get XMIT Clock Counter
   */
  virtual UShort_t get_clock() const;

  /** get FEM Clock Counter
   */
  virtual UShort_t get_femclock() const;

  virtual void FillFromClass(const BbcOut& old);

 private:
  static void virtual_warning(const std::string& funcsname);

  ClassDefOverride(BbcOut, 1)
};

#endif

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"BbcOut", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("BbcOut_Dict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_BbcOut_Dict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_BbcOut_Dict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_BbcOut_Dict() {
  TriggerDictionaryInitialization_BbcOut_Dict_Impl();
}
