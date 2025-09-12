// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME CaloPacketv1_Dict
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
#include "../CaloPacketv1.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static void *new_CaloPacketv1(void *p = nullptr);
   static void *newArray_CaloPacketv1(Long_t size, void *p);
   static void delete_CaloPacketv1(void *p);
   static void deleteArray_CaloPacketv1(void *p);
   static void destruct_CaloPacketv1(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CaloPacketv1*)
   {
      ::CaloPacketv1 *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::CaloPacketv1 >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("CaloPacketv1", ::CaloPacketv1::Class_Version(), "", 15,
                  typeid(::CaloPacketv1), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::CaloPacketv1::Dictionary, isa_proxy, 4,
                  sizeof(::CaloPacketv1) );
      instance.SetNew(&new_CaloPacketv1);
      instance.SetNewArray(&newArray_CaloPacketv1);
      instance.SetDelete(&delete_CaloPacketv1);
      instance.SetDeleteArray(&deleteArray_CaloPacketv1);
      instance.SetDestructor(&destruct_CaloPacketv1);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CaloPacketv1*)
   {
      return GenerateInitInstanceLocal(static_cast<::CaloPacketv1*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::CaloPacketv1*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr CaloPacketv1::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *CaloPacketv1::Class_Name()
{
   return "CaloPacketv1";
}

//______________________________________________________________________________
const char *CaloPacketv1::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CaloPacketv1*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int CaloPacketv1::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CaloPacketv1*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *CaloPacketv1::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CaloPacketv1*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *CaloPacketv1::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CaloPacketv1*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void CaloPacketv1::Streamer(TBuffer &R__b)
{
   // Stream an object of class CaloPacketv1.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(CaloPacketv1::Class(),this);
   } else {
      R__b.WriteClassBuffer(CaloPacketv1::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_CaloPacketv1(void *p) {
      return  p ? new(p) ::CaloPacketv1 : new ::CaloPacketv1;
   }
   static void *newArray_CaloPacketv1(Long_t nElements, void *p) {
      return p ? new(p) ::CaloPacketv1[nElements] : new ::CaloPacketv1[nElements];
   }
   // Wrapper around operator delete
   static void delete_CaloPacketv1(void *p) {
      delete (static_cast<::CaloPacketv1*>(p));
   }
   static void deleteArray_CaloPacketv1(void *p) {
      delete [] (static_cast<::CaloPacketv1*>(p));
   }
   static void destruct_CaloPacketv1(void *p) {
      typedef ::CaloPacketv1 current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::CaloPacketv1

namespace {
  void TriggerDictionaryInitialization_CaloPacketv1_Dict_Impl() {
    static const char* headers[] = {
"0",
nullptr
    };
    static const char* includePaths[] = {
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "CaloPacketv1_Dict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
class CaloPacketv1;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "CaloPacketv1_Dict dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#ifndef FUN4ALLRAW_CALOPACKETV1_H
#define FUN4ALLRAW_CALOPACKETV1_H

#include "CaloPacket.h"

#include <array>
#include <limits>

static const int MAX_NUM_CHANNELS = 256;
static const int MAX_NUM_MODULES = 4;
static const int MAX_NUM_SAMPLES = 31;

class CaloPacketv1 : public CaloPacket
{
 public:
  CaloPacketv1();
  ~CaloPacketv1() override = default;

  void Reset() override;
  void identify(std::ostream &os = std::cout) const override;

  int getMaxNumChannels() const override { return MAX_NUM_CHANNELS; }
  int getMaxNumSamples() const override { return MAX_NUM_SAMPLES; }
  int getMaxNumModules() const override { return MAX_NUM_MODULES; }

  void setFemClock(int i, uint32_t clk) override { femclock.at(i) = clk; }
  uint32_t getFemClock(int i) const override { return femclock.at(i); }
  void setFemEvtSequence(int i, int evtno) override { femevt.at(i) = evtno; }
  int getFemEvtSequence(int i) const override { return femevt.at(i); }
  void setFemSlot(int i, int islot) override { femslot.at(i) = islot; }
  int getFemSlot(int i) const override { return femslot.at(i); }
  void setChecksumLsb(int i, int ival) override { checksumlsb.at(i) = ival; }
  int getChecksumLsb(int i) const override { return checksumlsb.at(i); }
  void setChecksumMsb(int i, int ival) override { checksummsb.at(i) = ival; }
  int getChecksumMsb(int i) const override { return checksummsb.at(i); }

  void setCalcChecksumLsb(int i, int ival) override { calcchecksumlsb.at(i) = ival; }
  int getCalcChecksumLsb(int i) const override { return calcchecksumlsb.at(i); }
  void setCalcChecksumMsb(int i, int ival) override { calcchecksummsb.at(i) = ival; }
  int getCalcChecksumMsb(int i) const override { return calcchecksummsb.at(i); }

  void setNrChannels(int i) override { NrChannels = i; }
  int getNrChannels() const override { return NrChannels; }
  void setNrSamples(int i) override { NrSamples = i; }
  int getNrSamples() const override { return NrSamples; }
  void setNrModules(int i) override { NrModules = i; }
  int getNrModules() const override { return NrModules; }
  void setEvenChecksum(int i) override { event_checksum = i; }
  int getEvenChecksum() const override { return event_checksum; }
  void setOddChecksum(int i) override { odd_checksum = i; }
  int getOddChecksum() const override { return odd_checksum; }
  void setCalcEvenChecksum(int i) override { calc_event_checksum = i; }
  int getCalcEvenChecksum() const override { return calc_event_checksum; }
  void setCalcOddChecksum(int i) override { calc_odd_checksum = i; }
  int getCalcOddChecksum() const override { return calc_odd_checksum; }
  void setModuleAddress(int i) override { module_address = i; }
  int getModuleAddress() const override { return module_address; }
  void setDetId(int i) override { detid = i; }
  int getDetId() const override { return detid; }
  bool getSuppressed(int channel) const override { return isZeroSuppressed.at(channel); }
  void setSuppressed(int channel, bool bb) override { isZeroSuppressed.at(channel) = bb; }
  void setPre(int channel, uint32_t ival) override { pre.at(channel) = ival; }
  uint32_t getPre(int channel) const override { return pre.at(channel); }
  void setPost(int channel, uint32_t ival) override { post.at(channel) = ival; }
  uint32_t getPost(int channel) const override { return post.at(channel); }

  void setSample(int ipmt, int isamp, uint32_t val) override { samples.at(isamp).at(ipmt) = val; }
  uint32_t getSample(int ipmt, int isamp) const override { return samples.at(isamp).at(ipmt); }
  void setPacketEvtSequence(int i) override { PacketEvtSequence = i; }
  int getPacketEvtSequence() const override { return PacketEvtSequence; }
  int iValue(const int i, const std::string &what) const override;
  int iValue(const int channel, const int sample) const override;
  void dump(std::ostream &os = std::cout) const override;
  void dump_iddigitizer(std::ostream &os = std::cout) const;

 protected:
  int PacketEvtSequence{0};
  int NrChannels{0};
  int NrSamples{0};
  int NrModules{0};
  int event_checksum{0};
  int odd_checksum{0};
  int calc_event_checksum{0};
  int calc_odd_checksum{0};
  int module_address{0};
  int detid{0};

  std::array<uint32_t, MAX_NUM_MODULES> femclock{};
  std::array<uint32_t, MAX_NUM_MODULES> femevt{};
  std::array<uint32_t, MAX_NUM_MODULES> femslot{};
  std::array<uint32_t, MAX_NUM_MODULES> checksumlsb{};
  std::array<uint32_t, MAX_NUM_MODULES> checksummsb{};
  std::array<uint32_t, MAX_NUM_MODULES> calcchecksumlsb{};
  std::array<uint32_t, MAX_NUM_MODULES> calcchecksummsb{};

  std::array<std::array<uint32_t, MAX_NUM_CHANNELS>, MAX_NUM_SAMPLES> samples{};
  std::array<bool, MAX_NUM_CHANNELS> isZeroSuppressed{};
  std::array<uint32_t, MAX_NUM_CHANNELS> pre{};
  std::array<uint32_t, MAX_NUM_CHANNELS> post{};

 private:
  ClassDefOverride(CaloPacketv1, 2)
};

#endif

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"CaloPacketv1", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("CaloPacketv1_Dict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_CaloPacketv1_Dict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_CaloPacketv1_Dict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_CaloPacketv1_Dict() {
  TriggerDictionaryInitialization_CaloPacketv1_Dict_Impl();
}
