// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME TpcRawHitContainerv1_Dict
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
#include "../TpcRawHitContainerv1.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static void *new_TpcRawHitContainerv1(void *p = nullptr);
   static void *newArray_TpcRawHitContainerv1(Long_t size, void *p);
   static void delete_TpcRawHitContainerv1(void *p);
   static void deleteArray_TpcRawHitContainerv1(void *p);
   static void destruct_TpcRawHitContainerv1(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TpcRawHitContainerv1*)
   {
      ::TpcRawHitContainerv1 *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TpcRawHitContainerv1 >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TpcRawHitContainerv1", ::TpcRawHitContainerv1::Class_Version(), "", 11,
                  typeid(::TpcRawHitContainerv1), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TpcRawHitContainerv1::Dictionary, isa_proxy, 4,
                  sizeof(::TpcRawHitContainerv1) );
      instance.SetNew(&new_TpcRawHitContainerv1);
      instance.SetNewArray(&newArray_TpcRawHitContainerv1);
      instance.SetDelete(&delete_TpcRawHitContainerv1);
      instance.SetDeleteArray(&deleteArray_TpcRawHitContainerv1);
      instance.SetDestructor(&destruct_TpcRawHitContainerv1);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TpcRawHitContainerv1*)
   {
      return GenerateInitInstanceLocal(static_cast<::TpcRawHitContainerv1*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TpcRawHitContainerv1*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr TpcRawHitContainerv1::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TpcRawHitContainerv1::Class_Name()
{
   return "TpcRawHitContainerv1";
}

//______________________________________________________________________________
const char *TpcRawHitContainerv1::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TpcRawHitContainerv1*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TpcRawHitContainerv1::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TpcRawHitContainerv1*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TpcRawHitContainerv1::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TpcRawHitContainerv1*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TpcRawHitContainerv1::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TpcRawHitContainerv1*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void TpcRawHitContainerv1::Streamer(TBuffer &R__b)
{
   // Stream an object of class TpcRawHitContainerv1.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TpcRawHitContainerv1::Class(),this);
   } else {
      R__b.WriteClassBuffer(TpcRawHitContainerv1::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TpcRawHitContainerv1(void *p) {
      return  p ? new(p) ::TpcRawHitContainerv1 : new ::TpcRawHitContainerv1;
   }
   static void *newArray_TpcRawHitContainerv1(Long_t nElements, void *p) {
      return p ? new(p) ::TpcRawHitContainerv1[nElements] : new ::TpcRawHitContainerv1[nElements];
   }
   // Wrapper around operator delete
   static void delete_TpcRawHitContainerv1(void *p) {
      delete (static_cast<::TpcRawHitContainerv1*>(p));
   }
   static void deleteArray_TpcRawHitContainerv1(void *p) {
      delete [] (static_cast<::TpcRawHitContainerv1*>(p));
   }
   static void destruct_TpcRawHitContainerv1(void *p) {
      typedef ::TpcRawHitContainerv1 current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TpcRawHitContainerv1

namespace {
  void TriggerDictionaryInitialization_TpcRawHitContainerv1_Dict_Impl() {
    static const char* headers[] = {
"0",
nullptr
    };
    static const char* includePaths[] = {
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "TpcRawHitContainerv1_Dict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
class TpcRawHitContainerv1;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "TpcRawHitContainerv1_Dict dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#ifndef FUN4ALLRAW_TPCHITRAWCONTAINERV1_H
#define FUN4ALLRAW_TPCHITRAWCONTAINERV1_H

#include "TpcRawHitContainer.h"

class TpcRawHit;
class TClonesArray;

class TpcRawHitContainerv1 : public TpcRawHitContainer
{
 public:
  TpcRawHitContainerv1();
  ~TpcRawHitContainerv1() override;

  /// Clear Event
  void Reset() override;

  /** identify Function from PHObject
      @param os Output Stream
   */
  void identify(std::ostream &os = std::cout) const override;

  /// isValid returns non zero if object contains vailid data
  int isValid() const override;

  TpcRawHit *AddHit() override;
  TpcRawHit *AddHit(TpcRawHit *tpchit) override;
  unsigned int get_nhits() override;
  TpcRawHit *get_hit(unsigned int index) override;

 private:
  TClonesArray *TpcRawHitsTCArray = nullptr;

  ClassDefOverride(TpcRawHitContainerv1, 1)
};

#endif

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"TpcRawHitContainerv1", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("TpcRawHitContainerv1_Dict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_TpcRawHitContainerv1_Dict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_TpcRawHitContainerv1_Dict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_TpcRawHitContainerv1_Dict() {
  TriggerDictionaryInitialization_TpcRawHitContainerv1_Dict_Impl();
}
