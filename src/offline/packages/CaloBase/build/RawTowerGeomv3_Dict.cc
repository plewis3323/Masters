// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME RawTowerGeomv3_Dict
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
#include "../RawTowerGeomv3.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static void *new_RawTowerGeomv3(void *p = nullptr);
   static void *newArray_RawTowerGeomv3(Long_t size, void *p);
   static void delete_RawTowerGeomv3(void *p);
   static void deleteArray_RawTowerGeomv3(void *p);
   static void destruct_RawTowerGeomv3(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RawTowerGeomv3*)
   {
      ::RawTowerGeomv3 *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RawTowerGeomv3 >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RawTowerGeomv3", ::RawTowerGeomv3::Class_Version(), "", 13,
                  typeid(::RawTowerGeomv3), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RawTowerGeomv3::Dictionary, isa_proxy, 4,
                  sizeof(::RawTowerGeomv3) );
      instance.SetNew(&new_RawTowerGeomv3);
      instance.SetNewArray(&newArray_RawTowerGeomv3);
      instance.SetDelete(&delete_RawTowerGeomv3);
      instance.SetDeleteArray(&deleteArray_RawTowerGeomv3);
      instance.SetDestructor(&destruct_RawTowerGeomv3);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RawTowerGeomv3*)
   {
      return GenerateInitInstanceLocal(static_cast<::RawTowerGeomv3*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RawTowerGeomv3*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr RawTowerGeomv3::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *RawTowerGeomv3::Class_Name()
{
   return "RawTowerGeomv3";
}

//______________________________________________________________________________
const char *RawTowerGeomv3::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RawTowerGeomv3*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int RawTowerGeomv3::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RawTowerGeomv3*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RawTowerGeomv3::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RawTowerGeomv3*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RawTowerGeomv3::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RawTowerGeomv3*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void RawTowerGeomv3::Streamer(TBuffer &R__b)
{
   // Stream an object of class RawTowerGeomv3.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RawTowerGeomv3::Class(),this);
   } else {
      R__b.WriteClassBuffer(RawTowerGeomv3::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RawTowerGeomv3(void *p) {
      return  p ? new(p) ::RawTowerGeomv3 : new ::RawTowerGeomv3;
   }
   static void *newArray_RawTowerGeomv3(Long_t nElements, void *p) {
      return p ? new(p) ::RawTowerGeomv3[nElements] : new ::RawTowerGeomv3[nElements];
   }
   // Wrapper around operator delete
   static void delete_RawTowerGeomv3(void *p) {
      delete (static_cast<::RawTowerGeomv3*>(p));
   }
   static void deleteArray_RawTowerGeomv3(void *p) {
      delete [] (static_cast<::RawTowerGeomv3*>(p));
   }
   static void destruct_RawTowerGeomv3(void *p) {
      typedef ::RawTowerGeomv3 current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RawTowerGeomv3

namespace {
  void TriggerDictionaryInitialization_RawTowerGeomv3_Dict_Impl() {
    static const char* headers[] = {
"0",
nullptr
    };
    static const char* includePaths[] = {
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "RawTowerGeomv3_Dict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
class RawTowerGeomv3;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "RawTowerGeomv3_Dict dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#ifndef CALOBASE_RAWTOWERGEOMV3_H
#define CALOBASE_RAWTOWERGEOMV3_H

#include "RawTowerGeom.h"

#include "RawTowerDefs.h"

#include <iostream>
#include <limits>

class RawTowerGeomv3 : public RawTowerGeom
{
 public:
  RawTowerGeomv3() {}
  RawTowerGeomv3(RawTowerDefs::keytype id);
  ~RawTowerGeomv3() override {}

  void identify(std::ostream& os = std::cout) const override;

  void set_id(RawTowerDefs::keytype key) override { _towerid = key; }
  RawTowerDefs::keytype get_id() const override { return _towerid; }

  int get_bineta() const override;
  int get_binphi() const override;

  int get_column() const override { return get_bineta(); }
  int get_row() const override { return get_binphi(); }

  int get_binl() const override { return RawTowerDefs::decode_index3v2(_towerid); }

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
  double get_theta() const override;

  void set_tower_type(int tt) override { _tower_type = tt; }
  int get_tower_type() const override { return _tower_type; }

 protected:
  RawTowerDefs::keytype _towerid = ~0;  // complement = 0xFFFFF... independent of integer type (32/64/... bits)

  double _center_x{std::numeric_limits<double>::signaling_NaN()};
  double _center_y{std::numeric_limits<double>::signaling_NaN()};
  double _center_z{std::numeric_limits<double>::signaling_NaN()};

  double _size_x{std::numeric_limits<double>::signaling_NaN()};
  double _size_y{std::numeric_limits<double>::signaling_NaN()};
  double _size_z{std::numeric_limits<double>::signaling_NaN()};

  int _tower_type{-1};

  ClassDefOverride(RawTowerGeomv3, 4)
};

#endif /* CALOBASE_RAWTOWERGEOMV3_H */

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"RawTowerGeomv3", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("RawTowerGeomv3_Dict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_RawTowerGeomv3_Dict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_RawTowerGeomv3_Dict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_RawTowerGeomv3_Dict() {
  TriggerDictionaryInitialization_RawTowerGeomv3_Dict_Impl();
}
