// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME LL1Packet_Dict
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
#include "../LL1Packet.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static void *new_LL1Packet(void *p = nullptr);
   static void *newArray_LL1Packet(Long_t size, void *p);
   static void delete_LL1Packet(void *p);
   static void deleteArray_LL1Packet(void *p);
   static void destruct_LL1Packet(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::LL1Packet*)
   {
      ::LL1Packet *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::LL1Packet >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("LL1Packet", ::LL1Packet::Class_Version(), "", 10,
                  typeid(::LL1Packet), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::LL1Packet::Dictionary, isa_proxy, 4,
                  sizeof(::LL1Packet) );
      instance.SetNew(&new_LL1Packet);
      instance.SetNewArray(&newArray_LL1Packet);
      instance.SetDelete(&delete_LL1Packet);
      instance.SetDeleteArray(&deleteArray_LL1Packet);
      instance.SetDestructor(&destruct_LL1Packet);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::LL1Packet*)
   {
      return GenerateInitInstanceLocal(static_cast<::LL1Packet*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::LL1Packet*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr LL1Packet::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *LL1Packet::Class_Name()
{
   return "LL1Packet";
}

//______________________________________________________________________________
const char *LL1Packet::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::LL1Packet*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int LL1Packet::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::LL1Packet*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *LL1Packet::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::LL1Packet*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *LL1Packet::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::LL1Packet*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void LL1Packet::Streamer(TBuffer &R__b)
{
   // Stream an object of class LL1Packet.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(LL1Packet::Class(),this);
   } else {
      R__b.WriteClassBuffer(LL1Packet::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_LL1Packet(void *p) {
      return  p ? new(p) ::LL1Packet : new ::LL1Packet;
   }
   static void *newArray_LL1Packet(Long_t nElements, void *p) {
      return p ? new(p) ::LL1Packet[nElements] : new ::LL1Packet[nElements];
   }
   // Wrapper around operator delete
   static void delete_LL1Packet(void *p) {
      delete (static_cast<::LL1Packet*>(p));
   }
   static void deleteArray_LL1Packet(void *p) {
      delete [] (static_cast<::LL1Packet*>(p));
   }
   static void destruct_LL1Packet(void *p) {
      typedef ::LL1Packet current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::LL1Packet

namespace {
  void TriggerDictionaryInitialization_LL1Packet_Dict_Impl() {
    static const char* headers[] = {
"0",
nullptr
    };
    static const char* includePaths[] = {
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "LL1Packet_Dict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
class LL1Packet;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "LL1Packet_Dict dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#ifndef FUN4ALLRAW_LL1PACKET_H
#define FUN4ALLRAW_LL1PACKET_H

#include "OfflinePacketv1.h"

#include <limits>

class LL1Packet : public OfflinePacketv1
{
 public:
  LL1Packet() = default;
  LL1Packet(LL1Packet *pkt)
    : OfflinePacketv1(pkt)
  {
  }
  ~LL1Packet() override = default;

  virtual int getMaxNumChannels() const { return 0; }
  virtual int getMaxNumSamples() const { return 0; }
  virtual int getMaxNumModules() const { return 0; }

  virtual void setSample(int /*ipmt*/, int /*ichan*/, uint32_t /*val*/) { return; }
  virtual uint32_t getSample(int /*ipmt*/, int /*ichan*/) const { return std::numeric_limits<uint32_t>::max(); }
  virtual void setPacketEvtSequence(int /*i*/) { return; }
  virtual int getPacketEvtSequence() const { return std::numeric_limits<int>::max(); }
  virtual void setNrChannels(int /*i*/) { return; }
  virtual int getNrChannels() const { return 0; }
  virtual void setNrSamples(int /*i*/) { return; }
  virtual int getNrSamples() const { return 0; }
  virtual void setTriggerWords(int /*i*/) { return; }
  virtual int getTriggerWords() const { return 0; }
  virtual void setSlotNr(int /*i*/) { return; }
  virtual int getSlotNr() const { return 0; }
  virtual void setCardNr(int /*i*/) { return; }
  virtual int getCardNr() const { return 0; }
  virtual void setMonitor(int /*i*/) { return; }
  virtual int getMonitor() const { return 0; }
  virtual void setFemWords(int /*i*/) { return; }
  virtual int getFemWords() const { return 0; }
  virtual void setSums(int /*i*/) { return; }
  virtual int getSums() const { return 0; }
  virtual void setFibers(int /*i*/) { return; }
  virtual int getFibers() const { return 0; }

 private:
  ClassDefOverride(LL1Packet, 1)
};

#endif

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"LL1Packet", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("LL1Packet_Dict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_LL1Packet_Dict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_LL1Packet_Dict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_LL1Packet_Dict() {
  TriggerDictionaryInitialization_LL1Packet_Dict_Impl();
}
