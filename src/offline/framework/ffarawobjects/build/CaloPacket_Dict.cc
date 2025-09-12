// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME CaloPacket_Dict
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
#include "../CaloPacket.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static void *new_CaloPacket(void *p = nullptr);
   static void *newArray_CaloPacket(Long_t size, void *p);
   static void delete_CaloPacket(void *p);
   static void deleteArray_CaloPacket(void *p);
   static void destruct_CaloPacket(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CaloPacket*)
   {
      ::CaloPacket *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::CaloPacket >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("CaloPacket", ::CaloPacket::Class_Version(), "", 11,
                  typeid(::CaloPacket), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::CaloPacket::Dictionary, isa_proxy, 4,
                  sizeof(::CaloPacket) );
      instance.SetNew(&new_CaloPacket);
      instance.SetNewArray(&newArray_CaloPacket);
      instance.SetDelete(&delete_CaloPacket);
      instance.SetDeleteArray(&deleteArray_CaloPacket);
      instance.SetDestructor(&destruct_CaloPacket);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CaloPacket*)
   {
      return GenerateInitInstanceLocal(static_cast<::CaloPacket*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::CaloPacket*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr CaloPacket::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *CaloPacket::Class_Name()
{
   return "CaloPacket";
}

//______________________________________________________________________________
const char *CaloPacket::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CaloPacket*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int CaloPacket::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CaloPacket*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *CaloPacket::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CaloPacket*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *CaloPacket::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CaloPacket*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void CaloPacket::Streamer(TBuffer &R__b)
{
   // Stream an object of class CaloPacket.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(CaloPacket::Class(),this);
   } else {
      R__b.WriteClassBuffer(CaloPacket::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_CaloPacket(void *p) {
      return  p ? new(p) ::CaloPacket : new ::CaloPacket;
   }
   static void *newArray_CaloPacket(Long_t nElements, void *p) {
      return p ? new(p) ::CaloPacket[nElements] : new ::CaloPacket[nElements];
   }
   // Wrapper around operator delete
   static void delete_CaloPacket(void *p) {
      delete (static_cast<::CaloPacket*>(p));
   }
   static void deleteArray_CaloPacket(void *p) {
      delete [] (static_cast<::CaloPacket*>(p));
   }
   static void destruct_CaloPacket(void *p) {
      typedef ::CaloPacket current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::CaloPacket

namespace {
  void TriggerDictionaryInitialization_CaloPacket_Dict_Impl() {
    static const char* headers[] = {
"0",
nullptr
    };
    static const char* includePaths[] = {
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "CaloPacket_Dict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
class CaloPacket;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "CaloPacket_Dict dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#ifndef FUN4ALLRAW_CALOPACKET_H
#define FUN4ALLRAW_CALOPACKET_H

#include "OfflinePacketv1.h"

#include <array>
#include <limits>

class CaloPacket : public OfflinePacketv1
{
 public:
  CaloPacket() = default;
  CaloPacket(CaloPacket *pkt)
    : OfflinePacketv1(pkt)
  {
  }
  ~CaloPacket() override = default;

  virtual int getMaxNumChannels() const { return 0; }
  virtual int getMaxNumSamples() const { return 0; }
  virtual int getMaxNumModules() const { return 0; }

  virtual void setFemClock(int /*i*/, uint32_t /*clk*/) { return; }
  virtual uint32_t getFemClock(int /*i*/) const { return std::numeric_limits<uint32_t>::max(); }
  virtual void setFemEvtSequence(int /*i*/, int /*j*/) { return; }
  virtual int getFemEvtSequence(int /*i*/) const { return std::numeric_limits<int>::max(); }
  virtual void setFemSlot(int /*i*/, int /*j*/) { return; }
  virtual int getFemSlot(int /*i*/) const { return std::numeric_limits<int>::max(); }
  virtual void setChecksumLsb(int, int) { return; }
  virtual int getChecksumLsb(int) const { return 0; }
  virtual void setChecksumMsb(int, int) { return; }
  virtual int getChecksumMsb(int) const { return 0; }
  virtual void setCalcChecksumLsb(int, int) { return; }
  virtual int getCalcChecksumLsb(int) const { return 0; }
  virtual void setCalcChecksumMsb(int, int) { return; }
  virtual int getCalcChecksumMsb(int) const { return 0; }

  virtual void setSample(int /*ipmt*/, int /*ichan*/, uint32_t /*val*/) { return; }
  virtual uint32_t getSample(int /*ipmt*/, int /*ichan*/) const { return std::numeric_limits<uint32_t>::max(); }
  virtual void setPacketEvtSequence(int /*i*/) { return; }
  virtual int getPacketEvtSequence() const { return std::numeric_limits<int>::max(); }
  virtual void setNrChannels(int /*i*/) { return; }
  virtual int getNrChannels() const { return 0; }
  virtual void setNrSamples(int /*i*/) { return; }
  virtual int getNrSamples() const { return 0; }
  virtual void setNrModules(int /*i*/) { return; }
  virtual int getNrModules() const { return 0; }
  virtual void setEvenChecksum(int /* i */) { return; }
  virtual int getEvenChecksum() const { return std::numeric_limits<int>::max(); }
  virtual void setOddChecksum(int /* i */) { return; }
  virtual int getOddChecksum() const { return std::numeric_limits<int>::max(); }
  virtual void setCalcEvenChecksum(int /* i */) { return; }
  virtual int getCalcEvenChecksum() const { return std::numeric_limits<int>::max(); }
  virtual void setCalcOddChecksum(int /* i */) { return; }
  virtual int getCalcOddChecksum() const { return std::numeric_limits<int>::max(); }
  virtual void setModuleAddress(int /*i*/) { return; }
  virtual int getModuleAddress() const { return std::numeric_limits<int>::max(); }
  virtual void setDetId(int /*i*/) { return; }
  virtual int getDetId() const { return std::numeric_limits<int>::max(); }
  virtual void setSuppressed(int /*channel*/, bool /*bb*/) { return; }
  virtual bool getSuppressed(int /*channel*/) const { return false; }
  virtual void setPre(int /*channel*/, uint32_t /*ival*/) { return; }
  virtual uint32_t getPre(int /*channel*/) const { return std::numeric_limits<uint32_t>::max(); }
  virtual void setPost(int /*channel*/, uint32_t /*ival*/) { return; }
  virtual uint32_t getPost(int /*channel*/) const { return std::numeric_limits<uint32_t>::max(); }

 private:
  ClassDefOverride(CaloPacket, 1)
};

#endif

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"CaloPacket", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("CaloPacket_Dict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_CaloPacket_Dict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_CaloPacket_Dict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_CaloPacket_Dict() {
  TriggerDictionaryInitialization_CaloPacket_Dict_Impl();
}
