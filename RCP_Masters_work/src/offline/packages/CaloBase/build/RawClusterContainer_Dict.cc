// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME RawClusterContainer_Dict
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
#include "../RawClusterContainer.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static void *new_RawClusterContainer(void *p = nullptr);
   static void *newArray_RawClusterContainer(Long_t size, void *p);
   static void delete_RawClusterContainer(void *p);
   static void deleteArray_RawClusterContainer(void *p);
   static void destruct_RawClusterContainer(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RawClusterContainer*)
   {
      ::RawClusterContainer *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RawClusterContainer >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RawClusterContainer", ::RawClusterContainer::Class_Version(), "", 16,
                  typeid(::RawClusterContainer), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RawClusterContainer::Dictionary, isa_proxy, 4,
                  sizeof(::RawClusterContainer) );
      instance.SetNew(&new_RawClusterContainer);
      instance.SetNewArray(&newArray_RawClusterContainer);
      instance.SetDelete(&delete_RawClusterContainer);
      instance.SetDeleteArray(&deleteArray_RawClusterContainer);
      instance.SetDestructor(&destruct_RawClusterContainer);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RawClusterContainer*)
   {
      return GenerateInitInstanceLocal(static_cast<::RawClusterContainer*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RawClusterContainer*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr RawClusterContainer::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *RawClusterContainer::Class_Name()
{
   return "RawClusterContainer";
}

//______________________________________________________________________________
const char *RawClusterContainer::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RawClusterContainer*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int RawClusterContainer::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RawClusterContainer*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RawClusterContainer::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RawClusterContainer*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RawClusterContainer::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RawClusterContainer*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void RawClusterContainer::Streamer(TBuffer &R__b)
{
   // Stream an object of class RawClusterContainer.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RawClusterContainer::Class(),this);
   } else {
      R__b.WriteClassBuffer(RawClusterContainer::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RawClusterContainer(void *p) {
      return  p ? new(p) ::RawClusterContainer : new ::RawClusterContainer;
   }
   static void *newArray_RawClusterContainer(Long_t nElements, void *p) {
      return p ? new(p) ::RawClusterContainer[nElements] : new ::RawClusterContainer[nElements];
   }
   // Wrapper around operator delete
   static void delete_RawClusterContainer(void *p) {
      delete (static_cast<::RawClusterContainer*>(p));
   }
   static void deleteArray_RawClusterContainer(void *p) {
      delete [] (static_cast<::RawClusterContainer*>(p));
   }
   static void destruct_RawClusterContainer(void *p) {
      typedef ::RawClusterContainer current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RawClusterContainer

namespace ROOT {
   static TClass *maplEunsignedsPintcORawClustermUgR_Dictionary();
   static void maplEunsignedsPintcORawClustermUgR_TClassManip(TClass*);
   static void *new_maplEunsignedsPintcORawClustermUgR(void *p = nullptr);
   static void *newArray_maplEunsignedsPintcORawClustermUgR(Long_t size, void *p);
   static void delete_maplEunsignedsPintcORawClustermUgR(void *p);
   static void deleteArray_maplEunsignedsPintcORawClustermUgR(void *p);
   static void destruct_maplEunsignedsPintcORawClustermUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<unsigned int,RawCluster*>*)
   {
      map<unsigned int,RawCluster*> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<unsigned int,RawCluster*>));
      static ::ROOT::TGenericClassInfo 
         instance("map<unsigned int,RawCluster*>", -2, "map", 102,
                  typeid(map<unsigned int,RawCluster*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEunsignedsPintcORawClustermUgR_Dictionary, isa_proxy, 0,
                  sizeof(map<unsigned int,RawCluster*>) );
      instance.SetNew(&new_maplEunsignedsPintcORawClustermUgR);
      instance.SetNewArray(&newArray_maplEunsignedsPintcORawClustermUgR);
      instance.SetDelete(&delete_maplEunsignedsPintcORawClustermUgR);
      instance.SetDeleteArray(&deleteArray_maplEunsignedsPintcORawClustermUgR);
      instance.SetDestructor(&destruct_maplEunsignedsPintcORawClustermUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<unsigned int,RawCluster*> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("map<unsigned int,RawCluster*>","std::map<unsigned int, RawCluster*, std::less<unsigned int>, std::allocator<std::pair<unsigned int const, RawCluster*> > >"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const map<unsigned int,RawCluster*>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEunsignedsPintcORawClustermUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const map<unsigned int,RawCluster*>*>(nullptr))->GetClass();
      maplEunsignedsPintcORawClustermUgR_TClassManip(theClass);
   return theClass;
   }

   static void maplEunsignedsPintcORawClustermUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEunsignedsPintcORawClustermUgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) map<unsigned int,RawCluster*> : new map<unsigned int,RawCluster*>;
   }
   static void *newArray_maplEunsignedsPintcORawClustermUgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) map<unsigned int,RawCluster*>[nElements] : new map<unsigned int,RawCluster*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEunsignedsPintcORawClustermUgR(void *p) {
      delete (static_cast<map<unsigned int,RawCluster*>*>(p));
   }
   static void deleteArray_maplEunsignedsPintcORawClustermUgR(void *p) {
      delete [] (static_cast<map<unsigned int,RawCluster*>*>(p));
   }
   static void destruct_maplEunsignedsPintcORawClustermUgR(void *p) {
      typedef map<unsigned int,RawCluster*> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class map<unsigned int,RawCluster*>

namespace {
  void TriggerDictionaryInitialization_RawClusterContainer_Dict_Impl() {
    static const char* headers[] = {
"0",
nullptr
    };
    static const char* includePaths[] = {
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "RawClusterContainer_Dict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
class RawClusterContainer;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "RawClusterContainer_Dict dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#ifndef CALOBASE_RAWCLUSTERCONTAINER_H
#define CALOBASE_RAWCLUSTERCONTAINER_H

#include "RawClusterDefs.h"

#include <phool/PHObject.h>

#include <iostream>
#include <map>
#include <utility>

class RawCluster;

class RawClusterContainer : public PHObject
{
 public:
  typedef std::map<RawClusterDefs::keytype, RawCluster *> Map;
  typedef Map::iterator Iterator;
  typedef Map::const_iterator ConstIterator;
  typedef std::pair<Iterator, Iterator> Range;
  typedef std::pair<ConstIterator, ConstIterator> ConstRange;

  RawClusterContainer() {}
  ~RawClusterContainer() override {}

  void Reset() override;
  int isValid() const override;
  void identify(std::ostream &os = std::cout) const override;

  ConstIterator AddCluster(RawCluster *clus);

  RawCluster *getCluster(const RawClusterDefs::keytype id);
  const RawCluster *getCluster(const RawClusterDefs::keytype id) const;

  //! return all clusters
  ConstRange getClusters(void) const;
  Range getClusters(void);
  const Map &getClustersMap() const { return _clusters; }
  Map &getClustersMap() { return _clusters; }

  unsigned int size() const { return _clusters.size(); }
  double getTotalEdep() const;

 protected:
  Map _clusters;

  ClassDefOverride(RawClusterContainer, 1)
};

#endif

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"RawClusterContainer", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("RawClusterContainer_Dict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_RawClusterContainer_Dict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_RawClusterContainer_Dict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_RawClusterContainer_Dict() {
  TriggerDictionaryInitialization_RawClusterContainer_Dict_Impl();
}
