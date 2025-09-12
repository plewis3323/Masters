// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME RawTowerGeomContainer_Dict
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
#include "../RawTowerGeomContainer.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static void delete_RawTowerGeomContainer(void *p);
   static void deleteArray_RawTowerGeomContainer(void *p);
   static void destruct_RawTowerGeomContainer(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RawTowerGeomContainer*)
   {
      ::RawTowerGeomContainer *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RawTowerGeomContainer >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RawTowerGeomContainer", ::RawTowerGeomContainer::Class_Version(), "", 21,
                  typeid(::RawTowerGeomContainer), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RawTowerGeomContainer::Dictionary, isa_proxy, 4,
                  sizeof(::RawTowerGeomContainer) );
      instance.SetDelete(&delete_RawTowerGeomContainer);
      instance.SetDeleteArray(&deleteArray_RawTowerGeomContainer);
      instance.SetDestructor(&destruct_RawTowerGeomContainer);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RawTowerGeomContainer*)
   {
      return GenerateInitInstanceLocal(static_cast<::RawTowerGeomContainer*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RawTowerGeomContainer*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr RawTowerGeomContainer::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *RawTowerGeomContainer::Class_Name()
{
   return "RawTowerGeomContainer";
}

//______________________________________________________________________________
const char *RawTowerGeomContainer::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RawTowerGeomContainer*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int RawTowerGeomContainer::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RawTowerGeomContainer*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RawTowerGeomContainer::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RawTowerGeomContainer*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RawTowerGeomContainer::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RawTowerGeomContainer*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void RawTowerGeomContainer::Streamer(TBuffer &R__b)
{
   // Stream an object of class RawTowerGeomContainer.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RawTowerGeomContainer::Class(),this);
   } else {
      R__b.WriteClassBuffer(RawTowerGeomContainer::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_RawTowerGeomContainer(void *p) {
      delete (static_cast<::RawTowerGeomContainer*>(p));
   }
   static void deleteArray_RawTowerGeomContainer(void *p) {
      delete [] (static_cast<::RawTowerGeomContainer*>(p));
   }
   static void destruct_RawTowerGeomContainer(void *p) {
      typedef ::RawTowerGeomContainer current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RawTowerGeomContainer

namespace {
  void TriggerDictionaryInitialization_RawTowerGeomContainer_Dict_Impl() {
    static const char* headers[] = {
"0",
nullptr
    };
    static const char* includePaths[] = {
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "RawTowerGeomContainer_Dict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
class RawTowerGeomContainer;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "RawTowerGeomContainer_Dict dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#ifndef CALOBASE_RAWTOWERGEOMCONTAINER_H
#define CALOBASE_RAWTOWERGEOMCONTAINER_H

#include "RawTowerDefs.h"

#include <phool/PHObject.h>
#include <phool/phool.h>

#include <iostream>
#include <limits>
#include <map>
#include <utility>

class RawTowerGeom;

/*! \class RawTowerGeomContainer
    \brief base class to describe calorimeter geometries
*/
class RawTowerGeomContainer : public PHObject
{
 public:
  typedef std::map<RawTowerDefs::keytype, RawTowerGeom *> Map;
  typedef Map::iterator Iterator;
  typedef Map::const_iterator ConstIterator;
  typedef std::pair<Iterator, Iterator> Range;
  typedef std::pair<ConstIterator, ConstIterator> ConstRange;

  //! default constructor for ROOT IO
  ~RawTowerGeomContainer() override {}

  void identify(std::ostream &os = std::cout) const override;

  //! 8-bit calorimeter ID
  virtual void set_calorimeter_id(RawTowerDefs::CalorimeterId) { PHOOL_VIRTUAL_WARN("set_calorimeter_id()"); }
  virtual RawTowerDefs::CalorimeterId get_calorimeter_id() const
  {
    PHOOL_VIRTUAL_WARN("get_calorimeter_id()");
    return RawTowerDefs::NONE;
  }

  //! go through all towers
  virtual ConstIterator add_tower_geometry(RawTowerGeom *geo);
  virtual RawTowerGeom *get_tower_geometry(RawTowerDefs::keytype)
  {
    PHOOL_VIRTUAL_WARN("get_tower_geometry()");
    return nullptr;
  }

  //! return all tower geometries
  virtual ConstRange get_tower_geometries(void) const;
  virtual Range get_tower_geometries(void);

  virtual unsigned int size() const
  {
    PHOOL_VIRTUAL_WARN("size()");
    return 0;
  }

  /**
   * \defgroup cylindrical_calorimeter for cylindrical calorimeter only as implemented in RawTowerGeomContainer_Cylinderv1
   *
   *  Note these: concept do not apply to generic calorimeters, like forward calorimeters
   * @{
   */

  virtual double get_radius() const
  {
    PHOOL_VIRTUAL_WARN("get_radius()");
    return std::numeric_limits<double>::signaling_NaN();
  }
  virtual double get_thickness() const
  {
    PHOOL_VIRTUAL_WARN("get_thickness()");
    return std::numeric_limits<double>::signaling_NaN();
  }
  virtual int get_phibins() const
  {
    PHOOL_VIRTUAL_WARN("get_phibins()");
    return -1;
  }
  //  virtual double get_phistep() const {PHOOL_VIRTUAL_WARN("get_phistep()"); return std::numeric_limits<double>::signaling_NaN();}
  //  virtual double get_phimin() const {PHOOL_VIRTUAL_WARN("get_phimin()"); return std::numeric_limits<double>::signaling_NaN();}
  virtual int get_etabins() const
  {
    PHOOL_VIRTUAL_WARN("get_etabins()");
    return -1;
  }
  //  virtual double get_etastep() const {PHOOL_VIRTUAL_WARN("get_etastep()"); return std::numeric_limits<double>::signaling_NaN();}
  //  virtual double get_etamin() const {PHOOL_VIRTUAL_WARN("get_etamin()"); return std::numeric_limits<double>::signaling_NaN();}

  virtual std::pair<double, double> get_phibounds(const int /*ibin*/) const
  {
    PHOOL_VIRTUAL_WARN("get_phibounds(const int)");
    return std::make_pair(std::numeric_limits<double>::signaling_NaN(), std::numeric_limits<double>::signaling_NaN());
  }
  virtual std::pair<double, double> get_etabounds(const int /*ibin*/) const
  {
    PHOOL_VIRTUAL_WARN("get_etabounds(const int)");
    return std::make_pair(std::numeric_limits<double>::signaling_NaN(), std::numeric_limits<double>::signaling_NaN());
  }
  virtual double get_etacenter(const int /*ibin*/) const
  {
    PHOOL_VIRTUAL_WARN("get_etacenter(const int)");
    return std::numeric_limits<double>::signaling_NaN();
  }
  virtual double get_phicenter(const int /*ibin*/) const
  {
    PHOOL_VIRTUAL_WARN("get_phicenter(const int)");
    return std::numeric_limits<double>::signaling_NaN();
  }

  virtual int get_etabin(const double /*eta*/) const
  {
    PHOOL_VIRTUAL_WARN("get_etabin(const double)");
    return -1;
  }
  virtual int get_phibin(const double /*phi*/) const
  {
    PHOOL_VIRTUAL_WARN("get_phibin(const double)");
    return -1;
  }

  virtual void set_radius(const double) { PHOOL_VIRTUAL_WARN("set_radius(const double)"); }
  virtual void set_thickness(const double) { PHOOL_VIRTUAL_WARN("set_thickness(const double)"); }
  virtual void set_phibins(const int) { PHOOL_VIRTUAL_WARN("set_phibins(const int)"); }
  //  virtual void set_phistep(const double phi) {PHOOL_VIRTUAL_WARN("set_phistep(const double)");}
  //  virtual void set_phimin(const double phi) {PHOOL_VIRTUAL_WARN("set_phimin(const double)");}
  virtual void set_etabins(const int) { PHOOL_VIRTUAL_WARN("set_etabins(const int)"); }
  //  virtual void set_etamin(const double z) {PHOOL_VIRTUAL_WARN("set_etamin(const double)");}
  //  virtual void set_etastep(const double z) {PHOOL_VIRTUAL_WARN("set_etastep(const double)");}
  virtual void set_etabounds(const int /*ibin*/, const std::pair<double, double> & /*bounds*/) { PHOOL_VIRTUAL_WARN("set_etabounds(const int ibin, const std::pair<double, double> & bounds)"); }
  virtual void set_phibounds(const int /*ibin*/, const std::pair<double, double> & /*bounds*/) { PHOOL_VIRTUAL_WARN("set_etabounds(const int ibin, const std::pair<double, double> & bounds)"); }

  /**@}*/

 protected:
  //! this class is not for use. Base class only
  RawTowerGeomContainer() {}

  ClassDefOverride(RawTowerGeomContainer, 2)
};

#endif

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"RawTowerGeomContainer", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("RawTowerGeomContainer_Dict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_RawTowerGeomContainer_Dict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_RawTowerGeomContainer_Dict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_RawTowerGeomContainer_Dict() {
  TriggerDictionaryInitialization_RawTowerGeomContainer_Dict_Impl();
}
