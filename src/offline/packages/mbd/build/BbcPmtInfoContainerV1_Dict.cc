// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME BbcPmtInfoContainerV1_Dict
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
#include "../BbcPmtInfoContainerV1.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static void *new_BbcPmtInfoContainerV1(void *p = nullptr);
   static void *newArray_BbcPmtInfoContainerV1(Long_t size, void *p);
   static void delete_BbcPmtInfoContainerV1(void *p);
   static void deleteArray_BbcPmtInfoContainerV1(void *p);
   static void destruct_BbcPmtInfoContainerV1(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BbcPmtInfoContainerV1*)
   {
      ::BbcPmtInfoContainerV1 *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BbcPmtInfoContainerV1 >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BbcPmtInfoContainerV1", ::BbcPmtInfoContainerV1::Class_Version(), "", 14,
                  typeid(::BbcPmtInfoContainerV1), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BbcPmtInfoContainerV1::Dictionary, isa_proxy, 4,
                  sizeof(::BbcPmtInfoContainerV1) );
      instance.SetNew(&new_BbcPmtInfoContainerV1);
      instance.SetNewArray(&newArray_BbcPmtInfoContainerV1);
      instance.SetDelete(&delete_BbcPmtInfoContainerV1);
      instance.SetDeleteArray(&deleteArray_BbcPmtInfoContainerV1);
      instance.SetDestructor(&destruct_BbcPmtInfoContainerV1);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BbcPmtInfoContainerV1*)
   {
      return GenerateInitInstanceLocal(static_cast<::BbcPmtInfoContainerV1*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::BbcPmtInfoContainerV1*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr BbcPmtInfoContainerV1::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BbcPmtInfoContainerV1::Class_Name()
{
   return "BbcPmtInfoContainerV1";
}

//______________________________________________________________________________
const char *BbcPmtInfoContainerV1::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BbcPmtInfoContainerV1*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BbcPmtInfoContainerV1::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BbcPmtInfoContainerV1*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BbcPmtInfoContainerV1::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BbcPmtInfoContainerV1*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BbcPmtInfoContainerV1::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BbcPmtInfoContainerV1*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void BbcPmtInfoContainerV1::Streamer(TBuffer &R__b)
{
   // Stream an object of class BbcPmtInfoContainerV1.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BbcPmtInfoContainerV1::Class(),this);
   } else {
      R__b.WriteClassBuffer(BbcPmtInfoContainerV1::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BbcPmtInfoContainerV1(void *p) {
      return  p ? new(p) ::BbcPmtInfoContainerV1 : new ::BbcPmtInfoContainerV1;
   }
   static void *newArray_BbcPmtInfoContainerV1(Long_t nElements, void *p) {
      return p ? new(p) ::BbcPmtInfoContainerV1[nElements] : new ::BbcPmtInfoContainerV1[nElements];
   }
   // Wrapper around operator delete
   static void delete_BbcPmtInfoContainerV1(void *p) {
      delete (static_cast<::BbcPmtInfoContainerV1*>(p));
   }
   static void deleteArray_BbcPmtInfoContainerV1(void *p) {
      delete [] (static_cast<::BbcPmtInfoContainerV1*>(p));
   }
   static void destruct_BbcPmtInfoContainerV1(void *p) {
      typedef ::BbcPmtInfoContainerV1 current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::BbcPmtInfoContainerV1

namespace {
  void TriggerDictionaryInitialization_BbcPmtInfoContainerV1_Dict_Impl() {
    static const char* headers[] = {
"0",
nullptr
    };
    static const char* includePaths[] = {
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "BbcPmtInfoContainerV1_Dict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
class BbcPmtInfoContainerV1;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "BbcPmtInfoContainerV1_Dict dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#ifndef __BBCPMTINFOCONTAINERV1_H__
#define __BBCPMTINFOCONTAINERV1_H__

#include "BbcPmtInfoV1.h"

#include <calobase/TowerInfoContainer.h>

#include <phool/PHObject.h>

#include <TClonesArray.h>

class BbcPmtInfoContainerV1 : public TowerInfoContainer
{
public:

  BbcPmtInfoContainerV1();

  ~BbcPmtInfoContainerV1() override;

  void Reset() override;

  BbcPmtInfoV1 *get_tower_at_channel(int pos) override;

  BbcPmtInfoV1 *get_pmt(int ich) { return (BbcPmtInfoV1*) _clones->ConstructedAt(ich); }
  TClonesArray *getarray() const { return _clones; }

  size_t size() const override { return _clones->GetEntries(); }

  //void AddBbcPmtInfo(const short ipmt, const Float_t q, const Float_t tt, const Float_t tq);

protected:
  TClonesArray *_clones = nullptr;
  DETECTOR _detector = DETECTOR_INVALID;

private:
  ClassDefOverride(BbcPmtInfoContainerV1, 1);
};

#endif

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"BbcPmtInfoContainerV1", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("BbcPmtInfoContainerV1_Dict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_BbcPmtInfoContainerV1_Dict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_BbcPmtInfoContainerV1_Dict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_BbcPmtInfoContainerV1_Dict() {
  TriggerDictionaryInitialization_BbcPmtInfoContainerV1_Dict_Impl();
}
