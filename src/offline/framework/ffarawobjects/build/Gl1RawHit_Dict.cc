// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME Gl1RawHit_Dict
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
#include "../Gl1RawHit.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static void *new_Gl1RawHit(void *p = nullptr);
   static void *newArray_Gl1RawHit(Long_t size, void *p);
   static void delete_Gl1RawHit(void *p);
   static void deleteArray_Gl1RawHit(void *p);
   static void destruct_Gl1RawHit(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::Gl1RawHit*)
   {
      ::Gl1RawHit *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::Gl1RawHit >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("Gl1RawHit", ::Gl1RawHit::Class_Version(), "", 10,
                  typeid(::Gl1RawHit), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::Gl1RawHit::Dictionary, isa_proxy, 4,
                  sizeof(::Gl1RawHit) );
      instance.SetNew(&new_Gl1RawHit);
      instance.SetNewArray(&newArray_Gl1RawHit);
      instance.SetDelete(&delete_Gl1RawHit);
      instance.SetDeleteArray(&deleteArray_Gl1RawHit);
      instance.SetDestructor(&destruct_Gl1RawHit);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::Gl1RawHit*)
   {
      return GenerateInitInstanceLocal(static_cast<::Gl1RawHit*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::Gl1RawHit*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr Gl1RawHit::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *Gl1RawHit::Class_Name()
{
   return "Gl1RawHit";
}

//______________________________________________________________________________
const char *Gl1RawHit::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::Gl1RawHit*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int Gl1RawHit::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::Gl1RawHit*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *Gl1RawHit::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::Gl1RawHit*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *Gl1RawHit::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::Gl1RawHit*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void Gl1RawHit::Streamer(TBuffer &R__b)
{
   // Stream an object of class Gl1RawHit.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(Gl1RawHit::Class(),this);
   } else {
      R__b.WriteClassBuffer(Gl1RawHit::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_Gl1RawHit(void *p) {
      return  p ? new(p) ::Gl1RawHit : new ::Gl1RawHit;
   }
   static void *newArray_Gl1RawHit(Long_t nElements, void *p) {
      return p ? new(p) ::Gl1RawHit[nElements] : new ::Gl1RawHit[nElements];
   }
   // Wrapper around operator delete
   static void delete_Gl1RawHit(void *p) {
      delete (static_cast<::Gl1RawHit*>(p));
   }
   static void deleteArray_Gl1RawHit(void *p) {
      delete [] (static_cast<::Gl1RawHit*>(p));
   }
   static void destruct_Gl1RawHit(void *p) {
      typedef ::Gl1RawHit current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::Gl1RawHit

namespace {
  void TriggerDictionaryInitialization_Gl1RawHit_Dict_Impl() {
    static const char* headers[] = {
"0",
nullptr
    };
    static const char* includePaths[] = {
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "Gl1RawHit_Dict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
class Gl1RawHit;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "Gl1RawHit_Dict dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#ifndef FUN4ALLRAW_GL1RAWTHIT_H
#define FUN4ALLRAW_GL1RAWTHIT_H

#include <phool/PHObject.h>

#include <limits>

class Gl1RawHit : public PHObject
{
 public:
  Gl1RawHit() = default;
  virtual ~Gl1RawHit() = default;

  virtual uint64_t get_bco() const { return std::numeric_limits<uint64_t>::max(); }
  virtual void set_bco(const uint64_t) { return; }
  virtual int getEvtSequence() const { return std::numeric_limits<int>::min(); }
  virtual void setEvtSequence(const int) { return; }
  using PHObject::CopyFrom;
  virtual void CopyFrom(Gl1RawHit *gl1hit);

 private:
  ClassDefOverride(Gl1RawHit, 1)
};

#endif

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"Gl1RawHit", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("Gl1RawHit_Dict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_Gl1RawHit_Dict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_Gl1RawHit_Dict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_Gl1RawHit_Dict() {
  TriggerDictionaryInitialization_Gl1RawHit_Dict_Impl();
}
