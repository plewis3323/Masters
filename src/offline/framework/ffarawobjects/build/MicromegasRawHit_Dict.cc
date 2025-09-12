// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME MicromegasRawHit_Dict
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
#include "../MicromegasRawHit.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static void *new_MicromegasRawHit(void *p = nullptr);
   static void *newArray_MicromegasRawHit(Long_t size, void *p);
   static void delete_MicromegasRawHit(void *p);
   static void deleteArray_MicromegasRawHit(void *p);
   static void destruct_MicromegasRawHit(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::MicromegasRawHit*)
   {
      ::MicromegasRawHit *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::MicromegasRawHit >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("MicromegasRawHit", ::MicromegasRawHit::Class_Version(), "", 10,
                  typeid(::MicromegasRawHit), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::MicromegasRawHit::Dictionary, isa_proxy, 4,
                  sizeof(::MicromegasRawHit) );
      instance.SetNew(&new_MicromegasRawHit);
      instance.SetNewArray(&newArray_MicromegasRawHit);
      instance.SetDelete(&delete_MicromegasRawHit);
      instance.SetDeleteArray(&deleteArray_MicromegasRawHit);
      instance.SetDestructor(&destruct_MicromegasRawHit);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::MicromegasRawHit*)
   {
      return GenerateInitInstanceLocal(static_cast<::MicromegasRawHit*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::MicromegasRawHit*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr MicromegasRawHit::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *MicromegasRawHit::Class_Name()
{
   return "MicromegasRawHit";
}

//______________________________________________________________________________
const char *MicromegasRawHit::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::MicromegasRawHit*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int MicromegasRawHit::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::MicromegasRawHit*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *MicromegasRawHit::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::MicromegasRawHit*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *MicromegasRawHit::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::MicromegasRawHit*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void MicromegasRawHit::Streamer(TBuffer &R__b)
{
   // Stream an object of class MicromegasRawHit.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(MicromegasRawHit::Class(),this);
   } else {
      R__b.WriteClassBuffer(MicromegasRawHit::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_MicromegasRawHit(void *p) {
      return  p ? new(p) ::MicromegasRawHit : new ::MicromegasRawHit;
   }
   static void *newArray_MicromegasRawHit(Long_t nElements, void *p) {
      return p ? new(p) ::MicromegasRawHit[nElements] : new ::MicromegasRawHit[nElements];
   }
   // Wrapper around operator delete
   static void delete_MicromegasRawHit(void *p) {
      delete (static_cast<::MicromegasRawHit*>(p));
   }
   static void deleteArray_MicromegasRawHit(void *p) {
      delete [] (static_cast<::MicromegasRawHit*>(p));
   }
   static void destruct_MicromegasRawHit(void *p) {
      typedef ::MicromegasRawHit current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::MicromegasRawHit

namespace {
  void TriggerDictionaryInitialization_MicromegasRawHit_Dict_Impl() {
    static const char* headers[] = {
"0",
nullptr
    };
    static const char* includePaths[] = {
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "MicromegasRawHit_Dict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
class MicromegasRawHit;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "MicromegasRawHit_Dict dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#ifndef FUN4ALLRAW_MICROMEGASRAWTHIT_H
#define FUN4ALLRAW_MICROMEGASRAWTHIT_H

#include <phool/PHObject.h>

#include <limits>

class MicromegasRawHit : public PHObject
{
 public:
  MicromegasRawHit() = default;
  virtual ~MicromegasRawHit() = default;

  virtual uint64_t get_bco() const { return std::numeric_limits<uint64_t>::max(); }
  virtual void set_bco(const uint64_t) { return; }

  virtual uint64_t get_gtm_bco() const { return std::numeric_limits<uint64_t>::max(); }
  virtual void set_gtm_bco(const uint64_t) { return; }

  virtual int32_t get_packetid() const { return std::numeric_limits<int32_t>::max(); }
  virtual void set_packetid(const int32_t) { return; }

  virtual uint16_t get_fee() const { return std::numeric_limits<uint16_t>::max(); }
  virtual void set_fee(const uint16_t) { return; }

  virtual uint16_t get_channel() const { return std::numeric_limits<uint16_t>::max(); }
  virtual void set_channel(const uint16_t) { return; }

  virtual uint16_t get_sampaaddress() const { return std::numeric_limits<uint16_t>::max(); }
  virtual void set_sampaaddress(const uint16_t) { return; }

  virtual uint16_t get_sampachannel() const { return std::numeric_limits<uint16_t>::max(); }
  virtual void set_sampachannel(const uint16_t) { return; }

  // index of the first sample with data
  virtual uint16_t get_sample_begin() const { return std::numeric_limits<uint16_t>::max(); }
  virtual void set_sample_begin(const uint16_t) {}

  // index of the next to last sample with data
  virtual uint16_t get_sample_end() const { return std::numeric_limits<uint16_t>::max(); }
  virtual void set_sample_end(const uint16_t) {}

  // adc value for a given sample index
  virtual uint16_t get_adc(uint16_t /*sample*/) const { return std::numeric_limits<uint16_t>::max(); }
  virtual void set_adc(uint16_t /*sample*/, const uint16_t) { return; }

 private:
  ClassDefOverride(MicromegasRawHit, 1)
};

#endif

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"MicromegasRawHit", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("MicromegasRawHit_Dict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_MicromegasRawHit_Dict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_MicromegasRawHit_Dict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_MicromegasRawHit_Dict() {
  TriggerDictionaryInitialization_MicromegasRawHit_Dict_Impl();
}
