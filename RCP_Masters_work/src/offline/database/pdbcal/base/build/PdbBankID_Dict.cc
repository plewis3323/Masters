// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME PdbBankID_Dict
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
#include "../PdbBankID.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static void *new_PdbBankID(void *p = nullptr);
   static void *newArray_PdbBankID(Long_t size, void *p);
   static void delete_PdbBankID(void *p);
   static void deleteArray_PdbBankID(void *p);
   static void destruct_PdbBankID(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::PdbBankID*)
   {
      ::PdbBankID *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::PdbBankID >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("PdbBankID", ::PdbBankID::Class_Version(), "", 21,
                  typeid(::PdbBankID), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::PdbBankID::Dictionary, isa_proxy, 4,
                  sizeof(::PdbBankID) );
      instance.SetNew(&new_PdbBankID);
      instance.SetNewArray(&newArray_PdbBankID);
      instance.SetDelete(&delete_PdbBankID);
      instance.SetDeleteArray(&deleteArray_PdbBankID);
      instance.SetDestructor(&destruct_PdbBankID);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::PdbBankID*)
   {
      return GenerateInitInstanceLocal(static_cast<::PdbBankID*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::PdbBankID*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr PdbBankID::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *PdbBankID::Class_Name()
{
   return "PdbBankID";
}

//______________________________________________________________________________
const char *PdbBankID::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::PdbBankID*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int PdbBankID::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::PdbBankID*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *PdbBankID::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::PdbBankID*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *PdbBankID::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::PdbBankID*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void PdbBankID::Streamer(TBuffer &R__b)
{
   // Stream an object of class PdbBankID.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(PdbBankID::Class(),this);
   } else {
      R__b.WriteClassBuffer(PdbBankID::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_PdbBankID(void *p) {
      return  p ? new(p) ::PdbBankID : new ::PdbBankID;
   }
   static void *newArray_PdbBankID(Long_t nElements, void *p) {
      return p ? new(p) ::PdbBankID[nElements] : new ::PdbBankID[nElements];
   }
   // Wrapper around operator delete
   static void delete_PdbBankID(void *p) {
      delete (static_cast<::PdbBankID*>(p));
   }
   static void deleteArray_PdbBankID(void *p) {
      delete [] (static_cast<::PdbBankID*>(p));
   }
   static void destruct_PdbBankID(void *p) {
      typedef ::PdbBankID current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::PdbBankID

namespace {
  void TriggerDictionaryInitialization_PdbBankID_Dict_Impl() {
    static const char* headers[] = {
"0",
nullptr
    };
    static const char* includePaths[] = {
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "PdbBankID_Dict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
class PdbBankID;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "PdbBankID_Dict dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
//-----------------------------------------------------------------------------
//
//  The pdbcal package
//  Copyright (C) PHENIX collaboration, 1999
//
//  Declaration of class PdbBankID
//
//  Purpose: id number for a bank, derived from a string
//
//  Description: The string should follow the ONCS naming convention
//
//  Author: Matthias Messer
//-----------------------------------------------------------------------------
#ifndef PDBCAL_BASE_PDBBANKID_H
#define PDBCAL_BASE_PDBBANKID_H

#include <phool/PHObject.h>

class PdbBankID : public PHObject
{
 public:
  PdbBankID(const int val = 0);
  ~PdbBankID() override {}

  void print() const;

  int getInternalValue() const { return bankID; }
  void setInternalValue(const int val) { bankID = val; }

  friend int operator==(const PdbBankID &, const PdbBankID &);

 private:
  int bankID;

  ClassDefOverride(PdbBankID, 1)
};

#endif /* PDBCAL_BASE_PDBBANKID_H */

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"PdbBankID", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("PdbBankID_Dict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_PdbBankID_Dict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_PdbBankID_Dict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_PdbBankID_Dict() {
  TriggerDictionaryInitialization_PdbBankID_Dict_Impl();
}
