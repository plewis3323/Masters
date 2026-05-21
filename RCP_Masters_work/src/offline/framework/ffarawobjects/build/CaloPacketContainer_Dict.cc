// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME CaloPacketContainer_Dict
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
#include "../CaloPacketContainer.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static void *new_CaloPacketContainer(void *p = nullptr);
   static void *newArray_CaloPacketContainer(Long_t size, void *p);
   static void delete_CaloPacketContainer(void *p);
   static void deleteArray_CaloPacketContainer(void *p);
   static void destruct_CaloPacketContainer(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CaloPacketContainer*)
   {
      ::CaloPacketContainer *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::CaloPacketContainer >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("CaloPacketContainer", ::CaloPacketContainer::Class_Version(), "", 12,
                  typeid(::CaloPacketContainer), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::CaloPacketContainer::Dictionary, isa_proxy, 4,
                  sizeof(::CaloPacketContainer) );
      instance.SetNew(&new_CaloPacketContainer);
      instance.SetNewArray(&newArray_CaloPacketContainer);
      instance.SetDelete(&delete_CaloPacketContainer);
      instance.SetDeleteArray(&deleteArray_CaloPacketContainer);
      instance.SetDestructor(&destruct_CaloPacketContainer);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CaloPacketContainer*)
   {
      return GenerateInitInstanceLocal(static_cast<::CaloPacketContainer*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::CaloPacketContainer*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr CaloPacketContainer::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *CaloPacketContainer::Class_Name()
{
   return "CaloPacketContainer";
}

//______________________________________________________________________________
const char *CaloPacketContainer::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CaloPacketContainer*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int CaloPacketContainer::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CaloPacketContainer*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *CaloPacketContainer::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CaloPacketContainer*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *CaloPacketContainer::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CaloPacketContainer*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void CaloPacketContainer::Streamer(TBuffer &R__b)
{
   // Stream an object of class CaloPacketContainer.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(CaloPacketContainer::Class(),this);
   } else {
      R__b.WriteClassBuffer(CaloPacketContainer::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_CaloPacketContainer(void *p) {
      return  p ? new(p) ::CaloPacketContainer : new ::CaloPacketContainer;
   }
   static void *newArray_CaloPacketContainer(Long_t nElements, void *p) {
      return p ? new(p) ::CaloPacketContainer[nElements] : new ::CaloPacketContainer[nElements];
   }
   // Wrapper around operator delete
   static void delete_CaloPacketContainer(void *p) {
      delete (static_cast<::CaloPacketContainer*>(p));
   }
   static void deleteArray_CaloPacketContainer(void *p) {
      delete [] (static_cast<::CaloPacketContainer*>(p));
   }
   static void destruct_CaloPacketContainer(void *p) {
      typedef ::CaloPacketContainer current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::CaloPacketContainer

namespace {
  void TriggerDictionaryInitialization_CaloPacketContainer_Dict_Impl() {
    static const char* headers[] = {
"0",
nullptr
    };
    static const char* includePaths[] = {
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "CaloPacketContainer_Dict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
class CaloPacketContainer;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "CaloPacketContainer_Dict dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#ifndef FUN4ALLRAW_CALOPACKETCONTAINER_H
#define FUN4ALLRAW_CALOPACKETCONTAINER_H

#include <phool/PHObject.h>

#include <limits>

class CaloPacket;

class CaloPacketContainer : public PHObject
{
 public:
  CaloPacketContainer() = default;
  virtual ~CaloPacketContainer() = default;

  virtual CaloPacket *AddPacket() { return nullptr; }
  virtual CaloPacket *AddPacket(CaloPacket *) { return nullptr; }
  virtual unsigned int get_npackets() { return 0; }
  virtual CaloPacket *getPacket(unsigned int) { return nullptr; }
  virtual CaloPacket *getPacketbyId(int) { return nullptr; }
  virtual void setEvtSequence(const int) { return; }
  virtual int getEvtSequence() const { return std::numeric_limits<int>::min(); }
  virtual void setStatus(const unsigned int) { return; }
  virtual unsigned int getStatus() const { return 0; }
  virtual void deletePacketAt(int) { return; }
  virtual void deletePacket(CaloPacket *) { return; }

 private:
  ClassDefOverride(CaloPacketContainer, 1)
};

#endif

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"CaloPacketContainer", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("CaloPacketContainer_Dict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_CaloPacketContainer_Dict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_CaloPacketContainer_Dict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_CaloPacketContainer_Dict() {
  TriggerDictionaryInitialization_CaloPacketContainer_Dict_Impl();
}
