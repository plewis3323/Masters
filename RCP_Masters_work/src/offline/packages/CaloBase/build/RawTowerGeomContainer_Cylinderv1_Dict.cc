// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME RawTowerGeomContainer_Cylinderv1_Dict
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
#include "../RawTowerGeomContainer_Cylinderv1.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static void *new_RawTowerGeomContainer_Cylinderv1(void *p = nullptr);
   static void *newArray_RawTowerGeomContainer_Cylinderv1(Long_t size, void *p);
   static void delete_RawTowerGeomContainer_Cylinderv1(void *p);
   static void deleteArray_RawTowerGeomContainer_Cylinderv1(void *p);
   static void destruct_RawTowerGeomContainer_Cylinderv1(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RawTowerGeomContainer_Cylinderv1*)
   {
      ::RawTowerGeomContainer_Cylinderv1 *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RawTowerGeomContainer_Cylinderv1 >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RawTowerGeomContainer_Cylinderv1", ::RawTowerGeomContainer_Cylinderv1::Class_Version(), "", 18,
                  typeid(::RawTowerGeomContainer_Cylinderv1), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RawTowerGeomContainer_Cylinderv1::Dictionary, isa_proxy, 4,
                  sizeof(::RawTowerGeomContainer_Cylinderv1) );
      instance.SetNew(&new_RawTowerGeomContainer_Cylinderv1);
      instance.SetNewArray(&newArray_RawTowerGeomContainer_Cylinderv1);
      instance.SetDelete(&delete_RawTowerGeomContainer_Cylinderv1);
      instance.SetDeleteArray(&deleteArray_RawTowerGeomContainer_Cylinderv1);
      instance.SetDestructor(&destruct_RawTowerGeomContainer_Cylinderv1);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RawTowerGeomContainer_Cylinderv1*)
   {
      return GenerateInitInstanceLocal(static_cast<::RawTowerGeomContainer_Cylinderv1*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RawTowerGeomContainer_Cylinderv1*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr RawTowerGeomContainer_Cylinderv1::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *RawTowerGeomContainer_Cylinderv1::Class_Name()
{
   return "RawTowerGeomContainer_Cylinderv1";
}

//______________________________________________________________________________
const char *RawTowerGeomContainer_Cylinderv1::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RawTowerGeomContainer_Cylinderv1*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int RawTowerGeomContainer_Cylinderv1::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RawTowerGeomContainer_Cylinderv1*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RawTowerGeomContainer_Cylinderv1::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RawTowerGeomContainer_Cylinderv1*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RawTowerGeomContainer_Cylinderv1::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RawTowerGeomContainer_Cylinderv1*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void RawTowerGeomContainer_Cylinderv1::Streamer(TBuffer &R__b)
{
   // Stream an object of class RawTowerGeomContainer_Cylinderv1.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RawTowerGeomContainer_Cylinderv1::Class(),this);
   } else {
      R__b.WriteClassBuffer(RawTowerGeomContainer_Cylinderv1::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RawTowerGeomContainer_Cylinderv1(void *p) {
      return  p ? new(p) ::RawTowerGeomContainer_Cylinderv1 : new ::RawTowerGeomContainer_Cylinderv1;
   }
   static void *newArray_RawTowerGeomContainer_Cylinderv1(Long_t nElements, void *p) {
      return p ? new(p) ::RawTowerGeomContainer_Cylinderv1[nElements] : new ::RawTowerGeomContainer_Cylinderv1[nElements];
   }
   // Wrapper around operator delete
   static void delete_RawTowerGeomContainer_Cylinderv1(void *p) {
      delete (static_cast<::RawTowerGeomContainer_Cylinderv1*>(p));
   }
   static void deleteArray_RawTowerGeomContainer_Cylinderv1(void *p) {
      delete [] (static_cast<::RawTowerGeomContainer_Cylinderv1*>(p));
   }
   static void destruct_RawTowerGeomContainer_Cylinderv1(void *p) {
      typedef ::RawTowerGeomContainer_Cylinderv1 current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RawTowerGeomContainer_Cylinderv1

namespace ROOT {
   static TClass *vectorlEpairlEdoublecOdoublegRsPgR_Dictionary();
   static void vectorlEpairlEdoublecOdoublegRsPgR_TClassManip(TClass*);
   static void *new_vectorlEpairlEdoublecOdoublegRsPgR(void *p = nullptr);
   static void *newArray_vectorlEpairlEdoublecOdoublegRsPgR(Long_t size, void *p);
   static void delete_vectorlEpairlEdoublecOdoublegRsPgR(void *p);
   static void deleteArray_vectorlEpairlEdoublecOdoublegRsPgR(void *p);
   static void destruct_vectorlEpairlEdoublecOdoublegRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<pair<double,double> >*)
   {
      vector<pair<double,double> > *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<pair<double,double> >));
      static ::ROOT::TGenericClassInfo 
         instance("vector<pair<double,double> >", -2, "vector", 428,
                  typeid(vector<pair<double,double> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEpairlEdoublecOdoublegRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<pair<double,double> >) );
      instance.SetNew(&new_vectorlEpairlEdoublecOdoublegRsPgR);
      instance.SetNewArray(&newArray_vectorlEpairlEdoublecOdoublegRsPgR);
      instance.SetDelete(&delete_vectorlEpairlEdoublecOdoublegRsPgR);
      instance.SetDeleteArray(&deleteArray_vectorlEpairlEdoublecOdoublegRsPgR);
      instance.SetDestructor(&destruct_vectorlEpairlEdoublecOdoublegRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<pair<double,double> > >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<pair<double,double> >","std::vector<std::pair<double, double>, std::allocator<std::pair<double, double> > >"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<pair<double,double> >*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEpairlEdoublecOdoublegRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<pair<double,double> >*>(nullptr))->GetClass();
      vectorlEpairlEdoublecOdoublegRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEpairlEdoublecOdoublegRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEpairlEdoublecOdoublegRsPgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<pair<double,double> > : new vector<pair<double,double> >;
   }
   static void *newArray_vectorlEpairlEdoublecOdoublegRsPgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<pair<double,double> >[nElements] : new vector<pair<double,double> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEpairlEdoublecOdoublegRsPgR(void *p) {
      delete (static_cast<vector<pair<double,double> >*>(p));
   }
   static void deleteArray_vectorlEpairlEdoublecOdoublegRsPgR(void *p) {
      delete [] (static_cast<vector<pair<double,double> >*>(p));
   }
   static void destruct_vectorlEpairlEdoublecOdoublegRsPgR(void *p) {
      typedef vector<pair<double,double> > current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<pair<double,double> >

namespace {
  void TriggerDictionaryInitialization_RawTowerGeomContainer_Cylinderv1_Dict_Impl() {
    static const char* headers[] = {
"0",
nullptr
    };
    static const char* includePaths[] = {
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "RawTowerGeomContainer_Cylinderv1_Dict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
class RawTowerGeomContainer_Cylinderv1;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "RawTowerGeomContainer_Cylinderv1_Dict dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#ifndef CALOBASE_RAWTOWERGEOMCONTAINER_CYLINDERV1_H
#define CALOBASE_RAWTOWERGEOMCONTAINER_CYLINDERV1_H

#include "RawTowerGeomContainerv1.h"

#include "RawTowerDefs.h"

#include <iostream>
#include <limits>
#include <utility>
#include <vector>

/*! \class RawTowerGeomContainer_Cylinderv1
 \brief With additional description to conveniently use in central calorimeter with eta-phi bins
 */
class RawTowerGeomContainer_Cylinderv1 : public RawTowerGeomContainerv1
{
 public:
  RawTowerGeomContainer_Cylinderv1(
      RawTowerDefs::CalorimeterId caloid = RawTowerDefs::NONE);
  ~RawTowerGeomContainer_Cylinderv1() override { Reset(); }

  void
  identify(std::ostream& os = std::cout) const override;

  // cppcheck-suppress virtualCallInConstructor
  void Reset() override;

  double
  get_radius() const override
  {
    return radius;
  }

  double
  get_thickness() const override
  {
    return thickness;
  }

  int get_phibins() const override
  {
    return phi_bound_map.size();
  }
  int get_etabins() const override
  {
    return eta_bound_map.size();
  }

  std::pair<double, double>
  get_phibounds(const int ibin) const override;
  std::pair<double, double>
  get_etabounds(const int ibin) const override;

  double
  get_etacenter(const int ibin) const override;

  double
  get_phicenter(const int ibin) const override;

  int get_etabin(const double eta) const override;
  int get_phibin(const double phi) const override;

  void
  set_radius(const double r) override
  {
    radius = r;
  }
  void
  set_thickness(const double t) override
  {
    thickness = t;
  }
  void
  set_phibins(const int i) override;
  void
  set_etabins(const int i) override;

  void
  set_etabounds(const int ibin, const std::pair<double, double>& bounds) override;
  void
  set_phibounds(const int ibin, const std::pair<double, double>& bounds) override;

 protected:
  double radius{std::numeric_limits<double>::signaling_NaN()};
  double thickness{std::numeric_limits<double>::signaling_NaN()};

  typedef std::pair<double, double> bound_t;
  typedef std::vector<bound_t> bound_map_t;

  bound_map_t eta_bound_map;
  bound_map_t phi_bound_map;

  ClassDefOverride(RawTowerGeomContainer_Cylinderv1, 1)
};

#endif

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"RawTowerGeomContainer_Cylinderv1", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("RawTowerGeomContainer_Cylinderv1_Dict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_RawTowerGeomContainer_Cylinderv1_Dict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_RawTowerGeomContainer_Cylinderv1_Dict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_RawTowerGeomContainer_Cylinderv1_Dict() {
  TriggerDictionaryInitialization_RawTowerGeomContainer_Cylinderv1_Dict_Impl();
}
