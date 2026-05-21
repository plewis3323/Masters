// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME PdbParameterMapContainer_Dict
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
#include "../PdbParameterMapContainer.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static void *new_PdbParameterMapContainer(void *p = nullptr);
   static void *newArray_PdbParameterMapContainer(Long_t size, void *p);
   static void delete_PdbParameterMapContainer(void *p);
   static void deleteArray_PdbParameterMapContainer(void *p);
   static void destruct_PdbParameterMapContainer(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::PdbParameterMapContainer*)
   {
      ::PdbParameterMapContainer *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::PdbParameterMapContainer >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("PdbParameterMapContainer", ::PdbParameterMapContainer::Class_Version(), "", 14,
                  typeid(::PdbParameterMapContainer), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::PdbParameterMapContainer::Dictionary, isa_proxy, 4,
                  sizeof(::PdbParameterMapContainer) );
      instance.SetNew(&new_PdbParameterMapContainer);
      instance.SetNewArray(&newArray_PdbParameterMapContainer);
      instance.SetDelete(&delete_PdbParameterMapContainer);
      instance.SetDeleteArray(&deleteArray_PdbParameterMapContainer);
      instance.SetDestructor(&destruct_PdbParameterMapContainer);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::PdbParameterMapContainer*)
   {
      return GenerateInitInstanceLocal(static_cast<::PdbParameterMapContainer*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::PdbParameterMapContainer*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr PdbParameterMapContainer::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *PdbParameterMapContainer::Class_Name()
{
   return "PdbParameterMapContainer";
}

//______________________________________________________________________________
const char *PdbParameterMapContainer::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::PdbParameterMapContainer*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int PdbParameterMapContainer::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::PdbParameterMapContainer*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *PdbParameterMapContainer::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::PdbParameterMapContainer*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *PdbParameterMapContainer::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::PdbParameterMapContainer*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void PdbParameterMapContainer::Streamer(TBuffer &R__b)
{
   // Stream an object of class PdbParameterMapContainer.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(PdbParameterMapContainer::Class(),this);
   } else {
      R__b.WriteClassBuffer(PdbParameterMapContainer::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_PdbParameterMapContainer(void *p) {
      return  p ? new(p) ::PdbParameterMapContainer : new ::PdbParameterMapContainer;
   }
   static void *newArray_PdbParameterMapContainer(Long_t nElements, void *p) {
      return p ? new(p) ::PdbParameterMapContainer[nElements] : new ::PdbParameterMapContainer[nElements];
   }
   // Wrapper around operator delete
   static void delete_PdbParameterMapContainer(void *p) {
      delete (static_cast<::PdbParameterMapContainer*>(p));
   }
   static void deleteArray_PdbParameterMapContainer(void *p) {
      delete [] (static_cast<::PdbParameterMapContainer*>(p));
   }
   static void destruct_PdbParameterMapContainer(void *p) {
      typedef ::PdbParameterMapContainer current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::PdbParameterMapContainer

namespace ROOT {
   static TClass *maplEintcOPdbParameterMapmUgR_Dictionary();
   static void maplEintcOPdbParameterMapmUgR_TClassManip(TClass*);
   static void *new_maplEintcOPdbParameterMapmUgR(void *p = nullptr);
   static void *newArray_maplEintcOPdbParameterMapmUgR(Long_t size, void *p);
   static void delete_maplEintcOPdbParameterMapmUgR(void *p);
   static void deleteArray_maplEintcOPdbParameterMapmUgR(void *p);
   static void destruct_maplEintcOPdbParameterMapmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<int,PdbParameterMap*>*)
   {
      map<int,PdbParameterMap*> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<int,PdbParameterMap*>));
      static ::ROOT::TGenericClassInfo 
         instance("map<int,PdbParameterMap*>", -2, "map", 102,
                  typeid(map<int,PdbParameterMap*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEintcOPdbParameterMapmUgR_Dictionary, isa_proxy, 0,
                  sizeof(map<int,PdbParameterMap*>) );
      instance.SetNew(&new_maplEintcOPdbParameterMapmUgR);
      instance.SetNewArray(&newArray_maplEintcOPdbParameterMapmUgR);
      instance.SetDelete(&delete_maplEintcOPdbParameterMapmUgR);
      instance.SetDeleteArray(&deleteArray_maplEintcOPdbParameterMapmUgR);
      instance.SetDestructor(&destruct_maplEintcOPdbParameterMapmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<int,PdbParameterMap*> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("map<int,PdbParameterMap*>","std::map<int, PdbParameterMap*, std::less<int>, std::allocator<std::pair<int const, PdbParameterMap*> > >"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const map<int,PdbParameterMap*>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEintcOPdbParameterMapmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const map<int,PdbParameterMap*>*>(nullptr))->GetClass();
      maplEintcOPdbParameterMapmUgR_TClassManip(theClass);
   return theClass;
   }

   static void maplEintcOPdbParameterMapmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEintcOPdbParameterMapmUgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) map<int,PdbParameterMap*> : new map<int,PdbParameterMap*>;
   }
   static void *newArray_maplEintcOPdbParameterMapmUgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) map<int,PdbParameterMap*>[nElements] : new map<int,PdbParameterMap*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEintcOPdbParameterMapmUgR(void *p) {
      delete (static_cast<map<int,PdbParameterMap*>*>(p));
   }
   static void deleteArray_maplEintcOPdbParameterMapmUgR(void *p) {
      delete [] (static_cast<map<int,PdbParameterMap*>*>(p));
   }
   static void destruct_maplEintcOPdbParameterMapmUgR(void *p) {
      typedef map<int,PdbParameterMap*> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class map<int,PdbParameterMap*>

namespace {
  void TriggerDictionaryInitialization_PdbParameterMapContainer_Dict_Impl() {
    static const char* headers[] = {
"0",
nullptr
    };
    static const char* includePaths[] = {
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "PdbParameterMapContainer_Dict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
class PdbParameterMapContainer;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "PdbParameterMapContainer_Dict dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#ifndef PDBCAL_BASE_PDBPARAMETERMAPCONTAINER_H
#define PDBCAL_BASE_PDBPARAMETERMAPCONTAINER_H

#include "PdbCalChan.h"

#include <map>
#include <string>
#include <utility>

class PdbParameterMap;

class PdbParameterMapContainer : public PdbCalChan
{
 public:
  typedef std::map<int, PdbParameterMap *> parMap;
  typedef parMap::const_iterator parIter;
  typedef std::pair<parIter, parIter> parConstRange;

  PdbParameterMapContainer() {}
  ~PdbParameterMapContainer() override;

  void print() const override;

  void Reset() override;

  void AddPdbParameterMap(const int layer, PdbParameterMap *params);
  const PdbParameterMap *GetParameters(const int layer) const;
  PdbParameterMap *GetParametersToModify(const int layer);
  parConstRange get_ParameterMaps() const { return make_pair(parametermap.begin(), parametermap.end()); }

  //! write PdbParameterMapContainer to an external file with root or xml extension.
  int WriteToFile(const std::string &detector_name, const std::string &extension, const std::string &dir = ".");

 protected:
  std::map<int, PdbParameterMap *> parametermap;

  ClassDefOverride(PdbParameterMapContainer, 1)
};

#endif

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"PdbParameterMapContainer", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("PdbParameterMapContainer_Dict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_PdbParameterMapContainer_Dict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_PdbParameterMapContainer_Dict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_PdbParameterMapContainer_Dict() {
  TriggerDictionaryInitialization_PdbParameterMapContainer_Dict_Impl();
}
