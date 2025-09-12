// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME InttRawHit_Dict
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
#include "../InttRawHit.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static void *new_InttRawHit(void *p = nullptr);
   static void *newArray_InttRawHit(Long_t size, void *p);
   static void delete_InttRawHit(void *p);
   static void deleteArray_InttRawHit(void *p);
   static void destruct_InttRawHit(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::InttRawHit*)
   {
      ::InttRawHit *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::InttRawHit >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("InttRawHit", ::InttRawHit::Class_Version(), "", 10,
                  typeid(::InttRawHit), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::InttRawHit::Dictionary, isa_proxy, 4,
                  sizeof(::InttRawHit) );
      instance.SetNew(&new_InttRawHit);
      instance.SetNewArray(&newArray_InttRawHit);
      instance.SetDelete(&delete_InttRawHit);
      instance.SetDeleteArray(&deleteArray_InttRawHit);
      instance.SetDestructor(&destruct_InttRawHit);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::InttRawHit*)
   {
      return GenerateInitInstanceLocal(static_cast<::InttRawHit*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::InttRawHit*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr InttRawHit::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *InttRawHit::Class_Name()
{
   return "InttRawHit";
}

//______________________________________________________________________________
const char *InttRawHit::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::InttRawHit*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int InttRawHit::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::InttRawHit*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *InttRawHit::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::InttRawHit*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *InttRawHit::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::InttRawHit*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void InttRawHit::Streamer(TBuffer &R__b)
{
   // Stream an object of class InttRawHit.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(InttRawHit::Class(),this);
   } else {
      R__b.WriteClassBuffer(InttRawHit::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_InttRawHit(void *p) {
      return  p ? new(p) ::InttRawHit : new ::InttRawHit;
   }
   static void *newArray_InttRawHit(Long_t nElements, void *p) {
      return p ? new(p) ::InttRawHit[nElements] : new ::InttRawHit[nElements];
   }
   // Wrapper around operator delete
   static void delete_InttRawHit(void *p) {
      delete (static_cast<::InttRawHit*>(p));
   }
   static void deleteArray_InttRawHit(void *p) {
      delete [] (static_cast<::InttRawHit*>(p));
   }
   static void destruct_InttRawHit(void *p) {
      typedef ::InttRawHit current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::InttRawHit

namespace {
  void TriggerDictionaryInitialization_InttRawHit_Dict_Impl() {
    static const char* headers[] = {
"0",
nullptr
    };
    static const char* includePaths[] = {
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "InttRawHit_Dict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
class InttRawHit;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "InttRawHit_Dict dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#ifndef FUN4ALLRAW_INTTRAWTHIT_H
#define FUN4ALLRAW_INTTRAWTHIT_H

#include <phool/PHObject.h>

#include <limits>

class InttRawHit : public PHObject
{
 public:
  InttRawHit() = default;
  virtual ~InttRawHit() = default;

  virtual uint64_t get_bco() const { return std::numeric_limits<uint64_t>::max(); }
  virtual void set_bco(const uint64_t) { return; }

  virtual int32_t get_packetid() const { return std::numeric_limits<int32_t>::max(); }
  virtual void set_packetid(const int32_t) { return; }

  virtual uint32_t get_word() const { return std::numeric_limits<uint32_t>::max(); }
  virtual void set_word(uint32_t) { return; }

  virtual uint16_t get_fee() const { return std::numeric_limits<uint16_t>::max(); }
  virtual void set_fee(uint16_t) { return; }

  virtual uint16_t get_channel_id() const { return std::numeric_limits<uint16_t>::max(); }
  virtual void set_channel_id(uint16_t) { return; }

  virtual uint16_t get_chip_id() const { return std::numeric_limits<uint16_t>::max(); }
  virtual void set_chip_id(uint16_t) { return; }

  virtual uint16_t get_adc() const { return std::numeric_limits<uint16_t>::max(); }
  virtual void set_adc(uint16_t) { return; }

  virtual uint16_t get_FPHX_BCO() const { return std::numeric_limits<uint16_t>::max(); }
  virtual void set_FPHX_BCO(uint16_t) { return; }

  virtual uint16_t get_full_FPHX() const { return std::numeric_limits<uint16_t>::max(); }
  virtual void set_full_FPHX(uint16_t) { return; }

  virtual uint16_t get_full_ROC() const { return std::numeric_limits<uint16_t>::max(); }
  virtual void set_full_ROC(uint16_t) { return; }

  virtual uint16_t get_amplitude() const { return std::numeric_limits<uint16_t>::max(); }
  virtual void set_amplitude(uint16_t) { return; }

  virtual uint32_t get_event_counter() const { return std::numeric_limits<uint32_t>::max(); }
  virtual void set_event_counter(uint32_t) { return; }

 private:
  ClassDefOverride(InttRawHit, 1)
};

#endif

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"InttRawHit", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("InttRawHit_Dict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_InttRawHit_Dict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_InttRawHit_Dict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_InttRawHit_Dict() {
  TriggerDictionaryInitialization_InttRawHit_Dict_Impl();
}
