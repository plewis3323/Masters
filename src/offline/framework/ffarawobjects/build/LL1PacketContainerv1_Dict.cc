// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME LL1PacketContainerv1_Dict
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
#include "../LL1PacketContainerv1.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static void *new_LL1PacketContainerv1(void *p = nullptr);
   static void *newArray_LL1PacketContainerv1(Long_t size, void *p);
   static void delete_LL1PacketContainerv1(void *p);
   static void deleteArray_LL1PacketContainerv1(void *p);
   static void destruct_LL1PacketContainerv1(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::LL1PacketContainerv1*)
   {
      ::LL1PacketContainerv1 *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::LL1PacketContainerv1 >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("LL1PacketContainerv1", ::LL1PacketContainerv1::Class_Version(), "", 11,
                  typeid(::LL1PacketContainerv1), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::LL1PacketContainerv1::Dictionary, isa_proxy, 4,
                  sizeof(::LL1PacketContainerv1) );
      instance.SetNew(&new_LL1PacketContainerv1);
      instance.SetNewArray(&newArray_LL1PacketContainerv1);
      instance.SetDelete(&delete_LL1PacketContainerv1);
      instance.SetDeleteArray(&deleteArray_LL1PacketContainerv1);
      instance.SetDestructor(&destruct_LL1PacketContainerv1);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::LL1PacketContainerv1*)
   {
      return GenerateInitInstanceLocal(static_cast<::LL1PacketContainerv1*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::LL1PacketContainerv1*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr LL1PacketContainerv1::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *LL1PacketContainerv1::Class_Name()
{
   return "LL1PacketContainerv1";
}

//______________________________________________________________________________
const char *LL1PacketContainerv1::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::LL1PacketContainerv1*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int LL1PacketContainerv1::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::LL1PacketContainerv1*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *LL1PacketContainerv1::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::LL1PacketContainerv1*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *LL1PacketContainerv1::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::LL1PacketContainerv1*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void LL1PacketContainerv1::Streamer(TBuffer &R__b)
{
   // Stream an object of class LL1PacketContainerv1.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(LL1PacketContainerv1::Class(),this);
   } else {
      R__b.WriteClassBuffer(LL1PacketContainerv1::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_LL1PacketContainerv1(void *p) {
      return  p ? new(p) ::LL1PacketContainerv1 : new ::LL1PacketContainerv1;
   }
   static void *newArray_LL1PacketContainerv1(Long_t nElements, void *p) {
      return p ? new(p) ::LL1PacketContainerv1[nElements] : new ::LL1PacketContainerv1[nElements];
   }
   // Wrapper around operator delete
   static void delete_LL1PacketContainerv1(void *p) {
      delete (static_cast<::LL1PacketContainerv1*>(p));
   }
   static void deleteArray_LL1PacketContainerv1(void *p) {
      delete [] (static_cast<::LL1PacketContainerv1*>(p));
   }
   static void destruct_LL1PacketContainerv1(void *p) {
      typedef ::LL1PacketContainerv1 current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::LL1PacketContainerv1

namespace {
  void TriggerDictionaryInitialization_LL1PacketContainerv1_Dict_Impl() {
    static const char* headers[] = {
"0",
nullptr
    };
    static const char* includePaths[] = {
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "LL1PacketContainerv1_Dict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
class LL1PacketContainerv1;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "LL1PacketContainerv1_Dict dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#ifndef FUN4ALLPACKET_LL1PACKETCONTAINERV1_H
#define FUN4ALLPACKET_LL1PACKETCONTAINERV1_H

#include "LL1PacketContainer.h"

class LL1Packet;
class TClonesArray;

class LL1PacketContainerv1 : public LL1PacketContainer
{
 public:
  LL1PacketContainerv1();
  ~LL1PacketContainerv1() override;

  /// Clear Event
  void Reset() override;

  /** identify Function from PHObject
      @param os Output Stream
   */
  void identify(std::ostream &os = std::cout) const override;

  /// isValid returns non zero if object contains vailid data
  int isValid() const override;

  LL1Packet *AddPacket() override;
  LL1Packet *AddPacket(LL1Packet *ll1packet) override;
  unsigned int get_npackets() override;
  LL1Packet *getPacket(unsigned int index) override;
  LL1Packet *getPacketbyId(int id) override;
  void setEvtSequence(const int i) override { eventno = i; }
  int getEvtSequence() const override { return eventno; }
  void setStatus(const unsigned int ui) override { status = ui; }
  unsigned int getStatus() const override { return status; }

 private:
  TClonesArray *LL1PacketsTCArray{nullptr};
  int eventno{std::numeric_limits<int>::min()};
  unsigned int status{0};

  ClassDefOverride(LL1PacketContainerv1, 2)
};

#endif

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"LL1PacketContainerv1", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("LL1PacketContainerv1_Dict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_LL1PacketContainerv1_Dict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_LL1PacketContainerv1_Dict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_LL1PacketContainerv1_Dict() {
  TriggerDictionaryInitialization_LL1PacketContainerv1_Dict_Impl();
}
