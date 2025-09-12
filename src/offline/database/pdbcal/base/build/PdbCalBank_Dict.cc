// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME PdbCalBank_Dict
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
#include "../PdbCalBank.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static void delete_PdbCalBank(void *p);
   static void deleteArray_PdbCalBank(void *p);
   static void destruct_PdbCalBank(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::PdbCalBank*)
   {
      ::PdbCalBank *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::PdbCalBank >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("PdbCalBank", ::PdbCalBank::Class_Version(), "", 22,
                  typeid(::PdbCalBank), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::PdbCalBank::Dictionary, isa_proxy, 4,
                  sizeof(::PdbCalBank) );
      instance.SetDelete(&delete_PdbCalBank);
      instance.SetDeleteArray(&deleteArray_PdbCalBank);
      instance.SetDestructor(&destruct_PdbCalBank);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::PdbCalBank*)
   {
      return GenerateInitInstanceLocal(static_cast<::PdbCalBank*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::PdbCalBank*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr PdbCalBank::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *PdbCalBank::Class_Name()
{
   return "PdbCalBank";
}

//______________________________________________________________________________
const char *PdbCalBank::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::PdbCalBank*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int PdbCalBank::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::PdbCalBank*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *PdbCalBank::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::PdbCalBank*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *PdbCalBank::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::PdbCalBank*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void PdbCalBank::Streamer(TBuffer &R__b)
{
   // Stream an object of class PdbCalBank.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(PdbCalBank::Class(),this);
   } else {
      R__b.WriteClassBuffer(PdbCalBank::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_PdbCalBank(void *p) {
      delete (static_cast<::PdbCalBank*>(p));
   }
   static void deleteArray_PdbCalBank(void *p) {
      delete [] (static_cast<::PdbCalBank*>(p));
   }
   static void destruct_PdbCalBank(void *p) {
      typedef ::PdbCalBank current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::PdbCalBank

namespace {
  void TriggerDictionaryInitialization_PdbCalBank_Dict_Impl() {
    static const char* headers[] = {
"0",
nullptr
    };
    static const char* includePaths[] = {
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "PdbCalBank_Dict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
class PdbCalBank;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "PdbCalBank_Dict dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
//  Declaration of class PdbCalBank
//  Purpose: Calibration bank base class
//  Author: Matthias Messer

#ifndef PDBCAL_BASE_PDBCALBANK_H
#define PDBCAL_BASE_PDBCALBANK_H

#include "PdbBankID.h"

#include <phool/PHTimeStamp.h>

#include <phool/PHObject.h>

#include <cstddef>
#include <string>

class PdbCalChan;
class PHTimeStamp;

class PdbCalBank : public PHObject
{
 public:
  PdbCalBank() {}
  ~PdbCalBank() override {}
  PHObject *CloneMe() const override;

  virtual void printHeader() const = 0;
  virtual void print() = 0;
  virtual void printEntry(size_t) = 0;

  virtual size_t getLength() = 0;
  virtual PdbCalChan &getEntry(size_t) = 0;
  virtual void setLength(size_t val) = 0;

  //
  // Access functions for the header
  //
  virtual PdbBankID getBankID() const = 0;
  virtual PHTimeStamp getInsertTime() const = 0;
  virtual PHTimeStamp getStartValTime() const = 0;
  virtual PHTimeStamp getEndValTime() const = 0;
  virtual std::string getDescription() const = 0;
  virtual std::string getUserName() const = 0;

  virtual void setBankID(const PdbBankID &) = 0;
  virtual void setInsertTime(const PHTimeStamp &) = 0;
  virtual void setStartValTime(const PHTimeStamp &) = 0;
  virtual void setEndValTime(const PHTimeStamp &) = 0;
  virtual void setDescription(const std::string &) = 0;
  virtual void setUserName(const std::string &) = 0;
  using PHObject::isValid;
  virtual int isValid(const PHTimeStamp &) const = 0;

  ClassDefOverride(PdbCalBank, 1);
};

#endif /* PDBCAL_BASE_PDBCALBANK_H */

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"PdbCalBank", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("PdbCalBank_Dict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_PdbCalBank_Dict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_PdbCalBank_Dict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_PdbCalBank_Dict() {
  TriggerDictionaryInitialization_PdbCalBank_Dict_Impl();
}
