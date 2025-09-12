// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME TowerInfoContainerv4_Dict
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
#include "../TowerInfoContainerv4.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static void *new_TowerInfoContainerv4(void *p = nullptr);
   static void *newArray_TowerInfoContainerv4(Long_t size, void *p);
   static void delete_TowerInfoContainerv4(void *p);
   static void deleteArray_TowerInfoContainerv4(void *p);
   static void destruct_TowerInfoContainerv4(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TowerInfoContainerv4*)
   {
      ::TowerInfoContainerv4 *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TowerInfoContainerv4 >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TowerInfoContainerv4", ::TowerInfoContainerv4::Class_Version(), "", 17,
                  typeid(::TowerInfoContainerv4), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TowerInfoContainerv4::Dictionary, isa_proxy, 4,
                  sizeof(::TowerInfoContainerv4) );
      instance.SetNew(&new_TowerInfoContainerv4);
      instance.SetNewArray(&newArray_TowerInfoContainerv4);
      instance.SetDelete(&delete_TowerInfoContainerv4);
      instance.SetDeleteArray(&deleteArray_TowerInfoContainerv4);
      instance.SetDestructor(&destruct_TowerInfoContainerv4);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TowerInfoContainerv4*)
   {
      return GenerateInitInstanceLocal(static_cast<::TowerInfoContainerv4*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TowerInfoContainerv4*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr TowerInfoContainerv4::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TowerInfoContainerv4::Class_Name()
{
   return "TowerInfoContainerv4";
}

//______________________________________________________________________________
const char *TowerInfoContainerv4::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TowerInfoContainerv4*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TowerInfoContainerv4::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TowerInfoContainerv4*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TowerInfoContainerv4::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TowerInfoContainerv4*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TowerInfoContainerv4::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TowerInfoContainerv4*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void TowerInfoContainerv4::Streamer(TBuffer &R__b)
{
   // Stream an object of class TowerInfoContainerv4.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TowerInfoContainerv4::Class(),this);
   } else {
      R__b.WriteClassBuffer(TowerInfoContainerv4::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TowerInfoContainerv4(void *p) {
      return  p ? new(p) ::TowerInfoContainerv4 : new ::TowerInfoContainerv4;
   }
   static void *newArray_TowerInfoContainerv4(Long_t nElements, void *p) {
      return p ? new(p) ::TowerInfoContainerv4[nElements] : new ::TowerInfoContainerv4[nElements];
   }
   // Wrapper around operator delete
   static void delete_TowerInfoContainerv4(void *p) {
      delete (static_cast<::TowerInfoContainerv4*>(p));
   }
   static void deleteArray_TowerInfoContainerv4(void *p) {
      delete [] (static_cast<::TowerInfoContainerv4*>(p));
   }
   static void destruct_TowerInfoContainerv4(void *p) {
      typedef ::TowerInfoContainerv4 current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TowerInfoContainerv4

namespace {
  void TriggerDictionaryInitialization_TowerInfoContainerv4_Dict_Impl() {
    static const char* headers[] = {
"0",
nullptr
    };
    static const char* includePaths[] = {
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "TowerInfoContainerv4_Dict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
class TowerInfoContainerv4;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "TowerInfoContainerv4_Dict dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#ifndef TOWERINFOCONTAINERV4_H
#define TOWERINFOCONTAINERV4_H

#include "TowerInfoContainer.h"
#include "TowerInfov4.h"

#include <TClonesArray.h>

#include <cstddef>
#include <iostream>

class PHObject;

// this is basically a copy of TowerInfoContainerv1.h, but with TowerInfov4...
class TowerInfoContainerv4 : public TowerInfoContainer
{
 public:
  TowerInfoContainerv4(DETECTOR detec);

  // default constructor for ROOT IO
  TowerInfoContainerv4() {}
  PHObject *CloneMe() const override { return new TowerInfoContainerv4(*this); }
  TowerInfoContainerv4(const TowerInfoContainerv4 &);

  ~TowerInfoContainerv4() override;

  void identify(std::ostream &os = std::cout) const override;

  void Reset() override;
  TowerInfov4 *get_tower_at_channel(int pos) override;
  TowerInfov4 *get_tower_at_key(int pos) override;

  unsigned int encode_key(unsigned int towerIndex) override;
  unsigned int decode_key(unsigned int tower_key) override;

  size_t size() const override { return _clones->GetEntries(); }
  DETECTOR get_detectorid() const override { return _detector; }

 protected:
  TClonesArray *_clones = nullptr;
  DETECTOR _detector = DETECTOR_INVALID;

 private:
  ClassDefOverride(TowerInfoContainerv4, 1);
};

#endif

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"TowerInfoContainerv4", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("TowerInfoContainerv4_Dict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_TowerInfoContainerv4_Dict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_TowerInfoContainerv4_Dict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_TowerInfoContainerv4_Dict() {
  TriggerDictionaryInitialization_TowerInfoContainerv4_Dict_Impl();
}
