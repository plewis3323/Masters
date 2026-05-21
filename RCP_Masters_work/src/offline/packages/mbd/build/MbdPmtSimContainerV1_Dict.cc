// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME MbdPmtSimContainerV1_Dict
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
#include "../MbdPmtSimContainerV1.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static void *new_MbdPmtSimContainerV1(void *p = nullptr);
   static void *newArray_MbdPmtSimContainerV1(Long_t size, void *p);
   static void delete_MbdPmtSimContainerV1(void *p);
   static void deleteArray_MbdPmtSimContainerV1(void *p);
   static void destruct_MbdPmtSimContainerV1(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::MbdPmtSimContainerV1*)
   {
      ::MbdPmtSimContainerV1 *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::MbdPmtSimContainerV1 >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("MbdPmtSimContainerV1", ::MbdPmtSimContainerV1::Class_Version(), "", 13,
                  typeid(::MbdPmtSimContainerV1), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::MbdPmtSimContainerV1::Dictionary, isa_proxy, 4,
                  sizeof(::MbdPmtSimContainerV1) );
      instance.SetNew(&new_MbdPmtSimContainerV1);
      instance.SetNewArray(&newArray_MbdPmtSimContainerV1);
      instance.SetDelete(&delete_MbdPmtSimContainerV1);
      instance.SetDeleteArray(&deleteArray_MbdPmtSimContainerV1);
      instance.SetDestructor(&destruct_MbdPmtSimContainerV1);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::MbdPmtSimContainerV1*)
   {
      return GenerateInitInstanceLocal(static_cast<::MbdPmtSimContainerV1*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::MbdPmtSimContainerV1*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr MbdPmtSimContainerV1::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *MbdPmtSimContainerV1::Class_Name()
{
   return "MbdPmtSimContainerV1";
}

//______________________________________________________________________________
const char *MbdPmtSimContainerV1::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::MbdPmtSimContainerV1*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int MbdPmtSimContainerV1::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::MbdPmtSimContainerV1*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *MbdPmtSimContainerV1::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::MbdPmtSimContainerV1*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *MbdPmtSimContainerV1::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::MbdPmtSimContainerV1*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void MbdPmtSimContainerV1::Streamer(TBuffer &R__b)
{
   // Stream an object of class MbdPmtSimContainerV1.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(MbdPmtSimContainerV1::Class(),this);
   } else {
      R__b.WriteClassBuffer(MbdPmtSimContainerV1::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_MbdPmtSimContainerV1(void *p) {
      return  p ? new(p) ::MbdPmtSimContainerV1 : new ::MbdPmtSimContainerV1;
   }
   static void *newArray_MbdPmtSimContainerV1(Long_t nElements, void *p) {
      return p ? new(p) ::MbdPmtSimContainerV1[nElements] : new ::MbdPmtSimContainerV1[nElements];
   }
   // Wrapper around operator delete
   static void delete_MbdPmtSimContainerV1(void *p) {
      delete (static_cast<::MbdPmtSimContainerV1*>(p));
   }
   static void deleteArray_MbdPmtSimContainerV1(void *p) {
      delete [] (static_cast<::MbdPmtSimContainerV1*>(p));
   }
   static void destruct_MbdPmtSimContainerV1(void *p) {
      typedef ::MbdPmtSimContainerV1 current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::MbdPmtSimContainerV1

namespace {
  void TriggerDictionaryInitialization_MbdPmtSimContainerV1_Dict_Impl() {
    static const char* headers[] = {
"0",
nullptr
    };
    static const char* includePaths[] = {
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "MbdPmtSimContainerV1_Dict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
class MbdPmtSimContainerV1;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "MbdPmtSimContainerV1_Dict dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#ifndef MBD_MBDPMTSIMCONTAINERV1_H__
#define MBD_MBDPMTSIMCONTAINERV1_H__

#include "MbdPmtContainer.h"

#include <iostream>

#include <TClonesArray.h>

///
class MbdPmtSimContainerV1 : public MbdPmtContainer
{
public:
  /// ctor
  MbdPmtSimContainerV1();

  /// dtor
  virtual ~MbdPmtSimContainerV1();

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

  ClassDefOverride(MbdPmtSimContainerV1, 1)
};

#endif

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"MbdPmtSimContainerV1", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("MbdPmtSimContainerV1_Dict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_MbdPmtSimContainerV1_Dict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_MbdPmtSimContainerV1_Dict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_MbdPmtSimContainerV1_Dict() {
  TriggerDictionaryInitialization_MbdPmtSimContainerV1_Dict_Impl();
}
