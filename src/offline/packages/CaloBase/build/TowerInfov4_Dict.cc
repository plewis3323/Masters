// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME TowerInfov4_Dict
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
#include "../TowerInfov4.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static void *new_TowerInfov4(void *p = nullptr);
   static void *newArray_TowerInfov4(Long_t size, void *p);
   static void delete_TowerInfov4(void *p);
   static void deleteArray_TowerInfov4(void *p);
   static void destruct_TowerInfov4(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TowerInfov4*)
   {
      ::TowerInfov4 *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TowerInfov4 >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TowerInfov4", ::TowerInfov4::Class_Version(), "", 11,
                  typeid(::TowerInfov4), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TowerInfov4::Dictionary, isa_proxy, 4,
                  sizeof(::TowerInfov4) );
      instance.SetNew(&new_TowerInfov4);
      instance.SetNewArray(&newArray_TowerInfov4);
      instance.SetDelete(&delete_TowerInfov4);
      instance.SetDeleteArray(&deleteArray_TowerInfov4);
      instance.SetDestructor(&destruct_TowerInfov4);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TowerInfov4*)
   {
      return GenerateInitInstanceLocal(static_cast<::TowerInfov4*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TowerInfov4*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr TowerInfov4::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TowerInfov4::Class_Name()
{
   return "TowerInfov4";
}

//______________________________________________________________________________
const char *TowerInfov4::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TowerInfov4*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TowerInfov4::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TowerInfov4*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TowerInfov4::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TowerInfov4*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TowerInfov4::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TowerInfov4*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void TowerInfov4::Streamer(TBuffer &R__b)
{
   // Stream an object of class TowerInfov4.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TowerInfov4::Class(),this);
   } else {
      R__b.WriteClassBuffer(TowerInfov4::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TowerInfov4(void *p) {
      return  p ? new(p) ::TowerInfov4 : new ::TowerInfov4;
   }
   static void *newArray_TowerInfov4(Long_t nElements, void *p) {
      return p ? new(p) ::TowerInfov4[nElements] : new ::TowerInfov4[nElements];
   }
   // Wrapper around operator delete
   static void delete_TowerInfov4(void *p) {
      delete (static_cast<::TowerInfov4*>(p));
   }
   static void deleteArray_TowerInfov4(void *p) {
      delete [] (static_cast<::TowerInfov4*>(p));
   }
   static void destruct_TowerInfov4(void *p) {
      typedef ::TowerInfov4 current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TowerInfov4

namespace {
  void TriggerDictionaryInitialization_TowerInfov4_Dict_Impl() {
    static const char* headers[] = {
"0",
nullptr
    };
    static const char* includePaths[] = {
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "TowerInfov4_Dict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
class TowerInfov4;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "TowerInfov4_Dict dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#ifndef TOWERINFOV4_H
#define TOWERINFOV4_H

#include "TowerInfov1.h"

#include <cmath>
#include <limits>

class TowerInfov4 : public TowerInfo
{
 public:
  TowerInfov4() {}

  ~TowerInfov4() override {}

  void Reset() override;
  void Clear(Option_t* = "") override;

  void set_energy(float _energy) override { energy = _energy; }
  float get_energy() override { return energy; }

  void set_time(short t) override { time = (t * 1000); }
  short get_time() override { return ((float) time) / 1000; }

  void set_time_float(float t) override { time = t * 1000; }
  float get_time_float() override { return time / 1000.; }

  void set_chi2(float _chi2) override
  {
    float lnChi2;
    
    if (std::isnan(_chi2))
    {
      lnChi2 = 0;
    }
    else if (_chi2 <= 0)
    {
      lnChi2 = 1;
    }
    else
    {
      lnChi2 = std::log(_chi2 + 1) / std::log(1.08);
    }
    if (lnChi2 > 255.0)
    {
      lnChi2 = 255;
    }
    chi2 = static_cast<uint8_t>(std::round(lnChi2));
  }
  float get_chi2() override {
    return (chi2 == 0)
        ? std::numeric_limits<float>::quiet_NaN() 
        : (pow(1.08, static_cast<float>(chi2)) - 1.0);
  }

  void set_isHot(bool isHot) override { set_status_bit(0, isHot); }
  bool get_isHot() const override { return get_status_bit(0); }

  void set_isBadTime(bool isBadTime) override { set_status_bit(1, isBadTime); }
  bool get_isBadTime() const override { return get_status_bit(1); }

  void set_isBadChi2(bool isBadChi2) override { set_status_bit(2, isBadChi2); }
  bool get_isBadChi2() const override { return get_status_bit(2); }

  void set_isNotInstr(bool isNotInstr) override { set_status_bit(3, isNotInstr); }
  bool get_isNotInstr() const override { return get_status_bit(3); }

  void set_isNoCalib(bool isNoCalib) override { set_status_bit(4, isNoCalib); }
  bool get_isNoCalib() const override { return get_status_bit(4); }

  void set_isZS(bool isZS) override { set_status_bit(5, isZS); }
  bool get_isZS() const override { return get_status_bit(5); }

  void set_isRecovered(bool isRecovered) override { set_status_bit(6, isRecovered); }
  bool get_isRecovered() const override { return get_status_bit(6); }

  void set_isSaturated(bool isSaturated) override { set_status_bit(7, isSaturated); }
  bool get_isSaturated() const override { return get_status_bit(7); }

  bool get_isGood() const override { return !(get_isHot() || get_isBadChi2() || get_isNoCalib()); }

  uint8_t get_status() const override { return status; }

  void set_status(uint8_t _status) override { status = _status; }

  void copy_tower(TowerInfo* tower) override;

 private:
  float energy = 0;
  short time = 0;
  uint8_t chi2 = 0;
  uint8_t status = 0;

  void set_status_bit(int bit, bool value)
  {
    if (bit < 0 || bit > 7)
    {
      return;
    }
    status &= ~((uint8_t) 1 << bit);
    status |= (uint8_t) value << bit;
  }

  bool get_status_bit(int bit) const
  {
    if (bit < 0 || bit > 7)
    {
      return false;  // default behavior
    }
    return (status & ((uint8_t) 1 << bit)) != 0;
  }

  ClassDefOverride(TowerInfov4, 1);
  // Inherit other methods and properties from TowerInfov1
};

#endif

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"TowerInfov4", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("TowerInfov4_Dict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_TowerInfov4_Dict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_TowerInfov4_Dict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_TowerInfov4_Dict() {
  TriggerDictionaryInitialization_TowerInfov4_Dict_Impl();
}
