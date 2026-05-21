// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME InttRawHitContainerv1_Dict
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
#include "../InttRawHitContainerv1.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static void *new_InttRawHitContainerv1(void *p = nullptr);
   static void *newArray_InttRawHitContainerv1(Long_t size, void *p);
   static void delete_InttRawHitContainerv1(void *p);
   static void deleteArray_InttRawHitContainerv1(void *p);
   static void destruct_InttRawHitContainerv1(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::InttRawHitContainerv1*)
   {
      ::InttRawHitContainerv1 *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::InttRawHitContainerv1 >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("InttRawHitContainerv1", ::InttRawHitContainerv1::Class_Version(), "", 11,
                  typeid(::InttRawHitContainerv1), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::InttRawHitContainerv1::Dictionary, isa_proxy, 4,
                  sizeof(::InttRawHitContainerv1) );
      instance.SetNew(&new_InttRawHitContainerv1);
      instance.SetNewArray(&newArray_InttRawHitContainerv1);
      instance.SetDelete(&delete_InttRawHitContainerv1);
      instance.SetDeleteArray(&deleteArray_InttRawHitContainerv1);
      instance.SetDestructor(&destruct_InttRawHitContainerv1);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::InttRawHitContainerv1*)
   {
      return GenerateInitInstanceLocal(static_cast<::InttRawHitContainerv1*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::InttRawHitContainerv1*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr InttRawHitContainerv1::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *InttRawHitContainerv1::Class_Name()
{
   return "InttRawHitContainerv1";
}

//______________________________________________________________________________
const char *InttRawHitContainerv1::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::InttRawHitContainerv1*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int InttRawHitContainerv1::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::InttRawHitContainerv1*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *InttRawHitContainerv1::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::InttRawHitContainerv1*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *InttRawHitContainerv1::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::InttRawHitContainerv1*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void InttRawHitContainerv1::Streamer(TBuffer &R__b)
{
   // Stream an object of class InttRawHitContainerv1.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(InttRawHitContainerv1::Class(),this);
   } else {
      R__b.WriteClassBuffer(InttRawHitContainerv1::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_InttRawHitContainerv1(void *p) {
      return  p ? new(p) ::InttRawHitContainerv1 : new ::InttRawHitContainerv1;
   }
   static void *newArray_InttRawHitContainerv1(Long_t nElements, void *p) {
      return p ? new(p) ::InttRawHitContainerv1[nElements] : new ::InttRawHitContainerv1[nElements];
   }
   // Wrapper around operator delete
   static void delete_InttRawHitContainerv1(void *p) {
      delete (static_cast<::InttRawHitContainerv1*>(p));
   }
   static void deleteArray_InttRawHitContainerv1(void *p) {
      delete [] (static_cast<::InttRawHitContainerv1*>(p));
   }
   static void destruct_InttRawHitContainerv1(void *p) {
      typedef ::InttRawHitContainerv1 current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::InttRawHitContainerv1

namespace {
  void TriggerDictionaryInitialization_InttRawHitContainerv1_Dict_Impl() {
    static const char* headers[] = {
"0",
nullptr
    };
    static const char* includePaths[] = {
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "InttRawHitContainerv1_Dict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
class InttRawHitContainerv1;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "InttRawHitContainerv1_Dict dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#ifndef FUN4ALLRAW_INTTRAWHITCONTAINERV1_H
#define FUN4ALLRAW_INTTRAWHITCONTAINERV1_H

#include "InttRawHitContainer.h"

class InttRawHit;
class TClonesArray;

class InttRawHitContainerv1 : public InttRawHitContainer
{
 public:
  InttRawHitContainerv1();
  ~InttRawHitContainerv1() override;

  /// Clear Event
  void Reset() override;

  /** identify Function from PHObject
      @param os Output Stream
   */
  void identify(std::ostream &os = std::cout) const override;

  /// isValid returns non zero if object contains vailid data
  int isValid() const override;

  InttRawHit *AddHit() override;
  InttRawHit *AddHit(InttRawHit *intthit) override;
  unsigned int get_nhits() override;
  InttRawHit *get_hit(unsigned int index) override;

 private:
  TClonesArray *InttRawHitsTCArray = nullptr;

  ClassDefOverride(InttRawHitContainerv1, 1)
};

#endif

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"InttRawHitContainerv1", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("InttRawHitContainerv1_Dict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_InttRawHitContainerv1_Dict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_InttRawHitContainerv1_Dict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_InttRawHitContainerv1_Dict() {
  TriggerDictionaryInitialization_InttRawHitContainerv1_Dict_Impl();
}
