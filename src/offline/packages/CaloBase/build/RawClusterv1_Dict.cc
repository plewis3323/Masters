// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME RawClusterv1_Dict
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
#include "../RawClusterv1.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static void *new_RawClusterv1(void *p = nullptr);
   static void *newArray_RawClusterv1(Long_t size, void *p);
   static void delete_RawClusterv1(void *p);
   static void deleteArray_RawClusterv1(void *p);
   static void destruct_RawClusterv1(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RawClusterv1*)
   {
      ::RawClusterv1 *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RawClusterv1 >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RawClusterv1", ::RawClusterv1::Class_Version(), "", 21,
                  typeid(::RawClusterv1), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RawClusterv1::Dictionary, isa_proxy, 4,
                  sizeof(::RawClusterv1) );
      instance.SetNew(&new_RawClusterv1);
      instance.SetNewArray(&newArray_RawClusterv1);
      instance.SetDelete(&delete_RawClusterv1);
      instance.SetDeleteArray(&deleteArray_RawClusterv1);
      instance.SetDestructor(&destruct_RawClusterv1);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RawClusterv1*)
   {
      return GenerateInitInstanceLocal(static_cast<::RawClusterv1*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RawClusterv1*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr RawClusterv1::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *RawClusterv1::Class_Name()
{
   return "RawClusterv1";
}

//______________________________________________________________________________
const char *RawClusterv1::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RawClusterv1*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int RawClusterv1::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RawClusterv1*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RawClusterv1::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RawClusterv1*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RawClusterv1::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RawClusterv1*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void RawClusterv1::Streamer(TBuffer &R__b)
{
   // Stream an object of class RawClusterv1.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RawClusterv1::Class(),this);
   } else {
      R__b.WriteClassBuffer(RawClusterv1::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RawClusterv1(void *p) {
      return  p ? new(p) ::RawClusterv1 : new ::RawClusterv1;
   }
   static void *newArray_RawClusterv1(Long_t nElements, void *p) {
      return p ? new(p) ::RawClusterv1[nElements] : new ::RawClusterv1[nElements];
   }
   // Wrapper around operator delete
   static void delete_RawClusterv1(void *p) {
      delete (static_cast<::RawClusterv1*>(p));
   }
   static void deleteArray_RawClusterv1(void *p) {
      delete [] (static_cast<::RawClusterv1*>(p));
   }
   static void destruct_RawClusterv1(void *p) {
      typedef ::RawClusterv1 current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RawClusterv1

namespace ROOT {
   static TClass *maplEunsignedsPintcOfloatgR_Dictionary();
   static void maplEunsignedsPintcOfloatgR_TClassManip(TClass*);
   static void *new_maplEunsignedsPintcOfloatgR(void *p = nullptr);
   static void *newArray_maplEunsignedsPintcOfloatgR(Long_t size, void *p);
   static void delete_maplEunsignedsPintcOfloatgR(void *p);
   static void deleteArray_maplEunsignedsPintcOfloatgR(void *p);
   static void destruct_maplEunsignedsPintcOfloatgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<unsigned int,float>*)
   {
      map<unsigned int,float> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<unsigned int,float>));
      static ::ROOT::TGenericClassInfo 
         instance("map<unsigned int,float>", -2, "map", 102,
                  typeid(map<unsigned int,float>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEunsignedsPintcOfloatgR_Dictionary, isa_proxy, 0,
                  sizeof(map<unsigned int,float>) );
      instance.SetNew(&new_maplEunsignedsPintcOfloatgR);
      instance.SetNewArray(&newArray_maplEunsignedsPintcOfloatgR);
      instance.SetDelete(&delete_maplEunsignedsPintcOfloatgR);
      instance.SetDeleteArray(&deleteArray_maplEunsignedsPintcOfloatgR);
      instance.SetDestructor(&destruct_maplEunsignedsPintcOfloatgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<unsigned int,float> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("map<unsigned int,float>","std::map<unsigned int, float, std::less<unsigned int>, std::allocator<std::pair<unsigned int const, float> > >"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const map<unsigned int,float>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEunsignedsPintcOfloatgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const map<unsigned int,float>*>(nullptr))->GetClass();
      maplEunsignedsPintcOfloatgR_TClassManip(theClass);
   return theClass;
   }

   static void maplEunsignedsPintcOfloatgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEunsignedsPintcOfloatgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) map<unsigned int,float> : new map<unsigned int,float>;
   }
   static void *newArray_maplEunsignedsPintcOfloatgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) map<unsigned int,float>[nElements] : new map<unsigned int,float>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEunsignedsPintcOfloatgR(void *p) {
      delete (static_cast<map<unsigned int,float>*>(p));
   }
   static void deleteArray_maplEunsignedsPintcOfloatgR(void *p) {
      delete [] (static_cast<map<unsigned int,float>*>(p));
   }
   static void destruct_maplEunsignedsPintcOfloatgR(void *p) {
      typedef map<unsigned int,float> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class map<unsigned int,float>

namespace ROOT {
   static TClass *maplEunsignedsPcharcOunsignedsPintgR_Dictionary();
   static void maplEunsignedsPcharcOunsignedsPintgR_TClassManip(TClass*);
   static void *new_maplEunsignedsPcharcOunsignedsPintgR(void *p = nullptr);
   static void *newArray_maplEunsignedsPcharcOunsignedsPintgR(Long_t size, void *p);
   static void delete_maplEunsignedsPcharcOunsignedsPintgR(void *p);
   static void deleteArray_maplEunsignedsPcharcOunsignedsPintgR(void *p);
   static void destruct_maplEunsignedsPcharcOunsignedsPintgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<unsigned char,unsigned int>*)
   {
      map<unsigned char,unsigned int> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<unsigned char,unsigned int>));
      static ::ROOT::TGenericClassInfo 
         instance("map<unsigned char,unsigned int>", -2, "map", 102,
                  typeid(map<unsigned char,unsigned int>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEunsignedsPcharcOunsignedsPintgR_Dictionary, isa_proxy, 0,
                  sizeof(map<unsigned char,unsigned int>) );
      instance.SetNew(&new_maplEunsignedsPcharcOunsignedsPintgR);
      instance.SetNewArray(&newArray_maplEunsignedsPcharcOunsignedsPintgR);
      instance.SetDelete(&delete_maplEunsignedsPcharcOunsignedsPintgR);
      instance.SetDeleteArray(&deleteArray_maplEunsignedsPcharcOunsignedsPintgR);
      instance.SetDestructor(&destruct_maplEunsignedsPcharcOunsignedsPintgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<unsigned char,unsigned int> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("map<unsigned char,unsigned int>","std::map<unsigned char, unsigned int, std::less<unsigned char>, std::allocator<std::pair<unsigned char const, unsigned int> > >"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const map<unsigned char,unsigned int>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEunsignedsPcharcOunsignedsPintgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const map<unsigned char,unsigned int>*>(nullptr))->GetClass();
      maplEunsignedsPcharcOunsignedsPintgR_TClassManip(theClass);
   return theClass;
   }

   static void maplEunsignedsPcharcOunsignedsPintgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEunsignedsPcharcOunsignedsPintgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) map<unsigned char,unsigned int> : new map<unsigned char,unsigned int>;
   }
   static void *newArray_maplEunsignedsPcharcOunsignedsPintgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) map<unsigned char,unsigned int>[nElements] : new map<unsigned char,unsigned int>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEunsignedsPcharcOunsignedsPintgR(void *p) {
      delete (static_cast<map<unsigned char,unsigned int>*>(p));
   }
   static void deleteArray_maplEunsignedsPcharcOunsignedsPintgR(void *p) {
      delete [] (static_cast<map<unsigned char,unsigned int>*>(p));
   }
   static void destruct_maplEunsignedsPcharcOunsignedsPintgR(void *p) {
      typedef map<unsigned char,unsigned int> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class map<unsigned char,unsigned int>

namespace {
  void TriggerDictionaryInitialization_RawClusterv1_Dict_Impl() {
    static const char* headers[] = {
"0",
nullptr
    };
    static const char* includePaths[] = {
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "RawClusterv1_Dict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
class RawClusterv1;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "RawClusterv1_Dict dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#ifndef CALOBASE_RAWCLUSTERV1_H
#define CALOBASE_RAWCLUSTERV1_H

#include "RawCluster.h"
#include "RawClusterDefs.h"

#include <CLHEP/Vector/ThreeVector.h>

#include <cmath>
#include <cstddef>
#include <cstdint>
#include <iostream>
#include <limits>
#include <map>
#include <utility>

class PHObject;

class RawClusterv1 : public RawCluster
{
 public:
  RawClusterv1() = default;
  ~RawClusterv1() override {}

  void Reset() override;
  PHObject* CloneMe() const override { return new RawClusterv1(*this); }
  int isValid() const override { return towermap.size() > 0; }
  void identify(std::ostream& os = std::cout) const override;

  /** @defgroup getters
   *  @{
   */
  //! cluster ID
  RawClusterDefs::keytype get_id() const override { return clusterid; }
  //! total energy
  float get_energy() const override { return _energy; }
  //! Tower operations
  size_t getNTowers() const override { return towermap.size(); }
  RawCluster::TowerConstRange get_towers() const override { return make_pair(towermap.begin(), towermap.end()); }
  //! return tower map for c++11 range-based for-loop
  const TowerMap& get_towermap() const override { return towermap; }
  //
  //! cluster position in 3D
  CLHEP::Hep3Vector get_position() const override
  {
    return CLHEP::Hep3Vector(get_x(), get_y(), get_z());
  }
  //!  access to intrinsic cylindrical coordinate system
  float get_phi() const override { return _phi; }
  float get_r() const override { return _r; }
  float get_z() const override { return _z; }
  //
  //  //! convert cluster location to psuedo-rapidity given a user chosen z-location
  //  virtual float get_eta(const float z) const;
  //  //! convert cluster E_T given a user chosen z-location
  //  virtual float get_et(const float z) const;
  //
  //! access Cartesian coordinate system
  float get_x() const override { return get_r() * std::cos(get_phi()); }
  float get_y() const override { return get_r() * std::sin(get_phi()); }
  //
  //! access additional optional properties
  //! cluster core energy for EM shower
  float get_ecore() const override { return get_property_float(prop_ecore); }
  //! reduced chi2 for EM shower
  float get_chi2() const override { return get_property_float(prop_chi2); }
  //! cluster template probability for EM shower
  float get_prob() const override { return get_property_float(prop_prob); }
  //! cluster template merged pi0 cluster probability for EM shower
  float get_merged_cluster_prob() const override { return get_property_float(prop_merged_cluster_prob); }
  //! isolation ET default
  float get_et_iso() const override { return get_property_float(prop_et_iso_calotower_R03); }
  //! isolation ET the radius and hueristic can be specified
  float get_et_iso(const int radiusx10, bool subtracted, bool clusterTower) const override;

  std::vector<float> get_shower_shapes(float tower_thresh) const override;
  std::pair<int,int> get_lead_tower() const override; // eta,phi of leading tower in cluster

  //  //! truth cluster's PHG4Particle ID
  //  virtual int get_truth_track_ID() const override { return get_property_int(prop_truth_track_ID); }
  //  //! truth cluster's PHG4Particle flavor
  //  virtual int get_truth_flavor() const override { return get_property_int(prop_truth_flavor); }
  //
  /** @} */  // end of getters

  /** @defgroup setters
   *  @{
   */
  //! cluster ID
  void set_id(const RawClusterDefs::keytype id) override { clusterid = id; }
  //! Tower operations
  void addTower(const RawClusterDefs::keytype twrid, const float etower) override;
  //! total energy
  void set_energy(const float energy) override { _energy = energy; }
  //!  access to intrinsic cylindrical coordinate system
  void set_phi(const float phi) override { _phi = phi; }
  void set_z(const float z) override { _z = z; }
  void set_r(const float r) override { _r = r; }
  //
  //! access additional optional properties
  //! cluster core energy for EM shower
  void set_ecore(const float ecore) override { set_property(prop_ecore, ecore); }
  //! reduced chi2 for EM shower
  void set_chi2(const float chi2) override { set_property(prop_chi2, chi2); }
  //! cluster template probability for EM shower
  void set_prob(const float prob) override { set_property(prop_prob, prob); }
  //! cluster template merged pi0 cluster probability for EM shower
  void set_merged_cluster_prob(const float probmergedcluster) override { set_property(prop_merged_cluster_prob, probmergedcluster); }
  //! isolation ET default
  void set_et_iso(const float e) override { set_property(prop_et_iso_calotower_R03, e); }
  //! isolation ET the radius and hueristic can be specified
  void set_et_iso(const float et_iso, const int radiusx10, bool subtracted, bool clusterTower) override;
  //  //! truth cluster's PHG4Particle ID
  //  virtual void set_truth_track_ID(const int i) override { set_property(prop_truth_track_ID, i); }
  //  //! truth cluster's PHG4Particle flavor
  //  virtual void set_truth_flavor(const int f) override { set_property(prop_truth_flavor, f); }
  //
  /*
   *
   * @} */
  // end of setters

  /** @defgroup property_map property map definitions
   *  @{
   */
 public:
  bool has_property(const PROPERTY prop_id) const override;
  float get_property_float(const PROPERTY prop_id) const override;
  int get_property_int(const PROPERTY prop_id) const override;
  unsigned int get_property_uint(const PROPERTY prop_id) const override;
  void set_property(const PROPERTY prop_id, const float value) override;
  void set_property(const PROPERTY prop_id, const int value) override;
  void set_property(const PROPERTY prop_id, const unsigned int value) override;

 protected:  // protected is declared twice !?
  unsigned int get_property_nocheck(const PROPERTY prop_id) const;
  void set_property_nocheck(const PROPERTY prop_id, const unsigned int ui) { prop_map[prop_id] = ui; }
  //! storage types for additional property
  typedef uint8_t prop_id_t;
  typedef uint32_t prop_storage_t;
  typedef std::map<prop_id_t, prop_storage_t> prop_map_t;

  //! convert between 32bit inputs and storage type prop_storage_t
  union u_property
  {
    float fdata;
    int32_t idata;
    uint32_t uidata;

    u_property(int32_t in)
      : idata(in)
    {
    }
    u_property(uint32_t in)
      : uidata(in)
    {
    }
    u_property(float in)
      : fdata(in)
    {
    }
    u_property()
      : uidata(0)
    {
    }

    prop_storage_t get_storage() const { return uidata; }
  };

  //! container for additional property
  prop_map_t prop_map;

  /** @} */  // end of property map definitions

  //
 protected:
  //! cluster ID
  RawClusterDefs::keytype clusterid{0};
  //! total energy
  float _energy{std::numeric_limits<float>::signaling_NaN()};
  //! Tower operations
  TowerMap towermap;

  //! location of cluster in cylindrical coordinate
  float _r{std::numeric_limits<float>::signaling_NaN()};
  float _phi{std::numeric_limits<float>::signaling_NaN()};
  float _z{std::numeric_limits<float>::signaling_NaN()};

  ClassDefOverride(RawClusterv1, 3)
};

#endif

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"RawClusterv1", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("RawClusterv1_Dict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_RawClusterv1_Dict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_RawClusterv1_Dict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_RawClusterv1_Dict() {
  TriggerDictionaryInitialization_RawClusterv1_Dict_Impl();
}
