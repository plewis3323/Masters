// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME RawTowerContainer_Dict
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
#include "../RawTowerContainer.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static void *new_RawTowerContainer(void *p = nullptr);
   static void *newArray_RawTowerContainer(Long_t size, void *p);
   static void delete_RawTowerContainer(void *p);
   static void deleteArray_RawTowerContainer(void *p);
   static void destruct_RawTowerContainer(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RawTowerContainer*)
   {
      ::RawTowerContainer *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RawTowerContainer >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RawTowerContainer", ::RawTowerContainer::Class_Version(), "", 16,
                  typeid(::RawTowerContainer), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RawTowerContainer::Dictionary, isa_proxy, 4,
                  sizeof(::RawTowerContainer) );
      instance.SetNew(&new_RawTowerContainer);
      instance.SetNewArray(&newArray_RawTowerContainer);
      instance.SetDelete(&delete_RawTowerContainer);
      instance.SetDeleteArray(&deleteArray_RawTowerContainer);
      instance.SetDestructor(&destruct_RawTowerContainer);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RawTowerContainer*)
   {
      return GenerateInitInstanceLocal(static_cast<::RawTowerContainer*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RawTowerContainer*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr RawTowerContainer::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *RawTowerContainer::Class_Name()
{
   return "RawTowerContainer";
}

//______________________________________________________________________________
const char *RawTowerContainer::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RawTowerContainer*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int RawTowerContainer::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RawTowerContainer*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RawTowerContainer::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RawTowerContainer*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RawTowerContainer::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RawTowerContainer*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void RawTowerContainer::Streamer(TBuffer &R__b)
{
   // Stream an object of class RawTowerContainer.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RawTowerContainer::Class(),this);
   } else {
      R__b.WriteClassBuffer(RawTowerContainer::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RawTowerContainer(void *p) {
      return  p ? new(p) ::RawTowerContainer : new ::RawTowerContainer;
   }
   static void *newArray_RawTowerContainer(Long_t nElements, void *p) {
      return p ? new(p) ::RawTowerContainer[nElements] : new ::RawTowerContainer[nElements];
   }
   // Wrapper around operator delete
   static void delete_RawTowerContainer(void *p) {
      delete (static_cast<::RawTowerContainer*>(p));
   }
   static void deleteArray_RawTowerContainer(void *p) {
      delete [] (static_cast<::RawTowerContainer*>(p));
   }
   static void destruct_RawTowerContainer(void *p) {
      typedef ::RawTowerContainer current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RawTowerContainer

namespace ROOT {
   static TClass *maplEunsignedsPintcORawTowermUgR_Dictionary();
   static void maplEunsignedsPintcORawTowermUgR_TClassManip(TClass*);
   static void *new_maplEunsignedsPintcORawTowermUgR(void *p = nullptr);
   static void *newArray_maplEunsignedsPintcORawTowermUgR(Long_t size, void *p);
   static void delete_maplEunsignedsPintcORawTowermUgR(void *p);
   static void deleteArray_maplEunsignedsPintcORawTowermUgR(void *p);
   static void destruct_maplEunsignedsPintcORawTowermUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<unsigned int,RawTower*>*)
   {
      map<unsigned int,RawTower*> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<unsigned int,RawTower*>));
      static ::ROOT::TGenericClassInfo 
         instance("map<unsigned int,RawTower*>", -2, "map", 102,
                  typeid(map<unsigned int,RawTower*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEunsignedsPintcORawTowermUgR_Dictionary, isa_proxy, 0,
                  sizeof(map<unsigned int,RawTower*>) );
      instance.SetNew(&new_maplEunsignedsPintcORawTowermUgR);
      instance.SetNewArray(&newArray_maplEunsignedsPintcORawTowermUgR);
      instance.SetDelete(&delete_maplEunsignedsPintcORawTowermUgR);
      instance.SetDeleteArray(&deleteArray_maplEunsignedsPintcORawTowermUgR);
      instance.SetDestructor(&destruct_maplEunsignedsPintcORawTowermUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<unsigned int,RawTower*> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("map<unsigned int,RawTower*>","std::map<unsigned int, RawTower*, std::less<unsigned int>, std::allocator<std::pair<unsigned int const, RawTower*> > >"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const map<unsigned int,RawTower*>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEunsignedsPintcORawTowermUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const map<unsigned int,RawTower*>*>(nullptr))->GetClass();
      maplEunsignedsPintcORawTowermUgR_TClassManip(theClass);
   return theClass;
   }

   static void maplEunsignedsPintcORawTowermUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEunsignedsPintcORawTowermUgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) map<unsigned int,RawTower*> : new map<unsigned int,RawTower*>;
   }
   static void *newArray_maplEunsignedsPintcORawTowermUgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) map<unsigned int,RawTower*>[nElements] : new map<unsigned int,RawTower*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEunsignedsPintcORawTowermUgR(void *p) {
      delete (static_cast<map<unsigned int,RawTower*>*>(p));
   }
   static void deleteArray_maplEunsignedsPintcORawTowermUgR(void *p) {
      delete [] (static_cast<map<unsigned int,RawTower*>*>(p));
   }
   static void destruct_maplEunsignedsPintcORawTowermUgR(void *p) {
      typedef map<unsigned int,RawTower*> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class map<unsigned int,RawTower*>

namespace {
  void TriggerDictionaryInitialization_RawTowerContainer_Dict_Impl() {
    static const char* headers[] = {
"0",
nullptr
    };
    static const char* includePaths[] = {
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "RawTowerContainer_Dict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
class RawTowerContainer;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "RawTowerContainer_Dict dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#ifndef CALOBASE_RAWTOWERCONTAINER_H
#define CALOBASE_RAWTOWERCONTAINER_H

#include "RawTowerDefs.h"

#include <phool/PHObject.h>

#include <iostream>
#include <map>
#include <utility>

class RawTower;

class RawTowerContainer : public PHObject
{
 public:
  typedef std::map<RawTowerDefs::keytype, RawTower *> Map;
  typedef Map::iterator Iterator;
  typedef Map::const_iterator ConstIterator;
  typedef std::pair<Iterator, Iterator> Range;
  typedef std::pair<ConstIterator, ConstIterator> ConstRange;

  RawTowerContainer(RawTowerDefs::CalorimeterId caloid = RawTowerDefs::NONE)
    : _caloid(caloid)
  {
  }

  ~RawTowerContainer() override {}

  void Reset() override;
  int isValid() const override;
  void identify(std::ostream &os = std::cout) const override;

  void setCalorimeterID(RawTowerDefs::CalorimeterId caloid) { _caloid = caloid; }
  RawTowerDefs::CalorimeterId getCalorimeterID() { return _caloid; }

  ConstIterator AddTower(const unsigned int ieta, const unsigned int iphi, RawTower *twr);
  ConstIterator AddTower(RawTowerDefs::keytype key, RawTower *twr);

  RawTower *getTower(RawTowerDefs::keytype key);
  const RawTower *getTower(RawTowerDefs::keytype key) const;

  RawTower *getTower(const unsigned int ieta, const unsigned int iphi);
  const RawTower *getTower(const unsigned int ieta, const unsigned int iphi) const;

  RawTower *getTower(const unsigned int ieta, const unsigned int iphi, const unsigned int il);
  const RawTower *getTower(const unsigned int ieta, const unsigned int iphi, const unsigned int il) const;

  //! return all towers
  ConstRange getTowers(void) const;
  Range getTowers(void);

  unsigned int size() const { return _towers.size(); }
  void compress(const double emin);
  double getTotalEdep() const;

 protected:
  RawTowerDefs::CalorimeterId _caloid;
  Map _towers;

  ClassDefOverride(RawTowerContainer, 1)
};

#endif

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"RawTowerContainer", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("RawTowerContainer_Dict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_RawTowerContainer_Dict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_RawTowerContainer_Dict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_RawTowerContainer_Dict() {
  TriggerDictionaryInitialization_RawTowerContainer_Dict_Impl();
}
