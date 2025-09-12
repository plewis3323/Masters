// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME RawTower_Dict
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
#include "../RawTower.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static void delete_RawTower(void *p);
   static void deleteArray_RawTower(void *p);
   static void destruct_RawTower(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RawTower*)
   {
      ::RawTower *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RawTower >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RawTower", ::RawTower::Class_Version(), "", 18,
                  typeid(::RawTower), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RawTower::Dictionary, isa_proxy, 4,
                  sizeof(::RawTower) );
      instance.SetDelete(&delete_RawTower);
      instance.SetDeleteArray(&deleteArray_RawTower);
      instance.SetDestructor(&destruct_RawTower);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RawTower*)
   {
      return GenerateInitInstanceLocal(static_cast<::RawTower*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RawTower*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr RawTower::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *RawTower::Class_Name()
{
   return "RawTower";
}

//______________________________________________________________________________
const char *RawTower::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RawTower*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int RawTower::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RawTower*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RawTower::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RawTower*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RawTower::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RawTower*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void RawTower::Streamer(TBuffer &R__b)
{
   // Stream an object of class RawTower.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RawTower::Class(),this);
   } else {
      R__b.WriteClassBuffer(RawTower::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_RawTower(void *p) {
      delete (static_cast<::RawTower*>(p));
   }
   static void deleteArray_RawTower(void *p) {
      delete [] (static_cast<::RawTower*>(p));
   }
   static void destruct_RawTower(void *p) {
      typedef ::RawTower current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RawTower

namespace {
  void TriggerDictionaryInitialization_RawTower_Dict_Impl() {
    static const char* headers[] = {
"0",
nullptr
    };
    static const char* includePaths[] = {
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "RawTower_Dict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
class RawTower;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "RawTower_Dict dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#ifndef CALOBASE_RAWTOWER_H
#define CALOBASE_RAWTOWER_H

#include "RawTowerDefs.h"

#include <phool/PHObject.h>
#include <phool/phool.h>

#include <cstddef>  // for size_t
#include <iostream>
#include <limits>
#include <map>
#include <string>  // for string
#include <utility>

class RawTower : public PHObject
{
 public:
  //! key type for cell map which should be consistent with CellKeyType
  typedef unsigned long long CellKeyType;

  typedef std::map<CellKeyType, float> CellMap;
  typedef CellMap::iterator CellIterator;
  typedef CellMap::const_iterator CellConstIterator;
  typedef std::pair<CellIterator, CellIterator> CellRange;
  typedef std::pair<CellConstIterator, CellConstIterator> CellConstRange;

  typedef std::map<int, float> ShowerMap;
  typedef ShowerMap::iterator ShowerIterator;
  typedef ShowerMap::const_iterator ShowerConstIterator;
  typedef std::pair<ShowerIterator, ShowerIterator> ShowerRange;
  typedef std::pair<ShowerConstIterator, ShowerConstIterator> ShowerConstRange;

  ~RawTower() override {}

  void Reset() override { PHOOL_VIRTUAL_WARNING; }
  int isValid() const override
  {
    PHOOL_VIRTUAL_WARN("isValid()");
    return 0;
  }
  void identify(std::ostream& /*os*/ = std::cout) const override { PHOOL_VIRTUAL_WARN("identify()"); }

  virtual void set_id(RawTowerDefs::keytype) { PHOOL_VIRTUAL_WARN("set_id()"); }
  virtual RawTowerDefs::keytype get_id() const
  {
    PHOOL_VIRTUAL_WARN("get_id()");
    return 0;
  }

  virtual void set_key(RawTowerDefs::keytype id) { set_id(id); }
  virtual RawTowerDefs::keytype get_key() const { return get_id(); }

  virtual int get_bineta() const
  {
    PHOOL_VIRTUAL_WARN("get_bineta()");
    return -1;
  }

  virtual int get_bintheta() const
  {
    return get_bineta();
  }

  virtual int get_binphi() const
  {
    PHOOL_VIRTUAL_WARN("get_binphi()");
    return -1;
  }

  //! return layer ID assigned to tower
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

  //! energy assigned to the tower. Depending on stage of process and DST node name, it could be energy deposition, light yield or calibrated energies
  virtual double get_energy() const
  {
    PHOOL_VIRTUAL_WARN("get_energy()");
    return 0.0;
  }
  //! energy assigned to the tower. Depending on stage of process and DST node name, it could be energy deposition, light yield or calibrated energies
  virtual void set_energy(const double)
  {
    PHOOL_VIRTUAL_WARN("set_energy()");
    return;
  }

  //! energy assigned to the tower. Depending on stage of process and DST node name, it could be energy deposition, light yield or calibrated energies
  virtual double get_scint_gammas() const
  {
    PHOOL_VIRTUAL_WARN("get_scint_gammas()");
    return 0.0;
  }
  //! scint_gammas assigned to the tower. Depending on stage of process and DST node name, it could be scint_gammas deposition, light yield or calibrated energies
  virtual void set_scint_gammas(const double)
  {
    PHOOL_VIRTUAL_WARN("set_scint_gammas()");
    return;
  }

  //! energy assigned to the tower. Depending on stage of process and DST node name, it could be energy deposition, light yield or calibrated energies
  virtual double get_cerenkov_gammas() const
  {
    PHOOL_VIRTUAL_WARN("get_cerenkov_gammas()");
    return 0.0;
  }
  //! cerenkov_gammas assigned to the tower. Depending on stage of process and DST node name, it could be cerenkov_gammas deposition, light yield or calibrated energies
  virtual void set_cerenkov_gammas(const double)
  {
    PHOOL_VIRTUAL_WARN("set_cerenkov_gammas()");
    return;
  }

  //! Time stamp assigned to the tower. Depending on the tower maker, it could be rise time or peak time.
  virtual float get_time() const
  {
    PHOOL_VIRTUAL_WARN("get_time()");
    return std::numeric_limits<float>::signaling_NaN();
  }
  //! Time stamp assigned to the tower. Depending on the tower maker, it could be rise time or peak time.
  virtual void set_time(const float)
  {
    PHOOL_VIRTUAL_WARN("set_time()");
    return;
  }

  virtual bool empty_g4cells() const { return true; }
  virtual size_t size_g4cells() const { return 0; }
  virtual CellConstRange get_g4cells() const;
  virtual CellIterator find_g4cell(CellKeyType id);
  virtual CellConstIterator find_g4cell(CellKeyType id) const;
  virtual void add_ecell(const CellKeyType /*g4cellid*/, const float /*ecell*/)
  {
    PHOOL_VIRTUAL_WARN("add_ecell(const CellKeyType g4cellid, const float ecell)");
    return;
  }
  virtual void clear_g4cells() {}

  virtual bool empty_g4showers() const { return true; }
  virtual size_t size_g4showers() const { return 0; }
  virtual ShowerConstRange get_g4showers() const;
  virtual ShowerIterator find_g4shower(int /*id*/);
  virtual ShowerConstIterator find_g4shower(int /*id*/) const;
  virtual void add_eshower(const int /*g4showerid*/, const float /*eshower*/)
  {
    PHOOL_VIRTUAL_WARN("add_eshower(const unsigned int g4showerid, const float eshower)");
    return;
  }
  virtual void clear_g4showers() {}

  //! Procedure to add a new PROPERTY tag:
  //! 1.add new tag below with unique value,
  //! 2.add a short name to RawTower::get_property_info
  enum PROPERTY
  {  //

    //! Scintillation photon count or energy
    prop_scint_gammas = 1,

    //! Cherenkov photon count or energy
    prop_cerenkov_gammas = 2,

    //! max limit in order to fit into 8 bit unsigned number
    prop_MAX_NUMBER = std::numeric_limits<unsigned char>::max()
  };

  virtual bool has_property(const PROPERTY /*prop_id*/) const { return false; }
  virtual double get_property(const PROPERTY /*prop_id*/) const { return std::numeric_limits<float>::signaling_NaN(); }
  virtual void set_property(const PROPERTY /*prop_id*/, const double /*value*/) { return; }
  static const std::string get_property_info(PROPERTY prop_id);

 protected:
  RawTower() {}

  virtual unsigned int get_property_nocheck(const PROPERTY /*prop_id*/) const { return std::numeric_limits<unsigned int>::max(); }
  virtual void set_property_nocheck(const PROPERTY /*prop_id*/, const unsigned int) { return; }

  ClassDefOverride(RawTower, 1)
};

#endif

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"RawTower", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("RawTower_Dict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_RawTower_Dict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_RawTower_Dict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_RawTower_Dict() {
  TriggerDictionaryInitialization_RawTower_Dict_Impl();
}
