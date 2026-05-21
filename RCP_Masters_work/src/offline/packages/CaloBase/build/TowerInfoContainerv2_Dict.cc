// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME TowerInfoContainerv2_Dict
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
#include "../TowerInfoContainerv2.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static void *new_TowerInfoContainerv2(void *p = nullptr);
   static void *newArray_TowerInfoContainerv2(Long_t size, void *p);
   static void delete_TowerInfoContainerv2(void *p);
   static void deleteArray_TowerInfoContainerv2(void *p);
   static void destruct_TowerInfoContainerv2(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TowerInfoContainerv2*)
   {
      ::TowerInfoContainerv2 *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TowerInfoContainerv2 >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TowerInfoContainerv2", ::TowerInfoContainerv2::Class_Version(), "", 16,
                  typeid(::TowerInfoContainerv2), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TowerInfoContainerv2::Dictionary, isa_proxy, 4,
                  sizeof(::TowerInfoContainerv2) );
      instance.SetNew(&new_TowerInfoContainerv2);
      instance.SetNewArray(&newArray_TowerInfoContainerv2);
      instance.SetDelete(&delete_TowerInfoContainerv2);
      instance.SetDeleteArray(&deleteArray_TowerInfoContainerv2);
      instance.SetDestructor(&destruct_TowerInfoContainerv2);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TowerInfoContainerv2*)
   {
      return GenerateInitInstanceLocal(static_cast<::TowerInfoContainerv2*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TowerInfoContainerv2*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr TowerInfoContainerv2::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TowerInfoContainerv2::Class_Name()
{
   return "TowerInfoContainerv2";
}

//______________________________________________________________________________
const char *TowerInfoContainerv2::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TowerInfoContainerv2*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TowerInfoContainerv2::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TowerInfoContainerv2*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TowerInfoContainerv2::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TowerInfoContainerv2*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TowerInfoContainerv2::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TowerInfoContainerv2*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void TowerInfoContainerv2::Streamer(TBuffer &R__b)
{
   // Stream an object of class TowerInfoContainerv2.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TowerInfoContainerv2::Class(),this);
   } else {
      R__b.WriteClassBuffer(TowerInfoContainerv2::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TowerInfoContainerv2(void *p) {
      return  p ? new(p) ::TowerInfoContainerv2 : new ::TowerInfoContainerv2;
   }
   static void *newArray_TowerInfoContainerv2(Long_t nElements, void *p) {
      return p ? new(p) ::TowerInfoContainerv2[nElements] : new ::TowerInfoContainerv2[nElements];
   }
   // Wrapper around operator delete
   static void delete_TowerInfoContainerv2(void *p) {
      delete (static_cast<::TowerInfoContainerv2*>(p));
   }
   static void deleteArray_TowerInfoContainerv2(void *p) {
      delete [] (static_cast<::TowerInfoContainerv2*>(p));
   }
   static void destruct_TowerInfoContainerv2(void *p) {
      typedef ::TowerInfoContainerv2 current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TowerInfoContainerv2

namespace {
  void TriggerDictionaryInitialization_TowerInfoContainerv2_Dict_Impl() {
    static const char* headers[] = {
"0",
nullptr
    };
    static const char* includePaths[] = {
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "TowerInfoContainerv2_Dict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
class TowerInfoContainerv2;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "TowerInfoContainerv2_Dict dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#ifndef TOWERINFOCONTAINERV2_H
#define TOWERINFOCONTAINERV2_H

#include "TowerInfoContainer.h"
#include "TowerInfov2.h"

#include <TClonesArray.h>

#include <iostream>

class PHObject;

// this is basically a copy of TowerInfoContainerv1.h, but with TowerInfov2...
class TowerInfoContainerv2 : public TowerInfoContainer
{
 public:
  TowerInfoContainerv2(DETECTOR detec);

  // default constructor for ROOT IO
  TowerInfoContainerv2() {}
  PHObject *CloneMe() const override { return new TowerInfoContainerv2(*this); }
  TowerInfoContainerv2(const TowerInfoContainerv2 &);

  ~TowerInfoContainerv2() override;

  void identify(std::ostream &os = std::cout) const override;

  void Reset() override;
  TowerInfov2 *get_tower_at_channel(int pos) override;
  TowerInfov2 *get_tower_at_key(int pos) override;

  unsigned int encode_key(unsigned int towerIndex) override;
  unsigned int decode_key(unsigned int tower_key) override;

  size_t size() const override { return _clones->GetEntries(); }
  DETECTOR get_detectorid() const override { return _detector; }

 protected:
  TClonesArray *_clones = nullptr;
  DETECTOR _detector = DETECTOR_INVALID;

 private:
  ClassDefOverride(TowerInfoContainerv2, 1);
};

#endif

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"TowerInfoContainerv2", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("TowerInfoContainerv2_Dict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_TowerInfoContainerv2_Dict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_TowerInfoContainerv2_Dict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_TowerInfoContainerv2_Dict() {
  TriggerDictionaryInitialization_TowerInfoContainerv2_Dict_Impl();
}
