// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME TriggerRunInfov1_Dict
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
#include "../TriggerRunInfov1.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static void *new_TriggerRunInfov1(void *p = nullptr);
   static void *newArray_TriggerRunInfov1(Long_t size, void *p);
   static void delete_TriggerRunInfov1(void *p);
   static void deleteArray_TriggerRunInfov1(void *p);
   static void destruct_TriggerRunInfov1(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TriggerRunInfov1*)
   {
      ::TriggerRunInfov1 *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TriggerRunInfov1 >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TriggerRunInfov1", ::TriggerRunInfov1::Class_Version(), "", 13,
                  typeid(::TriggerRunInfov1), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TriggerRunInfov1::Dictionary, isa_proxy, 4,
                  sizeof(::TriggerRunInfov1) );
      instance.SetNew(&new_TriggerRunInfov1);
      instance.SetNewArray(&newArray_TriggerRunInfov1);
      instance.SetDelete(&delete_TriggerRunInfov1);
      instance.SetDeleteArray(&deleteArray_TriggerRunInfov1);
      instance.SetDestructor(&destruct_TriggerRunInfov1);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TriggerRunInfov1*)
   {
      return GenerateInitInstanceLocal(static_cast<::TriggerRunInfov1*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TriggerRunInfov1*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr TriggerRunInfov1::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TriggerRunInfov1::Class_Name()
{
   return "TriggerRunInfov1";
}

//______________________________________________________________________________
const char *TriggerRunInfov1::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TriggerRunInfov1*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TriggerRunInfov1::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TriggerRunInfov1*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TriggerRunInfov1::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TriggerRunInfov1*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TriggerRunInfov1::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TriggerRunInfov1*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void TriggerRunInfov1::Streamer(TBuffer &R__b)
{
   // Stream an object of class TriggerRunInfov1.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TriggerRunInfov1::Class(),this);
   } else {
      R__b.WriteClassBuffer(TriggerRunInfov1::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TriggerRunInfov1(void *p) {
      return  p ? new(p) ::TriggerRunInfov1 : new ::TriggerRunInfov1;
   }
   static void *newArray_TriggerRunInfov1(Long_t nElements, void *p) {
      return p ? new(p) ::TriggerRunInfov1[nElements] : new ::TriggerRunInfov1[nElements];
   }
   // Wrapper around operator delete
   static void delete_TriggerRunInfov1(void *p) {
      delete (static_cast<::TriggerRunInfov1*>(p));
   }
   static void deleteArray_TriggerRunInfov1(void *p) {
      delete [] (static_cast<::TriggerRunInfov1*>(p));
   }
   static void destruct_TriggerRunInfov1(void *p) {
      typedef ::TriggerRunInfov1 current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TriggerRunInfov1

namespace {
  void TriggerDictionaryInitialization_TriggerRunInfov1_Dict_Impl() {
    static const char* headers[] = {
"0",
nullptr
    };
    static const char* includePaths[] = {
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "TriggerRunInfov1_Dict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
class TriggerRunInfov1;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "TriggerRunInfov1_Dict dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#ifndef TRIGGER_TRIGGERRUNINFOV1_H_
#define TRIGGER_TRIGGERRUNINFOV1_H_

#include "TriggerRunInfo.h"

#include <array>
#include <cstdint>
#include <iostream>
#include <string>

class TriggerRunInfov1 : public TriggerRunInfo
{
 public:
  TriggerRunInfov1() = default;

  ~TriggerRunInfov1() override = default;

  void setTrigger(int index, const std::string& name, int bit, int prescale) override;

  void setTriggerScalers(int index, int scalertype, uint64_t scalers) override;

  void setTriggerPrescale(int index, double prescale) override;

  double getPrescaleByName(const std::string& name) const override;

  double getPrescaleByBit(int triggerbit) const override ;

  int getInitialPrescaleByName(const std::string& name) const override;

  int getInitialPrescaleByBit(int triggerbit) const override ;

  uint64_t getScalersByName(const std::string& name) const override;

  uint64_t getScalersByBit(int triggerbit) const override ;

  uint64_t getLiveScalersByName(const std::string& name) const override;

  uint64_t getLiveScalersByBit(int triggerbit) const override ;

  uint64_t getRawScalersByName(const std::string& name) const override;

  uint64_t getRawScalersByBit(int triggerbit) const override ;

  uint32_t getTriggerBitByName(const std::string& name) const override ;

  void identify(std::ostream& os = std::cout) const override;

  std::string getTriggerName(int triggerbit) const override;

 private:
  std::array<std::string, 64> trigger_names {};
  std::array<int, 64> trigger_bits {};
  std::array<int, 64> trigger_initial_prescales {};
  std::array<double, 64> trigger_prescales {};
  std::array<std::array<uint64_t, 3>, 64> trigger_scalers {};

 private:  // so the ClassDef does not show up with doc++
  ClassDefOverride(TriggerRunInfov1, 1);
};

#endif

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"TriggerRunInfov1", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("TriggerRunInfov1_Dict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_TriggerRunInfov1_Dict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_TriggerRunInfov1_Dict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_TriggerRunInfov1_Dict() {
  TriggerDictionaryInitialization_TriggerRunInfov1_Dict_Impl();
}
