// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME TowerInfov3_Dict
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
#include "../TowerInfov3.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static void *new_TowerInfov3(void *p = nullptr);
   static void *newArray_TowerInfov3(Long_t size, void *p);
   static void delete_TowerInfov3(void *p);
   static void deleteArray_TowerInfov3(void *p);
   static void destruct_TowerInfov3(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TowerInfov3*)
   {
      ::TowerInfov3 *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TowerInfov3 >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TowerInfov3", ::TowerInfov3::Class_Version(), "", 10,
                  typeid(::TowerInfov3), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TowerInfov3::Dictionary, isa_proxy, 4,
                  sizeof(::TowerInfov3) );
      instance.SetNew(&new_TowerInfov3);
      instance.SetNewArray(&newArray_TowerInfov3);
      instance.SetDelete(&delete_TowerInfov3);
      instance.SetDeleteArray(&deleteArray_TowerInfov3);
      instance.SetDestructor(&destruct_TowerInfov3);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TowerInfov3*)
   {
      return GenerateInitInstanceLocal(static_cast<::TowerInfov3*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TowerInfov3*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr TowerInfov3::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TowerInfov3::Class_Name()
{
   return "TowerInfov3";
}

//______________________________________________________________________________
const char *TowerInfov3::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TowerInfov3*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TowerInfov3::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TowerInfov3*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TowerInfov3::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TowerInfov3*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TowerInfov3::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TowerInfov3*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void TowerInfov3::Streamer(TBuffer &R__b)
{
   // Stream an object of class TowerInfov3.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TowerInfov3::Class(),this);
   } else {
      R__b.WriteClassBuffer(TowerInfov3::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TowerInfov3(void *p) {
      return  p ? new(p) ::TowerInfov3 : new ::TowerInfov3;
   }
   static void *newArray_TowerInfov3(Long_t nElements, void *p) {
      return p ? new(p) ::TowerInfov3[nElements] : new ::TowerInfov3[nElements];
   }
   // Wrapper around operator delete
   static void delete_TowerInfov3(void *p) {
      delete (static_cast<::TowerInfov3*>(p));
   }
   static void deleteArray_TowerInfov3(void *p) {
      delete [] (static_cast<::TowerInfov3*>(p));
   }
   static void destruct_TowerInfov3(void *p) {
      typedef ::TowerInfov3 current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TowerInfov3

namespace {
  void TriggerDictionaryInitialization_TowerInfov3_Dict_Impl() {
    static const char* headers[] = {
"0",
nullptr
    };
    static const char* includePaths[] = {
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "TowerInfov3_Dict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
class TowerInfov3;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "TowerInfov3_Dict dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#ifndef TOWERINFOV3_H
#define TOWERINFOV3_H

#include "TowerInfov2.h"

#include <cstdint>  // For int16_t

class TowerInfov3 : public TowerInfov2
{
 public:
  TowerInfov3() {}
  ~TowerInfov3() override {}

  void Reset() override;
  void Clear(Option_t* = "") override;

  // Getter and setter for waveform
  int get_nsample() const override { return nsample; }
  int16_t get_waveform_value(int index) const override;
  void set_waveform_value(int index, int16_t value) override;

  void copy_tower(TowerInfo* tower) override;

 private:
  static const int nsample = 31;
  int16_t _waveform[nsample] = {0};  // Initializes the entire array to zero

  ClassDefOverride(TowerInfov3, 1);
  // Inherit other methods and properties from TowerInfov2
};

#endif

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"TowerInfov3", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("TowerInfov3_Dict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_TowerInfov3_Dict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_TowerInfov3_Dict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_TowerInfov3_Dict() {
  TriggerDictionaryInitialization_TowerInfov3_Dict_Impl();
}
