// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME TriggerRunInfo_Dict
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
#include "../TriggerRunInfo.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static void *new_TriggerRunInfo(void *p = nullptr);
   static void *newArray_TriggerRunInfo(Long_t size, void *p);
   static void delete_TriggerRunInfo(void *p);
   static void deleteArray_TriggerRunInfo(void *p);
   static void destruct_TriggerRunInfo(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TriggerRunInfo*)
   {
      ::TriggerRunInfo *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TriggerRunInfo >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TriggerRunInfo", ::TriggerRunInfo::Class_Version(), "", 12,
                  typeid(::TriggerRunInfo), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TriggerRunInfo::Dictionary, isa_proxy, 4,
                  sizeof(::TriggerRunInfo) );
      instance.SetNew(&new_TriggerRunInfo);
      instance.SetNewArray(&newArray_TriggerRunInfo);
      instance.SetDelete(&delete_TriggerRunInfo);
      instance.SetDeleteArray(&deleteArray_TriggerRunInfo);
      instance.SetDestructor(&destruct_TriggerRunInfo);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TriggerRunInfo*)
   {
      return GenerateInitInstanceLocal(static_cast<::TriggerRunInfo*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TriggerRunInfo*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr TriggerRunInfo::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TriggerRunInfo::Class_Name()
{
   return "TriggerRunInfo";
}

//______________________________________________________________________________
const char *TriggerRunInfo::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TriggerRunInfo*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TriggerRunInfo::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TriggerRunInfo*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TriggerRunInfo::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TriggerRunInfo*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TriggerRunInfo::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TriggerRunInfo*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void TriggerRunInfo::Streamer(TBuffer &R__b)
{
   // Stream an object of class TriggerRunInfo.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TriggerRunInfo::Class(),this);
   } else {
      R__b.WriteClassBuffer(TriggerRunInfo::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TriggerRunInfo(void *p) {
      return  p ? new(p) ::TriggerRunInfo : new ::TriggerRunInfo;
   }
   static void *newArray_TriggerRunInfo(Long_t nElements, void *p) {
      return p ? new(p) ::TriggerRunInfo[nElements] : new ::TriggerRunInfo[nElements];
   }
   // Wrapper around operator delete
   static void delete_TriggerRunInfo(void *p) {
      delete (static_cast<::TriggerRunInfo*>(p));
   }
   static void deleteArray_TriggerRunInfo(void *p) {
      delete [] (static_cast<::TriggerRunInfo*>(p));
   }
   static void destruct_TriggerRunInfo(void *p) {
      typedef ::TriggerRunInfo current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TriggerRunInfo

namespace {
  void TriggerDictionaryInitialization_TriggerRunInfo_Dict_Impl() {
    static const char* headers[] = {
"0",
nullptr
    };
    static const char* includePaths[] = {
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "TriggerRunInfo_Dict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
class TriggerRunInfo;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "TriggerRunInfo_Dict dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#ifndef TRIGGER_TRIGGERRUNINFO_H
#define TRIGGER_TRIGGERRUNINFO_H

#include <phool/PHObject.h>

#include <cstdint>
#include <iostream>
#include <string>

class TriggerRunInfo : public PHObject
{
 public:
  TriggerRunInfo() = default;
  ///
  virtual ~TriggerRunInfo() override = default;

  void identify(std::ostream& os = std::cout) const override;
  virtual void setTrigger(int , const std::string&, int, int)  {return;}
  virtual void setTriggerScalers(int , int, uint64_t) {return;}
  virtual void setTriggerPrescale(int, double) {return;}
  virtual double getPrescaleByName(const std::string&) const {return 0;}       
  virtual double getPrescaleByBit(int) const { return 0; }
  virtual int getInitialPrescaleByName(const std::string&) const {return 0;}       
  virtual int getInitialPrescaleByBit(int) const { return 0; }

  virtual uint64_t getScalersByName(const std::string&) const {return 0;}       
  virtual uint64_t getScalersByBit(int) const { return 0; }
  virtual uint64_t getLiveScalersByName(const std::string&) const {return 0;}       
  virtual uint64_t getLiveScalersByBit(int) const { return 0; }
  virtual uint64_t getRawScalersByName(const std::string&) const {return 0;}       
  virtual uint64_t getRawScalersByBit(int) const { return 0; }

  virtual uint32_t getTriggerBitByName(const std::string&) const {return 0;}       

  virtual std::string getTriggerName(int) const { return "unknown"; }

 private:  // so the ClassDef does not show up with doc++
  ClassDefOverride(TriggerRunInfo, 1);
};

#endif

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"TriggerRunInfo", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("TriggerRunInfo_Dict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_TriggerRunInfo_Dict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_TriggerRunInfo_Dict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_TriggerRunInfo_Dict() {
  TriggerDictionaryInitialization_TriggerRunInfo_Dict_Impl();
}
