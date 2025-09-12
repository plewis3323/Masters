// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME TowerInfov1_Dict
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
#include "../TowerInfov1.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static void *new_TowerInfov1(void *p = nullptr);
   static void *newArray_TowerInfov1(Long_t size, void *p);
   static void delete_TowerInfov1(void *p);
   static void deleteArray_TowerInfov1(void *p);
   static void destruct_TowerInfov1(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TowerInfov1*)
   {
      ::TowerInfov1 *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TowerInfov1 >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TowerInfov1", ::TowerInfov1::Class_Version(), "", 8,
                  typeid(::TowerInfov1), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TowerInfov1::Dictionary, isa_proxy, 4,
                  sizeof(::TowerInfov1) );
      instance.SetNew(&new_TowerInfov1);
      instance.SetNewArray(&newArray_TowerInfov1);
      instance.SetDelete(&delete_TowerInfov1);
      instance.SetDeleteArray(&deleteArray_TowerInfov1);
      instance.SetDestructor(&destruct_TowerInfov1);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TowerInfov1*)
   {
      return GenerateInitInstanceLocal(static_cast<::TowerInfov1*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TowerInfov1*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr TowerInfov1::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TowerInfov1::Class_Name()
{
   return "TowerInfov1";
}

//______________________________________________________________________________
const char *TowerInfov1::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TowerInfov1*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TowerInfov1::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TowerInfov1*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TowerInfov1::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TowerInfov1*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TowerInfov1::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TowerInfov1*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void TowerInfov1::Streamer(TBuffer &R__b)
{
   // Stream an object of class TowerInfov1.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TowerInfov1::Class(),this);
   } else {
      R__b.WriteClassBuffer(TowerInfov1::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TowerInfov1(void *p) {
      return  p ? new(p) ::TowerInfov1 : new ::TowerInfov1;
   }
   static void *newArray_TowerInfov1(Long_t nElements, void *p) {
      return p ? new(p) ::TowerInfov1[nElements] : new ::TowerInfov1[nElements];
   }
   // Wrapper around operator delete
   static void delete_TowerInfov1(void *p) {
      delete (static_cast<::TowerInfov1*>(p));
   }
   static void deleteArray_TowerInfov1(void *p) {
      delete [] (static_cast<::TowerInfov1*>(p));
   }
   static void destruct_TowerInfov1(void *p) {
      typedef ::TowerInfov1 current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TowerInfov1

namespace {
  void TriggerDictionaryInitialization_TowerInfov1_Dict_Impl() {
    static const char* headers[] = {
"0",
nullptr
    };
    static const char* includePaths[] = {
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "TowerInfov1_Dict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
class TowerInfov1;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "TowerInfov1_Dict dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#ifndef TOWERINFOV1_H
#define TOWERINFOV1_H

#include "TowerInfo.h"

class TowerInfov1 : public TowerInfo
{
 public:
  TowerInfov1() {}
  TowerInfov1(TowerInfo& tower);
  ~TowerInfov1() override {}
  void Reset() override;

  //! Clear is used by TClonesArray to reset the tower to initial state without calling destructor/constructor
  void Clear(Option_t* = "") override;

  void set_time(short t) override { _time = t; }
  short get_time() override { return _time; }
  void set_energy(float energy) override { _energy = energy; }
  float get_energy() override { return _energy; }
  void copy_tower(TowerInfo* tower) override;

 private:
  short _time{0};
  float _energy{0};

  ClassDefOverride(TowerInfov1, 1);
};

#endif

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"TowerInfov1", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("TowerInfov1_Dict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_TowerInfov1_Dict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_TowerInfov1_Dict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_TowerInfov1_Dict() {
  TriggerDictionaryInitialization_TowerInfov1_Dict_Impl();
}
