// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME InttRawHitv2_Dict
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
#include "../InttRawHitv2.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static void *new_InttRawHitv2(void *p = nullptr);
   static void *newArray_InttRawHitv2(Long_t size, void *p);
   static void delete_InttRawHitv2(void *p);
   static void deleteArray_InttRawHitv2(void *p);
   static void destruct_InttRawHitv2(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::InttRawHitv2*)
   {
      ::InttRawHitv2 *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::InttRawHitv2 >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("InttRawHitv2", ::InttRawHitv2::Class_Version(), "", 10,
                  typeid(::InttRawHitv2), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::InttRawHitv2::Dictionary, isa_proxy, 4,
                  sizeof(::InttRawHitv2) );
      instance.SetNew(&new_InttRawHitv2);
      instance.SetNewArray(&newArray_InttRawHitv2);
      instance.SetDelete(&delete_InttRawHitv2);
      instance.SetDeleteArray(&deleteArray_InttRawHitv2);
      instance.SetDestructor(&destruct_InttRawHitv2);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::InttRawHitv2*)
   {
      return GenerateInitInstanceLocal(static_cast<::InttRawHitv2*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::InttRawHitv2*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr InttRawHitv2::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *InttRawHitv2::Class_Name()
{
   return "InttRawHitv2";
}

//______________________________________________________________________________
const char *InttRawHitv2::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::InttRawHitv2*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int InttRawHitv2::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::InttRawHitv2*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *InttRawHitv2::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::InttRawHitv2*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *InttRawHitv2::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::InttRawHitv2*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void InttRawHitv2::Streamer(TBuffer &R__b)
{
   // Stream an object of class InttRawHitv2.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(InttRawHitv2::Class(),this);
   } else {
      R__b.WriteClassBuffer(InttRawHitv2::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_InttRawHitv2(void *p) {
      return  p ? new(p) ::InttRawHitv2 : new ::InttRawHitv2;
   }
   static void *newArray_InttRawHitv2(Long_t nElements, void *p) {
      return p ? new(p) ::InttRawHitv2[nElements] : new ::InttRawHitv2[nElements];
   }
   // Wrapper around operator delete
   static void delete_InttRawHitv2(void *p) {
      delete (static_cast<::InttRawHitv2*>(p));
   }
   static void deleteArray_InttRawHitv2(void *p) {
      delete [] (static_cast<::InttRawHitv2*>(p));
   }
   static void destruct_InttRawHitv2(void *p) {
      typedef ::InttRawHitv2 current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::InttRawHitv2

namespace {
  void TriggerDictionaryInitialization_InttRawHitv2_Dict_Impl() {
    static const char* headers[] = {
"0",
nullptr
    };
    static const char* includePaths[] = {
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "InttRawHitv2_Dict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
class InttRawHitv2;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "InttRawHitv2_Dict dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#ifndef FUN4ALLRAW_INTTRAWHITV2_H
#define FUN4ALLRAW_INTTRAWHITV2_H

#include "InttRawHitv1.h"

#include <limits>

class InttRawHitv2 : public InttRawHitv1
{
 public:
  InttRawHitv2() = default;
  InttRawHitv2(InttRawHit *intthit);
  ~InttRawHitv2() override = default;

  /** identify Function from PHObject
      @param os Output Stream
   */
  void identify(std::ostream &os = std::cout) const override;

  uint32_t get_event_counter() const override { return event_counter; }
  void set_event_counter(uint32_t val) override { event_counter = val; }

 protected:
  uint32_t event_counter = std::numeric_limits<uint32_t>::max();

  ClassDefOverride(InttRawHitv2, 1)
};

#endif

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"InttRawHitv2", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("InttRawHitv2_Dict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_InttRawHitv2_Dict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_InttRawHitv2_Dict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_InttRawHitv2_Dict() {
  TriggerDictionaryInitialization_InttRawHitv2_Dict_Impl();
}
