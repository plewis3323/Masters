// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME PdbCalChan_Dict
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
#include "../PdbCalChan.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static void delete_PdbCalChan(void *p);
   static void deleteArray_PdbCalChan(void *p);
   static void destruct_PdbCalChan(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::PdbCalChan*)
   {
      ::PdbCalChan *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::PdbCalChan >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("PdbCalChan", ::PdbCalChan::Class_Version(), "", 20,
                  typeid(::PdbCalChan), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::PdbCalChan::Dictionary, isa_proxy, 4,
                  sizeof(::PdbCalChan) );
      instance.SetDelete(&delete_PdbCalChan);
      instance.SetDeleteArray(&deleteArray_PdbCalChan);
      instance.SetDestructor(&destruct_PdbCalChan);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::PdbCalChan*)
   {
      return GenerateInitInstanceLocal(static_cast<::PdbCalChan*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::PdbCalChan*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr PdbCalChan::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *PdbCalChan::Class_Name()
{
   return "PdbCalChan";
}

//______________________________________________________________________________
const char *PdbCalChan::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::PdbCalChan*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int PdbCalChan::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::PdbCalChan*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *PdbCalChan::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::PdbCalChan*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *PdbCalChan::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::PdbCalChan*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void PdbCalChan::Streamer(TBuffer &R__b)
{
   // Stream an object of class PdbCalChan.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(PdbCalChan::Class(),this);
   } else {
      R__b.WriteClassBuffer(PdbCalChan::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_PdbCalChan(void *p) {
      delete (static_cast<::PdbCalChan*>(p));
   }
   static void deleteArray_PdbCalChan(void *p) {
      delete [] (static_cast<::PdbCalChan*>(p));
   }
   static void destruct_PdbCalChan(void *p) {
      typedef ::PdbCalChan current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::PdbCalChan

namespace {
  void TriggerDictionaryInitialization_PdbCalChan_Dict_Impl() {
    static const char* headers[] = {
"0",
nullptr
    };
    static const char* includePaths[] = {
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "PdbCalChan_Dict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
class PdbCalChan;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "PdbCalChan_Dict dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
//
//  The pdbcal package
//  Copyright (C) PHENIX collaboration, 1999
//
//  Declaration of class PdbCalChan
//
//  Purpose: Calibration channel base class
//
//  Description:
//
//  Author: Matthias Messer
//-----------------------------------------------------------------------------
#ifndef PDBCAL_BASE_PDBCALCHAN_H
#define PDBCAL_BASE_PDBCALCHAN_H

#include <phool/PHObject.h>

class PdbCalChan : public PHObject
{
 public:
  PdbCalChan() {}
  ~PdbCalChan() override {}

  virtual void print() const = 0;

  ClassDefOverride(PdbCalChan, 1);
};

#endif /* PDBCAL_BASE_PDBCALCHAN_H */

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"PdbCalChan", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("PdbCalChan_Dict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_PdbCalChan_Dict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_PdbCalChan_Dict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_PdbCalChan_Dict() {
  TriggerDictionaryInitialization_PdbCalChan_Dict_Impl();
}
