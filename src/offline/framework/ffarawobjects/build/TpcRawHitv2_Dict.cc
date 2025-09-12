// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME TpcRawHitv2_Dict
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
#include "../TpcRawHitv2.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static void *new_TpcRawHitv2(void *p = nullptr);
   static void *newArray_TpcRawHitv2(Long_t size, void *p);
   static void delete_TpcRawHitv2(void *p);
   static void deleteArray_TpcRawHitv2(void *p);
   static void destruct_TpcRawHitv2(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TpcRawHitv2*)
   {
      ::TpcRawHitv2 *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TpcRawHitv2 >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TpcRawHitv2", ::TpcRawHitv2::Class_Version(), "", 14,
                  typeid(::TpcRawHitv2), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TpcRawHitv2::Dictionary, isa_proxy, 4,
                  sizeof(::TpcRawHitv2) );
      instance.SetNew(&new_TpcRawHitv2);
      instance.SetNewArray(&newArray_TpcRawHitv2);
      instance.SetDelete(&delete_TpcRawHitv2);
      instance.SetDeleteArray(&deleteArray_TpcRawHitv2);
      instance.SetDestructor(&destruct_TpcRawHitv2);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TpcRawHitv2*)
   {
      return GenerateInitInstanceLocal(static_cast<::TpcRawHitv2*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TpcRawHitv2*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr TpcRawHitv2::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TpcRawHitv2::Class_Name()
{
   return "TpcRawHitv2";
}

//______________________________________________________________________________
const char *TpcRawHitv2::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TpcRawHitv2*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TpcRawHitv2::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TpcRawHitv2*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TpcRawHitv2::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TpcRawHitv2*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TpcRawHitv2::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TpcRawHitv2*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void TpcRawHitv2::Streamer(TBuffer &R__b)
{
   // Stream an object of class TpcRawHitv2.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TpcRawHitv2::Class(),this);
   } else {
      R__b.WriteClassBuffer(TpcRawHitv2::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TpcRawHitv2(void *p) {
      return  p ? new(p) ::TpcRawHitv2 : new ::TpcRawHitv2;
   }
   static void *newArray_TpcRawHitv2(Long_t nElements, void *p) {
      return p ? new(p) ::TpcRawHitv2[nElements] : new ::TpcRawHitv2[nElements];
   }
   // Wrapper around operator delete
   static void delete_TpcRawHitv2(void *p) {
      delete (static_cast<::TpcRawHitv2*>(p));
   }
   static void deleteArray_TpcRawHitv2(void *p) {
      delete [] (static_cast<::TpcRawHitv2*>(p));
   }
   static void destruct_TpcRawHitv2(void *p) {
      typedef ::TpcRawHitv2 current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TpcRawHitv2

namespace ROOT {
   static TClass *maplEunsignedsPshortcOunsignedsPshortgR_Dictionary();
   static void maplEunsignedsPshortcOunsignedsPshortgR_TClassManip(TClass*);
   static void *new_maplEunsignedsPshortcOunsignedsPshortgR(void *p = nullptr);
   static void *newArray_maplEunsignedsPshortcOunsignedsPshortgR(Long_t size, void *p);
   static void delete_maplEunsignedsPshortcOunsignedsPshortgR(void *p);
   static void deleteArray_maplEunsignedsPshortcOunsignedsPshortgR(void *p);
   static void destruct_maplEunsignedsPshortcOunsignedsPshortgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<unsigned short,unsigned short>*)
   {
      map<unsigned short,unsigned short> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<unsigned short,unsigned short>));
      static ::ROOT::TGenericClassInfo 
         instance("map<unsigned short,unsigned short>", -2, "map", 102,
                  typeid(map<unsigned short,unsigned short>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEunsignedsPshortcOunsignedsPshortgR_Dictionary, isa_proxy, 0,
                  sizeof(map<unsigned short,unsigned short>) );
      instance.SetNew(&new_maplEunsignedsPshortcOunsignedsPshortgR);
      instance.SetNewArray(&newArray_maplEunsignedsPshortcOunsignedsPshortgR);
      instance.SetDelete(&delete_maplEunsignedsPshortcOunsignedsPshortgR);
      instance.SetDeleteArray(&deleteArray_maplEunsignedsPshortcOunsignedsPshortgR);
      instance.SetDestructor(&destruct_maplEunsignedsPshortcOunsignedsPshortgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<unsigned short,unsigned short> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("map<unsigned short,unsigned short>","std::map<unsigned short, unsigned short, std::less<unsigned short>, std::allocator<std::pair<unsigned short const, unsigned short> > >"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const map<unsigned short,unsigned short>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEunsignedsPshortcOunsignedsPshortgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const map<unsigned short,unsigned short>*>(nullptr))->GetClass();
      maplEunsignedsPshortcOunsignedsPshortgR_TClassManip(theClass);
   return theClass;
   }

   static void maplEunsignedsPshortcOunsignedsPshortgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEunsignedsPshortcOunsignedsPshortgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) map<unsigned short,unsigned short> : new map<unsigned short,unsigned short>;
   }
   static void *newArray_maplEunsignedsPshortcOunsignedsPshortgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) map<unsigned short,unsigned short>[nElements] : new map<unsigned short,unsigned short>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEunsignedsPshortcOunsignedsPshortgR(void *p) {
      delete (static_cast<map<unsigned short,unsigned short>*>(p));
   }
   static void deleteArray_maplEunsignedsPshortcOunsignedsPshortgR(void *p) {
      delete [] (static_cast<map<unsigned short,unsigned short>*>(p));
   }
   static void destruct_maplEunsignedsPshortcOunsignedsPshortgR(void *p) {
      typedef map<unsigned short,unsigned short> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class map<unsigned short,unsigned short>

namespace {
  void TriggerDictionaryInitialization_TpcRawHitv2_Dict_Impl() {
    static const char* headers[] = {
"0",
nullptr
    };
    static const char* includePaths[] = {
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "TpcRawHitv2_Dict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
class TpcRawHitv2;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "TpcRawHitv2_Dict dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#ifndef FUN4ALLRAW_TPCRAWTHITV2_H
#define FUN4ALLRAW_TPCRAWTHITV2_H

#include "TpcRawHit.h"

#include <phool/PHObject.h>

#include <cassert>
#include <limits>
#include <map>

class TpcRawHitv2 : public TpcRawHit
{
 public:
  TpcRawHitv2() = default;
  TpcRawHitv2(TpcRawHit *tpchit);
  ~TpcRawHitv2() override = default;

  /** identify Function from PHObject
      @param os Output Stream
   */
  void identify(std::ostream &os = std::cout) const override;

  void Clear(Option_t *) override;

  uint64_t get_bco() const override { return bco; }
  // cppcheck-suppress virtualCallInConstructor
  void set_bco(const uint64_t val) override { bco = val; }

  uint64_t get_gtm_bco() const override { return gtm_bco; }
  // cppcheck-suppress virtualCallInConstructor
  void set_gtm_bco(const uint64_t val) override { gtm_bco = val; }

  int32_t get_packetid() const override { return packetid; }
  // cppcheck-suppress virtualCallInConstructor
  void set_packetid(const int32_t val) override { packetid = val; }

  uint16_t get_fee() const override { return fee; }
  // cppcheck-suppress virtualCallInConstructor
  void set_fee(const uint16_t val) override { fee = val; }

  uint16_t get_channel() const override { return channel; }
  // cppcheck-suppress virtualCallInConstructor
  void set_channel(const uint16_t val) override { channel = val; }

  uint16_t get_sampaaddress() const override { return sampaaddress; }
  // cppcheck-suppress virtualCallInConstructor
  void set_sampaaddress(const uint16_t val) override { sampaaddress = val; }

  uint16_t get_sampachannel() const override { return sampachannel; }
  // cppcheck-suppress virtualCallInConstructor
  void set_sampachannel(const uint16_t val) override { sampachannel = val; }

  uint16_t get_samples() const override { return samples; }
  // cppcheck-suppress virtualCallInConstructor
  void set_samples(const uint16_t val) override
  {
    // assign
    samples = val;
  }

  uint16_t get_adc(const uint16_t sample) const override;

  // cppcheck-suppress virtualCallInConstructor
  void set_adc(const uint16_t sample, const uint16_t val) override
  {
    adcmap[sample] = val;
  }

  uint16_t get_type() const override { return type; }
  void set_type(const uint16_t i) override { type = i; }

  uint16_t get_userword() const override { return userword; }
  void set_userword(const uint16_t i) override { userword = i; }

  uint16_t get_checksum() const override { return checksum; }
  void set_checksum(const uint16_t i) override { checksum = i; }

  uint16_t get_parity() const override { return data_parity; }
  void set_parity(const uint16_t i) override { data_parity = i; }

  bool get_checksumerror() const override { return checksumerror; }
  void set_checksumerror(const bool b) override { checksumerror = b; }

  bool get_parityerror() const override { return parityerror; }
  void set_parityerror(const bool b) override { parityerror = b; }

  class AdcIteratorv2 : public AdcIterator
  {
   private:
    const std::map<uint16_t, uint16_t> &m_adc;
    std::map<uint16_t, uint16_t>::const_iterator m_iterator;

   public:
    // NOLINTNEXTLINE(hicpp-member-init)
    explicit AdcIteratorv2(const std::map<uint16_t, uint16_t> &adc)
      : m_adc(adc)
      , m_iterator(adc.begin())
    {
    }

    void First() override { m_iterator = m_adc.begin(); }

    void Next() override { ++m_iterator; }

    bool IsDone() const override { return m_iterator == m_adc.end(); }

    uint16_t CurrentTimeBin() const override
    {
      if (!IsDone())
      {
        return m_iterator->first;
      }
      return std::numeric_limits<uint16_t>::max();  // Or throw an exception
    }
    uint16_t CurrentAdc() const override
    {
      if (!IsDone())
      {
        return m_iterator->second;
      }
      return std::numeric_limits<uint16_t>::max();  // Or throw an exception
    }
  };

  AdcIterator *CreateAdcIterator() const override { return new AdcIteratorv2(adcmap); }

 private:
  uint64_t bco{std::numeric_limits<uint64_t>::max()};
  uint64_t gtm_bco{std::numeric_limits<uint64_t>::max()};
  int32_t packetid{std::numeric_limits<int32_t>::max()};
  uint16_t fee{std::numeric_limits<uint16_t>::max()};
  uint16_t channel{std::numeric_limits<uint16_t>::max()};
  uint16_t sampaaddress{std::numeric_limits<uint16_t>::max()};
  uint16_t sampachannel{std::numeric_limits<uint16_t>::max()};
  uint16_t samples{std::numeric_limits<uint16_t>::max()};
  uint16_t type{std::numeric_limits<uint16_t>::max()};
  uint16_t userword{std::numeric_limits<uint16_t>::max()};
  uint16_t checksum{std::numeric_limits<uint16_t>::max()};
  uint16_t data_parity{std::numeric_limits<uint16_t>::max()};

  bool checksumerror{true};
  bool parityerror{true};

  //! adc value for each sample
  std::map<uint16_t, uint16_t> adcmap;

  ClassDefOverride(TpcRawHitv2, 1)
};

#endif

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"TpcRawHitv2", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("TpcRawHitv2_Dict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_TpcRawHitv2_Dict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_TpcRawHitv2_Dict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_TpcRawHitv2_Dict() {
  TriggerDictionaryInitialization_TpcRawHitv2_Dict_Impl();
}
