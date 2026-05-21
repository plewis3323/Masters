// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME LL1Packetv1_Dict
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
#include "../LL1Packetv1.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static void *new_LL1Packetv1(void *p = nullptr);
   static void *newArray_LL1Packetv1(Long_t size, void *p);
   static void delete_LL1Packetv1(void *p);
   static void deleteArray_LL1Packetv1(void *p);
   static void destruct_LL1Packetv1(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::LL1Packetv1*)
   {
      ::LL1Packetv1 *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::LL1Packetv1 >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("LL1Packetv1", ::LL1Packetv1::Class_Version(), "", 14,
                  typeid(::LL1Packetv1), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::LL1Packetv1::Dictionary, isa_proxy, 4,
                  sizeof(::LL1Packetv1) );
      instance.SetNew(&new_LL1Packetv1);
      instance.SetNewArray(&newArray_LL1Packetv1);
      instance.SetDelete(&delete_LL1Packetv1);
      instance.SetDeleteArray(&deleteArray_LL1Packetv1);
      instance.SetDestructor(&destruct_LL1Packetv1);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::LL1Packetv1*)
   {
      return GenerateInitInstanceLocal(static_cast<::LL1Packetv1*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::LL1Packetv1*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr LL1Packetv1::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *LL1Packetv1::Class_Name()
{
   return "LL1Packetv1";
}

//______________________________________________________________________________
const char *LL1Packetv1::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::LL1Packetv1*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int LL1Packetv1::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::LL1Packetv1*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *LL1Packetv1::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::LL1Packetv1*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *LL1Packetv1::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::LL1Packetv1*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void LL1Packetv1::Streamer(TBuffer &R__b)
{
   // Stream an object of class LL1Packetv1.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(LL1Packetv1::Class(),this);
   } else {
      R__b.WriteClassBuffer(LL1Packetv1::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_LL1Packetv1(void *p) {
      return  p ? new(p) ::LL1Packetv1 : new ::LL1Packetv1;
   }
   static void *newArray_LL1Packetv1(Long_t nElements, void *p) {
      return p ? new(p) ::LL1Packetv1[nElements] : new ::LL1Packetv1[nElements];
   }
   // Wrapper around operator delete
   static void delete_LL1Packetv1(void *p) {
      delete (static_cast<::LL1Packetv1*>(p));
   }
   static void deleteArray_LL1Packetv1(void *p) {
      delete [] (static_cast<::LL1Packetv1*>(p));
   }
   static void destruct_LL1Packetv1(void *p) {
      typedef ::LL1Packetv1 current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::LL1Packetv1

namespace {
  void TriggerDictionaryInitialization_LL1Packetv1_Dict_Impl() {
    static const char* headers[] = {
"0",
nullptr
    };
    static const char* includePaths[] = {
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "LL1Packetv1_Dict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
class LL1Packetv1;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "LL1Packetv1_Dict dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#ifndef FUN4ALLRAW_LL1PACKETV1_H
#define FUN4ALLRAW_LL1PACKETV1_H

#include "LL1Packet.h"

#include <array>
#include <limits>

static const int MAX_NUM_CHANNELS = 672;
static const int MAX_NUM_SAMPLES = 5;

class LL1Packetv1 : public LL1Packet
{
 public:
  LL1Packetv1();
  ~LL1Packetv1() override = default;

  void Reset() override;
  void identify(std::ostream &os = std::cout) const override;

  int getMaxNumChannels() const override { return MAX_NUM_CHANNELS; }
  int getMaxNumSamples() const override { return MAX_NUM_SAMPLES; }

  void setNrChannels(int i) override { NrChannels = i; }
  int getNrChannels() const override { return NrChannels; }
  void setNrSamples(int i) override { NrSamples = i; }
  int getNrSamples() const override { return NrSamples; }
  void setTriggerWords(int i) override { TriggerWords = i; }
  int getTriggerWords() const override { return TriggerWords; }
  void setSlotNr(int i) override { SlotNr = i; }
  int getSlotNr() const override { return SlotNr; }
  void setCardNr(int i) override { CardNr = i; }
  int getCardNr() const override { return CardNr; }
  void setMonitor(int i) override { Monitor = i; }
  int getMonitor() const override { return Monitor; }
  void setFemWords(int i) override { FemWords = i; }
  int getFemWords() const override { return FemWords; }
  void setSums(int i) override { Sums = i; }
  int getSums() const override { return Sums; }
  void setFibers(int i) override { Fibers = i; }
  int getFibers() const override { return Fibers; }

  void setSample(int ipmt, int isamp, uint32_t val) override { samples.at(isamp).at(ipmt) = val; }
  uint32_t getSample(int ipmt, int isamp) const override { return samples.at(isamp).at(ipmt); }
  void setPacketEvtSequence(int i) override { PacketEvtSequence = i; }
  int getPacketEvtSequence() const override { return PacketEvtSequence; }
  int iValue(const int i, const std::string &what) const override;
  int iValue(const int channel, const int sample) const override;
  void dump(std::ostream &os = std::cout) const override;
  void dump_idll1_mbd(std::ostream &os = std::cout) const;
  void dump_idll1_emcal_mon3(std::ostream &os = std::cout) const;
  void dump_idll1_jet_emcal_mon1(std::ostream &os = std::cout) const;

 protected:
  int PacketEvtSequence{0};
  int NrChannels{0};
  int NrSamples{0};
  int TriggerWords{0};
  int SlotNr{0};
  int CardNr{0};
  int Monitor{0};
  int FemWords{0};
  int Sums{0};
  int Fibers{0};

  std::array<std::array<uint32_t, MAX_NUM_CHANNELS>, MAX_NUM_SAMPLES> samples{};

 private:
  ClassDefOverride(LL1Packetv1, 1)
};

#endif

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"LL1Packetv1", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("LL1Packetv1_Dict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_LL1Packetv1_Dict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_LL1Packetv1_Dict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_LL1Packetv1_Dict() {
  TriggerDictionaryInitialization_LL1Packetv1_Dict_Impl();
}
