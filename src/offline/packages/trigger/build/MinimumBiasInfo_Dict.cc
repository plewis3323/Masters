// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME MinimumBiasInfo_Dict
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
#include "../MinimumBiasInfo.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static void delete_MinimumBiasInfo(void *p);
   static void deleteArray_MinimumBiasInfo(void *p);
   static void destruct_MinimumBiasInfo(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::MinimumBiasInfo*)
   {
      ::MinimumBiasInfo *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::MinimumBiasInfo >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("MinimumBiasInfo", ::MinimumBiasInfo::Class_Version(), "", 8,
                  typeid(::MinimumBiasInfo), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::MinimumBiasInfo::Dictionary, isa_proxy, 4,
                  sizeof(::MinimumBiasInfo) );
      instance.SetDelete(&delete_MinimumBiasInfo);
      instance.SetDeleteArray(&deleteArray_MinimumBiasInfo);
      instance.SetDestructor(&destruct_MinimumBiasInfo);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::MinimumBiasInfo*)
   {
      return GenerateInitInstanceLocal(static_cast<::MinimumBiasInfo*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::MinimumBiasInfo*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr MinimumBiasInfo::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *MinimumBiasInfo::Class_Name()
{
   return "MinimumBiasInfo";
}

//______________________________________________________________________________
const char *MinimumBiasInfo::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::MinimumBiasInfo*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int MinimumBiasInfo::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::MinimumBiasInfo*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *MinimumBiasInfo::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::MinimumBiasInfo*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *MinimumBiasInfo::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::MinimumBiasInfo*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void MinimumBiasInfo::Streamer(TBuffer &R__b)
{
   // Stream an object of class MinimumBiasInfo.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(MinimumBiasInfo::Class(),this);
   } else {
      R__b.WriteClassBuffer(MinimumBiasInfo::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_MinimumBiasInfo(void *p) {
      delete (static_cast<::MinimumBiasInfo*>(p));
   }
   static void deleteArray_MinimumBiasInfo(void *p) {
      delete [] (static_cast<::MinimumBiasInfo*>(p));
   }
   static void destruct_MinimumBiasInfo(void *p) {
      typedef ::MinimumBiasInfo current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::MinimumBiasInfo

namespace {
  void TriggerDictionaryInitialization_MinimumBiasInfo_Dict_Impl() {
    static const char* headers[] = {
"0",
nullptr
    };
    static const char* includePaths[] = {
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "MinimumBiasInfo_Dict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
class MinimumBiasInfo;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "MinimumBiasInfo_Dict dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#ifndef TRIGGER_MINIMUMBIASINFO_H
#define TRIGGER_MINIMUMBIASINFO_H

#include <phool/PHObject.h>

class MinimumBiasInfo : public PHObject
{
 public:
  ~MinimumBiasInfo() override{};

  void identify(std::ostream &os = std::cout) const override { os << "MinimumBiasInfo base class" << std::endl; };
  void Reset() override {}
  int isValid() const override { return 0; }
  virtual void CopyTo(MinimumBiasInfo *) { return; }
  virtual void setIsAuAuMinimumBias(bool) { return; }
  virtual bool isAuAuMinimumBias() const { return false; }

 protected:
  MinimumBiasInfo() {}

 private:
  ClassDefOverride(MinimumBiasInfo, 1);
};

#endif  // TRIGGER_MINIMUMBIASINFO_H

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"MinimumBiasInfo", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("MinimumBiasInfo_Dict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_MinimumBiasInfo_Dict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_MinimumBiasInfo_Dict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_MinimumBiasInfo_Dict() {
  TriggerDictionaryInitialization_MinimumBiasInfo_Dict_Impl();
}
