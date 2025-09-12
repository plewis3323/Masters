// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME PHTimeStamp_Dict
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
#include "../PHTimeStamp.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static void *new_PHTimeStamp(void *p = nullptr);
   static void *newArray_PHTimeStamp(Long_t size, void *p);
   static void delete_PHTimeStamp(void *p);
   static void deleteArray_PHTimeStamp(void *p);
   static void destruct_PHTimeStamp(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::PHTimeStamp*)
   {
      ::PHTimeStamp *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::PHTimeStamp >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("PHTimeStamp", ::PHTimeStamp::Class_Version(), "", 22,
                  typeid(::PHTimeStamp), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::PHTimeStamp::Dictionary, isa_proxy, 4,
                  sizeof(::PHTimeStamp) );
      instance.SetNew(&new_PHTimeStamp);
      instance.SetNewArray(&newArray_PHTimeStamp);
      instance.SetDelete(&delete_PHTimeStamp);
      instance.SetDeleteArray(&deleteArray_PHTimeStamp);
      instance.SetDestructor(&destruct_PHTimeStamp);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::PHTimeStamp*)
   {
      return GenerateInitInstanceLocal(static_cast<::PHTimeStamp*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::PHTimeStamp*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr PHTimeStamp::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *PHTimeStamp::Class_Name()
{
   return "PHTimeStamp";
}

//______________________________________________________________________________
const char *PHTimeStamp::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::PHTimeStamp*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int PHTimeStamp::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::PHTimeStamp*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *PHTimeStamp::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::PHTimeStamp*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *PHTimeStamp::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::PHTimeStamp*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void PHTimeStamp::Streamer(TBuffer &R__b)
{
   // Stream an object of class PHTimeStamp.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(PHTimeStamp::Class(),this);
   } else {
      R__b.WriteClassBuffer(PHTimeStamp::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_PHTimeStamp(void *p) {
      return  p ? new(p) ::PHTimeStamp : new ::PHTimeStamp;
   }
   static void *newArray_PHTimeStamp(Long_t nElements, void *p) {
      return p ? new(p) ::PHTimeStamp[nElements] : new ::PHTimeStamp[nElements];
   }
   // Wrapper around operator delete
   static void delete_PHTimeStamp(void *p) {
      delete (static_cast<::PHTimeStamp*>(p));
   }
   static void deleteArray_PHTimeStamp(void *p) {
      delete [] (static_cast<::PHTimeStamp*>(p));
   }
   static void destruct_PHTimeStamp(void *p) {
      typedef ::PHTimeStamp current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::PHTimeStamp

namespace {
  void TriggerDictionaryInitialization_PHTimeStamp_Dict_Impl() {
    static const char* headers[] = {
"0",
nullptr
    };
    static const char* includePaths[] = {
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "PHTimeStamp_Dict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
class PHTimeStamp;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "PHTimeStamp_Dict dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
//  The PHOOL's Software
//  Copyright (C) PHENIX collaboration, 1999
//
//  Purpose: PHENIX - wide time stamp class
//
//  Declaration of class PHTimeStamp
//
//  Author: Matthias Messer
//-----------------------------------------------------------------------------
#ifndef PHOOL_PHTIMESTAMP_H
#define PHOOL_PHTIMESTAMP_H

#include "PHObject.h"

#include <ctime>
#include <iosfwd>

typedef unsigned long long phtime_t;

class PHTimeStamp : public PHObject
{
 public:
  static const unsigned long long PHFarFuture;  // set to ULLONG_MAX

  PHTimeStamp();

  PHTimeStamp(const int, const int, const int, const int, const int, const int, const int = 0);
  PHTimeStamp(const time_t);
  void setBinTics(const phtime_t t);

  ~PHTimeStamp() override {}

 public:
  void set(const int, const int, const int, const int, const int, const int, const int = 0);

  void set(const char *);

  void setToSystemTime();
  void setToFarFuture() { setTics(PHFarFuture); }
  phtime_t getBinaryTime() const { return binaryTime; }
  time_t getTics() const;
  void setTics(const time_t);

  int isInRange(const PHTimeStamp &, const PHTimeStamp &) const;

  int operator==(const PHTimeStamp &) const;
  int operator!=(const PHTimeStamp &) const;
  int operator>(const PHTimeStamp &) const;
  int operator>=(const PHTimeStamp &) const;
  int operator<(const PHTimeStamp &) const;
  int operator<=(const PHTimeStamp &) const;

  PHTimeStamp operator+=(time_t);
  PHTimeStamp operator-=(time_t);

  char *formatTimeString() const;
  void print() const;

 private:
  static phtime_t ticsToBinaryTime(time_t);
  static time_t binaryTimeToTics(phtime_t);

 protected:
  phtime_t binaryTime{};
  ClassDefOverride(PHTimeStamp, 1)
};

PHTimeStamp operator+(const PHTimeStamp &, time_t);
PHTimeStamp operator-(const PHTimeStamp &, time_t);
time_t operator-(const PHTimeStamp &, const PHTimeStamp &);

std::ostream &operator<<(std::ostream &, const PHTimeStamp &);
std::istream &operator>>(std::istream &, PHTimeStamp &);

#endif /* PHOOL_PHTIMESTAMP_H */

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"PHTimeStamp", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("PHTimeStamp_Dict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_PHTimeStamp_Dict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_PHTimeStamp_Dict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_PHTimeStamp_Dict() {
  TriggerDictionaryInitialization_PHTimeStamp_Dict_Impl();
}
