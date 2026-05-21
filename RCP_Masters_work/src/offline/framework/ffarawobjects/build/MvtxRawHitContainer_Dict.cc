// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME MvtxRawHitContainer_Dict
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
#include "../MvtxRawHitContainer.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static void *new_MvtxRawHitContainer(void *p = nullptr);
   static void *newArray_MvtxRawHitContainer(Long_t size, void *p);
   static void delete_MvtxRawHitContainer(void *p);
   static void deleteArray_MvtxRawHitContainer(void *p);
   static void destruct_MvtxRawHitContainer(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::MvtxRawHitContainer*)
   {
      ::MvtxRawHitContainer *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::MvtxRawHitContainer >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("MvtxRawHitContainer", ::MvtxRawHitContainer::Class_Version(), "", 10,
                  typeid(::MvtxRawHitContainer), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::MvtxRawHitContainer::Dictionary, isa_proxy, 4,
                  sizeof(::MvtxRawHitContainer) );
      instance.SetNew(&new_MvtxRawHitContainer);
      instance.SetNewArray(&newArray_MvtxRawHitContainer);
      instance.SetDelete(&delete_MvtxRawHitContainer);
      instance.SetDeleteArray(&deleteArray_MvtxRawHitContainer);
      instance.SetDestructor(&destruct_MvtxRawHitContainer);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::MvtxRawHitContainer*)
   {
      return GenerateInitInstanceLocal(static_cast<::MvtxRawHitContainer*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::MvtxRawHitContainer*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr MvtxRawHitContainer::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *MvtxRawHitContainer::Class_Name()
{
   return "MvtxRawHitContainer";
}

//______________________________________________________________________________
const char *MvtxRawHitContainer::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::MvtxRawHitContainer*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int MvtxRawHitContainer::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::MvtxRawHitContainer*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *MvtxRawHitContainer::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::MvtxRawHitContainer*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *MvtxRawHitContainer::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::MvtxRawHitContainer*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void MvtxRawHitContainer::Streamer(TBuffer &R__b)
{
   // Stream an object of class MvtxRawHitContainer.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(MvtxRawHitContainer::Class(),this);
   } else {
      R__b.WriteClassBuffer(MvtxRawHitContainer::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_MvtxRawHitContainer(void *p) {
      return  p ? new(p) ::MvtxRawHitContainer : new ::MvtxRawHitContainer;
   }
   static void *newArray_MvtxRawHitContainer(Long_t nElements, void *p) {
      return p ? new(p) ::MvtxRawHitContainer[nElements] : new ::MvtxRawHitContainer[nElements];
   }
   // Wrapper around operator delete
   static void delete_MvtxRawHitContainer(void *p) {
      delete (static_cast<::MvtxRawHitContainer*>(p));
   }
   static void deleteArray_MvtxRawHitContainer(void *p) {
      delete [] (static_cast<::MvtxRawHitContainer*>(p));
   }
   static void destruct_MvtxRawHitContainer(void *p) {
      typedef ::MvtxRawHitContainer current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::MvtxRawHitContainer

namespace {
  void TriggerDictionaryInitialization_MvtxRawHitContainer_Dict_Impl() {
    static const char* headers[] = {
"0",
nullptr
    };
    static const char* includePaths[] = {
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "MvtxRawHitContainer_Dict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
class MvtxRawHitContainer;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "MvtxRawHitContainer_Dict dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#ifndef FUN4ALLRAW_MVTXRAWHITCONTAINER_H
#define FUN4ALLRAW_MVTXRAWHITCONTAINER_H

#include <phool/PHObject.h>

class MvtxRawHit;

class MvtxRawHitContainer : public PHObject
{
 public:
  MvtxRawHitContainer() = default;
  virtual ~MvtxRawHitContainer() = default;

  virtual MvtxRawHit *AddHit() { return nullptr; }
  virtual MvtxRawHit *AddHit(MvtxRawHit *) { return nullptr; }
  virtual unsigned int get_nhits() { return 0; }
  virtual MvtxRawHit *get_hit(unsigned int) { return nullptr; }

 private:
  ClassDefOverride(MvtxRawHitContainer, 1)
};

#endif

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"MvtxRawHitContainer", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("MvtxRawHitContainer_Dict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_MvtxRawHitContainer_Dict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_MvtxRawHitContainer_Dict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_MvtxRawHitContainer_Dict() {
  TriggerDictionaryInitialization_MvtxRawHitContainer_Dict_Impl();
}
