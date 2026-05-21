// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME RawTowerGeomv2_Dict
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
#include "../RawTowerGeomv2.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static void *new_RawTowerGeomv2(void *p = nullptr);
   static void *newArray_RawTowerGeomv2(Long_t size, void *p);
   static void delete_RawTowerGeomv2(void *p);
   static void deleteArray_RawTowerGeomv2(void *p);
   static void destruct_RawTowerGeomv2(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RawTowerGeomv2*)
   {
      ::RawTowerGeomv2 *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RawTowerGeomv2 >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RawTowerGeomv2", ::RawTowerGeomv2::Class_Version(), "", 12,
                  typeid(::RawTowerGeomv2), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RawTowerGeomv2::Dictionary, isa_proxy, 4,
                  sizeof(::RawTowerGeomv2) );
      instance.SetNew(&new_RawTowerGeomv2);
      instance.SetNewArray(&newArray_RawTowerGeomv2);
      instance.SetDelete(&delete_RawTowerGeomv2);
      instance.SetDeleteArray(&deleteArray_RawTowerGeomv2);
      instance.SetDestructor(&destruct_RawTowerGeomv2);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RawTowerGeomv2*)
   {
      return GenerateInitInstanceLocal(static_cast<::RawTowerGeomv2*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RawTowerGeomv2*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr RawTowerGeomv2::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *RawTowerGeomv2::Class_Name()
{
   return "RawTowerGeomv2";
}

//______________________________________________________________________________
const char *RawTowerGeomv2::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RawTowerGeomv2*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int RawTowerGeomv2::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RawTowerGeomv2*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RawTowerGeomv2::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RawTowerGeomv2*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RawTowerGeomv2::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RawTowerGeomv2*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void RawTowerGeomv2::Streamer(TBuffer &R__b)
{
   // Stream an object of class RawTowerGeomv2.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RawTowerGeomv2::Class(),this);
   } else {
      R__b.WriteClassBuffer(RawTowerGeomv2::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RawTowerGeomv2(void *p) {
      return  p ? new(p) ::RawTowerGeomv2 : new ::RawTowerGeomv2;
   }
   static void *newArray_RawTowerGeomv2(Long_t nElements, void *p) {
      return p ? new(p) ::RawTowerGeomv2[nElements] : new ::RawTowerGeomv2[nElements];
   }
   // Wrapper around operator delete
   static void delete_RawTowerGeomv2(void *p) {
      delete (static_cast<::RawTowerGeomv2*>(p));
   }
   static void deleteArray_RawTowerGeomv2(void *p) {
      delete [] (static_cast<::RawTowerGeomv2*>(p));
   }
   static void destruct_RawTowerGeomv2(void *p) {
      typedef ::RawTowerGeomv2 current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RawTowerGeomv2

namespace {
  void TriggerDictionaryInitialization_RawTowerGeomv2_Dict_Impl() {
    static const char* headers[] = {
"0",
nullptr
    };
    static const char* includePaths[] = {
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "RawTowerGeomv2_Dict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
class RawTowerGeomv2;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "RawTowerGeomv2_Dict dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#ifndef CALOBASE_RAWTOWERGEOMV2_H
#define CALOBASE_RAWTOWERGEOMV2_H

#include "RawTowerGeom.h"

#include "RawTowerDefs.h"

#include <iostream>

class RawTowerGeomv2 : public RawTowerGeom
{
 public:
  RawTowerGeomv2() {}
  RawTowerGeomv2(RawTowerDefs::keytype id);
  ~RawTowerGeomv2() override {}

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

  void set_size_x(double dx) override
  {
    _size_x = dx;
    return;
  }
  void set_size_y(double dy) override
  {
    _size_y = dy;
    return;
  }
  void set_size_z(double dz) override
  {
    _size_z = dz;
    return;
  }

  double get_center_x() const override { return _center_x; }
  double get_center_y() const override { return _center_y; }
  double get_center_z() const override { return _center_z; }

  double get_size_x() const override { return _size_x; }
  double get_size_y() const override { return _size_y; }
  double get_size_z() const override { return _size_z; }
  double get_volume() const override { return (_size_x * _size_y * _size_z); }

  double get_center_radius() const override;
  double get_eta() const override;
  double get_phi() const override;

 protected:
  RawTowerDefs::keytype _towerid = ~0U;

  double _center_x = 0.;
  double _center_y = 0.;
  double _center_z = 0.;

  double _size_x = 0.;
  double _size_y = 0.;
  double _size_z = 0.;

  ClassDefOverride(RawTowerGeomv2, 3)
};

#endif

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"RawTowerGeomv2", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("RawTowerGeomv2_Dict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_RawTowerGeomv2_Dict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_RawTowerGeomv2_Dict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_RawTowerGeomv2_Dict() {
  TriggerDictionaryInitialization_RawTowerGeomv2_Dict_Impl();
}
