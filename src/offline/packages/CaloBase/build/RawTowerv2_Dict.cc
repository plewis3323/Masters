// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME RawTowerv2_Dict
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
#include "../RawTowerv2.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static void *new_RawTowerv2(void *p = nullptr);
   static void *newArray_RawTowerv2(Long_t size, void *p);
   static void delete_RawTowerv2(void *p);
   static void deleteArray_RawTowerv2(void *p);
   static void destruct_RawTowerv2(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RawTowerv2*)
   {
      ::RawTowerv2 *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RawTowerv2 >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RawTowerv2", ::RawTowerv2::Class_Version(), "", 15,
                  typeid(::RawTowerv2), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RawTowerv2::Dictionary, isa_proxy, 4,
                  sizeof(::RawTowerv2) );
      instance.SetNew(&new_RawTowerv2);
      instance.SetNewArray(&newArray_RawTowerv2);
      instance.SetDelete(&delete_RawTowerv2);
      instance.SetDeleteArray(&deleteArray_RawTowerv2);
      instance.SetDestructor(&destruct_RawTowerv2);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RawTowerv2*)
   {
      return GenerateInitInstanceLocal(static_cast<::RawTowerv2*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RawTowerv2*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr RawTowerv2::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *RawTowerv2::Class_Name()
{
   return "RawTowerv2";
}

//______________________________________________________________________________
const char *RawTowerv2::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RawTowerv2*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int RawTowerv2::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RawTowerv2*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RawTowerv2::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RawTowerv2*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RawTowerv2::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RawTowerv2*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void RawTowerv2::Streamer(TBuffer &R__b)
{
   // Stream an object of class RawTowerv2.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RawTowerv2::Class(),this);
   } else {
      R__b.WriteClassBuffer(RawTowerv2::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RawTowerv2(void *p) {
      return  p ? new(p) ::RawTowerv2 : new ::RawTowerv2;
   }
   static void *newArray_RawTowerv2(Long_t nElements, void *p) {
      return p ? new(p) ::RawTowerv2[nElements] : new ::RawTowerv2[nElements];
   }
   // Wrapper around operator delete
   static void delete_RawTowerv2(void *p) {
      delete (static_cast<::RawTowerv2*>(p));
   }
   static void deleteArray_RawTowerv2(void *p) {
      delete [] (static_cast<::RawTowerv2*>(p));
   }
   static void destruct_RawTowerv2(void *p) {
      typedef ::RawTowerv2 current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RawTowerv2

namespace ROOT {
   static TClass *maplEunsignedsPcharcOdoublegR_Dictionary();
   static void maplEunsignedsPcharcOdoublegR_TClassManip(TClass*);
   static void *new_maplEunsignedsPcharcOdoublegR(void *p = nullptr);
   static void *newArray_maplEunsignedsPcharcOdoublegR(Long_t size, void *p);
   static void delete_maplEunsignedsPcharcOdoublegR(void *p);
   static void deleteArray_maplEunsignedsPcharcOdoublegR(void *p);
   static void destruct_maplEunsignedsPcharcOdoublegR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<unsigned char,double>*)
   {
      map<unsigned char,double> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<unsigned char,double>));
      static ::ROOT::TGenericClassInfo 
         instance("map<unsigned char,double>", -2, "map", 102,
                  typeid(map<unsigned char,double>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEunsignedsPcharcOdoublegR_Dictionary, isa_proxy, 0,
                  sizeof(map<unsigned char,double>) );
      instance.SetNew(&new_maplEunsignedsPcharcOdoublegR);
      instance.SetNewArray(&newArray_maplEunsignedsPcharcOdoublegR);
      instance.SetDelete(&delete_maplEunsignedsPcharcOdoublegR);
      instance.SetDeleteArray(&deleteArray_maplEunsignedsPcharcOdoublegR);
      instance.SetDestructor(&destruct_maplEunsignedsPcharcOdoublegR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<unsigned char,double> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("map<unsigned char,double>","std::map<unsigned char, double, std::less<unsigned char>, std::allocator<std::pair<unsigned char const, double> > >"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const map<unsigned char,double>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEunsignedsPcharcOdoublegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const map<unsigned char,double>*>(nullptr))->GetClass();
      maplEunsignedsPcharcOdoublegR_TClassManip(theClass);
   return theClass;
   }

   static void maplEunsignedsPcharcOdoublegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEunsignedsPcharcOdoublegR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) map<unsigned char,double> : new map<unsigned char,double>;
   }
   static void *newArray_maplEunsignedsPcharcOdoublegR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) map<unsigned char,double>[nElements] : new map<unsigned char,double>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEunsignedsPcharcOdoublegR(void *p) {
      delete (static_cast<map<unsigned char,double>*>(p));
   }
   static void deleteArray_maplEunsignedsPcharcOdoublegR(void *p) {
      delete [] (static_cast<map<unsigned char,double>*>(p));
   }
   static void destruct_maplEunsignedsPcharcOdoublegR(void *p) {
      typedef map<unsigned char,double> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class map<unsigned char,double>

namespace {
  void TriggerDictionaryInitialization_RawTowerv2_Dict_Impl() {
    static const char* headers[] = {
"0",
nullptr
    };
    static const char* includePaths[] = {
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "RawTowerv2_Dict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
class RawTowerv2;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "RawTowerv2_Dict dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#ifndef CALOBASE_RawTowerv2_H
#define CALOBASE_RawTowerv2_H

#include "RawTowerv1.h"

#include "RawTowerDefs.h"

#include <cstdint>  // for uint8_t
#include <iostream>
#include <map>

//! RawTowerv1 but allow flexible tags
class RawTowerv2 : public RawTowerv1
{
 public:
  RawTowerv2() = default;
  RawTowerv2(const RawTower& tower);
  RawTowerv2(RawTowerDefs::keytype id);
  RawTowerv2(const unsigned int ieta, const unsigned int iphi);
  RawTowerv2(const RawTowerDefs::CalorimeterId caloid, const unsigned int ieta,
             const unsigned int iphi);
  ~RawTowerv2() override {}

  void Reset() override;
  int isValid() const override;
  void identify(std::ostream& os = std::cout) const override;

  double get_scint_gammas() const override { return get_property(prop_scint_gammas); }
  void set_scint_gammas(const double e) override { set_property(prop_scint_gammas, e); }
  double get_cerenkov_gammas() const override { return get_property(prop_cerenkov_gammas); }
  void set_cerenkov_gammas(const double e) override { set_property(prop_cerenkov_gammas, e); }

  bool has_property(const PROPERTY prop_id) const override;
  double get_property(const PROPERTY prop_id) const override;
  // cppcheck-suppress virtualCallInConstructor
  void set_property(const PROPERTY prop_id, const double value) override;

 protected:
  typedef uint8_t prop_id_t;
  typedef std::map<prop_id_t, double> prop_map_t;
  //! container for additional property
  prop_map_t prop_map;

  ClassDefOverride(RawTowerv2, 1)
};

#endif

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"RawTowerv2", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("RawTowerv2_Dict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_RawTowerv2_Dict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_RawTowerv2_Dict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_RawTowerv2_Dict() {
  TriggerDictionaryInitialization_RawTowerv2_Dict_Impl();
}
