// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME TpcRawHitv1_Dict
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
#include "../TpcRawHitv1.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static void *new_TpcRawHitv1(void *p = nullptr);
   static void *newArray_TpcRawHitv1(Long_t size, void *p);
   static void delete_TpcRawHitv1(void *p);
   static void deleteArray_TpcRawHitv1(void *p);
   static void destruct_TpcRawHitv1(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TpcRawHitv1*)
   {
      ::TpcRawHitv1 *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TpcRawHitv1 >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TpcRawHitv1", ::TpcRawHitv1::Class_Version(), "", 13,
                  typeid(::TpcRawHitv1), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TpcRawHitv1::Dictionary, isa_proxy, 4,
                  sizeof(::TpcRawHitv1) );
      instance.SetNew(&new_TpcRawHitv1);
      instance.SetNewArray(&newArray_TpcRawHitv1);
      instance.SetDelete(&delete_TpcRawHitv1);
      instance.SetDeleteArray(&deleteArray_TpcRawHitv1);
      instance.SetDestructor(&destruct_TpcRawHitv1);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TpcRawHitv1*)
   {
      return GenerateInitInstanceLocal(static_cast<::TpcRawHitv1*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TpcRawHitv1*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr TpcRawHitv1::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TpcRawHitv1::Class_Name()
{
   return "TpcRawHitv1";
}

//______________________________________________________________________________
const char *TpcRawHitv1::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TpcRawHitv1*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TpcRawHitv1::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TpcRawHitv1*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TpcRawHitv1::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TpcRawHitv1*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TpcRawHitv1::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TpcRawHitv1*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void TpcRawHitv1::Streamer(TBuffer &R__b)
{
   // Stream an object of class TpcRawHitv1.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TpcRawHitv1::Class(),this);
   } else {
      R__b.WriteClassBuffer(TpcRawHitv1::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TpcRawHitv1(void *p) {
      return  p ? new(p) ::TpcRawHitv1 : new ::TpcRawHitv1;
   }
   static void *newArray_TpcRawHitv1(Long_t nElements, void *p) {
      return p ? new(p) ::TpcRawHitv1[nElements] : new ::TpcRawHitv1[nElements];
   }
   // Wrapper around operator delete
   static void delete_TpcRawHitv1(void *p) {
      delete (static_cast<::TpcRawHitv1*>(p));
   }
   static void deleteArray_TpcRawHitv1(void *p) {
      delete [] (static_cast<::TpcRawHitv1*>(p));
   }
   static void destruct_TpcRawHitv1(void *p) {
      typedef ::TpcRawHitv1 current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TpcRawHitv1

namespace ROOT {
   static TClass *vectorlEunsignedsPshortgR_Dictionary();
   static void vectorlEunsignedsPshortgR_TClassManip(TClass*);
   static void *new_vectorlEunsignedsPshortgR(void *p = nullptr);
   static void *newArray_vectorlEunsignedsPshortgR(Long_t size, void *p);
   static void delete_vectorlEunsignedsPshortgR(void *p);
   static void deleteArray_vectorlEunsignedsPshortgR(void *p);
   static void destruct_vectorlEunsignedsPshortgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<unsigned short>*)
   {
      vector<unsigned short> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<unsigned short>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<unsigned short>", -2, "vector", 428,
                  typeid(vector<unsigned short>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEunsignedsPshortgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<unsigned short>) );
      instance.SetNew(&new_vectorlEunsignedsPshortgR);
      instance.SetNewArray(&newArray_vectorlEunsignedsPshortgR);
      instance.SetDelete(&delete_vectorlEunsignedsPshortgR);
      instance.SetDeleteArray(&deleteArray_vectorlEunsignedsPshortgR);
      instance.SetDestructor(&destruct_vectorlEunsignedsPshortgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<unsigned short> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<unsigned short>","std::vector<unsigned short, std::allocator<unsigned short> >"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<unsigned short>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEunsignedsPshortgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<unsigned short>*>(nullptr))->GetClass();
      vectorlEunsignedsPshortgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEunsignedsPshortgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEunsignedsPshortgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<unsigned short> : new vector<unsigned short>;
   }
   static void *newArray_vectorlEunsignedsPshortgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<unsigned short>[nElements] : new vector<unsigned short>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEunsignedsPshortgR(void *p) {
      delete (static_cast<vector<unsigned short>*>(p));
   }
   static void deleteArray_vectorlEunsignedsPshortgR(void *p) {
      delete [] (static_cast<vector<unsigned short>*>(p));
   }
   static void destruct_vectorlEunsignedsPshortgR(void *p) {
      typedef vector<unsigned short> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<unsigned short>

namespace {
  void TriggerDictionaryInitialization_TpcRawHitv1_Dict_Impl() {
    static const char* headers[] = {
"0",
nullptr
    };
    static const char* includePaths[] = {
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "TpcRawHitv1_Dict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
class TpcRawHitv1;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "TpcRawHitv1_Dict dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#ifndef FUN4ALLRAW_TPCRAWTHITV1_H
#define FUN4ALLRAW_TPCRAWTHITV1_H

#include "TpcRawHit.h"

#include <phool/PHObject.h>

#include <cassert>
#include <limits>

class TpcRawHitv1 : public TpcRawHit
{
 public:
  TpcRawHitv1() = default;
  TpcRawHitv1(TpcRawHit* tpchit);
  ~TpcRawHitv1() override = default;

  /** identify Function from PHObject
      @param os Output Stream
   */
  void identify(std::ostream& os = std::cout) const override;

  void Clear(Option_t*) override;

  uint64_t get_bco() const override { return bco; }

  void set_bco(const uint64_t val) override { bco = val; }

  uint64_t get_gtm_bco() const override { return gtm_bco; }
  void set_gtm_bco(const uint64_t val) override { gtm_bco = val; }

  int32_t get_packetid() const override { return packetid; }
  void set_packetid(const int32_t val) override { packetid = val; }

  uint16_t get_fee() const override { return fee; }
  void set_fee(const uint16_t val) override { fee = val; }

  uint16_t get_channel() const override { return channel; }
  void set_channel(const uint16_t val) override { channel = val; }

  uint16_t get_sampaaddress() const override { return sampaaddress; }
  void set_sampaaddress(const uint16_t val) override { sampaaddress = val; }

  uint16_t get_sampachannel() const override { return sampachannel; }
  void set_sampachannel(const uint16_t val) override { sampachannel = val; }

  uint16_t get_samples() const override { return samples; }
  void set_samples(const uint16_t val) override
  {
    // assign
    samples = val;

    // resize adc vector
    adc.resize(val, 0);
  }

  uint16_t get_adc(uint16_t sample) const override
  {
    assert(sample < adc.size());
    return adc[sample];
  }

  // cppcheck-suppress virtualCallInConstructor
  void set_adc(uint16_t sample, uint16_t val) override
  {
    assert(sample < adc.size());
    adc[sample] = val;
  }


  class AdcIteratorv1 : public AdcIterator
    {
     private:
      const std::vector<uint16_t> & m_adc;
      uint16_t m_index = 0;

     public:
      explicit AdcIteratorv1(const std::vector<uint16_t> & adc)
        : m_adc(adc)
      {
      }

      void First() override { m_index = 0; }

      void Next() override { ++m_index; }

      bool IsDone() const override { return m_index >= m_adc.size(); }

      uint16_t CurrentTimeBin() const override
      {
        return m_index;   
      }
      uint16_t CurrentAdc() const override
      {
        if (!IsDone())
        {
          return m_adc[m_index];
        }
        return std::numeric_limits<uint16_t>::max();  // Or throw an exception
      }
    };

    AdcIterator* CreateAdcIterator() const override { return new AdcIteratorv1(adc); }

   private:
    uint64_t bco = std::numeric_limits<uint64_t>::max();
    uint64_t gtm_bco = std::numeric_limits<uint64_t>::max();
    int32_t packetid = std::numeric_limits<int32_t>::max();
    uint16_t fee = std::numeric_limits<uint16_t>::max();
    uint16_t channel = std::numeric_limits<uint16_t>::max();
    uint16_t sampaaddress = std::numeric_limits<uint16_t>::max();
    uint16_t sampachannel = std::numeric_limits<uint16_t>::max();
    uint16_t samples = std::numeric_limits<uint16_t>::max();

    //! adc value for each sample
    std::vector<uint16_t> adc;

    ClassDefOverride(TpcRawHitv1, 1)
  };

#endif

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"TpcRawHitv1", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("TpcRawHitv1_Dict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_TpcRawHitv1_Dict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_TpcRawHitv1_Dict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_TpcRawHitv1_Dict() {
  TriggerDictionaryInitialization_TpcRawHitv1_Dict_Impl();
}
