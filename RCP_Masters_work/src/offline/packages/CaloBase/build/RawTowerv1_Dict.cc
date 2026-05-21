// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME RawTowerv1_Dict
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
#include "../RawTowerv1.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static void *new_RawTowerv1(void *p = nullptr);
   static void *newArray_RawTowerv1(Long_t size, void *p);
   static void delete_RawTowerv1(void *p);
   static void deleteArray_RawTowerv1(void *p);
   static void destruct_RawTowerv1(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RawTowerv1*)
   {
      ::RawTowerv1 *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RawTowerv1 >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RawTowerv1", ::RawTowerv1::Class_Version(), "", 16,
                  typeid(::RawTowerv1), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RawTowerv1::Dictionary, isa_proxy, 4,
                  sizeof(::RawTowerv1) );
      instance.SetNew(&new_RawTowerv1);
      instance.SetNewArray(&newArray_RawTowerv1);
      instance.SetDelete(&delete_RawTowerv1);
      instance.SetDeleteArray(&deleteArray_RawTowerv1);
      instance.SetDestructor(&destruct_RawTowerv1);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RawTowerv1*)
   {
      return GenerateInitInstanceLocal(static_cast<::RawTowerv1*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RawTowerv1*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr RawTowerv1::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *RawTowerv1::Class_Name()
{
   return "RawTowerv1";
}

//______________________________________________________________________________
const char *RawTowerv1::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RawTowerv1*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int RawTowerv1::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RawTowerv1*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RawTowerv1::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RawTowerv1*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RawTowerv1::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RawTowerv1*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void RawTowerv1::Streamer(TBuffer &R__b)
{
   // Stream an object of class RawTowerv1.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RawTowerv1::Class(),this);
   } else {
      R__b.WriteClassBuffer(RawTowerv1::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RawTowerv1(void *p) {
      return  p ? new(p) ::RawTowerv1 : new ::RawTowerv1;
   }
   static void *newArray_RawTowerv1(Long_t nElements, void *p) {
      return p ? new(p) ::RawTowerv1[nElements] : new ::RawTowerv1[nElements];
   }
   // Wrapper around operator delete
   static void delete_RawTowerv1(void *p) {
      delete (static_cast<::RawTowerv1*>(p));
   }
   static void deleteArray_RawTowerv1(void *p) {
      delete [] (static_cast<::RawTowerv1*>(p));
   }
   static void destruct_RawTowerv1(void *p) {
      typedef ::RawTowerv1 current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RawTowerv1

namespace ROOT {
   static TClass *maplEintcOfloatgR_Dictionary();
   static void maplEintcOfloatgR_TClassManip(TClass*);
   static void *new_maplEintcOfloatgR(void *p = nullptr);
   static void *newArray_maplEintcOfloatgR(Long_t size, void *p);
   static void delete_maplEintcOfloatgR(void *p);
   static void deleteArray_maplEintcOfloatgR(void *p);
   static void destruct_maplEintcOfloatgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<int,float>*)
   {
      map<int,float> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<int,float>));
      static ::ROOT::TGenericClassInfo 
         instance("map<int,float>", -2, "map", 102,
                  typeid(map<int,float>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEintcOfloatgR_Dictionary, isa_proxy, 0,
                  sizeof(map<int,float>) );
      instance.SetNew(&new_maplEintcOfloatgR);
      instance.SetNewArray(&newArray_maplEintcOfloatgR);
      instance.SetDelete(&delete_maplEintcOfloatgR);
      instance.SetDeleteArray(&deleteArray_maplEintcOfloatgR);
      instance.SetDestructor(&destruct_maplEintcOfloatgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<int,float> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("map<int,float>","std::map<int, float, std::less<int>, std::allocator<std::pair<int const, float> > >"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const map<int,float>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEintcOfloatgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const map<int,float>*>(nullptr))->GetClass();
      maplEintcOfloatgR_TClassManip(theClass);
   return theClass;
   }

   static void maplEintcOfloatgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEintcOfloatgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) map<int,float> : new map<int,float>;
   }
   static void *newArray_maplEintcOfloatgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) map<int,float>[nElements] : new map<int,float>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEintcOfloatgR(void *p) {
      delete (static_cast<map<int,float>*>(p));
   }
   static void deleteArray_maplEintcOfloatgR(void *p) {
      delete [] (static_cast<map<int,float>*>(p));
   }
   static void destruct_maplEintcOfloatgR(void *p) {
      typedef map<int,float> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class map<int,float>

namespace ROOT {
   static TClass *maplEULong64_tcOfloatgR_Dictionary();
   static void maplEULong64_tcOfloatgR_TClassManip(TClass*);
   static void *new_maplEULong64_tcOfloatgR(void *p = nullptr);
   static void *newArray_maplEULong64_tcOfloatgR(Long_t size, void *p);
   static void delete_maplEULong64_tcOfloatgR(void *p);
   static void deleteArray_maplEULong64_tcOfloatgR(void *p);
   static void destruct_maplEULong64_tcOfloatgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<ULong64_t,float>*)
   {
      map<ULong64_t,float> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<ULong64_t,float>));
      static ::ROOT::TGenericClassInfo 
         instance("map<ULong64_t,float>", -2, "map", 102,
                  typeid(map<ULong64_t,float>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEULong64_tcOfloatgR_Dictionary, isa_proxy, 0,
                  sizeof(map<ULong64_t,float>) );
      instance.SetNew(&new_maplEULong64_tcOfloatgR);
      instance.SetNewArray(&newArray_maplEULong64_tcOfloatgR);
      instance.SetDelete(&delete_maplEULong64_tcOfloatgR);
      instance.SetDeleteArray(&deleteArray_maplEULong64_tcOfloatgR);
      instance.SetDestructor(&destruct_maplEULong64_tcOfloatgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<ULong64_t,float> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("map<ULong64_t,float>","std::map<unsigned long long, float, std::less<unsigned long long>, std::allocator<std::pair<unsigned long long const, float> > >"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const map<ULong64_t,float>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEULong64_tcOfloatgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const map<ULong64_t,float>*>(nullptr))->GetClass();
      maplEULong64_tcOfloatgR_TClassManip(theClass);
   return theClass;
   }

   static void maplEULong64_tcOfloatgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEULong64_tcOfloatgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) map<ULong64_t,float> : new map<ULong64_t,float>;
   }
   static void *newArray_maplEULong64_tcOfloatgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) map<ULong64_t,float>[nElements] : new map<ULong64_t,float>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEULong64_tcOfloatgR(void *p) {
      delete (static_cast<map<ULong64_t,float>*>(p));
   }
   static void deleteArray_maplEULong64_tcOfloatgR(void *p) {
      delete [] (static_cast<map<ULong64_t,float>*>(p));
   }
   static void destruct_maplEULong64_tcOfloatgR(void *p) {
      typedef map<ULong64_t,float> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class map<ULong64_t,float>

namespace {
  void TriggerDictionaryInitialization_RawTowerv1_Dict_Impl() {
    static const char* headers[] = {
"0",
nullptr
    };
    static const char* includePaths[] = {
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "RawTowerv1_Dict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
class RawTowerv1;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "RawTowerv1_Dict dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#ifndef CALOBASE_RAWTOWERV1_H
#define CALOBASE_RAWTOWERV1_H

#include "RawTower.h"

#include "RawTowerDefs.h"

#include <cstddef>
#include <iostream>
#include <limits>
#include <map>
#include <utility>

class RawTowerv1 : public RawTower
{
 public:
  RawTowerv1() {}
  RawTowerv1(const RawTower& tower);
  RawTowerv1(RawTowerDefs::keytype id);
  RawTowerv1(const unsigned int ieta, const unsigned int iphi);
  RawTowerv1(const RawTowerDefs::CalorimeterId caloid, const unsigned int ieta,
             const unsigned int iphi);
  ~RawTowerv1() override {}

  void Reset() override;
  int isValid() const override;
  void identify(std::ostream& os = std::cout) const override;

  void set_id(RawTowerDefs::keytype id) override { towerid = id; }
  RawTowerDefs::keytype get_id() const override { return towerid; }
  int get_bineta() const override;
  int get_binphi() const override;
  int get_binl() const override { return RawTowerDefs::decode_index3v2(towerid); }
  double get_energy() const override { return energy; }
  void set_energy(const double e) override { energy = e; }
  float get_time() const override { return time; }
  void set_time(const float t) override { time = t; }

  //---cell access--------------------------------------------------------------

  bool empty_g4cells() const override { return ecells.empty(); }
  size_t size_g4cells() const override { return ecells.size(); }
  RawTower::CellConstRange get_g4cells() const override
  {
    return make_pair(ecells.begin(), ecells.end());
  }
  RawTower::CellIterator find_g4cell(CellKeyType id) override { return ecells.find(id); }
  RawTower::CellConstIterator find_g4cell(CellKeyType id) const override { return ecells.find(id); }
  void add_ecell(const CellKeyType g4cellid,
                 const float ecell) override;
  void clear_g4cells() override { ecells.clear(); }

  //---shower access------------------------------------------------------------

  bool empty_g4showers() const override { return eshowers.empty(); }
  size_t size_g4showers() const override { return eshowers.size(); }
  RawTower::ShowerConstRange get_g4showers() const override
  {
    return make_pair(eshowers.begin(), eshowers.end());
  }
  RawTower::ShowerIterator find_g4shower(int id) override { return eshowers.find(id); }
  RawTower::ShowerConstIterator find_g4shower(int id) const override { return eshowers.find(id); }
  void add_eshower(const int g4showerid, const float eshower) override;
  void clear_g4showers() override { eshowers.clear(); }

 protected:
  RawTowerDefs::keytype towerid{std::numeric_limits<RawTowerDefs::keytype>::max()};

  //! energy assigned to the tower. Depending on stage of process and DST node
  //! name, it could be energy deposition, light yield or calibrated energies
  double energy{0.};
  //! Time stamp assigned to the tower. Depending on the tower maker, it could
  //! be rise time or peak time.
  float time{std::numeric_limits<float>::signaling_NaN()};

  CellMap ecells;      //< default truth storage
  ShowerMap eshowers;  //< alternate truth storage for smaller filesizes

  ClassDefOverride(RawTowerv1, 5)
};

#endif

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"RawTowerv1", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("RawTowerv1_Dict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_RawTowerv1_Dict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_RawTowerv1_Dict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_RawTowerv1_Dict() {
  TriggerDictionaryInitialization_RawTowerv1_Dict_Impl();
}
