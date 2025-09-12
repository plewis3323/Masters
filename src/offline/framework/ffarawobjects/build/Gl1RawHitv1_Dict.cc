// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME Gl1RawHitv1_Dict
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
#include "../Gl1RawHitv1.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static void *new_Gl1RawHitv1(void *p = nullptr);
   static void *newArray_Gl1RawHitv1(Long_t size, void *p);
   static void delete_Gl1RawHitv1(void *p);
   static void deleteArray_Gl1RawHitv1(void *p);
   static void destruct_Gl1RawHitv1(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::Gl1RawHitv1*)
   {
      ::Gl1RawHitv1 *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::Gl1RawHitv1 >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("Gl1RawHitv1", ::Gl1RawHitv1::Class_Version(), "", 10,
                  typeid(::Gl1RawHitv1), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::Gl1RawHitv1::Dictionary, isa_proxy, 4,
                  sizeof(::Gl1RawHitv1) );
      instance.SetNew(&new_Gl1RawHitv1);
      instance.SetNewArray(&newArray_Gl1RawHitv1);
      instance.SetDelete(&delete_Gl1RawHitv1);
      instance.SetDeleteArray(&deleteArray_Gl1RawHitv1);
      instance.SetDestructor(&destruct_Gl1RawHitv1);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::Gl1RawHitv1*)
   {
      return GenerateInitInstanceLocal(static_cast<::Gl1RawHitv1*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::Gl1RawHitv1*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr Gl1RawHitv1::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *Gl1RawHitv1::Class_Name()
{
   return "Gl1RawHitv1";
}

//______________________________________________________________________________
const char *Gl1RawHitv1::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::Gl1RawHitv1*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int Gl1RawHitv1::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::Gl1RawHitv1*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *Gl1RawHitv1::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::Gl1RawHitv1*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *Gl1RawHitv1::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::Gl1RawHitv1*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void Gl1RawHitv1::Streamer(TBuffer &R__b)
{
   // Stream an object of class Gl1RawHitv1.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(Gl1RawHitv1::Class(),this);
   } else {
      R__b.WriteClassBuffer(Gl1RawHitv1::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_Gl1RawHitv1(void *p) {
      return  p ? new(p) ::Gl1RawHitv1 : new ::Gl1RawHitv1;
   }
   static void *newArray_Gl1RawHitv1(Long_t nElements, void *p) {
      return p ? new(p) ::Gl1RawHitv1[nElements] : new ::Gl1RawHitv1[nElements];
   }
   // Wrapper around operator delete
   static void delete_Gl1RawHitv1(void *p) {
      delete (static_cast<::Gl1RawHitv1*>(p));
   }
   static void deleteArray_Gl1RawHitv1(void *p) {
      delete [] (static_cast<::Gl1RawHitv1*>(p));
   }
   static void destruct_Gl1RawHitv1(void *p) {
      typedef ::Gl1RawHitv1 current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::Gl1RawHitv1

namespace {
  void TriggerDictionaryInitialization_Gl1RawHitv1_Dict_Impl() {
    static const char* headers[] = {
"0",
nullptr
    };
    static const char* includePaths[] = {
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "Gl1RawHitv1_Dict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
class Gl1RawHitv1;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "Gl1RawHitv1_Dict dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#ifndef FUN4ALLRAW_GL1RAWHITV1_H
#define FUN4ALLRAW_GL1RAWHITV1_H

#include "Gl1RawHit.h"

#include <limits>

class Gl1RawHitv1 : public Gl1RawHit
{
 public:
  Gl1RawHitv1() = default;
  Gl1RawHitv1(Gl1RawHit *gl1hit);
  ~Gl1RawHitv1() override{};

  void Reset() override;
  /** identify Function from PHObject
      @param os Output Stream
   */
  void identify(std::ostream &os = std::cout) const override;
  uint64_t get_bco() const override { return bco; }
  // cppcheck-suppress virtualCallInConstructor
  void set_bco(const uint64_t val) override { bco = val; }

 protected:
  uint64_t bco = std::numeric_limits<uint64_t>::max();

  ClassDefOverride(Gl1RawHitv1, 1)
};

#endif

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"Gl1RawHitv1", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("Gl1RawHitv1_Dict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_Gl1RawHitv1_Dict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_Gl1RawHitv1_Dict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_Gl1RawHitv1_Dict() {
  TriggerDictionaryInitialization_Gl1RawHitv1_Dict_Impl();
}
