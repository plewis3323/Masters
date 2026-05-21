// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME TpcRawHitContainer_Dict
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
#include "../TpcRawHitContainer.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static void *new_TpcRawHitContainer(void *p = nullptr);
   static void *newArray_TpcRawHitContainer(Long_t size, void *p);
   static void delete_TpcRawHitContainer(void *p);
   static void deleteArray_TpcRawHitContainer(void *p);
   static void destruct_TpcRawHitContainer(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TpcRawHitContainer*)
   {
      ::TpcRawHitContainer *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TpcRawHitContainer >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TpcRawHitContainer", ::TpcRawHitContainer::Class_Version(), "", 10,
                  typeid(::TpcRawHitContainer), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TpcRawHitContainer::Dictionary, isa_proxy, 4,
                  sizeof(::TpcRawHitContainer) );
      instance.SetNew(&new_TpcRawHitContainer);
      instance.SetNewArray(&newArray_TpcRawHitContainer);
      instance.SetDelete(&delete_TpcRawHitContainer);
      instance.SetDeleteArray(&deleteArray_TpcRawHitContainer);
      instance.SetDestructor(&destruct_TpcRawHitContainer);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TpcRawHitContainer*)
   {
      return GenerateInitInstanceLocal(static_cast<::TpcRawHitContainer*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TpcRawHitContainer*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr TpcRawHitContainer::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TpcRawHitContainer::Class_Name()
{
   return "TpcRawHitContainer";
}

//______________________________________________________________________________
const char *TpcRawHitContainer::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TpcRawHitContainer*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TpcRawHitContainer::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TpcRawHitContainer*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TpcRawHitContainer::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TpcRawHitContainer*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TpcRawHitContainer::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TpcRawHitContainer*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void TpcRawHitContainer::Streamer(TBuffer &R__b)
{
   // Stream an object of class TpcRawHitContainer.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TpcRawHitContainer::Class(),this);
   } else {
      R__b.WriteClassBuffer(TpcRawHitContainer::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TpcRawHitContainer(void *p) {
      return  p ? new(p) ::TpcRawHitContainer : new ::TpcRawHitContainer;
   }
   static void *newArray_TpcRawHitContainer(Long_t nElements, void *p) {
      return p ? new(p) ::TpcRawHitContainer[nElements] : new ::TpcRawHitContainer[nElements];
   }
   // Wrapper around operator delete
   static void delete_TpcRawHitContainer(void *p) {
      delete (static_cast<::TpcRawHitContainer*>(p));
   }
   static void deleteArray_TpcRawHitContainer(void *p) {
      delete [] (static_cast<::TpcRawHitContainer*>(p));
   }
   static void destruct_TpcRawHitContainer(void *p) {
      typedef ::TpcRawHitContainer current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TpcRawHitContainer

namespace {
  void TriggerDictionaryInitialization_TpcRawHitContainer_Dict_Impl() {
    static const char* headers[] = {
"0",
nullptr
    };
    static const char* includePaths[] = {
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "TpcRawHitContainer_Dict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
class TpcRawHitContainer;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "TpcRawHitContainer_Dict dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#ifndef FUN4ALLRAW_TPCRAWHITCONTAINER_H
#define FUN4ALLRAW_TPCRAWHITCONTAINER_H

#include <phool/PHObject.h>

class TpcRawHit;

class TpcRawHitContainer : public PHObject
{
 public:
  TpcRawHitContainer() = default;
  virtual ~TpcRawHitContainer() = default;

  virtual TpcRawHit *AddHit() { return nullptr; }
  virtual TpcRawHit *AddHit(TpcRawHit *) { return nullptr; }
  virtual unsigned int get_nhits() { return 0; }
  virtual TpcRawHit *get_hit(unsigned int) { return nullptr; }
  virtual void setStatus(const unsigned int) { return; }
  virtual unsigned int getStatus() const { return 0; }
  virtual void setBco(const uint64_t) { return; }
  virtual uint64_t getBco() const { return 0; }

 private:
  ClassDefOverride(TpcRawHitContainer, 0)
};

#endif

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"TpcRawHitContainer", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("TpcRawHitContainer_Dict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_TpcRawHitContainer_Dict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_TpcRawHitContainer_Dict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_TpcRawHitContainer_Dict() {
  TriggerDictionaryInitialization_TpcRawHitContainer_Dict_Impl();
}
