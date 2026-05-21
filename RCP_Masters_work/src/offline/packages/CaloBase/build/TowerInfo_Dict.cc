// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME TowerInfo_Dict
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
#include "../TowerInfo.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static void *new_TowerInfo(void *p = nullptr);
   static void *newArray_TowerInfo(Long_t size, void *p);
   static void delete_TowerInfo(void *p);
   static void deleteArray_TowerInfo(void *p);
   static void destruct_TowerInfo(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TowerInfo*)
   {
      ::TowerInfo *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TowerInfo >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TowerInfo", ::TowerInfo::Class_Version(), "", 13,
                  typeid(::TowerInfo), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TowerInfo::Dictionary, isa_proxy, 4,
                  sizeof(::TowerInfo) );
      instance.SetNew(&new_TowerInfo);
      instance.SetNewArray(&newArray_TowerInfo);
      instance.SetDelete(&delete_TowerInfo);
      instance.SetDeleteArray(&deleteArray_TowerInfo);
      instance.SetDestructor(&destruct_TowerInfo);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TowerInfo*)
   {
      return GenerateInitInstanceLocal(static_cast<::TowerInfo*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TowerInfo*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr TowerInfo::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TowerInfo::Class_Name()
{
   return "TowerInfo";
}

//______________________________________________________________________________
const char *TowerInfo::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TowerInfo*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TowerInfo::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TowerInfo*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TowerInfo::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TowerInfo*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TowerInfo::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TowerInfo*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void TowerInfo::Streamer(TBuffer &R__b)
{
   // Stream an object of class TowerInfo.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TowerInfo::Class(),this);
   } else {
      R__b.WriteClassBuffer(TowerInfo::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TowerInfo(void *p) {
      return  p ? new(p) ::TowerInfo : new ::TowerInfo;
   }
   static void *newArray_TowerInfo(Long_t nElements, void *p) {
      return p ? new(p) ::TowerInfo[nElements] : new ::TowerInfo[nElements];
   }
   // Wrapper around operator delete
   static void delete_TowerInfo(void *p) {
      delete (static_cast<::TowerInfo*>(p));
   }
   static void deleteArray_TowerInfo(void *p) {
      delete [] (static_cast<::TowerInfo*>(p));
   }
   static void destruct_TowerInfo(void *p) {
      typedef ::TowerInfo current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TowerInfo

namespace {
  void TriggerDictionaryInitialization_TowerInfo_Dict_Impl() {
    static const char* headers[] = {
"0",
nullptr
    };
    static const char* includePaths[] = {
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "TowerInfo_Dict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
class TowerInfo;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "TowerInfo_Dict dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#ifndef TOWERINFO_H
#define TOWERINFO_H

#include <phool/PHObject.h>

#include <g4main/PHG4HitDefs.h>

#include <limits>
#include <map>

class TowerInfo : public PHObject
{
 public:
  typedef std::map<PHG4HitDefs::keytype, float> EdepMap;
  typedef std::map<int, float> ShowerEdepMap;
  TowerInfo() = default;
  ~TowerInfo() override = default;
  void Reset() override { return; }

  virtual void set_time(short /*t*/) { return; }
  virtual short get_time() { return -1; }
  virtual void set_energy(float /*energy*/) { return; }
  virtual float get_energy() { return std::numeric_limits<float>::signaling_NaN(); }
  virtual void copy_tower(TowerInfo* /*tower*/) { return; }
  // methods in v2
  virtual void set_time_float(float /*t*/) { return; }
  virtual float get_time_float() { return std::numeric_limits<float>::signaling_NaN(); }
  virtual void set_chi2(float /*chi2*/) { return; }
  virtual float get_chi2() { return std::numeric_limits<float>::signaling_NaN(); }
  virtual void set_pedestal(float /*pedestal*/) { return; }
  virtual float get_pedestal() { return std::numeric_limits<float>::signaling_NaN(); }
  virtual void set_isHot(bool /*isHot*/) { return; }
  virtual bool get_isHot() const { return false; }
  virtual void set_isBadTime(bool /*isBadTime*/) { return; }
  virtual bool get_isBadTime() const { return false; }
  virtual void set_isBadChi2(bool /*isBadChi2*/) { return; }
  virtual bool get_isBadChi2() const { return false; }
  virtual void set_isNotInstr(bool /*isNotInstr*/) { return; }
  virtual bool get_isNotInstr() const { return false; }
  virtual void set_isNoCalib(bool /*isNotInstr*/) { return; }
  virtual bool get_isNoCalib() const { return false; }
  virtual void set_isZS(bool /*isZS*/) { return; }
  virtual bool get_isZS() const { return false; }
  virtual void set_isRecovered(bool /*isRecovered*/) { return; }
  virtual bool get_isRecovered() const { return false; }
  virtual void set_isSaturated(bool /*isSaturated*/) { return; }
  virtual bool get_isSaturated() const { return false; }
  virtual bool get_isGood() const { return true; }
  virtual uint8_t get_status() const { return 0; }
  virtual void set_status(uint8_t /*status*/) { return; }
  // methods in v3
  virtual int get_nsample() const { return 0; }
  virtual int16_t get_waveform_value(int /*index*/) const { return -1; }
  virtual void set_waveform_value(int /*index*/, int16_t /*value*/) { return; }
  // methods in sim v1
  virtual EdepMap& get_hitEdepMap() { static EdepMap dummy; return dummy; }
  virtual ShowerEdepMap& get_showerEdepMap() { static ShowerEdepMap dummy; return dummy; }
  virtual const EdepMap& get_hitEdepMap() const { static EdepMap dummy; return dummy; }
  virtual const ShowerEdepMap& get_showerEdepMap() const { static ShowerEdepMap dummy; return dummy; }
  virtual void add_edep(const PHG4HitDefs::keytype /*g4hitid*/, const float /*edep*/) { return; }
  virtual void add_shower_edep(const int /*showerid*/, const float /*edep*/) { return; }

 private:
  ClassDefOverride(TowerInfo, 1);
};

#endif

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"TowerInfo", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("TowerInfo_Dict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_TowerInfo_Dict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_TowerInfo_Dict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_TowerInfo_Dict() {
  TriggerDictionaryInitialization_TowerInfo_Dict_Impl();
}
