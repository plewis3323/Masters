// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME RawTowerGeomv4_Dict
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
#include "../RawTowerGeomv4.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static void *new_RawTowerGeomv4(void *p = nullptr);
   static void *newArray_RawTowerGeomv4(Long_t size, void *p);
   static void delete_RawTowerGeomv4(void *p);
   static void deleteArray_RawTowerGeomv4(void *p);
   static void destruct_RawTowerGeomv4(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RawTowerGeomv4*)
   {
      ::RawTowerGeomv4 *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RawTowerGeomv4 >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RawTowerGeomv4", ::RawTowerGeomv4::Class_Version(), "", 15,
                  typeid(::RawTowerGeomv4), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RawTowerGeomv4::Dictionary, isa_proxy, 4,
                  sizeof(::RawTowerGeomv4) );
      instance.SetNew(&new_RawTowerGeomv4);
      instance.SetNewArray(&newArray_RawTowerGeomv4);
      instance.SetDelete(&delete_RawTowerGeomv4);
      instance.SetDeleteArray(&deleteArray_RawTowerGeomv4);
      instance.SetDestructor(&destruct_RawTowerGeomv4);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RawTowerGeomv4*)
   {
      return GenerateInitInstanceLocal(static_cast<::RawTowerGeomv4*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RawTowerGeomv4*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr RawTowerGeomv4::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *RawTowerGeomv4::Class_Name()
{
   return "RawTowerGeomv4";
}

//______________________________________________________________________________
const char *RawTowerGeomv4::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RawTowerGeomv4*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int RawTowerGeomv4::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RawTowerGeomv4*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RawTowerGeomv4::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RawTowerGeomv4*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RawTowerGeomv4::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RawTowerGeomv4*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void RawTowerGeomv4::Streamer(TBuffer &R__b)
{
   // Stream an object of class RawTowerGeomv4.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RawTowerGeomv4::Class(),this);
   } else {
      R__b.WriteClassBuffer(RawTowerGeomv4::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RawTowerGeomv4(void *p) {
      return  p ? new(p) ::RawTowerGeomv4 : new ::RawTowerGeomv4;
   }
   static void *newArray_RawTowerGeomv4(Long_t nElements, void *p) {
      return p ? new(p) ::RawTowerGeomv4[nElements] : new ::RawTowerGeomv4[nElements];
   }
   // Wrapper around operator delete
   static void delete_RawTowerGeomv4(void *p) {
      delete (static_cast<::RawTowerGeomv4*>(p));
   }
   static void deleteArray_RawTowerGeomv4(void *p) {
      delete [] (static_cast<::RawTowerGeomv4*>(p));
   }
   static void destruct_RawTowerGeomv4(void *p) {
      typedef ::RawTowerGeomv4 current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RawTowerGeomv4

namespace {
  void TriggerDictionaryInitialization_RawTowerGeomv4_Dict_Impl() {
    static const char* headers[] = {
"0",
nullptr
    };
    static const char* includePaths[] = {
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "RawTowerGeomv4_Dict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
class RawTowerGeomv4;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "RawTowerGeomv4_Dict dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#ifndef CALOBASE_RAWTOWERGEOMV4_H
#define CALOBASE_RAWTOWERGEOMV4_H

#include "RawTowerGeom.h"

#include "RawTowerDefs.h"

#include <TVector3.h>

#include <iostream>
#include <limits>

class RawTowerGeomv4 : public RawTowerGeom
{
 public:
  RawTowerGeomv4() {}
  RawTowerGeomv4(RawTowerDefs::keytype id);
  virtual ~RawTowerGeomv4() {}

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
  void set_roty(double roty) override
  {
    _roty = roty;
    return;
  }
  void set_rotz(double rotz) override
  {
    _rotz = rotz;
    return;
  }

  double get_center_x() const override { return _center_x; }
  double get_center_y() const override { return _center_y; }
  double get_center_z() const override { return _center_z; }
  double get_roty() const override { return _roty; }
  double get_rotz() const override { return _rotz; }

  TVector3 get_final_position() const;
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
  double _roty{std::numeric_limits<double>::signaling_NaN()};
  double _rotz{std::numeric_limits<double>::signaling_NaN()};

  int _tower_type{-1};

  ClassDefOverride(RawTowerGeomv4, 5)
};

#endif /* CALOBASE_RawTowerGeomv4_H */

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"RawTowerGeomv4", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("RawTowerGeomv4_Dict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_RawTowerGeomv4_Dict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_RawTowerGeomv4_Dict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_RawTowerGeomv4_Dict() {
  TriggerDictionaryInitialization_RawTowerGeomv4_Dict_Impl();
}
