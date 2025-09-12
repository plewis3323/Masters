// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME EventHeader_Dict
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
#include "../EventHeader.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static void *new_EventHeader(void *p = nullptr);
   static void *newArray_EventHeader(Long_t size, void *p);
   static void delete_EventHeader(void *p);
   static void deleteArray_EventHeader(void *p);
   static void destruct_EventHeader(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::EventHeader*)
   {
      ::EventHeader *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::EventHeader >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("EventHeader", ::EventHeader::Class_Version(), "", 17,
                  typeid(::EventHeader), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::EventHeader::Dictionary, isa_proxy, 4,
                  sizeof(::EventHeader) );
      instance.SetNew(&new_EventHeader);
      instance.SetNewArray(&newArray_EventHeader);
      instance.SetDelete(&delete_EventHeader);
      instance.SetDeleteArray(&deleteArray_EventHeader);
      instance.SetDestructor(&destruct_EventHeader);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::EventHeader*)
   {
      return GenerateInitInstanceLocal(static_cast<::EventHeader*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::EventHeader*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr EventHeader::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *EventHeader::Class_Name()
{
   return "EventHeader";
}

//______________________________________________________________________________
const char *EventHeader::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EventHeader*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int EventHeader::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EventHeader*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *EventHeader::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EventHeader*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *EventHeader::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EventHeader*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void EventHeader::Streamer(TBuffer &R__b)
{
   // Stream an object of class EventHeader.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(EventHeader::Class(),this);
   } else {
      R__b.WriteClassBuffer(EventHeader::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_EventHeader(void *p) {
      return  p ? new(p) ::EventHeader : new ::EventHeader;
   }
   static void *newArray_EventHeader(Long_t nElements, void *p) {
      return p ? new(p) ::EventHeader[nElements] : new ::EventHeader[nElements];
   }
   // Wrapper around operator delete
   static void delete_EventHeader(void *p) {
      delete (static_cast<::EventHeader*>(p));
   }
   static void deleteArray_EventHeader(void *p) {
      delete [] (static_cast<::EventHeader*>(p));
   }
   static void destruct_EventHeader(void *p) {
      typedef ::EventHeader current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::EventHeader

namespace {
  void TriggerDictionaryInitialization_EventHeader_Dict_Impl() {
    static const char* headers[] = {
"0",
nullptr
    };
    static const char* includePaths[] = {
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "EventHeader_Dict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
class EventHeader;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "EventHeader_Dict dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
// Tell emacs that this is a C++ source
//  -*- C++ -*-.
#ifndef FFAOBJECTS_EVENTHEADER_H
#define FFAOBJECTS_EVENTHEADER_H

#include <phool/PHObject.h>

#include <cmath>
#include <cstdint>  // for int64_t
#include <ctime>
#include <iostream>  // for cout, ostream
#include <string>    // for string

//! base class for EventHeaders
class EventHeader : public PHObject
{
 public:
  /// dtor
  ~EventHeader() override = default;

  /// Clear Event
  void Reset() override;

  /*
   * identify Function from PHObject
   * @param os Output Stream 
   */
  void identify(std::ostream &os = std::cout) const override;

  /// isValid returns non zero if object contains valid data
  int isValid() const override;

  virtual void CopyTo(EventHeader *) {return;}

  /// get Run Number
  virtual int get_RunNumber() const { return 0; }
  /// set Run Number
  virtual void set_RunNumber(const int /*run*/) { return; }

  /// get Event Number
  virtual int get_EvtSequence() const { return 0; }
  /// set Event Number
  virtual void set_EvtSequence(const int /*ival*/) { return; }

  //! bunch crossing
  virtual void set_BunchCrossing(int64_t bcr) { set_intval("bcr", bcr); }

  //! bunch crossing
  virtual int64_t get_BunchCrossing() const { return get_intval("bcr"); }

  virtual void set_floatval(const std::string & /*name*/, const float /*fval*/) { return; }
  virtual float get_floatval(const std::string & /*name*/) const { return NAN; }

  virtual void set_intval(const std::string & /*name*/, const int64_t /*ival*/) { return; }
  virtual int64_t get_intval(const std::string & /*name*/) const { return -999999; }

  /// get Event Type (Data,rejected,EOR,BOR,...)
  int get_EvtType() const { return get_intval("type"); }
  /// set Event Type (Data,rejected,EOR,BOR,...)
  void set_EvtType(const int ival) { set_intval("type", ival); }

  void set_ImpactParameter(const double rval) { set_floatval("bimp", rval); }
  float get_ImpactParameter() const { return get_floatval("bimp"); }

  void set_EventPlaneAngle(const double rval) { set_floatval("rplane", rval); }
  float get_EventPlaneAngle() const { return get_floatval("rplane"); }

  void set_eccentricity(const double rval) { set_floatval("ecc", rval); }
  float get_eccentricity() const { return get_floatval("ecc"); }

  void set_ncoll(const int ival) { set_intval("ncoll", ival); }
  int get_ncoll() const { return get_intval("ncoll"); }

  void set_npart(const int ival) { set_intval("npart", ival); }
  int get_npart() const { return get_intval("npart"); }

  void set_TimeStamp(const time_t tval) { set_intval("time", tval); }
  time_t get_TimeStamp() const { return get_intval("time"); }

 private:  // prevent doc++ from showing ClassDefOverride
  ClassDefOverride(EventHeader, 1)
};

#endif

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"EventHeader", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("EventHeader_Dict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_EventHeader_Dict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_EventHeader_Dict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_EventHeader_Dict() {
  TriggerDictionaryInitialization_EventHeader_Dict_Impl();
}
