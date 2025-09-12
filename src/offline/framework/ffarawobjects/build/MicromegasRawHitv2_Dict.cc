// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME MicromegasRawHitv2_Dict
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
#include "../MicromegasRawHitv2.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static void *new_MicromegasRawHitv2(void *p = nullptr);
   static void *newArray_MicromegasRawHitv2(Long_t size, void *p);
   static void delete_MicromegasRawHitv2(void *p);
   static void deleteArray_MicromegasRawHitv2(void *p);
   static void destruct_MicromegasRawHitv2(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::MicromegasRawHitv2*)
   {
      ::MicromegasRawHitv2 *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::MicromegasRawHitv2 >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("MicromegasRawHitv2", ::MicromegasRawHitv2::Class_Version(), "", 14,
                  typeid(::MicromegasRawHitv2), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::MicromegasRawHitv2::Dictionary, isa_proxy, 4,
                  sizeof(::MicromegasRawHitv2) );
      instance.SetNew(&new_MicromegasRawHitv2);
      instance.SetNewArray(&newArray_MicromegasRawHitv2);
      instance.SetDelete(&delete_MicromegasRawHitv2);
      instance.SetDeleteArray(&deleteArray_MicromegasRawHitv2);
      instance.SetDestructor(&destruct_MicromegasRawHitv2);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::MicromegasRawHitv2*)
   {
      return GenerateInitInstanceLocal(static_cast<::MicromegasRawHitv2*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::MicromegasRawHitv2*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr MicromegasRawHitv2::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *MicromegasRawHitv2::Class_Name()
{
   return "MicromegasRawHitv2";
}

//______________________________________________________________________________
const char *MicromegasRawHitv2::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::MicromegasRawHitv2*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int MicromegasRawHitv2::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::MicromegasRawHitv2*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *MicromegasRawHitv2::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::MicromegasRawHitv2*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *MicromegasRawHitv2::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::MicromegasRawHitv2*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void MicromegasRawHitv2::Streamer(TBuffer &R__b)
{
   // Stream an object of class MicromegasRawHitv2.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(MicromegasRawHitv2::Class(),this);
   } else {
      R__b.WriteClassBuffer(MicromegasRawHitv2::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_MicromegasRawHitv2(void *p) {
      return  p ? new(p) ::MicromegasRawHitv2 : new ::MicromegasRawHitv2;
   }
   static void *newArray_MicromegasRawHitv2(Long_t nElements, void *p) {
      return p ? new(p) ::MicromegasRawHitv2[nElements] : new ::MicromegasRawHitv2[nElements];
   }
   // Wrapper around operator delete
   static void delete_MicromegasRawHitv2(void *p) {
      delete (static_cast<::MicromegasRawHitv2*>(p));
   }
   static void deleteArray_MicromegasRawHitv2(void *p) {
      delete [] (static_cast<::MicromegasRawHitv2*>(p));
   }
   static void destruct_MicromegasRawHitv2(void *p) {
      typedef ::MicromegasRawHitv2 current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::MicromegasRawHitv2

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
  void TriggerDictionaryInitialization_MicromegasRawHitv2_Dict_Impl() {
    static const char* headers[] = {
"0",
nullptr
    };
    static const char* includePaths[] = {
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "MicromegasRawHitv2_Dict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
class MicromegasRawHitv2;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "MicromegasRawHitv2_Dict dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#ifndef FUN4ALLRAW_MICROMEGASRAWTHITV2_H
#define FUN4ALLRAW_MICROMEGASRAWTHITV2_H

#include "MicromegasRawHit.h"

#include <phool/PHObject.h>

#include <cassert>
#include <limits>
#include <map>

class MicromegasRawHitv2 : public MicromegasRawHit
{
 public:
  explicit MicromegasRawHitv2() = default;
  explicit MicromegasRawHitv2(MicromegasRawHit*);

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

  // index of the first sample with data
  uint16_t get_sample_begin() const override
  { return adcmap.empty() ? 0:adcmap.begin()->first; }

  // index of the next to last sample with data
  uint16_t get_sample_end() const override
  { return adcmap.empty() ? 0:adcmap.rbegin()->first+1; }

  // adc value for a given sample index
  uint16_t get_adc(const uint16_t sample) const override;

  // cppcheck-suppress virtualCallInConstructor
  void set_adc(const uint16_t sample, const uint16_t val) override
  {
    adcmap[sample] = val;
  }

 private:
  uint64_t bco{std::numeric_limits<uint64_t>::max()};
  uint64_t gtm_bco{std::numeric_limits<uint64_t>::max()};
  int32_t packetid{std::numeric_limits<int32_t>::max()};
  uint16_t fee{std::numeric_limits<uint16_t>::max()};
  uint16_t channel{std::numeric_limits<uint16_t>::max()};
  uint16_t sampaaddress{std::numeric_limits<uint16_t>::max()};
  uint16_t sampachannel{std::numeric_limits<uint16_t>::max()};

  //! adc value for each sample
  std::map<uint16_t, uint16_t> adcmap;

  ClassDefOverride(MicromegasRawHitv2, 1)
};

#endif

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"MicromegasRawHitv2", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("MicromegasRawHitv2_Dict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_MicromegasRawHitv2_Dict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_MicromegasRawHitv2_Dict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_MicromegasRawHitv2_Dict() {
  TriggerDictionaryInitialization_MicromegasRawHitv2_Dict_Impl();
}
