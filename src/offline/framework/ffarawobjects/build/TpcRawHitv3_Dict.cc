// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME TpcRawHitv3_Dict
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
#include "../TpcRawHitv3.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static void *new_TpcRawHitv3(void *p = nullptr);
   static void *newArray_TpcRawHitv3(Long_t size, void *p);
   static void delete_TpcRawHitv3(void *p);
   static void deleteArray_TpcRawHitv3(void *p);
   static void destruct_TpcRawHitv3(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TpcRawHitv3*)
   {
      ::TpcRawHitv3 *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TpcRawHitv3 >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TpcRawHitv3", ::TpcRawHitv3::Class_Version(), "", 16,
                  typeid(::TpcRawHitv3), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TpcRawHitv3::Dictionary, isa_proxy, 4,
                  sizeof(::TpcRawHitv3) );
      instance.SetNew(&new_TpcRawHitv3);
      instance.SetNewArray(&newArray_TpcRawHitv3);
      instance.SetDelete(&delete_TpcRawHitv3);
      instance.SetDeleteArray(&deleteArray_TpcRawHitv3);
      instance.SetDestructor(&destruct_TpcRawHitv3);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TpcRawHitv3*)
   {
      return GenerateInitInstanceLocal(static_cast<::TpcRawHitv3*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TpcRawHitv3*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr TpcRawHitv3::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TpcRawHitv3::Class_Name()
{
   return "TpcRawHitv3";
}

//______________________________________________________________________________
const char *TpcRawHitv3::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TpcRawHitv3*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TpcRawHitv3::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TpcRawHitv3*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TpcRawHitv3::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TpcRawHitv3*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TpcRawHitv3::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TpcRawHitv3*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void TpcRawHitv3::Streamer(TBuffer &R__b)
{
   // Stream an object of class TpcRawHitv3.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TpcRawHitv3::Class(),this);
   } else {
      R__b.WriteClassBuffer(TpcRawHitv3::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TpcRawHitv3(void *p) {
      return  p ? new(p) ::TpcRawHitv3 : new ::TpcRawHitv3;
   }
   static void *newArray_TpcRawHitv3(Long_t nElements, void *p) {
      return p ? new(p) ::TpcRawHitv3[nElements] : new ::TpcRawHitv3[nElements];
   }
   // Wrapper around operator delete
   static void delete_TpcRawHitv3(void *p) {
      delete (static_cast<::TpcRawHitv3*>(p));
   }
   static void deleteArray_TpcRawHitv3(void *p) {
      delete [] (static_cast<::TpcRawHitv3*>(p));
   }
   static void destruct_TpcRawHitv3(void *p) {
      typedef ::TpcRawHitv3 current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TpcRawHitv3

namespace ROOT {
   static TClass *vectorlEpairlEunsignedsPshortcOvectorlEunsignedsPshortgRsPgRsPgR_Dictionary();
   static void vectorlEpairlEunsignedsPshortcOvectorlEunsignedsPshortgRsPgRsPgR_TClassManip(TClass*);
   static void *new_vectorlEpairlEunsignedsPshortcOvectorlEunsignedsPshortgRsPgRsPgR(void *p = nullptr);
   static void *newArray_vectorlEpairlEunsignedsPshortcOvectorlEunsignedsPshortgRsPgRsPgR(Long_t size, void *p);
   static void delete_vectorlEpairlEunsignedsPshortcOvectorlEunsignedsPshortgRsPgRsPgR(void *p);
   static void deleteArray_vectorlEpairlEunsignedsPshortcOvectorlEunsignedsPshortgRsPgRsPgR(void *p);
   static void destruct_vectorlEpairlEunsignedsPshortcOvectorlEunsignedsPshortgRsPgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<pair<unsigned short,vector<unsigned short> > >*)
   {
      vector<pair<unsigned short,vector<unsigned short> > > *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<pair<unsigned short,vector<unsigned short> > >));
      static ::ROOT::TGenericClassInfo 
         instance("vector<pair<unsigned short,vector<unsigned short> > >", -2, "vector", 428,
                  typeid(vector<pair<unsigned short,vector<unsigned short> > >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEpairlEunsignedsPshortcOvectorlEunsignedsPshortgRsPgRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<pair<unsigned short,vector<unsigned short> > >) );
      instance.SetNew(&new_vectorlEpairlEunsignedsPshortcOvectorlEunsignedsPshortgRsPgRsPgR);
      instance.SetNewArray(&newArray_vectorlEpairlEunsignedsPshortcOvectorlEunsignedsPshortgRsPgRsPgR);
      instance.SetDelete(&delete_vectorlEpairlEunsignedsPshortcOvectorlEunsignedsPshortgRsPgRsPgR);
      instance.SetDeleteArray(&deleteArray_vectorlEpairlEunsignedsPshortcOvectorlEunsignedsPshortgRsPgRsPgR);
      instance.SetDestructor(&destruct_vectorlEpairlEunsignedsPshortcOvectorlEunsignedsPshortgRsPgRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<pair<unsigned short,vector<unsigned short> > > >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<pair<unsigned short,vector<unsigned short> > >","std::vector<std::pair<unsigned short, std::vector<unsigned short, std::allocator<unsigned short> > >, std::allocator<std::pair<unsigned short, std::vector<unsigned short, std::allocator<unsigned short> > > > >"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<pair<unsigned short,vector<unsigned short> > >*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEpairlEunsignedsPshortcOvectorlEunsignedsPshortgRsPgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<pair<unsigned short,vector<unsigned short> > >*>(nullptr))->GetClass();
      vectorlEpairlEunsignedsPshortcOvectorlEunsignedsPshortgRsPgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEpairlEunsignedsPshortcOvectorlEunsignedsPshortgRsPgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEpairlEunsignedsPshortcOvectorlEunsignedsPshortgRsPgRsPgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<pair<unsigned short,vector<unsigned short> > > : new vector<pair<unsigned short,vector<unsigned short> > >;
   }
   static void *newArray_vectorlEpairlEunsignedsPshortcOvectorlEunsignedsPshortgRsPgRsPgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<pair<unsigned short,vector<unsigned short> > >[nElements] : new vector<pair<unsigned short,vector<unsigned short> > >[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEpairlEunsignedsPshortcOvectorlEunsignedsPshortgRsPgRsPgR(void *p) {
      delete (static_cast<vector<pair<unsigned short,vector<unsigned short> > >*>(p));
   }
   static void deleteArray_vectorlEpairlEunsignedsPshortcOvectorlEunsignedsPshortgRsPgRsPgR(void *p) {
      delete [] (static_cast<vector<pair<unsigned short,vector<unsigned short> > >*>(p));
   }
   static void destruct_vectorlEpairlEunsignedsPshortcOvectorlEunsignedsPshortgRsPgRsPgR(void *p) {
      typedef vector<pair<unsigned short,vector<unsigned short> > > current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<pair<unsigned short,vector<unsigned short> > >

namespace {
  void TriggerDictionaryInitialization_TpcRawHitv3_Dict_Impl() {
    static const char* headers[] = {
"0",
nullptr
    };
    static const char* includePaths[] = {
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "TpcRawHitv3_Dict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
class TpcRawHitv3;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "TpcRawHitv3_Dict dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#ifndef FUN4ALLRAW_TPCRAWTHITv3_H
#define FUN4ALLRAW_TPCRAWTHITv3_H

#include "TpcRawHit.h"

#include <phool/PHObject.h>

#include <cassert>
#include <limits>
#include <utility>
#include <vector>

// NOLINTNEXTLINE(hicpp-special-member-functions)
class TpcRawHitv3 : public TpcRawHit
{
 public:
  TpcRawHitv3() = default;
  explicit TpcRawHitv3(TpcRawHit *tpchit);
  TpcRawHitv3(TpcRawHitv3 &&other) noexcept;

  ~TpcRawHitv3() override = default;

  /** identify Function from PHObject
      @param os Output Stream
   */
  void identify(std::ostream &os = std::cout) const override;

  void Clear(Option_t * /*unused*/) override;

  uint64_t get_bco() const override { return bco; }
  // cppcheck-suppress virtualCallInConstructor
  void set_bco(const uint64_t val) override { bco = val; }

  //   uint64_t get_gtm_bco() const override { return gtm_bco; }
  //   // cppcheck-suppress virtualCallInConstructor
  //   void set_gtm_bco(const uint64_t val) override { gtm_bco = val; }

  int32_t get_packetid() const override { return packetid; }
  // cppcheck-suppress virtualCallInConstructor
  void set_packetid(const int32_t val) override { packetid = val; }

  uint16_t get_fee() const override { return fee; }
  // cppcheck-suppress virtualCallInConstructor
  void set_fee(const uint16_t val) override { fee = val; }

  uint16_t get_channel() const override { return channel; }
  // cppcheck-suppress virtualCallInConstructor
  void set_channel(const uint16_t val) override { channel = val; }

  uint16_t get_sampaaddress() const override
  {
    return static_cast<uint16_t>(channel >> 5U) & 0xfU;
  }
  //   // cppcheck-suppress virtualCallInConstructor
  //   void set_sampaaddress(const uint16_t val) override { sampaaddress = val; }

  uint16_t get_sampachannel() const override { return channel & 0x1fU; }
  //   // cppcheck-suppress virtualCallInConstructor
  //   void set_sampachannel(const uint16_t val) override { sampachannel = val; }

  uint16_t get_samples() const override { return 1024U; }
  // cppcheck-suppress virtualCallInConstructor
  //   void set_samples(const uint16_t val) override
  //   {
  //     // assign
  //     samples = val;
  //   }

  uint16_t get_adc(const uint16_t sample) const override;

  // cppcheck-suppress virtualCallInConstructor
  //   void set_adc(const uint16_t sample, const uint16_t val) override
  //   {
  //     adcmap[sample] = val;
  //   }
  void move_adc_waveform(const uint16_t start_time, std::vector<uint16_t> &&adc);

  uint16_t get_type() const override { return type; }
  void set_type(const uint16_t i) override { type = i; }

  // uint16_t get_userword() const override { return userword; }
  // void set_userword(const uint16_t i) override { userword = i; }

  // uint16_t get_checksum() const override { return checksum; }
  // void set_checksum(const uint16_t i) override { checksum = i; }

  // uint16_t get_parity() const override { return data_parity; }
  // void set_parity(const uint16_t i) override { data_parity = i; }

  bool get_checksumerror() const override { return checksumerror; }
  void set_checksumerror(const bool b) override { checksumerror = b; }

  bool get_parityerror() const override { return parityerror; }
  void set_parityerror(const bool b) override { parityerror = b; }

  class AdcIteratorv3 : public AdcIterator
  {
   private:
    const std::vector<std::pair<uint16_t, std::vector<uint16_t> > > &m_adc;
    uint16_t m_waveform_index = 0;
    uint16_t m_adc_position_in_waveform_index = 0;

   public:
    // NOLINTNEXTLINE(hicpp-named-parameter)
    explicit AdcIteratorv3(const std::vector<std::pair<uint16_t, std::vector<uint16_t> > > &adc)
      : m_adc(adc)
    {
    }

    void First() override
    {
      m_waveform_index = 0;
      m_adc_position_in_waveform_index = 0;
    }

    void Next() override
    {
      if (IsDone()) return;
      
      // NOLINTNEXTLINE(bugprone-branch-clone)
      if (m_adc_position_in_waveform_index + 1U < m_adc[m_waveform_index].second.size())
      {
        ++m_adc_position_in_waveform_index;
      }
      else
      { 
        // advance to the next valid waveform
        m_adc_position_in_waveform_index = 0;

        while (true)
        {
          ++m_waveform_index;

          if (m_waveform_index >= m_adc.size())
          {
            break;
          }
          if (not m_adc[m_waveform_index].second.empty())
          {
            break;
          }
        }
      }
    }

    bool IsDone() const override { return m_waveform_index >= m_adc.size(); }

    uint16_t CurrentTimeBin() const override
    {
      if (!IsDone())
      {
        return m_adc[m_waveform_index].first + m_adc_position_in_waveform_index;
      }
      return std::numeric_limits<uint16_t>::max();  // Or throw an exception
    }
    uint16_t CurrentAdc() const override
    {
      if (!IsDone())
      {
        // NOLINTNEXTLINE(bugprone-branch-clone)
        if (m_adc_position_in_waveform_index < m_adc[m_waveform_index].second.size())
        {
          return m_adc[m_waveform_index].second[m_adc_position_in_waveform_index];
        }
        else
        {
          return std::numeric_limits<uint16_t>::max();  // Or throw an exception
        }
      }
      return std::numeric_limits<uint16_t>::max();  // Or throw an exception
    }
  };

  AdcIterator *CreateAdcIterator() const override { return new AdcIteratorv3(m_adcData); }

 private:
  uint64_t bco{std::numeric_limits<uint64_t>::max()};
  int32_t packetid{std::numeric_limits<int32_t>::max()};
  uint16_t fee{std::numeric_limits<uint16_t>::max()};
  uint16_t channel{std::numeric_limits<uint16_t>::max()};
  uint16_t type{std::numeric_limits<uint16_t>::max()};
  // uint16_t checksum{std::numeric_limits<uint16_t>::max()};
  // uint16_t data_parity{std::numeric_limits<uint16_t>::max()};

  bool checksumerror{true};
  bool parityerror{true};

  //! adc waveform std::vector< uint16_t > for each start time uint16_t
  std::vector<std::pair<uint16_t, std::vector<uint16_t> > > m_adcData;

  ClassDefOverride(TpcRawHitv3, 2)
};

#endif

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"TpcRawHitv3", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("TpcRawHitv3_Dict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_TpcRawHitv3_Dict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_TpcRawHitv3_Dict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_TpcRawHitv3_Dict() {
  TriggerDictionaryInitialization_TpcRawHitv3_Dict_Impl();
}
