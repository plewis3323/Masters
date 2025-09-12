// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME PdbParameter_Dict
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
#include "../PdbParameter.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static void delete_PdbParameter(void *p);
   static void deleteArray_PdbParameter(void *p);
   static void destruct_PdbParameter(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::PdbParameter*)
   {
      ::PdbParameter *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::PdbParameter >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("PdbParameter", ::PdbParameter::Class_Version(), "", 15,
                  typeid(::PdbParameter), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::PdbParameter::Dictionary, isa_proxy, 4,
                  sizeof(::PdbParameter) );
      instance.SetDelete(&delete_PdbParameter);
      instance.SetDeleteArray(&deleteArray_PdbParameter);
      instance.SetDestructor(&destruct_PdbParameter);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::PdbParameter*)
   {
      return GenerateInitInstanceLocal(static_cast<::PdbParameter*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::PdbParameter*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr PdbParameter::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *PdbParameter::Class_Name()
{
   return "PdbParameter";
}

//______________________________________________________________________________
const char *PdbParameter::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::PdbParameter*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int PdbParameter::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::PdbParameter*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *PdbParameter::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::PdbParameter*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *PdbParameter::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::PdbParameter*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void PdbParameter::Streamer(TBuffer &R__b)
{
   // Stream an object of class PdbParameter.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(PdbParameter::Class(),this);
   } else {
      R__b.WriteClassBuffer(PdbParameter::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_PdbParameter(void *p) {
      delete (static_cast<::PdbParameter*>(p));
   }
   static void deleteArray_PdbParameter(void *p) {
      delete [] (static_cast<::PdbParameter*>(p));
   }
   static void destruct_PdbParameter(void *p) {
      typedef ::PdbParameter current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::PdbParameter

namespace {
  void TriggerDictionaryInitialization_PdbParameter_Dict_Impl() {
    static const char* headers[] = {
"0",
nullptr
    };
    static const char* includePaths[] = {
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "PdbParameter_Dict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
class PdbParameter;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "PdbParameter_Dict dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
//  Declaration of class PdbParameter
//  Purpose: single parameter storage class
//  Author: federica

#ifndef PDBCAL_BASE_PDBPARAMETER_H
#define PDBCAL_BASE_PDBPARAMETER_H

#include "PdbCalChan.h"

#include <limits>
#include <string>

class PdbParameter : public PdbCalChan
{
 public:
  PdbParameter(const double, const std::string &name);
  ~PdbParameter() override = default;

  double getParameter() const { return thePar; }
  const std::string &getName() const { return theName; }

  void setParameter(const double val) { thePar = val; }
  void setName(const std::string &name) { theName = name; }

  void print() const override;

 protected:
  PdbParameter() = default;  // this ctor should not be called

 private:
  double thePar{std::numeric_limits<double>::quiet_NaN()};
  std::string theName;

  ClassDefOverride(PdbParameter, 1);
};

#endif /* PDBCAL_BASE_PDBPARAMETER_H */

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"PdbParameter", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("PdbParameter_Dict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_PdbParameter_Dict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_PdbParameter_Dict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_PdbParameter_Dict() {
  TriggerDictionaryInitialization_PdbParameter_Dict_Impl();
}
