// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME RawTowerGeom_Dict
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
#include "../RawTowerGeom.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static void delete_RawTowerGeom(void *p);
   static void deleteArray_RawTowerGeom(void *p);
   static void destruct_RawTowerGeom(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RawTowerGeom*)
   {
      ::RawTowerGeom *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RawTowerGeom >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RawTowerGeom", ::RawTowerGeom::Class_Version(), "", 14,
                  typeid(::RawTowerGeom), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RawTowerGeom::Dictionary, isa_proxy, 4,
                  sizeof(::RawTowerGeom) );
      instance.SetDelete(&delete_RawTowerGeom);
      instance.SetDeleteArray(&deleteArray_RawTowerGeom);
      instance.SetDestructor(&destruct_RawTowerGeom);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RawTowerGeom*)
   {
      return GenerateInitInstanceLocal(static_cast<::RawTowerGeom*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RawTowerGeom*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr RawTowerGeom::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *RawTowerGeom::Class_Name()
{
   return "RawTowerGeom";
}

//______________________________________________________________________________
const char *RawTowerGeom::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RawTowerGeom*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int RawTowerGeom::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RawTowerGeom*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RawTowerGeom::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RawTowerGeom*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RawTowerGeom::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RawTowerGeom*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void RawTowerGeom::Streamer(TBuffer &R__b)
{
   // Stream an object of class RawTowerGeom.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RawTowerGeom::Class(),this);
   } else {
      R__b.WriteClassBuffer(RawTowerGeom::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_RawTowerGeom(void *p) {
      delete (static_cast<::RawTowerGeom*>(p));
   }
   static void deleteArray_RawTowerGeom(void *p) {
      delete [] (static_cast<::RawTowerGeom*>(p));
   }
   static void destruct_RawTowerGeom(void *p) {
      typedef ::RawTowerGeom current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RawTowerGeom

namespace {
  void TriggerDictionaryInitialization_RawTowerGeom_Dict_Impl() {
    static const char* headers[] = {
"0",
nullptr
    };
    static const char* includePaths[] = {
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "RawTowerGeom_Dict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
class RawTowerGeom;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "RawTowerGeom_Dict dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#ifndef CALOBASE_RAWTOWERGEO_H
#define CALOBASE_RAWTOWERGEO_H

#include "RawTowerDefs.h"

#include <phool/PHObject.h>
#include <phool/phool.h>

#include <iostream>
#include <limits>

class RawTowerGeom : public PHObject
{
 public:
  ~RawTowerGeom() override {}

  void identify(std::ostream& os = std::cout) const override;

  virtual void set_id(RawTowerDefs::keytype) { PHOOL_VIRTUAL_WARN("set_id()"); }

  virtual RawTowerDefs::keytype get_id() const
  {
    PHOOL_VIRTUAL_WARN("get_id()");
    return 0;
  }

  virtual int get_bineta() const
  {
    PHOOL_VIRTUAL_WARN("get_ieta()");
    return -1;
  }

  virtual int get_binphi() const
  {
    PHOOL_VIRTUAL_WARN("get_iphi()");
    return -1;
  }

  virtual int get_binl() const
  {
    PHOOL_VIRTUAL_WARN("get_binl()");
    return -1;
  }

  virtual int get_column() const
  {
    PHOOL_VIRTUAL_WARN("get_column()");
    return -1;
  }

  virtual int get_row() const
  {
    PHOOL_VIRTUAL_WARN("get_row()");
    return -1;
  }

  virtual void set_center_x(double)
  {
    PHOOL_VIRTUAL_WARN("set_center_x()");
    return;
  }

  virtual void set_center_y(double)
  {
    PHOOL_VIRTUAL_WARN("set_center_y()");
    return;
  }

  virtual void set_center_z(double)
  {
    PHOOL_VIRTUAL_WARN("set_center_z()");
    return;
  }

  virtual void set_size_x(double)
  {
    PHOOL_VIRTUAL_WARN("set_size_x()");
    return;
  }

  virtual void set_size_y(double)
  {
    PHOOL_VIRTUAL_WARN("set_size_y()");
    return;
  }

  virtual void set_size_z(double)
  {
    PHOOL_VIRTUAL_WARN("set_size_z()");
    return;
  }

  virtual double get_center_x() const
  {
    PHOOL_VIRTUAL_WARN("get_center_x()");
    return std::numeric_limits<float>::signaling_NaN();
  }

  virtual double get_center_y() const
  {
    PHOOL_VIRTUAL_WARN("get_center_y()");
    return std::numeric_limits<float>::signaling_NaN();
  }

  virtual double get_center_z() const
  {
    PHOOL_VIRTUAL_WARN("get_center_z()");
    return std::numeric_limits<float>::signaling_NaN();
  }

  virtual double get_size_x() const
  {
    PHOOL_VIRTUAL_WARN("get_size_x()");
    return std::numeric_limits<float>::signaling_NaN();
  }

  virtual double get_size_y() const
  {
    PHOOL_VIRTUAL_WARN("get_size_y()");
    return std::numeric_limits<float>::signaling_NaN();
  }

  virtual double get_size_z() const
  {
    PHOOL_VIRTUAL_WARN("get_size_z()");
    return std::numeric_limits<float>::signaling_NaN();
  }

  virtual double get_volume() const
  {
    PHOOL_VIRTUAL_WARN("get_volume()");
    return std::numeric_limits<float>::signaling_NaN();
  }

  virtual double get_center_radius() const
  {
    PHOOL_VIRTUAL_WARN("get_center_radius()");
    return std::numeric_limits<float>::signaling_NaN();
  }

  virtual double get_eta() const
  {
    PHOOL_VIRTUAL_WARN("get_eta()");
    return std::numeric_limits<float>::signaling_NaN();
  }

  virtual double get_theta() const
  {
    PHOOL_VIRTUAL_WARN("get_theta()");
    return std::numeric_limits<float>::signaling_NaN();
  }

  virtual double get_phi() const
  {
    PHOOL_VIRTUAL_WARN("get_phi()");
    return std::numeric_limits<float>::signaling_NaN();
  }

  virtual void set_tower_type(int)
  {
    PHOOL_VIRTUAL_WARN("set_tower_type()");
    return;
  }
  virtual int get_tower_type() const
  {
    PHOOL_VIRTUAL_WARN("get_tower_type()");
    return -1;
  }

  virtual double get_roty() const
  {
    PHOOL_VIRTUAL_WARN("get_roty()");
    return std::numeric_limits<float>::signaling_NaN();
  }
  virtual double get_rotz() const
  {
    PHOOL_VIRTUAL_WARN("get_rotz()");
    return std::numeric_limits<float>::signaling_NaN();
  }

  virtual void set_roty(double)
  {
    PHOOL_VIRTUAL_WARN("set_roty()");
    return;
  }
  virtual void set_rotz(double)
  {
    PHOOL_VIRTUAL_WARN("set_rotz()");
    return;
  }

 protected:
  RawTowerGeom() {}

  ClassDefOverride(RawTowerGeom, 2)
};

#endif

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"RawTowerGeom", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("RawTowerGeom_Dict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_RawTowerGeom_Dict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_RawTowerGeom_Dict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_RawTowerGeom_Dict() {
  TriggerDictionaryInitialization_RawTowerGeom_Dict_Impl();
}
