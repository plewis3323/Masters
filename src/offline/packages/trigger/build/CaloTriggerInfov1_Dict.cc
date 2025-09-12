// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME CaloTriggerInfov1_Dict
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
#include "../CaloTriggerInfov1.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static void *new_CaloTriggerInfov1(void *p = nullptr);
   static void *newArray_CaloTriggerInfov1(Long_t size, void *p);
   static void delete_CaloTriggerInfov1(void *p);
   static void deleteArray_CaloTriggerInfov1(void *p);
   static void destruct_CaloTriggerInfov1(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CaloTriggerInfov1*)
   {
      ::CaloTriggerInfov1 *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::CaloTriggerInfov1 >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("CaloTriggerInfov1", ::CaloTriggerInfov1::Class_Version(), "", 10,
                  typeid(::CaloTriggerInfov1), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::CaloTriggerInfov1::Dictionary, isa_proxy, 4,
                  sizeof(::CaloTriggerInfov1) );
      instance.SetNew(&new_CaloTriggerInfov1);
      instance.SetNewArray(&newArray_CaloTriggerInfov1);
      instance.SetDelete(&delete_CaloTriggerInfov1);
      instance.SetDeleteArray(&deleteArray_CaloTriggerInfov1);
      instance.SetDestructor(&destruct_CaloTriggerInfov1);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CaloTriggerInfov1*)
   {
      return GenerateInitInstanceLocal(static_cast<::CaloTriggerInfov1*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::CaloTriggerInfov1*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr CaloTriggerInfov1::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *CaloTriggerInfov1::Class_Name()
{
   return "CaloTriggerInfov1";
}

//______________________________________________________________________________
const char *CaloTriggerInfov1::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CaloTriggerInfov1*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int CaloTriggerInfov1::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CaloTriggerInfov1*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *CaloTriggerInfov1::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CaloTriggerInfov1*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *CaloTriggerInfov1::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CaloTriggerInfov1*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void CaloTriggerInfov1::Streamer(TBuffer &R__b)
{
   // Stream an object of class CaloTriggerInfov1.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(CaloTriggerInfov1::Class(),this);
   } else {
      R__b.WriteClassBuffer(CaloTriggerInfov1::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_CaloTriggerInfov1(void *p) {
      return  p ? new(p) ::CaloTriggerInfov1 : new ::CaloTriggerInfov1;
   }
   static void *newArray_CaloTriggerInfov1(Long_t nElements, void *p) {
      return p ? new(p) ::CaloTriggerInfov1[nElements] : new ::CaloTriggerInfov1[nElements];
   }
   // Wrapper around operator delete
   static void delete_CaloTriggerInfov1(void *p) {
      delete (static_cast<::CaloTriggerInfov1*>(p));
   }
   static void deleteArray_CaloTriggerInfov1(void *p) {
      delete [] (static_cast<::CaloTriggerInfov1*>(p));
   }
   static void destruct_CaloTriggerInfov1(void *p) {
      typedef ::CaloTriggerInfov1 current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::CaloTriggerInfov1

namespace {
  void TriggerDictionaryInitialization_CaloTriggerInfov1_Dict_Impl() {
    static const char* headers[] = {
"0",
nullptr
    };
    static const char* includePaths[] = {
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "CaloTriggerInfov1_Dict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
class CaloTriggerInfov1;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "CaloTriggerInfov1_Dict dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#ifndef TRIGGER_CALOTRIGGERINFOV1_H
#define TRIGGER_CALOTRIGGERINFOV1_H

#include "CaloTriggerInfo.h"

#include <iostream>

class CaloTriggerInfov1 : public CaloTriggerInfo
{
 public:
  CaloTriggerInfov1() {}
  ~CaloTriggerInfov1() override {}

  void identify(std::ostream &os = std::cout) const override;
  void Reset() override {}
  int isValid() const override { return 1; }

  // EMCal 2x2
  void set_best_EMCal_2x2_E(const float E) override { m_EMCAL_2x2_BEST_E = E; }
  void set_best_EMCal_2x2_eta(const float eta) override { m_EMCAL_2x2_BEST_ETA = eta; }
  void set_best_EMCal_2x2_phi(const float phi) override { m_EMCAL_2x2_BEST_PHI = phi; }

  float get_best_EMCal_2x2_E() const override { return m_EMCAL_2x2_BEST_E; }
  float get_best_EMCal_2x2_eta() const override { return m_EMCAL_2x2_BEST_ETA; }
  float get_best_EMCal_2x2_phi() const override { return m_EMCAL_2x2_BEST_PHI; }

  // EMCal 4x4
  void set_best_EMCal_4x4_E(const float E) override { m_EMCAL_4x4_BEST_E = E; }
  void set_best_EMCal_4x4_eta(const float eta) override { m_EMCAL_4x4_BEST_ETA = eta; }
  void set_best_EMCal_4x4_phi(const float phi) override { m_EMCAL_4x4_BEST_PHI = phi; }

  float get_best_EMCal_4x4_E() const override { return m_EMCAL_4x4_BEST_E; }
  float get_best_EMCal_4x4_eta() const override { return m_EMCAL_4x4_BEST_ETA; }
  float get_best_EMCal_4x4_phi() const override { return m_EMCAL_4x4_BEST_PHI; }

  // 2nd best EMCal 4x4
  void set_best2_EMCal_4x4_E(const float E) override { m_EMCAL_4x4_BEST2_E = E; }
  void set_best2_EMCal_4x4_eta(const float eta) override { m_EMCAL_4x4_BEST2_ETA = eta; }
  void set_best2_EMCal_4x4_phi(const float phi) override { m_EMCAL_4x4_BEST2_PHI = phi; }

  float get_best2_EMCal_4x4_E() const override { return m_EMCAL_4x4_BEST2_E; }
  float get_best2_EMCal_4x4_eta() const override { return m_EMCAL_4x4_BEST2_ETA; }
  float get_best2_EMCal_4x4_phi() const override { return m_EMCAL_4x4_BEST2_PHI; }

  // FullCalo 0.2x0.2
  void set_best_FullCalo_0p2x0p2_E(const float E) override { m_FULLCALO_0p2x0p2_BEST_E = E; }
  void set_best_FullCalo_0p2x0p2_eta(const float eta) override { m_FULLCALO_0p2x0p2_BEST_ETA = eta; }
  void set_best_FullCalo_0p2x0p2_phi(const float phi) override { m_FULLCALO_0p2x0p2_BEST_PHI = phi; }

  float get_best_FullCalo_0p2x0p2_E() const override { return m_FULLCALO_0p2x0p2_BEST_E; }
  float get_best_FullCalo_0p2x0p2_eta() const override { return m_FULLCALO_0p2x0p2_BEST_ETA; }
  float get_best_FullCalo_0p2x0p2_phi() const override { return m_FULLCALO_0p2x0p2_BEST_PHI; }

  // FullCalo 0.4x0.4
  void set_best_FullCalo_0p4x0p4_E(const float E) override { m_FULLCALO_0p4x0p4_BEST_E = E; }
  void set_best_FullCalo_0p4x0p4_eta(const float eta) override { m_FULLCALO_0p4x0p4_BEST_ETA = eta; }
  void set_best_FullCalo_0p4x0p4_phi(const float phi) override { m_FULLCALO_0p4x0p4_BEST_PHI = phi; }

  float get_best_FullCalo_0p4x0p4_E() const override { return m_FULLCALO_0p4x0p4_BEST_E; }
  float get_best_FullCalo_0p4x0p4_eta() const override { return m_FULLCALO_0p4x0p4_BEST_ETA; }
  float get_best_FullCalo_0p4x0p4_phi() const override { return m_FULLCALO_0p4x0p4_BEST_PHI; }

  // FullCalo 0.6x0.6
  void set_best_FullCalo_0p6x0p6_E(const float E) override { m_FULLCALO_0p6x0p6_BEST_E = E; }
  void set_best_FullCalo_0p6x0p6_eta(const float eta) override { m_FULLCALO_0p6x0p6_BEST_ETA = eta; }
  void set_best_FullCalo_0p6x0p6_phi(const float phi) override { m_FULLCALO_0p6x0p6_BEST_PHI = phi; }

  float get_best_FullCalo_0p6x0p6_E() const override { return m_FULLCALO_0p6x0p6_BEST_E; }
  float get_best_FullCalo_0p6x0p6_eta() const override { return m_FULLCALO_0p6x0p6_BEST_ETA; }
  float get_best_FullCalo_0p6x0p6_phi() const override { return m_FULLCALO_0p6x0p6_BEST_PHI; }

  // FullCalo 0.8x0.8
  void set_best_FullCalo_0p8x0p8_E(const float E) override { m_FULLCALO_0p8x0p8_BEST_E = E; }
  void set_best_FullCalo_0p8x0p8_eta(const float eta) override { m_FULLCALO_0p8x0p8_BEST_ETA = eta; }
  void set_best_FullCalo_0p8x0p8_phi(const float phi) override { m_FULLCALO_0p8x0p8_BEST_PHI = phi; }

  float get_best_FullCalo_0p8x0p8_E() const override { return m_FULLCALO_0p8x0p8_BEST_E; }
  float get_best_FullCalo_0p8x0p8_eta() const override { return m_FULLCALO_0p8x0p8_BEST_ETA; }
  float get_best_FullCalo_0p8x0p8_phi() const override { return m_FULLCALO_0p8x0p8_BEST_PHI; }

  // FullCalo 1.0x1.0
  void set_best_FullCalo_1p0x1p0_E(const float E) override { m_FULLCALO_1p0x1p0_BEST_E = E; }
  void set_best_FullCalo_1p0x1p0_eta(const float eta) override { m_FULLCALO_1p0x1p0_BEST_ETA = eta; }
  void set_best_FullCalo_1p0x1p0_phi(const float phi) override { m_FULLCALO_1p0x1p0_BEST_PHI = phi; }

  float get_best_FullCalo_1p0x1p0_E() const override { return m_FULLCALO_1p0x1p0_BEST_E; }
  float get_best_FullCalo_1p0x1p0_eta() const override { return m_FULLCALO_1p0x1p0_BEST_ETA; }
  float get_best_FullCalo_1p0x1p0_phi() const override { return m_FULLCALO_1p0x1p0_BEST_PHI; }

 private:
  float m_EMCAL_2x2_BEST_E{0.};
  float m_EMCAL_2x2_BEST_ETA{0.};
  float m_EMCAL_2x2_BEST_PHI{0.};

  float m_EMCAL_4x4_BEST_E{0.};
  float m_EMCAL_4x4_BEST_ETA{0.};
  float m_EMCAL_4x4_BEST_PHI{0.};

  float m_EMCAL_4x4_BEST2_E{0.};
  float m_EMCAL_4x4_BEST2_ETA{0.};
  float m_EMCAL_4x4_BEST2_PHI{0.};

  float m_FULLCALO_0p2x0p2_BEST_E{0.};
  float m_FULLCALO_0p2x0p2_BEST_ETA{0.};
  float m_FULLCALO_0p2x0p2_BEST_PHI{0.};

  float m_FULLCALO_0p4x0p4_BEST_E{0.};
  float m_FULLCALO_0p4x0p4_BEST_ETA{0.};
  float m_FULLCALO_0p4x0p4_BEST_PHI{0.};

  float m_FULLCALO_0p6x0p6_BEST_E{0.};
  float m_FULLCALO_0p6x0p6_BEST_ETA{0.};
  float m_FULLCALO_0p6x0p6_BEST_PHI{0.};

  float m_FULLCALO_0p8x0p8_BEST_E{0.};
  float m_FULLCALO_0p8x0p8_BEST_ETA{0.};
  float m_FULLCALO_0p8x0p8_BEST_PHI{0.};

  float m_FULLCALO_1p0x1p0_BEST_E{0.};
  float m_FULLCALO_1p0x1p0_BEST_ETA{0.};
  float m_FULLCALO_1p0x1p0_BEST_PHI{0.};

  ClassDefOverride(CaloTriggerInfov1, 3)
};

#endif

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"CaloTriggerInfov1", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("CaloTriggerInfov1_Dict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_CaloTriggerInfov1_Dict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_CaloTriggerInfov1_Dict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_CaloTriggerInfov1_Dict() {
  TriggerDictionaryInitialization_CaloTriggerInfov1_Dict_Impl();
}
