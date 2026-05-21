// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME TowerInfoContainerv3_Dict
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
#include "../TowerInfoContainerv3.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static void *new_TowerInfoContainerv3(void *p = nullptr);
   static void *newArray_TowerInfoContainerv3(Long_t size, void *p);
   static void delete_TowerInfoContainerv3(void *p);
   static void deleteArray_TowerInfoContainerv3(void *p);
   static void destruct_TowerInfoContainerv3(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TowerInfoContainerv3*)
   {
      ::TowerInfoContainerv3 *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TowerInfoContainerv3 >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TowerInfoContainerv3", ::TowerInfoContainerv3::Class_Version(), "", 13,
                  typeid(::TowerInfoContainerv3), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TowerInfoContainerv3::Dictionary, isa_proxy, 4,
                  sizeof(::TowerInfoContainerv3) );
      instance.SetNew(&new_TowerInfoContainerv3);
      instance.SetNewArray(&newArray_TowerInfoContainerv3);
      instance.SetDelete(&delete_TowerInfoContainerv3);
      instance.SetDeleteArray(&deleteArray_TowerInfoContainerv3);
      instance.SetDestructor(&destruct_TowerInfoContainerv3);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TowerInfoContainerv3*)
   {
      return GenerateInitInstanceLocal(static_cast<::TowerInfoContainerv3*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TowerInfoContainerv3*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr TowerInfoContainerv3::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TowerInfoContainerv3::Class_Name()
{
   return "TowerInfoContainerv3";
}

//______________________________________________________________________________
const char *TowerInfoContainerv3::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TowerInfoContainerv3*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TowerInfoContainerv3::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TowerInfoContainerv3*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TowerInfoContainerv3::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TowerInfoContainerv3*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TowerInfoContainerv3::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TowerInfoContainerv3*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void TowerInfoContainerv3::Streamer(TBuffer &R__b)
{
   // Stream an object of class TowerInfoContainerv3.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TowerInfoContainerv3::Class(),this);
   } else {
      R__b.WriteClassBuffer(TowerInfoContainerv3::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TowerInfoContainerv3(void *p) {
      return  p ? new(p) ::TowerInfoContainerv3 : new ::TowerInfoContainerv3;
   }
   static void *newArray_TowerInfoContainerv3(Long_t nElements, void *p) {
      return p ? new(p) ::TowerInfoContainerv3[nElements] : new ::TowerInfoContainerv3[nElements];
   }
   // Wrapper around operator delete
   static void delete_TowerInfoContainerv3(void *p) {
      delete (static_cast<::TowerInfoContainerv3*>(p));
   }
   static void deleteArray_TowerInfoContainerv3(void *p) {
      delete [] (static_cast<::TowerInfoContainerv3*>(p));
   }
   static void destruct_TowerInfoContainerv3(void *p) {
      typedef ::TowerInfoContainerv3 current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TowerInfoContainerv3

namespace {
  void TriggerDictionaryInitialization_TowerInfoContainerv3_Dict_Impl() {
    static const char* headers[] = {
"0",
nullptr
    };
    static const char* includePaths[] = {
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "TowerInfoContainerv3_Dict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
class TowerInfoContainerv3;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "TowerInfoContainerv3_Dict dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#ifndef TOWERINFOCONTAINERV3_H
#define TOWERINFOCONTAINERV3_H

#include "TowerInfoContainer.h"
#include "TowerInfov3.h"

#include <TClonesArray.h>

class PHObject;

class TowerInfoContainerv3 : public TowerInfoContainer
{
 public:
  TowerInfoContainerv3(DETECTOR detec);

  // default constructor for ROOT IO
  TowerInfoContainerv3() {}
  PHObject *CloneMe() const override { return new TowerInfoContainerv3(*this); }
  TowerInfoContainerv3(const TowerInfoContainerv3 &);

  ~TowerInfoContainerv3() override;

  void identify(std::ostream &os = std::cout) const override;

  void Reset() override;
  TowerInfov3 *get_tower_at_channel(int pos) override;
  TowerInfov3 *get_tower_at_key(int pos) override;

  unsigned int encode_key(unsigned int towerIndex) override;
  unsigned int decode_key(unsigned int tower_key) override;

  size_t size() const override { return _clones->GetEntries(); }
  DETECTOR get_detectorid() const override { return _detector; }

 protected:
  TClonesArray *_clones = nullptr;
  DETECTOR _detector = DETECTOR_INVALID;

 private:
  ClassDefOverride(TowerInfoContainerv3, 1);
};

#endif

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"TowerInfoContainerv3", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("TowerInfoContainerv3_Dict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_TowerInfoContainerv3_Dict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_TowerInfoContainerv3_Dict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_TowerInfoContainerv3_Dict() {
  TriggerDictionaryInitialization_TowerInfoContainerv3_Dict_Impl();
}
