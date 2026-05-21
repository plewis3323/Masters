// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME PdbParameterError_Dict
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
#include "../PdbParameterError.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static void delete_PdbParameterError(void *p);
   static void deleteArray_PdbParameterError(void *p);
   static void destruct_PdbParameterError(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::PdbParameterError*)
   {
      ::PdbParameterError *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::PdbParameterError >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("PdbParameterError", ::PdbParameterError::Class_Version(), "", 15,
                  typeid(::PdbParameterError), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::PdbParameterError::Dictionary, isa_proxy, 4,
                  sizeof(::PdbParameterError) );
      instance.SetDelete(&delete_PdbParameterError);
      instance.SetDeleteArray(&deleteArray_PdbParameterError);
      instance.SetDestructor(&destruct_PdbParameterError);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::PdbParameterError*)
   {
      return GenerateInitInstanceLocal(static_cast<::PdbParameterError*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::PdbParameterError*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr PdbParameterError::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *PdbParameterError::Class_Name()
{
   return "PdbParameterError";
}

//______________________________________________________________________________
const char *PdbParameterError::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::PdbParameterError*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int PdbParameterError::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::PdbParameterError*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *PdbParameterError::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::PdbParameterError*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *PdbParameterError::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::PdbParameterError*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void PdbParameterError::Streamer(TBuffer &R__b)
{
   // Stream an object of class PdbParameterError.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(PdbParameterError::Class(),this);
   } else {
      R__b.WriteClassBuffer(PdbParameterError::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_PdbParameterError(void *p) {
      delete (static_cast<::PdbParameterError*>(p));
   }
   static void deleteArray_PdbParameterError(void *p) {
      delete [] (static_cast<::PdbParameterError*>(p));
   }
   static void destruct_PdbParameterError(void *p) {
      typedef ::PdbParameterError current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::PdbParameterError

namespace {
  void TriggerDictionaryInitialization_PdbParameterError_Dict_Impl() {
    static const char* headers[] = {
"0",
nullptr
    };
    static const char* includePaths[] = {
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "PdbParameterError_Dict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
class PdbParameterError;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "PdbParameterError_Dict dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
//  Declaration of class PdbParameterError
//  Purpose: single parameter storage class
//  Author: Cesar & federica

#ifndef PDBCAL_BASE_PDBPARAMETERERROR_H
#define PDBCAL_BASE_PDBPARAMETERERROR_H

#include "PdbParameter.h"

#include <limits>
#include <string>

class PdbParameterError : public PdbParameter
{
 public:
  PdbParameterError(const double, const double, const std::string &name);
  ~PdbParameterError() override = default;

  double getParameterError() const { return theParError; }

  void setParameterError(const double val) { theParError = val; }

  void print() const override;

 protected:
  PdbParameterError() = default;

 private:
  double theParError{std::numeric_limits<double>::quiet_NaN()};

  ClassDefOverride(PdbParameterError, 1);
};

#endif /* PDBCAL_BASE_PDBPARAMETERERROR_H */

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"PdbParameterError", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("PdbParameterError_Dict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_PdbParameterError_Dict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_PdbParameterError_Dict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_PdbParameterError_Dict() {
  TriggerDictionaryInitialization_PdbParameterError_Dict_Impl();
}
