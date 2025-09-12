// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME TowerInfoContainerSimv1_Dict
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
#include "../TowerInfoContainerSimv1.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static void *new_TowerInfoContainerSimv1(void *p = nullptr);
   static void *newArray_TowerInfoContainerSimv1(Long_t size, void *p);
   static void delete_TowerInfoContainerSimv1(void *p);
   static void deleteArray_TowerInfoContainerSimv1(void *p);
   static void destruct_TowerInfoContainerSimv1(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TowerInfoContainerSimv1*)
   {
      ::TowerInfoContainerSimv1 *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TowerInfoContainerSimv1 >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TowerInfoContainerSimv1", ::TowerInfoContainerSimv1::Class_Version(), "", 13,
                  typeid(::TowerInfoContainerSimv1), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TowerInfoContainerSimv1::Dictionary, isa_proxy, 4,
                  sizeof(::TowerInfoContainerSimv1) );
      instance.SetNew(&new_TowerInfoContainerSimv1);
      instance.SetNewArray(&newArray_TowerInfoContainerSimv1);
      instance.SetDelete(&delete_TowerInfoContainerSimv1);
      instance.SetDeleteArray(&deleteArray_TowerInfoContainerSimv1);
      instance.SetDestructor(&destruct_TowerInfoContainerSimv1);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TowerInfoContainerSimv1*)
   {
      return GenerateInitInstanceLocal(static_cast<::TowerInfoContainerSimv1*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TowerInfoContainerSimv1*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr TowerInfoContainerSimv1::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TowerInfoContainerSimv1::Class_Name()
{
   return "TowerInfoContainerSimv1";
}

//______________________________________________________________________________
const char *TowerInfoContainerSimv1::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TowerInfoContainerSimv1*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TowerInfoContainerSimv1::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TowerInfoContainerSimv1*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TowerInfoContainerSimv1::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TowerInfoContainerSimv1*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TowerInfoContainerSimv1::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TowerInfoContainerSimv1*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void TowerInfoContainerSimv1::Streamer(TBuffer &R__b)
{
   // Stream an object of class TowerInfoContainerSimv1.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TowerInfoContainerSimv1::Class(),this);
   } else {
      R__b.WriteClassBuffer(TowerInfoContainerSimv1::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TowerInfoContainerSimv1(void *p) {
      return  p ? new(p) ::TowerInfoContainerSimv1 : new ::TowerInfoContainerSimv1;
   }
   static void *newArray_TowerInfoContainerSimv1(Long_t nElements, void *p) {
      return p ? new(p) ::TowerInfoContainerSimv1[nElements] : new ::TowerInfoContainerSimv1[nElements];
   }
   // Wrapper around operator delete
   static void delete_TowerInfoContainerSimv1(void *p) {
      delete (static_cast<::TowerInfoContainerSimv1*>(p));
   }
   static void deleteArray_TowerInfoContainerSimv1(void *p) {
      delete [] (static_cast<::TowerInfoContainerSimv1*>(p));
   }
   static void destruct_TowerInfoContainerSimv1(void *p) {
      typedef ::TowerInfoContainerSimv1 current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TowerInfoContainerSimv1

namespace {
  void TriggerDictionaryInitialization_TowerInfoContainerSimv1_Dict_Impl() {
    static const char* headers[] = {
"0",
nullptr
    };
    static const char* includePaths[] = {
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "TowerInfoContainerSimv1_Dict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
class TowerInfoContainerSimv1;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "TowerInfoContainerSimv1_Dict dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#ifndef TOWERINFOCONTAINERSIMV1_H
#define TOWERINFOCONTAINERSIMV1_H

#include "TowerInfoContainer.h"
#include "TowerInfoSimv1.h" 

#include <TClonesArray.h>

class PHObject;

class TowerInfoContainerSimv1 : public TowerInfoContainer
{
 public:
  TowerInfoContainerSimv1(DETECTOR detec);

  // default constructor for ROOT IO
  TowerInfoContainerSimv1() {}
  PHObject *CloneMe() const override { return new TowerInfoContainerSimv1(*this); }
  TowerInfoContainerSimv1(const TowerInfoContainerSimv1 &);

  ~TowerInfoContainerSimv1() override;

  void identify(std::ostream &os = std::cout) const override;

  void Reset() override;
  TowerInfoSimv1 *get_tower_at_channel(int pos) override;
  TowerInfoSimv1 *get_tower_at_key(int pos) override;

  unsigned int encode_key(unsigned int towerIndex) override;
  unsigned int decode_key(unsigned int tower_key) override;

  size_t size() const override { return _clones->GetEntries(); }
  DETECTOR get_detectorid() const override { return _detector; }

 protected:
  TClonesArray *_clones = nullptr;
  DETECTOR _detector = DETECTOR_INVALID;

 private:
  ClassDefOverride(TowerInfoContainerSimv1, 1);
};

#endif

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"TowerInfoContainerSimv1", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("TowerInfoContainerSimv1_Dict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_TowerInfoContainerSimv1_Dict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_TowerInfoContainerSimv1_Dict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_TowerInfoContainerSimv1_Dict() {
  TriggerDictionaryInitialization_TowerInfoContainerSimv1_Dict_Impl();
}
