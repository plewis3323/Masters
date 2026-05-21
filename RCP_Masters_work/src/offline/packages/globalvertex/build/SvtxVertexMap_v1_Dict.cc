// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME SvtxVertexMap_v1_Dict
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
#include "../SvtxVertexMap_v1.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static void *new_SvtxVertexMap_v1(void *p = nullptr);
   static void *newArray_SvtxVertexMap_v1(Long_t size, void *p);
   static void delete_SvtxVertexMap_v1(void *p);
   static void deleteArray_SvtxVertexMap_v1(void *p);
   static void destruct_SvtxVertexMap_v1(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::SvtxVertexMap_v1*)
   {
      ::SvtxVertexMap_v1 *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::SvtxVertexMap_v1 >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("SvtxVertexMap_v1", ::SvtxVertexMap_v1::Class_Version(), "", 17,
                  typeid(::SvtxVertexMap_v1), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::SvtxVertexMap_v1::Dictionary, isa_proxy, 4,
                  sizeof(::SvtxVertexMap_v1) );
      instance.SetNew(&new_SvtxVertexMap_v1);
      instance.SetNewArray(&newArray_SvtxVertexMap_v1);
      instance.SetDelete(&delete_SvtxVertexMap_v1);
      instance.SetDeleteArray(&deleteArray_SvtxVertexMap_v1);
      instance.SetDestructor(&destruct_SvtxVertexMap_v1);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::SvtxVertexMap_v1*)
   {
      return GenerateInitInstanceLocal(static_cast<::SvtxVertexMap_v1*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::SvtxVertexMap_v1*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr SvtxVertexMap_v1::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *SvtxVertexMap_v1::Class_Name()
{
   return "SvtxVertexMap_v1";
}

//______________________________________________________________________________
const char *SvtxVertexMap_v1::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::SvtxVertexMap_v1*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int SvtxVertexMap_v1::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::SvtxVertexMap_v1*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *SvtxVertexMap_v1::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::SvtxVertexMap_v1*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *SvtxVertexMap_v1::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::SvtxVertexMap_v1*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void SvtxVertexMap_v1::Streamer(TBuffer &R__b)
{
   // Stream an object of class SvtxVertexMap_v1.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(SvtxVertexMap_v1::Class(),this);
   } else {
      R__b.WriteClassBuffer(SvtxVertexMap_v1::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_SvtxVertexMap_v1(void *p) {
      return  p ? new(p) ::SvtxVertexMap_v1 : new ::SvtxVertexMap_v1;
   }
   static void *newArray_SvtxVertexMap_v1(Long_t nElements, void *p) {
      return p ? new(p) ::SvtxVertexMap_v1[nElements] : new ::SvtxVertexMap_v1[nElements];
   }
   // Wrapper around operator delete
   static void delete_SvtxVertexMap_v1(void *p) {
      delete (static_cast<::SvtxVertexMap_v1*>(p));
   }
   static void deleteArray_SvtxVertexMap_v1(void *p) {
      delete [] (static_cast<::SvtxVertexMap_v1*>(p));
   }
   static void destruct_SvtxVertexMap_v1(void *p) {
      typedef ::SvtxVertexMap_v1 current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::SvtxVertexMap_v1

namespace ROOT {
   static TClass *maplEunsignedsPintcOSvtxVertexmUgR_Dictionary();
   static void maplEunsignedsPintcOSvtxVertexmUgR_TClassManip(TClass*);
   static void *new_maplEunsignedsPintcOSvtxVertexmUgR(void *p = nullptr);
   static void *newArray_maplEunsignedsPintcOSvtxVertexmUgR(Long_t size, void *p);
   static void delete_maplEunsignedsPintcOSvtxVertexmUgR(void *p);
   static void deleteArray_maplEunsignedsPintcOSvtxVertexmUgR(void *p);
   static void destruct_maplEunsignedsPintcOSvtxVertexmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<unsigned int,SvtxVertex*>*)
   {
      map<unsigned int,SvtxVertex*> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<unsigned int,SvtxVertex*>));
      static ::ROOT::TGenericClassInfo 
         instance("map<unsigned int,SvtxVertex*>", -2, "map", 102,
                  typeid(map<unsigned int,SvtxVertex*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEunsignedsPintcOSvtxVertexmUgR_Dictionary, isa_proxy, 0,
                  sizeof(map<unsigned int,SvtxVertex*>) );
      instance.SetNew(&new_maplEunsignedsPintcOSvtxVertexmUgR);
      instance.SetNewArray(&newArray_maplEunsignedsPintcOSvtxVertexmUgR);
      instance.SetDelete(&delete_maplEunsignedsPintcOSvtxVertexmUgR);
      instance.SetDeleteArray(&deleteArray_maplEunsignedsPintcOSvtxVertexmUgR);
      instance.SetDestructor(&destruct_maplEunsignedsPintcOSvtxVertexmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<unsigned int,SvtxVertex*> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("map<unsigned int,SvtxVertex*>","std::map<unsigned int, SvtxVertex*, std::less<unsigned int>, std::allocator<std::pair<unsigned int const, SvtxVertex*> > >"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const map<unsigned int,SvtxVertex*>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEunsignedsPintcOSvtxVertexmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const map<unsigned int,SvtxVertex*>*>(nullptr))->GetClass();
      maplEunsignedsPintcOSvtxVertexmUgR_TClassManip(theClass);
   return theClass;
   }

   static void maplEunsignedsPintcOSvtxVertexmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEunsignedsPintcOSvtxVertexmUgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) map<unsigned int,SvtxVertex*> : new map<unsigned int,SvtxVertex*>;
   }
   static void *newArray_maplEunsignedsPintcOSvtxVertexmUgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) map<unsigned int,SvtxVertex*>[nElements] : new map<unsigned int,SvtxVertex*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEunsignedsPintcOSvtxVertexmUgR(void *p) {
      delete (static_cast<map<unsigned int,SvtxVertex*>*>(p));
   }
   static void deleteArray_maplEunsignedsPintcOSvtxVertexmUgR(void *p) {
      delete [] (static_cast<map<unsigned int,SvtxVertex*>*>(p));
   }
   static void destruct_maplEunsignedsPintcOSvtxVertexmUgR(void *p) {
      typedef map<unsigned int,SvtxVertex*> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class map<unsigned int,SvtxVertex*>

namespace {
  void TriggerDictionaryInitialization_SvtxVertexMap_v1_Dict_Impl() {
    static const char* headers[] = {
"0",
nullptr
    };
    static const char* includePaths[] = {
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "SvtxVertexMap_v1_Dict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
class SvtxVertexMap_v1;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "SvtxVertexMap_v1_Dict dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
// Tell emacs that this is a C++ source
//  -*- C++ -*-.
#ifndef GLOBALVERTEX_SVTXVERTEXMAPV1_H
#define GLOBALVERTEX_SVTXVERTEXMAPV1_H

#include "SvtxVertex.h"
#include "SvtxVertexMap.h"

#include <cstddef>  // for size_t
#include <iostream>
#include <map>

class PHObject;

class SvtxVertexMap_v1 : public SvtxVertexMap
{
 public:
  SvtxVertexMap_v1() = default;
  SvtxVertexMap_v1(const SvtxVertexMap_v1& vertexmap);
  SvtxVertexMap_v1& operator=(const SvtxVertexMap_v1& vertexmap);
  ~SvtxVertexMap_v1() override;

  void identify(std::ostream& os = std::cout) const override;
  // cppcheck-suppress virtualCallInConstructor
  void Reset() override;
  int isValid() const override { return 1; }
  PHObject* CloneMe() const override { return new SvtxVertexMap_v1(*this); }

  bool empty() const override { return _map.empty(); }
  size_t size() const override { return _map.size(); }
  size_t count(unsigned int idkey) const override { return _map.count(idkey); }
  void clear() override { Reset(); }

  const SvtxVertex* get(unsigned int idkey) const override;
  SvtxVertex* get(unsigned int idkey) override;

  //! Add vertex to container. Note the container takes ownership
  SvtxVertex* insert(SvtxVertex* vertex) override;
  //! legacy interface. Add vertex to container. Note the container does not take ownership
  SvtxVertex* insert_clone(const SvtxVertex* vertex) override;
  size_t erase(unsigned int idkey) override
  {
    delete _map[idkey];
    return _map.erase(idkey);
  }

  ConstIter begin() const override { return _map.begin(); }
  ConstIter find(unsigned int idkey) const override { return _map.find(idkey); }
  ConstIter end() const override { return _map.end(); }

  Iter begin() override { return _map.begin(); }
  Iter find(unsigned int idkey) override { return _map.find(idkey); }
  Iter end() override { return _map.end(); }

 private:
  std::map<unsigned int, SvtxVertex*> _map;

  ClassDefOverride(SvtxVertexMap_v1, 1);
};

#endif  // __SVTXVERTEXMAP_V1_H__

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"SvtxVertexMap_v1", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("SvtxVertexMap_v1_Dict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_SvtxVertexMap_v1_Dict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_SvtxVertexMap_v1_Dict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_SvtxVertexMap_v1_Dict() {
  TriggerDictionaryInitialization_SvtxVertexMap_v1_Dict_Impl();
}
