// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME TpcRawHit_Dict
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
#include "../TpcRawHit.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static void delete_TpcRawHit(void *p);
   static void deleteArray_TpcRawHit(void *p);
   static void destruct_TpcRawHit(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TpcRawHit*)
   {
      ::TpcRawHit *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TpcRawHit >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TpcRawHit", ::TpcRawHit::Class_Version(), "", 10,
                  typeid(::TpcRawHit), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TpcRawHit::Dictionary, isa_proxy, 4,
                  sizeof(::TpcRawHit) );
      instance.SetDelete(&delete_TpcRawHit);
      instance.SetDeleteArray(&deleteArray_TpcRawHit);
      instance.SetDestructor(&destruct_TpcRawHit);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TpcRawHit*)
   {
      return GenerateInitInstanceLocal(static_cast<::TpcRawHit*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TpcRawHit*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr TpcRawHit::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TpcRawHit::Class_Name()
{
   return "TpcRawHit";
}

//______________________________________________________________________________
const char *TpcRawHit::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TpcRawHit*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TpcRawHit::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TpcRawHit*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TpcRawHit::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TpcRawHit*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TpcRawHit::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TpcRawHit*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void TpcRawHit::Streamer(TBuffer &R__b)
{
   // Stream an object of class TpcRawHit.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TpcRawHit::Class(),this);
   } else {
      R__b.WriteClassBuffer(TpcRawHit::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TpcRawHit(void *p) {
      delete (static_cast<::TpcRawHit*>(p));
   }
   static void deleteArray_TpcRawHit(void *p) {
      delete [] (static_cast<::TpcRawHit*>(p));
   }
   static void destruct_TpcRawHit(void *p) {
      typedef ::TpcRawHit current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TpcRawHit

namespace {
  void TriggerDictionaryInitialization_TpcRawHit_Dict_Impl() {
    static const char* headers[] = {
"0",
nullptr
    };
    static const char* includePaths[] = {
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "TpcRawHit_Dict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
class TpcRawHit;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "TpcRawHit_Dict dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#ifndef FUN4ALLRAW_TPCRAWTHIT_H
#define FUN4ALLRAW_TPCRAWTHIT_H

#include <phool/PHObject.h>

#include <limits>

class TpcRawHit : public PHObject
{
 public:
  TpcRawHit() = default;
  virtual ~TpcRawHit() = default;

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

  virtual uint16_t get_samples() const { return std::numeric_limits<uint16_t>::max(); }
  virtual void set_samples(const uint16_t) { return; }

  virtual uint16_t get_adc(const uint16_t /*sample*/) const { return std::numeric_limits<uint16_t>::max(); }
  virtual void set_adc(const uint16_t /*sample*/, const uint16_t) { return; }

  virtual uint16_t get_type() const { return std::numeric_limits<uint16_t>::max(); }
  virtual void set_type(const uint16_t) { return; }

  virtual uint16_t get_userword() const { return std::numeric_limits<uint16_t>::max(); }
  virtual void set_userword(const uint16_t) { return; }

  virtual uint16_t get_checksum() const { return std::numeric_limits<uint16_t>::max(); }
  virtual void set_checksum(const uint16_t /*i*/) { return; }

  virtual uint16_t get_parity() const { return std::numeric_limits<uint16_t>::max(); }
  virtual void set_parity(const uint16_t /*i*/) { return; }

  //! FEE waveform CRC check. If true, FEE data transmission from FEE to offline is broken
  virtual bool get_checksumerror() const { return false; }
  virtual void set_checksumerror(const bool /*b*/) { return; }

  //! SAMPA data payload parity check. If true, data from SAMPA is broken, e.g. from SEU 
  virtual bool get_parityerror() const { return false; }
  virtual void set_parityerror(const bool /*b*/) { return; }

  class AdcIterator
  {
   public:
    AdcIterator() = default;
    virtual ~AdcIterator() = default;
    virtual void First() = 0;
    virtual void Next() = 0;
    virtual bool IsDone() const = 0;
    virtual uint16_t CurrentTimeBin() const = 0;
    virtual uint16_t CurrentAdc() const = 0;
  };
  virtual AdcIterator* CreateAdcIterator() const = 0;

 private:
  ClassDefOverride(TpcRawHit, 0)
};

#endif

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"TpcRawHit", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("TpcRawHit_Dict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_TpcRawHit_Dict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_TpcRawHit_Dict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_TpcRawHit_Dict() {
  TriggerDictionaryInitialization_TpcRawHit_Dict_Impl();
}
