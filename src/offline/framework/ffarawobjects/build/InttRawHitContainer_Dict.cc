// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME InttRawHitContainer_Dict
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
#include "../InttRawHitContainer.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static void *new_InttRawHitContainer(void *p = nullptr);
   static void *newArray_InttRawHitContainer(Long_t size, void *p);
   static void delete_InttRawHitContainer(void *p);
   static void deleteArray_InttRawHitContainer(void *p);
   static void destruct_InttRawHitContainer(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::InttRawHitContainer*)
   {
      ::InttRawHitContainer *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::InttRawHitContainer >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("InttRawHitContainer", ::InttRawHitContainer::Class_Version(), "", 10,
                  typeid(::InttRawHitContainer), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::InttRawHitContainer::Dictionary, isa_proxy, 4,
                  sizeof(::InttRawHitContainer) );
      instance.SetNew(&new_InttRawHitContainer);
      instance.SetNewArray(&newArray_InttRawHitContainer);
      instance.SetDelete(&delete_InttRawHitContainer);
      instance.SetDeleteArray(&deleteArray_InttRawHitContainer);
      instance.SetDestructor(&destruct_InttRawHitContainer);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::InttRawHitContainer*)
   {
      return GenerateInitInstanceLocal(static_cast<::InttRawHitContainer*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::InttRawHitContainer*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr InttRawHitContainer::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *InttRawHitContainer::Class_Name()
{
   return "InttRawHitContainer";
}

//______________________________________________________________________________
const char *InttRawHitContainer::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::InttRawHitContainer*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int InttRawHitContainer::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::InttRawHitContainer*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *InttRawHitContainer::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::InttRawHitContainer*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *InttRawHitContainer::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::InttRawHitContainer*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void InttRawHitContainer::Streamer(TBuffer &R__b)
{
   // Stream an object of class InttRawHitContainer.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(InttRawHitContainer::Class(),this);
   } else {
      R__b.WriteClassBuffer(InttRawHitContainer::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_InttRawHitContainer(void *p) {
      return  p ? new(p) ::InttRawHitContainer : new ::InttRawHitContainer;
   }
   static void *newArray_InttRawHitContainer(Long_t nElements, void *p) {
      return p ? new(p) ::InttRawHitContainer[nElements] : new ::InttRawHitContainer[nElements];
   }
   // Wrapper around operator delete
   static void delete_InttRawHitContainer(void *p) {
      delete (static_cast<::InttRawHitContainer*>(p));
   }
   static void deleteArray_InttRawHitContainer(void *p) {
      delete [] (static_cast<::InttRawHitContainer*>(p));
   }
   static void destruct_InttRawHitContainer(void *p) {
      typedef ::InttRawHitContainer current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::InttRawHitContainer

namespace {
  void TriggerDictionaryInitialization_InttRawHitContainer_Dict_Impl() {
    static const char* headers[] = {
"0",
nullptr
    };
    static const char* includePaths[] = {
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "InttRawHitContainer_Dict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
class InttRawHitContainer;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "InttRawHitContainer_Dict dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#ifndef FUN4ALLRAW_INTTRAWHITCONTAINER_H
#define FUN4ALLRAW_INTTRAWHITCONTAINER_H

#include <phool/PHObject.h>

class InttRawHit;

class InttRawHitContainer : public PHObject
{
 public:
  InttRawHitContainer() = default;
  virtual ~InttRawHitContainer() = default;

  virtual InttRawHit *AddHit() { return nullptr; }
  virtual InttRawHit *AddHit(InttRawHit *) { return nullptr; }
  virtual unsigned int get_nhits() { return 0; }
  virtual InttRawHit *get_hit(unsigned int) { return nullptr; }

 private:
  ClassDefOverride(InttRawHitContainer, 1)
};

#endif

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"InttRawHitContainer", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("InttRawHitContainer_Dict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_InttRawHitContainer_Dict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_InttRawHitContainer_Dict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_InttRawHitContainer_Dict() {
  TriggerDictionaryInitialization_InttRawHitContainer_Dict_Impl();
}
