// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME MinimumBiasInfov1_Dict
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
#include "../MinimumBiasInfov1.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static void *new_MinimumBiasInfov1(void *p = nullptr);
   static void *newArray_MinimumBiasInfov1(Long_t size, void *p);
   static void delete_MinimumBiasInfov1(void *p);
   static void deleteArray_MinimumBiasInfov1(void *p);
   static void destruct_MinimumBiasInfov1(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::MinimumBiasInfov1*)
   {
      ::MinimumBiasInfov1 *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::MinimumBiasInfov1 >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("MinimumBiasInfov1", ::MinimumBiasInfov1::Class_Version(), "", 10,
                  typeid(::MinimumBiasInfov1), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::MinimumBiasInfov1::Dictionary, isa_proxy, 4,
                  sizeof(::MinimumBiasInfov1) );
      instance.SetNew(&new_MinimumBiasInfov1);
      instance.SetNewArray(&newArray_MinimumBiasInfov1);
      instance.SetDelete(&delete_MinimumBiasInfov1);
      instance.SetDeleteArray(&deleteArray_MinimumBiasInfov1);
      instance.SetDestructor(&destruct_MinimumBiasInfov1);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::MinimumBiasInfov1*)
   {
      return GenerateInitInstanceLocal(static_cast<::MinimumBiasInfov1*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::MinimumBiasInfov1*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr MinimumBiasInfov1::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *MinimumBiasInfov1::Class_Name()
{
   return "MinimumBiasInfov1";
}

//______________________________________________________________________________
const char *MinimumBiasInfov1::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::MinimumBiasInfov1*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int MinimumBiasInfov1::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::MinimumBiasInfov1*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *MinimumBiasInfov1::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::MinimumBiasInfov1*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *MinimumBiasInfov1::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::MinimumBiasInfov1*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void MinimumBiasInfov1::Streamer(TBuffer &R__b)
{
   // Stream an object of class MinimumBiasInfov1.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(MinimumBiasInfov1::Class(),this);
   } else {
      R__b.WriteClassBuffer(MinimumBiasInfov1::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_MinimumBiasInfov1(void *p) {
      return  p ? new(p) ::MinimumBiasInfov1 : new ::MinimumBiasInfov1;
   }
   static void *newArray_MinimumBiasInfov1(Long_t nElements, void *p) {
      return p ? new(p) ::MinimumBiasInfov1[nElements] : new ::MinimumBiasInfov1[nElements];
   }
   // Wrapper around operator delete
   static void delete_MinimumBiasInfov1(void *p) {
      delete (static_cast<::MinimumBiasInfov1*>(p));
   }
   static void deleteArray_MinimumBiasInfov1(void *p) {
      delete [] (static_cast<::MinimumBiasInfov1*>(p));
   }
   static void destruct_MinimumBiasInfov1(void *p) {
      typedef ::MinimumBiasInfov1 current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::MinimumBiasInfov1

namespace {
  void TriggerDictionaryInitialization_MinimumBiasInfov1_Dict_Impl() {
    static const char* headers[] = {
"0",
nullptr
    };
    static const char* includePaths[] = {
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "MinimumBiasInfov1_Dict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
class MinimumBiasInfov1;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "MinimumBiasInfov1_Dict dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#ifndef TRIGGER_MINIMUMBIASINFOV1_H
#define TRIGGER_MINIMUMBIASINFOV1_H

#include "MinimumBiasInfo.h"

#include <iostream>

class MinimumBiasInfov1 : public MinimumBiasInfo
{
 public:
  MinimumBiasInfov1() = default;
  virtual ~MinimumBiasInfov1() override = default;

  void identify(std::ostream &os = std::cout) const override;

  void Reset() override {_isMinBias = false;}

  int isValid() const override { return 1; }

  PHObject *CloneMe() const override { return new MinimumBiasInfov1(*this); }

  void CopyTo(MinimumBiasInfo *mbinfo) override;

  void setIsAuAuMinimumBias(bool is_min_bias) override { _isMinBias = is_min_bias; }
  bool isAuAuMinimumBias() const override { return _isMinBias; }

 private:
  bool _isMinBias{false};

  ClassDefOverride(MinimumBiasInfov1, 1)
};

#endif

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"MinimumBiasInfov1", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("MinimumBiasInfov1_Dict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_MinimumBiasInfov1_Dict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_MinimumBiasInfov1_Dict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_MinimumBiasInfov1_Dict() {
  TriggerDictionaryInitialization_MinimumBiasInfov1_Dict_Impl();
}
