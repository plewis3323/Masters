// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME LL1PacketContainer_Dict
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
#include "../LL1PacketContainer.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static void *new_LL1PacketContainer(void *p = nullptr);
   static void *newArray_LL1PacketContainer(Long_t size, void *p);
   static void delete_LL1PacketContainer(void *p);
   static void deleteArray_LL1PacketContainer(void *p);
   static void destruct_LL1PacketContainer(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::LL1PacketContainer*)
   {
      ::LL1PacketContainer *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::LL1PacketContainer >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("LL1PacketContainer", ::LL1PacketContainer::Class_Version(), "", 12,
                  typeid(::LL1PacketContainer), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::LL1PacketContainer::Dictionary, isa_proxy, 4,
                  sizeof(::LL1PacketContainer) );
      instance.SetNew(&new_LL1PacketContainer);
      instance.SetNewArray(&newArray_LL1PacketContainer);
      instance.SetDelete(&delete_LL1PacketContainer);
      instance.SetDeleteArray(&deleteArray_LL1PacketContainer);
      instance.SetDestructor(&destruct_LL1PacketContainer);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::LL1PacketContainer*)
   {
      return GenerateInitInstanceLocal(static_cast<::LL1PacketContainer*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::LL1PacketContainer*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr LL1PacketContainer::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *LL1PacketContainer::Class_Name()
{
   return "LL1PacketContainer";
}

//______________________________________________________________________________
const char *LL1PacketContainer::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::LL1PacketContainer*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int LL1PacketContainer::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::LL1PacketContainer*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *LL1PacketContainer::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::LL1PacketContainer*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *LL1PacketContainer::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::LL1PacketContainer*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void LL1PacketContainer::Streamer(TBuffer &R__b)
{
   // Stream an object of class LL1PacketContainer.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(LL1PacketContainer::Class(),this);
   } else {
      R__b.WriteClassBuffer(LL1PacketContainer::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_LL1PacketContainer(void *p) {
      return  p ? new(p) ::LL1PacketContainer : new ::LL1PacketContainer;
   }
   static void *newArray_LL1PacketContainer(Long_t nElements, void *p) {
      return p ? new(p) ::LL1PacketContainer[nElements] : new ::LL1PacketContainer[nElements];
   }
   // Wrapper around operator delete
   static void delete_LL1PacketContainer(void *p) {
      delete (static_cast<::LL1PacketContainer*>(p));
   }
   static void deleteArray_LL1PacketContainer(void *p) {
      delete [] (static_cast<::LL1PacketContainer*>(p));
   }
   static void destruct_LL1PacketContainer(void *p) {
      typedef ::LL1PacketContainer current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::LL1PacketContainer

namespace {
  void TriggerDictionaryInitialization_LL1PacketContainer_Dict_Impl() {
    static const char* headers[] = {
"0",
nullptr
    };
    static const char* includePaths[] = {
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "LL1PacketContainer_Dict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
class LL1PacketContainer;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "LL1PacketContainer_Dict dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#ifndef FUN4ALLRAW_LL1PACKETCONTAINER_H
#define FUN4ALLRAW_LL1PACKETCONTAINER_H

#include <phool/PHObject.h>

#include <limits>

class LL1Packet;

class LL1PacketContainer : public PHObject
{
 public:
  LL1PacketContainer() = default;
  virtual ~LL1PacketContainer() = default;

  virtual LL1Packet *AddPacket() { return nullptr; }
  virtual LL1Packet *AddPacket(LL1Packet *) { return nullptr; }
  virtual unsigned int get_npackets() { return 0; }
  virtual LL1Packet *getPacket(unsigned int) { return nullptr; }
  virtual LL1Packet *getPacketbyId(int) { return nullptr; }
  virtual void setEvtSequence(const int) { return; }
  virtual int getEvtSequence() const { return std::numeric_limits<int>::min(); }
  virtual void setStatus(const unsigned int) { return; }
  virtual unsigned int getStatus() const { return 0; }

 private:
  ClassDefOverride(LL1PacketContainer, 1)
};

#endif

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"LL1PacketContainer", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("LL1PacketContainer_Dict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_LL1PacketContainer_Dict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_LL1PacketContainer_Dict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_LL1PacketContainer_Dict() {
  TriggerDictionaryInitialization_LL1PacketContainer_Dict_Impl();
}
