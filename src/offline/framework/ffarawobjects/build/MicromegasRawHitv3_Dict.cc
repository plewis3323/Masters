// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME MicromegasRawHitv3_Dict
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
#include "../MicromegasRawHitv3.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static void *new_MicromegasRawHitv3(void *p = nullptr);
   static void *newArray_MicromegasRawHitv3(Long_t size, void *p);
   static void delete_MicromegasRawHitv3(void *p);
   static void deleteArray_MicromegasRawHitv3(void *p);
   static void destruct_MicromegasRawHitv3(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::MicromegasRawHitv3*)
   {
      ::MicromegasRawHitv3 *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::MicromegasRawHitv3 >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("MicromegasRawHitv3", ::MicromegasRawHitv3::Class_Version(), "", 16,
                  typeid(::MicromegasRawHitv3), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::MicromegasRawHitv3::Dictionary, isa_proxy, 4,
                  sizeof(::MicromegasRawHitv3) );
      instance.SetNew(&new_MicromegasRawHitv3);
      instance.SetNewArray(&newArray_MicromegasRawHitv3);
      instance.SetDelete(&delete_MicromegasRawHitv3);
      instance.SetDeleteArray(&deleteArray_MicromegasRawHitv3);
      instance.SetDestructor(&destruct_MicromegasRawHitv3);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::MicromegasRawHitv3*)
   {
      return GenerateInitInstanceLocal(static_cast<::MicromegasRawHitv3*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::MicromegasRawHitv3*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr MicromegasRawHitv3::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *MicromegasRawHitv3::Class_Name()
{
   return "MicromegasRawHitv3";
}

//______________________________________________________________________________
const char *MicromegasRawHitv3::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::MicromegasRawHitv3*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int MicromegasRawHitv3::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::MicromegasRawHitv3*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *MicromegasRawHitv3::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::MicromegasRawHitv3*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *MicromegasRawHitv3::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::MicromegasRawHitv3*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void MicromegasRawHitv3::Streamer(TBuffer &R__b)
{
   // Stream an object of class MicromegasRawHitv3.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(MicromegasRawHitv3::Class(),this);
   } else {
      R__b.WriteClassBuffer(MicromegasRawHitv3::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_MicromegasRawHitv3(void *p) {
      return  p ? new(p) ::MicromegasRawHitv3 : new ::MicromegasRawHitv3;
   }
   static void *newArray_MicromegasRawHitv3(Long_t nElements, void *p) {
      return p ? new(p) ::MicromegasRawHitv3[nElements] : new ::MicromegasRawHitv3[nElements];
   }
   // Wrapper around operator delete
   static void delete_MicromegasRawHitv3(void *p) {
      delete (static_cast<::MicromegasRawHitv3*>(p));
   }
   static void deleteArray_MicromegasRawHitv3(void *p) {
      delete [] (static_cast<::MicromegasRawHitv3*>(p));
   }
   static void destruct_MicromegasRawHitv3(void *p) {
      typedef ::MicromegasRawHitv3 current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::MicromegasRawHitv3

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
  void TriggerDictionaryInitialization_MicromegasRawHitv3_Dict_Impl() {
    static const char* headers[] = {
"0",
nullptr
    };
    static const char* includePaths[] = {
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "MicromegasRawHitv3_Dict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
class MicromegasRawHitv3;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "MicromegasRawHitv3_Dict dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#ifndef FUN4ALLRAW_TPCRAWTHITv3_H
#define FUN4ALLRAW_TPCRAWTHITv3_H

#include "MicromegasRawHit.h"

#include <phool/PHObject.h>

#include <cassert>
#include <limits>
#include <utility>
#include <vector>

// NOLINTNEXTLINE(hicpp-special-member-functions)
class MicromegasRawHitv3 : public MicromegasRawHit
{
 public:
  MicromegasRawHitv3() = default;
  explicit MicromegasRawHitv3(MicromegasRawHit*);
  explicit MicromegasRawHitv3(MicromegasRawHitv3 &&other) noexcept;

  /** identify Function from PHObject
      @param os Output Stream
   */
  void identify(std::ostream &os = std::cout) const override;

  void Clear(Option_t */*unused*/) override;

  uint64_t get_bco() const override { return bco; }
  // cppcheck-suppress virtualCallInConstructor
  void set_bco(const uint64_t val) override { bco = val; }

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
  { return static_cast<uint16_t>(channel >> 5U) & 0xfU; }

  uint16_t get_sampachannel() const override { return channel & 0x1fU; }

  // index of the first sample with data
  uint16_t get_sample_begin() const override
  { return m_adcData.empty() ? 0:m_adcData.front().first; }

  // index of the next to last sample with data
  uint16_t get_sample_end() const override
  { return m_adcData.empty() ? 0:m_adcData.back().first+m_adcData.back().second.size(); }

  // get adc value
  uint16_t get_adc(const uint16_t sample) const override;

  //! adc list
  using adc_list_t = std::vector<uint16_t>;

  // set adc values
  void move_adc_waveform(const uint16_t start_time, adc_list_t &&adc);

 private:
  uint64_t bco{std::numeric_limits<uint64_t>::max()};
  int32_t packetid{std::numeric_limits<int32_t>::max()};
  uint16_t fee{std::numeric_limits<uint16_t>::max()};
  uint16_t channel{std::numeric_limits<uint16_t>::max()};
  uint16_t type{std::numeric_limits<uint16_t>::max()};
  uint16_t checksum{std::numeric_limits<uint16_t>::max()};
  uint16_t data_parity{std::numeric_limits<uint16_t>::max()};

  bool checksumerror{true};
  bool parityerror{true};

  //! list of waveforms
  /** each pair contains the start sample of the waveform and the constituting adc values */
  using waveform_pair_t = std::pair<uint16_t,adc_list_t>;
  std::vector<waveform_pair_t> m_adcData;

  ClassDefOverride(MicromegasRawHitv3, 1)
};

#endif

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"MicromegasRawHitv3", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("MicromegasRawHitv3_Dict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_MicromegasRawHitv3_Dict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_MicromegasRawHitv3_Dict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_MicromegasRawHitv3_Dict() {
  TriggerDictionaryInitialization_MicromegasRawHitv3_Dict_Impl();
}
