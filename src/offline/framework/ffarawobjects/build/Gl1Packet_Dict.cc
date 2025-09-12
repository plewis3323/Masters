// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME Gl1Packet_Dict
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
#include "../Gl1Packet.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static void *new_Gl1Packet(void *p = nullptr);
   static void *newArray_Gl1Packet(Long_t size, void *p);
   static void delete_Gl1Packet(void *p);
   static void deleteArray_Gl1Packet(void *p);
   static void destruct_Gl1Packet(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::Gl1Packet*)
   {
      ::Gl1Packet *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::Gl1Packet >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("Gl1Packet", ::Gl1Packet::Class_Version(), "", 10,
                  typeid(::Gl1Packet), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::Gl1Packet::Dictionary, isa_proxy, 4,
                  sizeof(::Gl1Packet) );
      instance.SetNew(&new_Gl1Packet);
      instance.SetNewArray(&newArray_Gl1Packet);
      instance.SetDelete(&delete_Gl1Packet);
      instance.SetDeleteArray(&deleteArray_Gl1Packet);
      instance.SetDestructor(&destruct_Gl1Packet);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::Gl1Packet*)
   {
      return GenerateInitInstanceLocal(static_cast<::Gl1Packet*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::Gl1Packet*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr Gl1Packet::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *Gl1Packet::Class_Name()
{
   return "Gl1Packet";
}

//______________________________________________________________________________
const char *Gl1Packet::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::Gl1Packet*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int Gl1Packet::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::Gl1Packet*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *Gl1Packet::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::Gl1Packet*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *Gl1Packet::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::Gl1Packet*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void Gl1Packet::Streamer(TBuffer &R__b)
{
   // Stream an object of class Gl1Packet.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(Gl1Packet::Class(),this);
   } else {
      R__b.WriteClassBuffer(Gl1Packet::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_Gl1Packet(void *p) {
      return  p ? new(p) ::Gl1Packet : new ::Gl1Packet;
   }
   static void *newArray_Gl1Packet(Long_t nElements, void *p) {
      return p ? new(p) ::Gl1Packet[nElements] : new ::Gl1Packet[nElements];
   }
   // Wrapper around operator delete
   static void delete_Gl1Packet(void *p) {
      delete (static_cast<::Gl1Packet*>(p));
   }
   static void deleteArray_Gl1Packet(void *p) {
      delete [] (static_cast<::Gl1Packet*>(p));
   }
   static void destruct_Gl1Packet(void *p) {
      typedef ::Gl1Packet current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::Gl1Packet

namespace {
  void TriggerDictionaryInitialization_Gl1Packet_Dict_Impl() {
    static const char* headers[] = {
"0",
nullptr
    };
    static const char* includePaths[] = {
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "Gl1Packet_Dict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
class Gl1Packet;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "Gl1Packet_Dict dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#ifndef FUN4ALLRAW_GL1PACKET_H
#define FUN4ALLRAW_GL1PACKET_H

#include "OfflinePacketv1.h"

#include <limits>

class Gl1Packet : public OfflinePacketv1
{
 public:
  Gl1Packet() = default;
  ~Gl1Packet() override = default;
  using OfflinePacket::FillFrom;
  virtual void setScaler(int /*iscal*/, int /*index*/, uint64_t /*lval*/) { return; }
  virtual void setGl1pScaler(int /*iscal*/, int /*index*/, uint64_t /*lval*/) { return; }
  virtual void setPacketNumber(const unsigned int /* i */) { return; }
  virtual unsigned int getPacketNumber() const { return 0; }
  virtual void setBunchNumber(const uint64_t /*i*/) { return; }
  virtual uint64_t getBunchNumber() const { return 0; }
  virtual void setTriggerInput(const uint64_t /*i*/) { return; }
  virtual uint64_t getTriggerInput() const { return 0; }
  virtual void setLiveVector(const uint64_t /*i*/) { return; }
  virtual uint64_t getLiveVector() const { return 0; }
  virtual void setTriggerVector(const uint64_t /*i*/) { return; }  // deprecated
  virtual uint64_t getTriggerVector() const { return 0; }          // deprecated
  virtual void setScaledVector(const uint64_t /*i*/) { return; }
  virtual uint64_t getScaledVector() const { return 0; }
  virtual void setGTMBusyVector(const uint64_t /*i*/) { return; }
  virtual uint64_t getGTMBusyVector() const { return 0; }

  virtual void FillFrom(const Gl1Packet* /*pkt*/) { return; }

 private:
  ClassDefOverride(Gl1Packet, 1)
};

#endif

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"Gl1Packet", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("Gl1Packet_Dict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_Gl1Packet_Dict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_Gl1Packet_Dict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_Gl1Packet_Dict() {
  TriggerDictionaryInitialization_Gl1Packet_Dict_Impl();
}
