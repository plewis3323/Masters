// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME CaloPacketContainerv1_Dict
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
#include "../CaloPacketContainerv1.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static void *new_CaloPacketContainerv1(void *p = nullptr);
   static void *newArray_CaloPacketContainerv1(Long_t size, void *p);
   static void delete_CaloPacketContainerv1(void *p);
   static void deleteArray_CaloPacketContainerv1(void *p);
   static void destruct_CaloPacketContainerv1(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CaloPacketContainerv1*)
   {
      ::CaloPacketContainerv1 *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::CaloPacketContainerv1 >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("CaloPacketContainerv1", ::CaloPacketContainerv1::Class_Version(), "", 13,
                  typeid(::CaloPacketContainerv1), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::CaloPacketContainerv1::Dictionary, isa_proxy, 4,
                  sizeof(::CaloPacketContainerv1) );
      instance.SetNew(&new_CaloPacketContainerv1);
      instance.SetNewArray(&newArray_CaloPacketContainerv1);
      instance.SetDelete(&delete_CaloPacketContainerv1);
      instance.SetDeleteArray(&deleteArray_CaloPacketContainerv1);
      instance.SetDestructor(&destruct_CaloPacketContainerv1);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CaloPacketContainerv1*)
   {
      return GenerateInitInstanceLocal(static_cast<::CaloPacketContainerv1*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::CaloPacketContainerv1*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr CaloPacketContainerv1::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *CaloPacketContainerv1::Class_Name()
{
   return "CaloPacketContainerv1";
}

//______________________________________________________________________________
const char *CaloPacketContainerv1::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CaloPacketContainerv1*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int CaloPacketContainerv1::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CaloPacketContainerv1*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *CaloPacketContainerv1::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CaloPacketContainerv1*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *CaloPacketContainerv1::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CaloPacketContainerv1*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void CaloPacketContainerv1::Streamer(TBuffer &R__b)
{
   // Stream an object of class CaloPacketContainerv1.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(CaloPacketContainerv1::Class(),this);
   } else {
      R__b.WriteClassBuffer(CaloPacketContainerv1::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_CaloPacketContainerv1(void *p) {
      return  p ? new(p) ::CaloPacketContainerv1 : new ::CaloPacketContainerv1;
   }
   static void *newArray_CaloPacketContainerv1(Long_t nElements, void *p) {
      return p ? new(p) ::CaloPacketContainerv1[nElements] : new ::CaloPacketContainerv1[nElements];
   }
   // Wrapper around operator delete
   static void delete_CaloPacketContainerv1(void *p) {
      delete (static_cast<::CaloPacketContainerv1*>(p));
   }
   static void deleteArray_CaloPacketContainerv1(void *p) {
      delete [] (static_cast<::CaloPacketContainerv1*>(p));
   }
   static void destruct_CaloPacketContainerv1(void *p) {
      typedef ::CaloPacketContainerv1 current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::CaloPacketContainerv1

namespace {
  void TriggerDictionaryInitialization_CaloPacketContainerv1_Dict_Impl() {
    static const char* headers[] = {
"0",
nullptr
    };
    static const char* includePaths[] = {
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "CaloPacketContainerv1_Dict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
class CaloPacketContainerv1;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "CaloPacketContainerv1_Dict dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#ifndef FUN4ALLPACKET_CALOPACKETCONTAINERV1_H
#define FUN4ALLPACKET_CALOPACKETCONTAINERV1_H

#include "CaloPacketContainer.h"

#include <limits>

class CaloPacket;
class TClonesArray;

class CaloPacketContainerv1 : public CaloPacketContainer
{
 public:
  CaloPacketContainerv1();
  ~CaloPacketContainerv1() override;

  /// Clear Event
  void Reset() override;

  /** identify Function from PHObject
      @param os Output Stream
   */
  void identify(std::ostream &os = std::cout) const override;

  /// isValid returns non zero if object contains vailid data
  int isValid() const override;

  CaloPacket *AddPacket() override;
  CaloPacket *AddPacket(CaloPacket *calopacket) override;
  unsigned int get_npackets() override;
  CaloPacket *getPacket(unsigned int index) override;
  CaloPacket *getPacketbyId(int id) override;
  void setEvtSequence(const int i) override { eventno = i; }
  int getEvtSequence() const override { return eventno; }
  void setStatus(const unsigned int ui) override { status = ui; }
  unsigned int getStatus() const override { return status; }
  void deletePacketAt(int index) override;
  void deletePacket(CaloPacket *packet) override;

 private:
  TClonesArray *CaloPacketsTCArray{nullptr};
  int eventno{std::numeric_limits<int>::min()};
  unsigned int status{0};

  ClassDefOverride(CaloPacketContainerv1, 2)
};

#endif

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"CaloPacketContainerv1", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("CaloPacketContainerv1_Dict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_CaloPacketContainerv1_Dict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_CaloPacketContainerv1_Dict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_CaloPacketContainerv1_Dict() {
  TriggerDictionaryInitialization_CaloPacketContainerv1_Dict_Impl();
}
