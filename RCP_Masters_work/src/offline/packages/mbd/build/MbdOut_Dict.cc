// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME MbdOut_Dict
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
#include "../MbdOut.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static void *new_MbdOut(void *p = nullptr);
   static void *newArray_MbdOut(Long_t size, void *p);
   static void delete_MbdOut(void *p);
   static void deleteArray_MbdOut(void *p);
   static void destruct_MbdOut(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::MbdOut*)
   {
      ::MbdOut *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::MbdOut >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("MbdOut", ::MbdOut::Class_Version(), "", 13,
                  typeid(::MbdOut), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::MbdOut::Dictionary, isa_proxy, 4,
                  sizeof(::MbdOut) );
      instance.SetNew(&new_MbdOut);
      instance.SetNewArray(&newArray_MbdOut);
      instance.SetDelete(&delete_MbdOut);
      instance.SetDeleteArray(&deleteArray_MbdOut);
      instance.SetDestructor(&destruct_MbdOut);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::MbdOut*)
   {
      return GenerateInitInstanceLocal(static_cast<::MbdOut*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::MbdOut*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr MbdOut::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *MbdOut::Class_Name()
{
   return "MbdOut";
}

//______________________________________________________________________________
const char *MbdOut::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::MbdOut*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int MbdOut::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::MbdOut*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *MbdOut::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::MbdOut*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *MbdOut::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::MbdOut*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void MbdOut::Streamer(TBuffer &R__b)
{
   // Stream an object of class MbdOut.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(MbdOut::Class(),this);
   } else {
      R__b.WriteClassBuffer(MbdOut::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_MbdOut(void *p) {
      return  p ? new(p) ::MbdOut : new ::MbdOut;
   }
   static void *newArray_MbdOut(Long_t nElements, void *p) {
      return p ? new(p) ::MbdOut[nElements] : new ::MbdOut[nElements];
   }
   // Wrapper around operator delete
   static void delete_MbdOut(void *p) {
      delete (static_cast<::MbdOut*>(p));
   }
   static void deleteArray_MbdOut(void *p) {
      delete [] (static_cast<::MbdOut*>(p));
   }
   static void destruct_MbdOut(void *p) {
      typedef ::MbdOut current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::MbdOut

namespace {
  void TriggerDictionaryInitialization_MbdOut_Dict_Impl() {
    static const char* headers[] = {
"0",
nullptr
    };
    static const char* includePaths[] = {
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "MbdOut_Dict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
class MbdOut;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "MbdOut_Dict dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
// Tell emacs that this is a C++ source
//  -*- C++ -*-.
#ifndef MBD_MBDOUT_H
#define MBD_MBDOUT_H

#include <phool/PHObject.h>

#include <string>

///
class MbdOut : public PHObject
{
 public:
  ///
  ~MbdOut() override = default;

  /** identify Function from PHObject
      @param os Output Stream
   */
  void identify(std::ostream& os = std::cout) const override;

  /// Clear Event
  virtual void Reset() override;

  /// isValid returns non zero if object contains vailid data
  int isValid() const override;

  ///  copying for embedding
  virtual void CopyTo(MbdOut *) {return;}

  /// get ZVertex determined by Mbd
  virtual Float_t get_zvtx() const;

  /// get Error on ZVertex determined by Mbd
  virtual Float_t get_zvtxerr() const;

  /// get T0 determined by Mbd
  virtual Float_t get_t0() const;

  /// get Error on T0 determined by Mbd
  virtual Float_t get_t0err() const;

  /** set T0, Error on T0, ZVertex and Error on ZVertex
      @param t0 Mbd T0
      @param t0err Mbd Error on T0
      @param vtx Mbd ZVertex
      @param vtxerr Mbd Error on ZVertex
   */
  virtual void set_t0zvtx(const Float_t t0, const Float_t t0err, const Float_t vtx, const Float_t vtxerr)
  {
    set_t0(t0, t0err);
    set_zvtx(vtx, vtxerr);
  }

  /** set T0 for Mbd
      @param t0 Mbd T0
      @param t0err Mbd T0 error
   */
  virtual void set_t0(const Float_t t0, const Float_t t0err = 0);

  //! set vertex
  virtual void set_zvtx(const Float_t vtx, const Float_t vtxerr);

  /** set Vtx Error for Mbd
      @param vtxerr Mbd Vtx Error
   */
  virtual void set_zvtxerr(const Float_t vtxerr);

  /** Add Mbd North/South data containing Number of pmt's, Energy and Timing
      @param npmt Number of PMT's fired
      @param ncharge Number of Charged Particles into North/South
      @param timing Timing of North/South
      @param iarm  Arm, use Mbd::North and Mbd::South
   */
  virtual void set_arm(const int iarm, const Short_t npmt, const Float_t ncharge, const Float_t timing);

  /** Add Mbd data containing evt, clk, and femclk
      @param ievt   Event number
      @param iclk    XMIT clock
      @param ifemclk FEM clock
   */
  virtual void set_clocks(const Int_t ievt, const UShort_t iclk, const UShort_t ifemclk);

  /** get Number of PMT's fired in North/South Mbd
      @param iarm  Arm, use Mbd::North and Mbd::South
   */
  virtual Short_t get_npmt(const int iarm) const;

  /** get Number of Charged Particles into North/South Mbd
      @param iarm  Arm, use Mbd::North and Mbd::South
   */
  virtual Float_t get_q(const int iarm) const;

  /** get Timing of North/South Mbd
      @param iarm  Arm, use Mbd::North and Mbd::South
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

  virtual void FillFromClass(const MbdOut& old);

 private:
  static void virtual_warning(const std::string& funcsname) ;

  ClassDefOverride(MbdOut, 1)
};

#endif

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"MbdOut", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("MbdOut_Dict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_MbdOut_Dict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_MbdOut_Dict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_MbdOut_Dict() {
  TriggerDictionaryInitialization_MbdOut_Dict_Impl();
}
