// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME SyncObjectv1_Dict
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
#include "../SyncObjectv1.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static void *new_SyncObjectv1(void *p = nullptr);
   static void *newArray_SyncObjectv1(Long_t size, void *p);
   static void delete_SyncObjectv1(void *p);
   static void deleteArray_SyncObjectv1(void *p);
   static void destruct_SyncObjectv1(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::SyncObjectv1*)
   {
      ::SyncObjectv1 *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::SyncObjectv1 >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("SyncObjectv1", ::SyncObjectv1::Class_Version(), "", 14,
                  typeid(::SyncObjectv1), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::SyncObjectv1::Dictionary, isa_proxy, 4,
                  sizeof(::SyncObjectv1) );
      instance.SetNew(&new_SyncObjectv1);
      instance.SetNewArray(&newArray_SyncObjectv1);
      instance.SetDelete(&delete_SyncObjectv1);
      instance.SetDeleteArray(&deleteArray_SyncObjectv1);
      instance.SetDestructor(&destruct_SyncObjectv1);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::SyncObjectv1*)
   {
      return GenerateInitInstanceLocal(static_cast<::SyncObjectv1*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::SyncObjectv1*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr SyncObjectv1::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *SyncObjectv1::Class_Name()
{
   return "SyncObjectv1";
}

//______________________________________________________________________________
const char *SyncObjectv1::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::SyncObjectv1*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int SyncObjectv1::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::SyncObjectv1*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *SyncObjectv1::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::SyncObjectv1*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *SyncObjectv1::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::SyncObjectv1*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void SyncObjectv1::Streamer(TBuffer &R__b)
{
   // Stream an object of class SyncObjectv1.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(SyncObjectv1::Class(),this);
   } else {
      R__b.WriteClassBuffer(SyncObjectv1::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_SyncObjectv1(void *p) {
      return  p ? new(p) ::SyncObjectv1 : new ::SyncObjectv1;
   }
   static void *newArray_SyncObjectv1(Long_t nElements, void *p) {
      return p ? new(p) ::SyncObjectv1[nElements] : new ::SyncObjectv1[nElements];
   }
   // Wrapper around operator delete
   static void delete_SyncObjectv1(void *p) {
      delete (static_cast<::SyncObjectv1*>(p));
   }
   static void deleteArray_SyncObjectv1(void *p) {
      delete [] (static_cast<::SyncObjectv1*>(p));
   }
   static void destruct_SyncObjectv1(void *p) {
      typedef ::SyncObjectv1 current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::SyncObjectv1

namespace {
  void TriggerDictionaryInitialization_SyncObjectv1_Dict_Impl() {
    static const char* headers[] = {
"0",
nullptr
    };
    static const char* includePaths[] = {
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "SyncObjectv1_Dict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
class SyncObjectv1;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "SyncObjectv1_Dict dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
// Tell emacs that this is a C++ source
//  -*- C++ -*-.
#ifndef FFAOBJECTS_SYNCOBJECTV1_H
#define FFAOBJECTS_SYNCOBJECTV1_H

#include "SyncObject.h"

#include <iostream>

class PHObject;

class SyncObjectv1 : public SyncObject
{
 public:
  /// ctor
  SyncObjectv1() = default;
  explicit SyncObjectv1(const SyncObject& source);

  PHObject* CloneMe() const override { return new SyncObjectv1(*this); }
  /// dtor
  ~SyncObjectv1() override = default;

  ///  Clear Event
  void Reset() override;

  /** identify Function from PHObject
      @param os Output Stream 
   */
  void identify(std::ostream& os = std::cout) const override;

  /// isValid returns non zero if object contains valid data
  int isValid() const override;

  /// set Event Counter
// cppcheck-suppress virtualCallInConstructor
  void EventCounter(const int ival) override { eventcounter = ival; }

  /// set Event Number
// cppcheck-suppress virtualCallInConstructor
  void EventNumber(const int ival) override { eventnumber = ival; }

  /// set Run Number
// cppcheck-suppress virtualCallInConstructor
  void RunNumber(const int ival) override { runnumber = ival; }

  /// set Segment Number
// cppcheck-suppress virtualCallInConstructor
  void SegmentNumber(const int ival) override { segmentnumber = ival; }

 protected:
  /// get Event Counter
  int EventCounter() const override { return eventcounter; }
  /// get Event Number
  int EventNumber() const override { return eventnumber; }
  /// get Run Number
  int RunNumber() const override { return runnumber; }
  /// get Segment Number
  int SegmentNumber() const  override { return segmentnumber; }

 private:
  int eventcounter = 0;         // running counter
  int eventnumber = 0;          // Event number
  int runnumber = 0;            // Run number
  int segmentnumber = -999999;  // segment number

  ClassDefOverride(SyncObjectv1, 1)
};

#endif

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"SyncObjectv1", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("SyncObjectv1_Dict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_SyncObjectv1_Dict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_SyncObjectv1_Dict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_SyncObjectv1_Dict() {
  TriggerDictionaryInitialization_SyncObjectv1_Dict_Impl();
}
