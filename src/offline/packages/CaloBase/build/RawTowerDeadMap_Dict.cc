// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME RawTowerDeadMap_Dict
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
#include "../RawTowerDeadMap.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static void delete_RawTowerDeadMap(void *p);
   static void deleteArray_RawTowerDeadMap(void *p);
   static void destruct_RawTowerDeadMap(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RawTowerDeadMap*)
   {
      ::RawTowerDeadMap *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RawTowerDeadMap >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RawTowerDeadMap", ::RawTowerDeadMap::Class_Version(), "", 13,
                  typeid(::RawTowerDeadMap), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RawTowerDeadMap::Dictionary, isa_proxy, 4,
                  sizeof(::RawTowerDeadMap) );
      instance.SetDelete(&delete_RawTowerDeadMap);
      instance.SetDeleteArray(&deleteArray_RawTowerDeadMap);
      instance.SetDestructor(&destruct_RawTowerDeadMap);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RawTowerDeadMap*)
   {
      return GenerateInitInstanceLocal(static_cast<::RawTowerDeadMap*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RawTowerDeadMap*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr RawTowerDeadMap::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *RawTowerDeadMap::Class_Name()
{
   return "RawTowerDeadMap";
}

//______________________________________________________________________________
const char *RawTowerDeadMap::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RawTowerDeadMap*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int RawTowerDeadMap::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RawTowerDeadMap*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RawTowerDeadMap::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RawTowerDeadMap*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RawTowerDeadMap::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RawTowerDeadMap*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void RawTowerDeadMap::Streamer(TBuffer &R__b)
{
   // Stream an object of class RawTowerDeadMap.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RawTowerDeadMap::Class(),this);
   } else {
      R__b.WriteClassBuffer(RawTowerDeadMap::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_RawTowerDeadMap(void *p) {
      delete (static_cast<::RawTowerDeadMap*>(p));
   }
   static void deleteArray_RawTowerDeadMap(void *p) {
      delete [] (static_cast<::RawTowerDeadMap*>(p));
   }
   static void destruct_RawTowerDeadMap(void *p) {
      typedef ::RawTowerDeadMap current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RawTowerDeadMap

namespace {
  void TriggerDictionaryInitialization_RawTowerDeadMap_Dict_Impl() {
    static const char* headers[] = {
"0",
nullptr
    };
    static const char* includePaths[] = {
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "RawTowerDeadMap_Dict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
class RawTowerDeadMap;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "RawTowerDeadMap_Dict dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#ifndef CALOBASE_RAWTOWERDEADMAP_H
#define CALOBASE_RAWTOWERDEADMAP_H

#include "RawTowerDefs.h"

#include <phool/PHObject.h>

#include <iostream>
#include <set>

class RawTowerDeadMap : public PHObject
{
 public:
  typedef std::set<RawTowerDefs::keytype> Map;

  ~RawTowerDeadMap() override {}

  void Reset() override;
  int isValid() const override;

  void identify(std::ostream &os = std::cout) const override;

  virtual void setCalorimeterID(RawTowerDefs::CalorimeterId /*caloid*/) {}
  virtual RawTowerDefs::CalorimeterId getCalorimeterID() { return RawTowerDefs::NONE; }
  virtual void addDeadTower(const unsigned int ieta, const unsigned int iphi);
  virtual void addDeadTower(RawTowerDefs::keytype key);

  virtual bool isDeadTower(RawTowerDefs::keytype key);
  virtual bool isDeadTower(const unsigned int ieta, const unsigned int iphi);
  //! return all towers
  virtual const Map &getDeadTowers(void) const;
  virtual Map &getDeadTowers(void);

  virtual unsigned int size() const { return 0; }

 protected:
  RawTowerDeadMap(RawTowerDefs::CalorimeterId /*caloid*/ = RawTowerDefs::NONE)
  {
  }

 private:
  ClassDefOverride(RawTowerDeadMap, 1)
};

#endif

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"RawTowerDeadMap", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("RawTowerDeadMap_Dict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_RawTowerDeadMap_Dict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_RawTowerDeadMap_Dict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_RawTowerDeadMap_Dict() {
  TriggerDictionaryInitialization_RawTowerDeadMap_Dict_Impl();
}
