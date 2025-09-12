// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME InttRawHitContainerv2_Dict
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
#include "../InttRawHitContainerv2.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static void *new_InttRawHitContainerv2(void *p = nullptr);
   static void *newArray_InttRawHitContainerv2(Long_t size, void *p);
   static void delete_InttRawHitContainerv2(void *p);
   static void deleteArray_InttRawHitContainerv2(void *p);
   static void destruct_InttRawHitContainerv2(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::InttRawHitContainerv2*)
   {
      ::InttRawHitContainerv2 *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::InttRawHitContainerv2 >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("InttRawHitContainerv2", ::InttRawHitContainerv2::Class_Version(), "", 11,
                  typeid(::InttRawHitContainerv2), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::InttRawHitContainerv2::Dictionary, isa_proxy, 4,
                  sizeof(::InttRawHitContainerv2) );
      instance.SetNew(&new_InttRawHitContainerv2);
      instance.SetNewArray(&newArray_InttRawHitContainerv2);
      instance.SetDelete(&delete_InttRawHitContainerv2);
      instance.SetDeleteArray(&deleteArray_InttRawHitContainerv2);
      instance.SetDestructor(&destruct_InttRawHitContainerv2);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::InttRawHitContainerv2*)
   {
      return GenerateInitInstanceLocal(static_cast<::InttRawHitContainerv2*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::InttRawHitContainerv2*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr InttRawHitContainerv2::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *InttRawHitContainerv2::Class_Name()
{
   return "InttRawHitContainerv2";
}

//______________________________________________________________________________
const char *InttRawHitContainerv2::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::InttRawHitContainerv2*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int InttRawHitContainerv2::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::InttRawHitContainerv2*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *InttRawHitContainerv2::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::InttRawHitContainerv2*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *InttRawHitContainerv2::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::InttRawHitContainerv2*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void InttRawHitContainerv2::Streamer(TBuffer &R__b)
{
   // Stream an object of class InttRawHitContainerv2.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(InttRawHitContainerv2::Class(),this);
   } else {
      R__b.WriteClassBuffer(InttRawHitContainerv2::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_InttRawHitContainerv2(void *p) {
      return  p ? new(p) ::InttRawHitContainerv2 : new ::InttRawHitContainerv2;
   }
   static void *newArray_InttRawHitContainerv2(Long_t nElements, void *p) {
      return p ? new(p) ::InttRawHitContainerv2[nElements] : new ::InttRawHitContainerv2[nElements];
   }
   // Wrapper around operator delete
   static void delete_InttRawHitContainerv2(void *p) {
      delete (static_cast<::InttRawHitContainerv2*>(p));
   }
   static void deleteArray_InttRawHitContainerv2(void *p) {
      delete [] (static_cast<::InttRawHitContainerv2*>(p));
   }
   static void destruct_InttRawHitContainerv2(void *p) {
      typedef ::InttRawHitContainerv2 current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::InttRawHitContainerv2

namespace {
  void TriggerDictionaryInitialization_InttRawHitContainerv2_Dict_Impl() {
    static const char* headers[] = {
"0",
nullptr
    };
    static const char* includePaths[] = {
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "InttRawHitContainerv2_Dict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
class InttRawHitContainerv2;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "InttRawHitContainerv2_Dict dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#ifndef FUN4ALLRAW_INTTRAWHITCONTAINERV2_H
#define FUN4ALLRAW_INTTRAWHITCONTAINERV2_H

#include "InttRawHitContainer.h"

class InttRawHit;
class TClonesArray;

class InttRawHitContainerv2 : public InttRawHitContainer
{
 public:
  InttRawHitContainerv2();
  ~InttRawHitContainerv2() override;

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

  ClassDefOverride(InttRawHitContainerv2, 1)
};

#endif

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"InttRawHitContainerv2", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("InttRawHitContainerv2_Dict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_InttRawHitContainerv2_Dict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_InttRawHitContainerv2_Dict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_InttRawHitContainerv2_Dict() {
  TriggerDictionaryInitialization_InttRawHitContainerv2_Dict_Impl();
}
