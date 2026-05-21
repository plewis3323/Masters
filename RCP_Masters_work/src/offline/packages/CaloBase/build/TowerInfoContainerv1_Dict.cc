// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME TowerInfoContainerv1_Dict
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
#include "../TowerInfoContainerv1.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static void *new_TowerInfoContainerv1(void *p = nullptr);
   static void *newArray_TowerInfoContainerv1(Long_t size, void *p);
   static void delete_TowerInfoContainerv1(void *p);
   static void deleteArray_TowerInfoContainerv1(void *p);
   static void destruct_TowerInfoContainerv1(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TowerInfoContainerv1*)
   {
      ::TowerInfoContainerv1 *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TowerInfoContainerv1 >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TowerInfoContainerv1", ::TowerInfoContainerv1::Class_Version(), "", 15,
                  typeid(::TowerInfoContainerv1), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TowerInfoContainerv1::Dictionary, isa_proxy, 4,
                  sizeof(::TowerInfoContainerv1) );
      instance.SetNew(&new_TowerInfoContainerv1);
      instance.SetNewArray(&newArray_TowerInfoContainerv1);
      instance.SetDelete(&delete_TowerInfoContainerv1);
      instance.SetDeleteArray(&deleteArray_TowerInfoContainerv1);
      instance.SetDestructor(&destruct_TowerInfoContainerv1);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TowerInfoContainerv1*)
   {
      return GenerateInitInstanceLocal(static_cast<::TowerInfoContainerv1*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TowerInfoContainerv1*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr TowerInfoContainerv1::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TowerInfoContainerv1::Class_Name()
{
   return "TowerInfoContainerv1";
}

//______________________________________________________________________________
const char *TowerInfoContainerv1::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TowerInfoContainerv1*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TowerInfoContainerv1::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TowerInfoContainerv1*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TowerInfoContainerv1::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TowerInfoContainerv1*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TowerInfoContainerv1::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TowerInfoContainerv1*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void TowerInfoContainerv1::Streamer(TBuffer &R__b)
{
   // Stream an object of class TowerInfoContainerv1.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TowerInfoContainerv1::Class(),this);
   } else {
      R__b.WriteClassBuffer(TowerInfoContainerv1::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TowerInfoContainerv1(void *p) {
      return  p ? new(p) ::TowerInfoContainerv1 : new ::TowerInfoContainerv1;
   }
   static void *newArray_TowerInfoContainerv1(Long_t nElements, void *p) {
      return p ? new(p) ::TowerInfoContainerv1[nElements] : new ::TowerInfoContainerv1[nElements];
   }
   // Wrapper around operator delete
   static void delete_TowerInfoContainerv1(void *p) {
      delete (static_cast<::TowerInfoContainerv1*>(p));
   }
   static void deleteArray_TowerInfoContainerv1(void *p) {
      delete [] (static_cast<::TowerInfoContainerv1*>(p));
   }
   static void destruct_TowerInfoContainerv1(void *p) {
      typedef ::TowerInfoContainerv1 current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TowerInfoContainerv1

namespace {
  void TriggerDictionaryInitialization_TowerInfoContainerv1_Dict_Impl() {
    static const char* headers[] = {
"0",
nullptr
    };
    static const char* includePaths[] = {
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "TowerInfoContainerv1_Dict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
class TowerInfoContainerv1;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "TowerInfoContainerv1_Dict dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#ifndef TOWERINFOCONTAINERV1_H
#define TOWERINFOCONTAINERV1_H

#include "TowerInfoContainer.h"
#include "TowerInfov1.h"

#include <TClonesArray.h>

#include <iostream>

class PHObject;

class TowerInfoContainerv1 : public TowerInfoContainer
{
 public:
  TowerInfoContainerv1(DETECTOR detec);

  // default constructor for ROOT IO
  TowerInfoContainerv1() {}
  PHObject *CloneMe() const override { return new TowerInfoContainerv1(*this); }
  TowerInfoContainerv1(const TowerInfoContainerv1 &);

  ~TowerInfoContainerv1() override;

  void identify(std::ostream &os = std::cout) const override;

  void Reset() override;
  TowerInfov1 *get_tower_at_channel(int pos) override;
  TowerInfov1 *get_tower_at_key(int pos) override;

  unsigned int encode_key(unsigned int towerIndex) override;
  unsigned int decode_key(unsigned int tower_key) override;

  size_t size() const override { return _clones->GetEntries(); }
  DETECTOR get_detectorid() const override { return _detector; }

 protected:
  TClonesArray *_clones = nullptr;
  DETECTOR _detector = DETECTOR_INVALID;

 private:
  ClassDefOverride(TowerInfoContainerv1, 1);
};

#endif

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"TowerInfoContainerv1", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("TowerInfoContainerv1_Dict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_TowerInfoContainerv1_Dict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_TowerInfoContainerv1_Dict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_TowerInfoContainerv1_Dict() {
  TriggerDictionaryInitialization_TowerInfoContainerv1_Dict_Impl();
}
