// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME RunHeader_Dict
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
#include "../RunHeader.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static void *new_RunHeader(void *p = nullptr);
   static void *newArray_RunHeader(Long_t size, void *p);
   static void delete_RunHeader(void *p);
   static void deleteArray_RunHeader(void *p);
   static void destruct_RunHeader(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RunHeader*)
   {
      ::RunHeader *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RunHeader >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RunHeader", ::RunHeader::Class_Version(), "", 15,
                  typeid(::RunHeader), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RunHeader::Dictionary, isa_proxy, 4,
                  sizeof(::RunHeader) );
      instance.SetNew(&new_RunHeader);
      instance.SetNewArray(&newArray_RunHeader);
      instance.SetDelete(&delete_RunHeader);
      instance.SetDeleteArray(&deleteArray_RunHeader);
      instance.SetDestructor(&destruct_RunHeader);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RunHeader*)
   {
      return GenerateInitInstanceLocal(static_cast<::RunHeader*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RunHeader*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr RunHeader::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *RunHeader::Class_Name()
{
   return "RunHeader";
}

//______________________________________________________________________________
const char *RunHeader::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RunHeader*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int RunHeader::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RunHeader*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RunHeader::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RunHeader*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RunHeader::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RunHeader*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void RunHeader::Streamer(TBuffer &R__b)
{
   // Stream an object of class RunHeader.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RunHeader::Class(),this);
   } else {
      R__b.WriteClassBuffer(RunHeader::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RunHeader(void *p) {
      return  p ? new(p) ::RunHeader : new ::RunHeader;
   }
   static void *newArray_RunHeader(Long_t nElements, void *p) {
      return p ? new(p) ::RunHeader[nElements] : new ::RunHeader[nElements];
   }
   // Wrapper around operator delete
   static void delete_RunHeader(void *p) {
      delete (static_cast<::RunHeader*>(p));
   }
   static void deleteArray_RunHeader(void *p) {
      delete [] (static_cast<::RunHeader*>(p));
   }
   static void destruct_RunHeader(void *p) {
      typedef ::RunHeader current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RunHeader

namespace {
  void TriggerDictionaryInitialization_RunHeader_Dict_Impl() {
    static const char* headers[] = {
"0",
nullptr
    };
    static const char* includePaths[] = {
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "RunHeader_Dict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
class RunHeader;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "RunHeader_Dict dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
// Tell emacs that this is a C++ source
//  -*- C++ -*-.
#ifndef FFAOBJECTS_RUNHEADER_H
#define FFAOBJECTS_RUNHEADER_H

#include <phool/PHObject.h>

#include <cmath>
#include <iostream>
#include <string>  // for string

///
class RunHeader : public PHObject
{
 public:
  /// dtor
  ~RunHeader() override {}

  /// Clear Event
  void Reset() override;

  /** identify Function from PHObject
      @param os Output Stream 
   */
  void identify(std::ostream &os = std::cout) const override;

  /// isValid returns non zero if object contains valid data
  int isValid() const override;

  /// get Run Number
  virtual int get_RunNumber() const;
  /// set Run Number
  virtual void set_RunNumber(const int run);

  virtual void set_floatval(const std::string & /*name*/, const float /*fval*/) { return; }
  virtual float get_floatval(const std::string & /*name*/) const { return std::numeric_limits<float>::quiet_NaN(); }

  virtual void set_intval(const std::string & /*name*/, const int /*ival*/) { return; }
  virtual int get_intval(const std::string & /*name*/) const { return std::numeric_limits<int>::min(); }

  virtual void set_bor_timestamp(const int time ) {set_intval("BORTIME",time);}
  virtual int get_bor_timestamp() const {return get_intval("BORTIME");}

  virtual void set_eor_timestamp(const int time ) {set_intval("EORTIME",time);}
  virtual int get_eor_timestamp() const {return get_intval("EORTIME");}
  /// switches off the pesky virtual warning messages
  void NoWarning(const int i = 1);

 private:
  void warning(const std::string &func) const;

  ClassDefOverride(RunHeader, 1)
};

#endif

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"RunHeader", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("RunHeader_Dict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_RunHeader_Dict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_RunHeader_Dict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_RunHeader_Dict() {
  TriggerDictionaryInitialization_RunHeader_Dict_Impl();
}
