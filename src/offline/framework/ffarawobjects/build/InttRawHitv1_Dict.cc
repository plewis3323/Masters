// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME InttRawHitv1_Dict
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
#include "../InttRawHitv1.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static void *new_InttRawHitv1(void *p = nullptr);
   static void *newArray_InttRawHitv1(Long_t size, void *p);
   static void delete_InttRawHitv1(void *p);
   static void deleteArray_InttRawHitv1(void *p);
   static void destruct_InttRawHitv1(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::InttRawHitv1*)
   {
      ::InttRawHitv1 *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::InttRawHitv1 >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("InttRawHitv1", ::InttRawHitv1::Class_Version(), "", 10,
                  typeid(::InttRawHitv1), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::InttRawHitv1::Dictionary, isa_proxy, 4,
                  sizeof(::InttRawHitv1) );
      instance.SetNew(&new_InttRawHitv1);
      instance.SetNewArray(&newArray_InttRawHitv1);
      instance.SetDelete(&delete_InttRawHitv1);
      instance.SetDeleteArray(&deleteArray_InttRawHitv1);
      instance.SetDestructor(&destruct_InttRawHitv1);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::InttRawHitv1*)
   {
      return GenerateInitInstanceLocal(static_cast<::InttRawHitv1*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::InttRawHitv1*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr InttRawHitv1::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *InttRawHitv1::Class_Name()
{
   return "InttRawHitv1";
}

//______________________________________________________________________________
const char *InttRawHitv1::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::InttRawHitv1*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int InttRawHitv1::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::InttRawHitv1*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *InttRawHitv1::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::InttRawHitv1*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *InttRawHitv1::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::InttRawHitv1*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void InttRawHitv1::Streamer(TBuffer &R__b)
{
   // Stream an object of class InttRawHitv1.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(InttRawHitv1::Class(),this);
   } else {
      R__b.WriteClassBuffer(InttRawHitv1::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_InttRawHitv1(void *p) {
      return  p ? new(p) ::InttRawHitv1 : new ::InttRawHitv1;
   }
   static void *newArray_InttRawHitv1(Long_t nElements, void *p) {
      return p ? new(p) ::InttRawHitv1[nElements] : new ::InttRawHitv1[nElements];
   }
   // Wrapper around operator delete
   static void delete_InttRawHitv1(void *p) {
      delete (static_cast<::InttRawHitv1*>(p));
   }
   static void deleteArray_InttRawHitv1(void *p) {
      delete [] (static_cast<::InttRawHitv1*>(p));
   }
   static void destruct_InttRawHitv1(void *p) {
      typedef ::InttRawHitv1 current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::InttRawHitv1

namespace {
  void TriggerDictionaryInitialization_InttRawHitv1_Dict_Impl() {
    static const char* headers[] = {
"0",
nullptr
    };
    static const char* includePaths[] = {
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "InttRawHitv1_Dict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
class InttRawHitv1;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "InttRawHitv1_Dict dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#ifndef FUN4ALLRAW_INTTRAWHITV1_H
#define FUN4ALLRAW_INTTRAWHITV1_H

#include "InttRawHit.h"

#include <limits>

class InttRawHitv1 : public InttRawHit
{
 public:
  InttRawHitv1() = default;
  InttRawHitv1(InttRawHit *intthit);
  ~InttRawHitv1() override = default;

  /** identify Function from PHObject
      @param os Output Stream
   */
  void identify(std::ostream &os = std::cout) const override;

  uint64_t get_bco() const override { return bco; }
  // cppcheck-suppress virtualCallInConstructor
  void set_bco(const uint64_t val) override { bco = val; }

  int32_t get_packetid() const override { return packetid; }
  // cppcheck-suppress virtualCallInConstructor
  void set_packetid(const int32_t val) override { packetid = val; }

  uint32_t get_word() const override { return word; }
  // cppcheck-suppress virtualCallInConstructor
  void set_word(uint32_t val) override { word = val; }

  uint16_t get_fee() const override { return fee; }
  // cppcheck-suppress virtualCallInConstructor
  void set_fee(uint16_t val) override { fee = val; }

  uint16_t get_channel_id() const override { return channel_id; }
  // cppcheck-suppress virtualCallInConstructor
  void set_channel_id(uint16_t val) override { channel_id = val; }

  uint16_t get_chip_id() const override { return chip_id; }
  // cppcheck-suppress virtualCallInConstructor
  void set_chip_id(uint16_t val) override { chip_id = val; }

  uint16_t get_adc() const override { return adc; }
  // cppcheck-suppress virtualCallInConstructor
  void set_adc(uint16_t val) override { adc = val; }

  uint16_t get_FPHX_BCO() const override { return FPHX_BCO; }
  // cppcheck-suppress virtualCallInConstructor
  void set_FPHX_BCO(uint16_t val) override { FPHX_BCO = val; }

  uint16_t get_full_FPHX() const override { return full_FPHX; }
  // cppcheck-suppress virtualCallInConstructor
  void set_full_FPHX(uint16_t val) override { full_FPHX = val; }

  uint16_t get_full_ROC() const override { return full_ROC; }
  // cppcheck-suppress virtualCallInConstructor
  void set_full_ROC(uint16_t val) override { full_ROC = val; }

  uint16_t get_amplitude() const override { return amplitude; }
  // cppcheck-suppress virtualCallInConstructor
  void set_amplitude(uint16_t val) override { amplitude = val; }

 protected:
  uint64_t bco = std::numeric_limits<uint64_t>::max();
  int32_t packetid = std::numeric_limits<int32_t>::max();
  uint32_t word = std::numeric_limits<uint32_t>::max();
  uint16_t fee = std::numeric_limits<uint16_t>::max();
  uint16_t channel_id = std::numeric_limits<uint16_t>::max();
  uint16_t chip_id = std::numeric_limits<uint16_t>::max();
  uint16_t adc = std::numeric_limits<uint16_t>::max();
  uint16_t FPHX_BCO = std::numeric_limits<uint16_t>::max();
  uint16_t full_FPHX = std::numeric_limits<uint16_t>::max();
  uint16_t full_ROC = std::numeric_limits<uint16_t>::max();
  uint16_t amplitude = std::numeric_limits<uint16_t>::max();

  ClassDefOverride(InttRawHitv1, 1)
};

#endif

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"InttRawHitv1", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("InttRawHitv1_Dict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_InttRawHitv1_Dict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_InttRawHitv1_Dict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_InttRawHitv1_Dict() {
  TriggerDictionaryInitialization_InttRawHitv1_Dict_Impl();
}
