// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME MbdPmtContainerV1_Dict
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
#include "../MbdPmtContainerV1.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static void *new_MbdPmtContainerV1(void *p = nullptr);
   static void *newArray_MbdPmtContainerV1(Long_t size, void *p);
   static void delete_MbdPmtContainerV1(void *p);
   static void deleteArray_MbdPmtContainerV1(void *p);
   static void destruct_MbdPmtContainerV1(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::MbdPmtContainerV1*)
   {
      ::MbdPmtContainerV1 *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::MbdPmtContainerV1 >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("MbdPmtContainerV1", ::MbdPmtContainerV1::Class_Version(), "", 13,
                  typeid(::MbdPmtContainerV1), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::MbdPmtContainerV1::Dictionary, isa_proxy, 4,
                  sizeof(::MbdPmtContainerV1) );
      instance.SetNew(&new_MbdPmtContainerV1);
      instance.SetNewArray(&newArray_MbdPmtContainerV1);
      instance.SetDelete(&delete_MbdPmtContainerV1);
      instance.SetDeleteArray(&deleteArray_MbdPmtContainerV1);
      instance.SetDestructor(&destruct_MbdPmtContainerV1);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::MbdPmtContainerV1*)
   {
      return GenerateInitInstanceLocal(static_cast<::MbdPmtContainerV1*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::MbdPmtContainerV1*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr MbdPmtContainerV1::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *MbdPmtContainerV1::Class_Name()
{
   return "MbdPmtContainerV1";
}

//______________________________________________________________________________
const char *MbdPmtContainerV1::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::MbdPmtContainerV1*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int MbdPmtContainerV1::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::MbdPmtContainerV1*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *MbdPmtContainerV1::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::MbdPmtContainerV1*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *MbdPmtContainerV1::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::MbdPmtContainerV1*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void MbdPmtContainerV1::Streamer(TBuffer &R__b)
{
   // Stream an object of class MbdPmtContainerV1.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(MbdPmtContainerV1::Class(),this);
   } else {
      R__b.WriteClassBuffer(MbdPmtContainerV1::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_MbdPmtContainerV1(void *p) {
      return  p ? new(p) ::MbdPmtContainerV1 : new ::MbdPmtContainerV1;
   }
   static void *newArray_MbdPmtContainerV1(Long_t nElements, void *p) {
      return p ? new(p) ::MbdPmtContainerV1[nElements] : new ::MbdPmtContainerV1[nElements];
   }
   // Wrapper around operator delete
   static void delete_MbdPmtContainerV1(void *p) {
      delete (static_cast<::MbdPmtContainerV1*>(p));
   }
   static void deleteArray_MbdPmtContainerV1(void *p) {
      delete [] (static_cast<::MbdPmtContainerV1*>(p));
   }
   static void destruct_MbdPmtContainerV1(void *p) {
      typedef ::MbdPmtContainerV1 current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::MbdPmtContainerV1

namespace {
  void TriggerDictionaryInitialization_MbdPmtContainerV1_Dict_Impl() {
    static const char* headers[] = {
"0",
nullptr
    };
    static const char* includePaths[] = {
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "MbdPmtContainerV1_Dict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
class MbdPmtContainerV1;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "MbdPmtContainerV1_Dict dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#ifndef MBD_MBDPMTCONTAINERV1_H__
#define MBD_MBDPMTCONTAINERV1_H__

#include "MbdPmtContainer.h"

#include <iostream>

#include <TClonesArray.h>

///
class MbdPmtContainerV1 : public MbdPmtContainer
{
public:
  /// ctor
  MbdPmtContainerV1();

  /// dtor
  virtual ~MbdPmtContainerV1();

  /// Clear Event
  void Reset() override;

  /** identify Function from PHObject
      @param os Output Stream
   */
  void identify(std::ostream &out = std::cout) const override;

  /// isValid returns non zero if object contains vailid data
  int isValid() const override;

  /** set number of pmts for Mbd
      @param ival Number of Mbd Pmt's
   */
  void set_npmt(const Short_t ival) override
  {
    npmt = ival;
    return;
  }

 /// get Number of Mbd Pmt's
    Short_t get_npmt() const override { return MbdPmtHits->GetEntries(); }

  /** get MbdHitPmt of Pmt iPmt in TClonesArray
      @param iPmt no of Pmt in TClonesArray
   */
  MbdPmtHit *get_pmt(const int iPmt) const override { return (MbdPmtHit*)MbdPmtHits->ConstructedAt(iPmt); }

private:
  TClonesArray *GetMbdPmtHits() const { return MbdPmtHits; }

  Short_t npmt = 0;
  TClonesArray *MbdPmtHits = nullptr;

  ClassDefOverride(MbdPmtContainerV1, 1)
};

#endif

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"MbdPmtContainerV1", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("MbdPmtContainerV1_Dict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_MbdPmtContainerV1_Dict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_MbdPmtContainerV1_Dict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_MbdPmtContainerV1_Dict() {
  TriggerDictionaryInitialization_MbdPmtContainerV1_Dict_Impl();
}
