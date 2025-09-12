// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME RawTowerGeomContainerv1_Dict
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
#include "../RawTowerGeomContainerv1.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static void *new_RawTowerGeomContainerv1(void *p = nullptr);
   static void *newArray_RawTowerGeomContainerv1(Long_t size, void *p);
   static void delete_RawTowerGeomContainerv1(void *p);
   static void deleteArray_RawTowerGeomContainerv1(void *p);
   static void destruct_RawTowerGeomContainerv1(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RawTowerGeomContainerv1*)
   {
      ::RawTowerGeomContainerv1 *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RawTowerGeomContainerv1 >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RawTowerGeomContainerv1", ::RawTowerGeomContainerv1::Class_Version(), "", 17,
                  typeid(::RawTowerGeomContainerv1), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RawTowerGeomContainerv1::Dictionary, isa_proxy, 4,
                  sizeof(::RawTowerGeomContainerv1) );
      instance.SetNew(&new_RawTowerGeomContainerv1);
      instance.SetNewArray(&newArray_RawTowerGeomContainerv1);
      instance.SetDelete(&delete_RawTowerGeomContainerv1);
      instance.SetDeleteArray(&deleteArray_RawTowerGeomContainerv1);
      instance.SetDestructor(&destruct_RawTowerGeomContainerv1);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RawTowerGeomContainerv1*)
   {
      return GenerateInitInstanceLocal(static_cast<::RawTowerGeomContainerv1*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RawTowerGeomContainerv1*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr RawTowerGeomContainerv1::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *RawTowerGeomContainerv1::Class_Name()
{
   return "RawTowerGeomContainerv1";
}

//______________________________________________________________________________
const char *RawTowerGeomContainerv1::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RawTowerGeomContainerv1*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int RawTowerGeomContainerv1::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RawTowerGeomContainerv1*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RawTowerGeomContainerv1::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RawTowerGeomContainerv1*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RawTowerGeomContainerv1::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RawTowerGeomContainerv1*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void RawTowerGeomContainerv1::Streamer(TBuffer &R__b)
{
   // Stream an object of class RawTowerGeomContainerv1.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RawTowerGeomContainerv1::Class(),this);
   } else {
      R__b.WriteClassBuffer(RawTowerGeomContainerv1::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RawTowerGeomContainerv1(void *p) {
      return  p ? new(p) ::RawTowerGeomContainerv1 : new ::RawTowerGeomContainerv1;
   }
   static void *newArray_RawTowerGeomContainerv1(Long_t nElements, void *p) {
      return p ? new(p) ::RawTowerGeomContainerv1[nElements] : new ::RawTowerGeomContainerv1[nElements];
   }
   // Wrapper around operator delete
   static void delete_RawTowerGeomContainerv1(void *p) {
      delete (static_cast<::RawTowerGeomContainerv1*>(p));
   }
   static void deleteArray_RawTowerGeomContainerv1(void *p) {
      delete [] (static_cast<::RawTowerGeomContainerv1*>(p));
   }
   static void destruct_RawTowerGeomContainerv1(void *p) {
      typedef ::RawTowerGeomContainerv1 current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RawTowerGeomContainerv1

namespace ROOT {
   static TClass *maplEunsignedsPintcORawTowerGeommUgR_Dictionary();
   static void maplEunsignedsPintcORawTowerGeommUgR_TClassManip(TClass*);
   static void *new_maplEunsignedsPintcORawTowerGeommUgR(void *p = nullptr);
   static void *newArray_maplEunsignedsPintcORawTowerGeommUgR(Long_t size, void *p);
   static void delete_maplEunsignedsPintcORawTowerGeommUgR(void *p);
   static void deleteArray_maplEunsignedsPintcORawTowerGeommUgR(void *p);
   static void destruct_maplEunsignedsPintcORawTowerGeommUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<unsigned int,RawTowerGeom*>*)
   {
      map<unsigned int,RawTowerGeom*> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<unsigned int,RawTowerGeom*>));
      static ::ROOT::TGenericClassInfo 
         instance("map<unsigned int,RawTowerGeom*>", -2, "map", 102,
                  typeid(map<unsigned int,RawTowerGeom*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEunsignedsPintcORawTowerGeommUgR_Dictionary, isa_proxy, 0,
                  sizeof(map<unsigned int,RawTowerGeom*>) );
      instance.SetNew(&new_maplEunsignedsPintcORawTowerGeommUgR);
      instance.SetNewArray(&newArray_maplEunsignedsPintcORawTowerGeommUgR);
      instance.SetDelete(&delete_maplEunsignedsPintcORawTowerGeommUgR);
      instance.SetDeleteArray(&deleteArray_maplEunsignedsPintcORawTowerGeommUgR);
      instance.SetDestructor(&destruct_maplEunsignedsPintcORawTowerGeommUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<unsigned int,RawTowerGeom*> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("map<unsigned int,RawTowerGeom*>","std::map<unsigned int, RawTowerGeom*, std::less<unsigned int>, std::allocator<std::pair<unsigned int const, RawTowerGeom*> > >"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const map<unsigned int,RawTowerGeom*>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEunsignedsPintcORawTowerGeommUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const map<unsigned int,RawTowerGeom*>*>(nullptr))->GetClass();
      maplEunsignedsPintcORawTowerGeommUgR_TClassManip(theClass);
   return theClass;
   }

   static void maplEunsignedsPintcORawTowerGeommUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEunsignedsPintcORawTowerGeommUgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) map<unsigned int,RawTowerGeom*> : new map<unsigned int,RawTowerGeom*>;
   }
   static void *newArray_maplEunsignedsPintcORawTowerGeommUgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) map<unsigned int,RawTowerGeom*>[nElements] : new map<unsigned int,RawTowerGeom*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEunsignedsPintcORawTowerGeommUgR(void *p) {
      delete (static_cast<map<unsigned int,RawTowerGeom*>*>(p));
   }
   static void deleteArray_maplEunsignedsPintcORawTowerGeommUgR(void *p) {
      delete [] (static_cast<map<unsigned int,RawTowerGeom*>*>(p));
   }
   static void destruct_maplEunsignedsPintcORawTowerGeommUgR(void *p) {
      typedef map<unsigned int,RawTowerGeom*> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class map<unsigned int,RawTowerGeom*>

namespace {
  void TriggerDictionaryInitialization_RawTowerGeomContainerv1_Dict_Impl() {
    static const char* headers[] = {
"0",
nullptr
    };
    static const char* includePaths[] = {
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "RawTowerGeomContainerv1_Dict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
class RawTowerGeomContainerv1;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "RawTowerGeomContainerv1_Dict dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#ifndef CALOBASE_RAWTOWERGEOMCONTAINERV1_H
#define CALOBASE_RAWTOWERGEOMCONTAINERV1_H

#include "RawTowerGeomContainer.h"

#include "RawTowerDefs.h"

#include <iostream>

class RawTowerGeom;

/*! \class RawTowerGeomContainerv1
    \brief Generic tower geometry class, store each tower's geometry individually
*/
class RawTowerGeomContainerv1 : public RawTowerGeomContainer
{
 public:
  RawTowerGeomContainerv1(RawTowerDefs::CalorimeterId caloid = RawTowerDefs::NONE);
  ~RawTowerGeomContainerv1() override;

  // cppcheck-suppress virtualCallInConstructor
  void Reset() override;
  int isValid() const override;
  void identify(std::ostream &os = std::cout) const override;

  void set_calorimeter_id(RawTowerDefs::CalorimeterId caloid) override { _caloid = caloid; }
  RawTowerDefs::CalorimeterId get_calorimeter_id() const override { return _caloid; }

  ConstIterator add_tower_geometry(RawTowerGeom *geo) override;
  RawTowerGeom *get_tower_geometry(RawTowerDefs::keytype key) override;

  //! return all tower geometries
  ConstRange get_tower_geometries(void) const override;
  Range get_tower_geometries(void) override;

  unsigned int size() const override { return _geoms.size(); }

 protected:
  RawTowerDefs::CalorimeterId _caloid;
  Map _geoms;

  ClassDefOverride(RawTowerGeomContainerv1, 1)
};

#endif

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"RawTowerGeomContainerv1", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("RawTowerGeomContainerv1_Dict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_RawTowerGeomContainerv1_Dict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_RawTowerGeomContainerv1_Dict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_RawTowerGeomContainerv1_Dict() {
  TriggerDictionaryInitialization_RawTowerGeomContainerv1_Dict_Impl();
}
