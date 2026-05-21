// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME CaloTriggerInfo_Dict
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
#include "../CaloTriggerInfo.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static void delete_CaloTriggerInfo(void *p);
   static void deleteArray_CaloTriggerInfo(void *p);
   static void destruct_CaloTriggerInfo(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CaloTriggerInfo*)
   {
      ::CaloTriggerInfo *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::CaloTriggerInfo >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("CaloTriggerInfo", ::CaloTriggerInfo::Class_Version(), "", 8,
                  typeid(::CaloTriggerInfo), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::CaloTriggerInfo::Dictionary, isa_proxy, 4,
                  sizeof(::CaloTriggerInfo) );
      instance.SetDelete(&delete_CaloTriggerInfo);
      instance.SetDeleteArray(&deleteArray_CaloTriggerInfo);
      instance.SetDestructor(&destruct_CaloTriggerInfo);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CaloTriggerInfo*)
   {
      return GenerateInitInstanceLocal(static_cast<::CaloTriggerInfo*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::CaloTriggerInfo*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr CaloTriggerInfo::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *CaloTriggerInfo::Class_Name()
{
   return "CaloTriggerInfo";
}

//______________________________________________________________________________
const char *CaloTriggerInfo::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CaloTriggerInfo*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int CaloTriggerInfo::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CaloTriggerInfo*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *CaloTriggerInfo::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CaloTriggerInfo*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *CaloTriggerInfo::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CaloTriggerInfo*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void CaloTriggerInfo::Streamer(TBuffer &R__b)
{
   // Stream an object of class CaloTriggerInfo.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(CaloTriggerInfo::Class(),this);
   } else {
      R__b.WriteClassBuffer(CaloTriggerInfo::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_CaloTriggerInfo(void *p) {
      delete (static_cast<::CaloTriggerInfo*>(p));
   }
   static void deleteArray_CaloTriggerInfo(void *p) {
      delete [] (static_cast<::CaloTriggerInfo*>(p));
   }
   static void destruct_CaloTriggerInfo(void *p) {
      typedef ::CaloTriggerInfo current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::CaloTriggerInfo

namespace {
  void TriggerDictionaryInitialization_CaloTriggerInfo_Dict_Impl() {
    static const char* headers[] = {
"0",
nullptr
    };
    static const char* includePaths[] = {
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "CaloTriggerInfo_Dict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
class CaloTriggerInfo;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "CaloTriggerInfo_Dict dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#ifndef TRIGGER_CALOTRIGGERINFO_H
#define TRIGGER_CALOTRIGGERINFO_H

#include <phool/PHObject.h>

class CaloTriggerInfo : public PHObject
{
 public:
  ~CaloTriggerInfo() override{};

  void identify(std::ostream &os = std::cout) const override { os << "CaloTriggerInfo base class" << std::endl; };
  int isValid() const override { return 0; }

  // EMCal 2x2
  virtual void set_best_EMCal_2x2_E(const float /*E*/) {}
  virtual void set_best_EMCal_2x2_eta(const float /*eta*/) {}
  virtual void set_best_EMCal_2x2_phi(const float /*phi*/) {}

  virtual float get_best_EMCal_2x2_E() const { return 0; }
  virtual float get_best_EMCal_2x2_eta() const { return 0; }
  virtual float get_best_EMCal_2x2_phi() const { return 0; }

  // EMCal 4x4
  virtual void set_best_EMCal_4x4_E(const float /*E*/) {}
  virtual void set_best_EMCal_4x4_eta(const float /*eta*/) {}
  virtual void set_best_EMCal_4x4_phi(const float /*phi*/) {}

  virtual float get_best_EMCal_4x4_E() const { return 0; }
  virtual float get_best_EMCal_4x4_eta() const { return 0; }
  virtual float get_best_EMCal_4x4_phi() const { return 0; }

  // 2nd best
  virtual void set_best2_EMCal_4x4_E(const float /*E*/) {}
  virtual void set_best2_EMCal_4x4_eta(const float /*eta*/) {}
  virtual void set_best2_EMCal_4x4_phi(const float /*phi*/) {}

  virtual float get_best2_EMCal_4x4_E() const { return 0; }
  virtual float get_best2_EMCal_4x4_eta() const { return 0; }
  virtual float get_best2_EMCal_4x4_phi() const { return 0; }

  // FullCalo 0.2x0.2
  virtual void set_best_FullCalo_0p2x0p2_E(const float /*E*/) {}
  virtual void set_best_FullCalo_0p2x0p2_eta(const float /*eta*/) {}
  virtual void set_best_FullCalo_0p2x0p2_phi(const float /*phi*/) {}

  virtual float get_best_FullCalo_0p2x0p2_E() const { return 0; }
  virtual float get_best_FullCalo_0p2x0p2_eta() const { return 0; }
  virtual float get_best_FullCalo_0p2x0p2_phi() const { return 0; }

  // FullCalo 0.4x0.4
  virtual void set_best_FullCalo_0p4x0p4_E(const float /*E*/) {}
  virtual void set_best_FullCalo_0p4x0p4_eta(const float /*eta*/) {}
  virtual void set_best_FullCalo_0p4x0p4_phi(const float /*phi*/) {}

  virtual float get_best_FullCalo_0p4x0p4_E() const { return 0; }
  virtual float get_best_FullCalo_0p4x0p4_eta() const { return 0; }
  virtual float get_best_FullCalo_0p4x0p4_phi() const { return 0; }

  // FullCalo 0.6x0.6
  virtual void set_best_FullCalo_0p6x0p6_E(const float /*E*/) {}
  virtual void set_best_FullCalo_0p6x0p6_eta(const float /*eta*/) {}
  virtual void set_best_FullCalo_0p6x0p6_phi(const float /*phi*/) {}

  virtual float get_best_FullCalo_0p6x0p6_E() const { return 0; }
  virtual float get_best_FullCalo_0p6x0p6_eta() const { return 0; }
  virtual float get_best_FullCalo_0p6x0p6_phi() const { return 0; }

  // FullCalo 0.8x0.8
  virtual void set_best_FullCalo_0p8x0p8_E(const float /*E*/) {}
  virtual void set_best_FullCalo_0p8x0p8_eta(const float /*eta*/) {}
  virtual void set_best_FullCalo_0p8x0p8_phi(const float /*phi*/) {}

  virtual float get_best_FullCalo_0p8x0p8_E() const { return 0; }
  virtual float get_best_FullCalo_0p8x0p8_eta() const { return 0; }
  virtual float get_best_FullCalo_0p8x0p8_phi() const { return 0; }

  // FullCalo 1.0x1.0
  virtual void set_best_FullCalo_1p0x1p0_E(const float /*E*/) {}
  virtual void set_best_FullCalo_1p0x1p0_eta(const float /*eta*/) {}
  virtual void set_best_FullCalo_1p0x1p0_phi(const float /*phi*/) {}

  virtual float get_best_FullCalo_1p0x1p0_E() const { return 0; }
  virtual float get_best_FullCalo_1p0x1p0_eta() const { return 0; }
  virtual float get_best_FullCalo_1p0x1p0_phi() const { return 0; }

 protected:
  CaloTriggerInfo() = default;

 private:
  ClassDefOverride(CaloTriggerInfo, 1);
};

#endif  // TRIGGER_CALOTRIGGERINFO_H

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"CaloTriggerInfo", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("CaloTriggerInfo_Dict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_CaloTriggerInfo_Dict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_CaloTriggerInfo_Dict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_CaloTriggerInfo_Dict() {
  TriggerDictionaryInitialization_CaloTriggerInfo_Dict_Impl();
}
