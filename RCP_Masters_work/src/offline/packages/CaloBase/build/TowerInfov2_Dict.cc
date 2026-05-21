// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME TowerInfov2_Dict
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
#include "../TowerInfov2.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static void *new_TowerInfov2(void *p = nullptr);
   static void *newArray_TowerInfov2(Long_t size, void *p);
   static void delete_TowerInfov2(void *p);
   static void deleteArray_TowerInfov2(void *p);
   static void destruct_TowerInfov2(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TowerInfov2*)
   {
      ::TowerInfov2 *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TowerInfov2 >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TowerInfov2", ::TowerInfov2::Class_Version(), "", 10,
                  typeid(::TowerInfov2), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TowerInfov2::Dictionary, isa_proxy, 4,
                  sizeof(::TowerInfov2) );
      instance.SetNew(&new_TowerInfov2);
      instance.SetNewArray(&newArray_TowerInfov2);
      instance.SetDelete(&delete_TowerInfov2);
      instance.SetDeleteArray(&deleteArray_TowerInfov2);
      instance.SetDestructor(&destruct_TowerInfov2);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TowerInfov2*)
   {
      return GenerateInitInstanceLocal(static_cast<::TowerInfov2*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TowerInfov2*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr TowerInfov2::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TowerInfov2::Class_Name()
{
   return "TowerInfov2";
}

//______________________________________________________________________________
const char *TowerInfov2::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TowerInfov2*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TowerInfov2::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TowerInfov2*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TowerInfov2::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TowerInfov2*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TowerInfov2::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TowerInfov2*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void TowerInfov2::Streamer(TBuffer &R__b)
{
   // Stream an object of class TowerInfov2.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TowerInfov2::Class(),this);
   } else {
      R__b.WriteClassBuffer(TowerInfov2::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TowerInfov2(void *p) {
      return  p ? new(p) ::TowerInfov2 : new ::TowerInfov2;
   }
   static void *newArray_TowerInfov2(Long_t nElements, void *p) {
      return p ? new(p) ::TowerInfov2[nElements] : new ::TowerInfov2[nElements];
   }
   // Wrapper around operator delete
   static void delete_TowerInfov2(void *p) {
      delete (static_cast<::TowerInfov2*>(p));
   }
   static void deleteArray_TowerInfov2(void *p) {
      delete [] (static_cast<::TowerInfov2*>(p));
   }
   static void destruct_TowerInfov2(void *p) {
      typedef ::TowerInfov2 current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TowerInfov2

namespace {
  void TriggerDictionaryInitialization_TowerInfov2_Dict_Impl() {
    static const char* headers[] = {
"0",
nullptr
    };
    static const char* includePaths[] = {
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "TowerInfov2_Dict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
class TowerInfov2;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "TowerInfov2_Dict dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#ifndef TOWERINFOV2_H
#define TOWERINFOV2_H

#include "TowerInfov1.h"

#include <cstdint>

class TowerInfov2 : public TowerInfov1
{
 public:
  TowerInfov2() {}

  ~TowerInfov2() override {}

  void Reset() override;
  void Clear(Option_t* = "") override;
  void set_time(short t) override { TowerInfov1::set_time(t * 1000); }
  short get_time() override { return TowerInfov1::get_time() / 1000; }

  void set_time_float(float t) override { TowerInfov1::set_time(t * 1000); }
  float get_time_float() override { return TowerInfov1::get_time() / 1000.; }

  void set_chi2(float chi2) override { _chi2 = chi2; }
  float get_chi2() override { return _chi2; }
  void set_pedestal(float pedestal) override { _pedestal = pedestal; }
  float get_pedestal() override { return _pedestal; }

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

  uint8_t get_status() const override { return _status; }

  void set_status(uint8_t status) override { _status = status; }

  void copy_tower(TowerInfo* tower) override;

 private:
  float _chi2 = 0;
  float _pedestal = 0;
  uint8_t _status = 0;

  void set_status_bit(int bit, bool value)
  {
    if (bit < 0 || bit > 7)
    {
      return;
    }
    _status &= ~((uint8_t) 1 << bit);
    _status |= (uint8_t) value << bit;
  }

  bool get_status_bit(int bit) const
  {
    if (bit < 0 || bit > 7)
    {
      return false;  // default behavior
    }
    return (_status & ((uint8_t) 1 << bit)) != 0;
  }

  ClassDefOverride(TowerInfov2, 1);
  // Inherit other methods and properties from TowerInfov1
};

#endif

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"TowerInfov2", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("TowerInfov2_Dict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_TowerInfov2_Dict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_TowerInfov2_Dict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_TowerInfov2_Dict() {
  TriggerDictionaryInitialization_TowerInfov2_Dict_Impl();
}
