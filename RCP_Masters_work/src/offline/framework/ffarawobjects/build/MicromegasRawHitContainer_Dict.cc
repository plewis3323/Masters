// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME MicromegasRawHitContainer_Dict
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
#include "../MicromegasRawHitContainer.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static void *new_MicromegasRawHitContainer(void *p = nullptr);
   static void *newArray_MicromegasRawHitContainer(Long_t size, void *p);
   static void delete_MicromegasRawHitContainer(void *p);
   static void deleteArray_MicromegasRawHitContainer(void *p);
   static void destruct_MicromegasRawHitContainer(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::MicromegasRawHitContainer*)
   {
      ::MicromegasRawHitContainer *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::MicromegasRawHitContainer >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("MicromegasRawHitContainer", ::MicromegasRawHitContainer::Class_Version(), "", 10,
                  typeid(::MicromegasRawHitContainer), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::MicromegasRawHitContainer::Dictionary, isa_proxy, 4,
                  sizeof(::MicromegasRawHitContainer) );
      instance.SetNew(&new_MicromegasRawHitContainer);
      instance.SetNewArray(&newArray_MicromegasRawHitContainer);
      instance.SetDelete(&delete_MicromegasRawHitContainer);
      instance.SetDeleteArray(&deleteArray_MicromegasRawHitContainer);
      instance.SetDestructor(&destruct_MicromegasRawHitContainer);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::MicromegasRawHitContainer*)
   {
      return GenerateInitInstanceLocal(static_cast<::MicromegasRawHitContainer*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::MicromegasRawHitContainer*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr MicromegasRawHitContainer::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *MicromegasRawHitContainer::Class_Name()
{
   return "MicromegasRawHitContainer";
}

//______________________________________________________________________________
const char *MicromegasRawHitContainer::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::MicromegasRawHitContainer*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int MicromegasRawHitContainer::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::MicromegasRawHitContainer*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *MicromegasRawHitContainer::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::MicromegasRawHitContainer*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *MicromegasRawHitContainer::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::MicromegasRawHitContainer*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void MicromegasRawHitContainer::Streamer(TBuffer &R__b)
{
   // Stream an object of class MicromegasRawHitContainer.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(MicromegasRawHitContainer::Class(),this);
   } else {
      R__b.WriteClassBuffer(MicromegasRawHitContainer::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_MicromegasRawHitContainer(void *p) {
      return  p ? new(p) ::MicromegasRawHitContainer : new ::MicromegasRawHitContainer;
   }
   static void *newArray_MicromegasRawHitContainer(Long_t nElements, void *p) {
      return p ? new(p) ::MicromegasRawHitContainer[nElements] : new ::MicromegasRawHitContainer[nElements];
   }
   // Wrapper around operator delete
   static void delete_MicromegasRawHitContainer(void *p) {
      delete (static_cast<::MicromegasRawHitContainer*>(p));
   }
   static void deleteArray_MicromegasRawHitContainer(void *p) {
      delete [] (static_cast<::MicromegasRawHitContainer*>(p));
   }
   static void destruct_MicromegasRawHitContainer(void *p) {
      typedef ::MicromegasRawHitContainer current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::MicromegasRawHitContainer

namespace {
  void TriggerDictionaryInitialization_MicromegasRawHitContainer_Dict_Impl() {
    static const char* headers[] = {
"0",
nullptr
    };
    static const char* includePaths[] = {
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "MicromegasRawHitContainer_Dict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
class MicromegasRawHitContainer;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "MicromegasRawHitContainer_Dict dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#ifndef FUN4ALLRAW_MICROMEGASRAWHITCONTAINER_H
#define FUN4ALLRAW_MICROMEGASRAWHITCONTAINER_H

#include <phool/PHObject.h>

class MicromegasRawHit;

class MicromegasRawHitContainer : public PHObject
{
 public:
  MicromegasRawHitContainer() = default;
  virtual ~MicromegasRawHitContainer() = default;

  virtual MicromegasRawHit *AddHit() { return nullptr; }
  virtual MicromegasRawHit *AddHit(MicromegasRawHit *) { return nullptr; }
  virtual unsigned int get_nhits() { return 0; }
  virtual MicromegasRawHit *get_hit(unsigned int) { return nullptr; }

 private:
  ClassDefOverride(MicromegasRawHitContainer, 1)
};

#endif

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"MicromegasRawHitContainer", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("MicromegasRawHitContainer_Dict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_MicromegasRawHitContainer_Dict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_MicromegasRawHitContainer_Dict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_MicromegasRawHitContainer_Dict() {
  TriggerDictionaryInitialization_MicromegasRawHitContainer_Dict_Impl();
}
