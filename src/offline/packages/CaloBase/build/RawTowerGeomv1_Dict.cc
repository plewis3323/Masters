// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME RawTowerGeomv1_Dict
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
#include "../RawTowerGeomv1.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static void *new_RawTowerGeomv1(void *p = nullptr);
   static void *newArray_RawTowerGeomv1(Long_t size, void *p);
   static void delete_RawTowerGeomv1(void *p);
   static void deleteArray_RawTowerGeomv1(void *p);
   static void destruct_RawTowerGeomv1(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RawTowerGeomv1*)
   {
      ::RawTowerGeomv1 *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RawTowerGeomv1 >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RawTowerGeomv1", ::RawTowerGeomv1::Class_Version(), "", 13,
                  typeid(::RawTowerGeomv1), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RawTowerGeomv1::Dictionary, isa_proxy, 4,
                  sizeof(::RawTowerGeomv1) );
      instance.SetNew(&new_RawTowerGeomv1);
      instance.SetNewArray(&newArray_RawTowerGeomv1);
      instance.SetDelete(&delete_RawTowerGeomv1);
      instance.SetDeleteArray(&deleteArray_RawTowerGeomv1);
      instance.SetDestructor(&destruct_RawTowerGeomv1);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RawTowerGeomv1*)
   {
      return GenerateInitInstanceLocal(static_cast<::RawTowerGeomv1*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RawTowerGeomv1*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr RawTowerGeomv1::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *RawTowerGeomv1::Class_Name()
{
   return "RawTowerGeomv1";
}

//______________________________________________________________________________
const char *RawTowerGeomv1::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RawTowerGeomv1*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int RawTowerGeomv1::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RawTowerGeomv1*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RawTowerGeomv1::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RawTowerGeomv1*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RawTowerGeomv1::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RawTowerGeomv1*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void RawTowerGeomv1::Streamer(TBuffer &R__b)
{
   // Stream an object of class RawTowerGeomv1.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RawTowerGeomv1::Class(),this);
   } else {
      R__b.WriteClassBuffer(RawTowerGeomv1::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RawTowerGeomv1(void *p) {
      return  p ? new(p) ::RawTowerGeomv1 : new ::RawTowerGeomv1;
   }
   static void *newArray_RawTowerGeomv1(Long_t nElements, void *p) {
      return p ? new(p) ::RawTowerGeomv1[nElements] : new ::RawTowerGeomv1[nElements];
   }
   // Wrapper around operator delete
   static void delete_RawTowerGeomv1(void *p) {
      delete (static_cast<::RawTowerGeomv1*>(p));
   }
   static void deleteArray_RawTowerGeomv1(void *p) {
      delete [] (static_cast<::RawTowerGeomv1*>(p));
   }
   static void destruct_RawTowerGeomv1(void *p) {
      typedef ::RawTowerGeomv1 current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RawTowerGeomv1

namespace {
  void TriggerDictionaryInitialization_RawTowerGeomv1_Dict_Impl() {
    static const char* headers[] = {
"0",
nullptr
    };
    static const char* includePaths[] = {
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "RawTowerGeomv1_Dict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
class RawTowerGeomv1;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "RawTowerGeomv1_Dict dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#ifndef CALOBASE_RAWTOWERGEOMV1_H
#define CALOBASE_RAWTOWERGEOMV1_H

#include "RawTowerGeom.h"

#include "RawTowerDefs.h"

#include <iostream>
#include <limits>

class RawTowerGeomv1 : public RawTowerGeom
{
 public:
  RawTowerGeomv1() {}
  RawTowerGeomv1(RawTowerDefs::keytype id);
  ~RawTowerGeomv1() override {}

  void identify(std::ostream& os = std::cout) const override;

  void set_id(RawTowerDefs::keytype key) override { _towerid = key; }
  RawTowerDefs::keytype get_id() const override { return _towerid; }

  int get_bineta() const override { return RawTowerDefs::decode_index1(_towerid); }
  int get_binphi() const override { return RawTowerDefs::decode_index2(_towerid); }
  int get_column() const override { return RawTowerDefs::decode_index1(_towerid); }
  int get_row() const override { return RawTowerDefs::decode_index2(_towerid); }

  void set_center_x(double x) override
  {
    _center_x = x;
    return;
  }
  void set_center_y(double y) override
  {
    _center_y = y;
    return;
  }
  void set_center_z(double z) override
  {
    _center_z = z;
    return;
  }

  double get_center_x() const override { return _center_x; }
  double get_center_y() const override { return _center_y; }
  double get_center_z() const override { return _center_z; }

  double get_center_radius() const override;
  double get_eta() const override;
  double get_phi() const override;
  double get_theta() const override;

 protected:
  RawTowerDefs::keytype _towerid{std::numeric_limits<RawTowerDefs::keytype>::max()};

  double _center_x{std::numeric_limits<double>::signaling_NaN()};
  double _center_y{std::numeric_limits<double>::signaling_NaN()};
  double _center_z{std::numeric_limits<double>::signaling_NaN()};
  ClassDefOverride(RawTowerGeomv1, 4)
};

#endif

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"RawTowerGeomv1", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("RawTowerGeomv1_Dict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_RawTowerGeomv1_Dict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_RawTowerGeomv1_Dict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_RawTowerGeomv1_Dict() {
  TriggerDictionaryInitialization_RawTowerGeomv1_Dict_Impl();
}
