// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME GlobalVertexMapv1_Dict
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
#include "../GlobalVertexMapv1.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static void *new_GlobalVertexMapv1(void *p = nullptr);
   static void *newArray_GlobalVertexMapv1(Long_t size, void *p);
   static void delete_GlobalVertexMapv1(void *p);
   static void deleteArray_GlobalVertexMapv1(void *p);
   static void destruct_GlobalVertexMapv1(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::GlobalVertexMapv1*)
   {
      ::GlobalVertexMapv1 *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::GlobalVertexMapv1 >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("GlobalVertexMapv1", ::GlobalVertexMapv1::Class_Version(), "", 16,
                  typeid(::GlobalVertexMapv1), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::GlobalVertexMapv1::Dictionary, isa_proxy, 4,
                  sizeof(::GlobalVertexMapv1) );
      instance.SetNew(&new_GlobalVertexMapv1);
      instance.SetNewArray(&newArray_GlobalVertexMapv1);
      instance.SetDelete(&delete_GlobalVertexMapv1);
      instance.SetDeleteArray(&deleteArray_GlobalVertexMapv1);
      instance.SetDestructor(&destruct_GlobalVertexMapv1);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::GlobalVertexMapv1*)
   {
      return GenerateInitInstanceLocal(static_cast<::GlobalVertexMapv1*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::GlobalVertexMapv1*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr GlobalVertexMapv1::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *GlobalVertexMapv1::Class_Name()
{
   return "GlobalVertexMapv1";
}

//______________________________________________________________________________
const char *GlobalVertexMapv1::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::GlobalVertexMapv1*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int GlobalVertexMapv1::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::GlobalVertexMapv1*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *GlobalVertexMapv1::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::GlobalVertexMapv1*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *GlobalVertexMapv1::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::GlobalVertexMapv1*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void GlobalVertexMapv1::Streamer(TBuffer &R__b)
{
   // Stream an object of class GlobalVertexMapv1.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(GlobalVertexMapv1::Class(),this);
   } else {
      R__b.WriteClassBuffer(GlobalVertexMapv1::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_GlobalVertexMapv1(void *p) {
      return  p ? new(p) ::GlobalVertexMapv1 : new ::GlobalVertexMapv1;
   }
   static void *newArray_GlobalVertexMapv1(Long_t nElements, void *p) {
      return p ? new(p) ::GlobalVertexMapv1[nElements] : new ::GlobalVertexMapv1[nElements];
   }
   // Wrapper around operator delete
   static void delete_GlobalVertexMapv1(void *p) {
      delete (static_cast<::GlobalVertexMapv1*>(p));
   }
   static void deleteArray_GlobalVertexMapv1(void *p) {
      delete [] (static_cast<::GlobalVertexMapv1*>(p));
   }
   static void destruct_GlobalVertexMapv1(void *p) {
      typedef ::GlobalVertexMapv1 current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::GlobalVertexMapv1

namespace ROOT {
   static TClass *maplEunsignedsPintcOGlobalVertexmUgR_Dictionary();
   static void maplEunsignedsPintcOGlobalVertexmUgR_TClassManip(TClass*);
   static void *new_maplEunsignedsPintcOGlobalVertexmUgR(void *p = nullptr);
   static void *newArray_maplEunsignedsPintcOGlobalVertexmUgR(Long_t size, void *p);
   static void delete_maplEunsignedsPintcOGlobalVertexmUgR(void *p);
   static void deleteArray_maplEunsignedsPintcOGlobalVertexmUgR(void *p);
   static void destruct_maplEunsignedsPintcOGlobalVertexmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<unsigned int,GlobalVertex*>*)
   {
      map<unsigned int,GlobalVertex*> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<unsigned int,GlobalVertex*>));
      static ::ROOT::TGenericClassInfo 
         instance("map<unsigned int,GlobalVertex*>", -2, "map", 102,
                  typeid(map<unsigned int,GlobalVertex*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEunsignedsPintcOGlobalVertexmUgR_Dictionary, isa_proxy, 0,
                  sizeof(map<unsigned int,GlobalVertex*>) );
      instance.SetNew(&new_maplEunsignedsPintcOGlobalVertexmUgR);
      instance.SetNewArray(&newArray_maplEunsignedsPintcOGlobalVertexmUgR);
      instance.SetDelete(&delete_maplEunsignedsPintcOGlobalVertexmUgR);
      instance.SetDeleteArray(&deleteArray_maplEunsignedsPintcOGlobalVertexmUgR);
      instance.SetDestructor(&destruct_maplEunsignedsPintcOGlobalVertexmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<unsigned int,GlobalVertex*> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("map<unsigned int,GlobalVertex*>","std::map<unsigned int, GlobalVertex*, std::less<unsigned int>, std::allocator<std::pair<unsigned int const, GlobalVertex*> > >"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const map<unsigned int,GlobalVertex*>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEunsignedsPintcOGlobalVertexmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const map<unsigned int,GlobalVertex*>*>(nullptr))->GetClass();
      maplEunsignedsPintcOGlobalVertexmUgR_TClassManip(theClass);
   return theClass;
   }

   static void maplEunsignedsPintcOGlobalVertexmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEunsignedsPintcOGlobalVertexmUgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) map<unsigned int,GlobalVertex*> : new map<unsigned int,GlobalVertex*>;
   }
   static void *newArray_maplEunsignedsPintcOGlobalVertexmUgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) map<unsigned int,GlobalVertex*>[nElements] : new map<unsigned int,GlobalVertex*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEunsignedsPintcOGlobalVertexmUgR(void *p) {
      delete (static_cast<map<unsigned int,GlobalVertex*>*>(p));
   }
   static void deleteArray_maplEunsignedsPintcOGlobalVertexmUgR(void *p) {
      delete [] (static_cast<map<unsigned int,GlobalVertex*>*>(p));
   }
   static void destruct_maplEunsignedsPintcOGlobalVertexmUgR(void *p) {
      typedef map<unsigned int,GlobalVertex*> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class map<unsigned int,GlobalVertex*>

namespace {
  void TriggerDictionaryInitialization_GlobalVertexMapv1_Dict_Impl() {
    static const char* headers[] = {
"0",
nullptr
    };
    static const char* includePaths[] = {
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "GlobalVertexMapv1_Dict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
class GlobalVertexMapv1;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "GlobalVertexMapv1_Dict dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
// Tell emacs that this is a C++ source
//  -*- C++ -*-.
#ifndef GLOBALVERTEX_GLOBALVERTEXMAPV1_H
#define GLOBALVERTEX_GLOBALVERTEXMAPV1_H

#include "GlobalVertexMap.h"

#include "GlobalVertex.h"

#include <cstddef>  // for size_t
#include <iostream>
#include <map>

class GlobalVertexMapv1 : public GlobalVertexMap
{
 public:
  GlobalVertexMapv1() = default;
  ~GlobalVertexMapv1() override;

  void identify(std::ostream& os = std::cout) const override;
  void Reset() override { clear(); }
  int isValid() const override { return _map.size(); }
  PHObject* CloneMe() const override { return new GlobalVertexMapv1(*this); }
  void CopyTo(GlobalVertexMap*) override;

  bool empty() const override { return _map.empty(); }
  size_t size() const override { return _map.size(); }
  size_t count(unsigned int idkey) const override { return _map.count(idkey); }
  // cppcheck-suppress virtualCallInConstructor
  void clear() override;

  const GlobalVertex* get(unsigned int idkey) const override;
  GlobalVertex* get(unsigned int idkey) override;
  GlobalVertex* insert(GlobalVertex* vertex) override;
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
  std::map<unsigned int, GlobalVertex*> _map;

  ClassDefOverride(GlobalVertexMapv1, 1);
};

#endif  // G4VERTEX_GLOBALVERTEXMAPv1_H

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"GlobalVertexMapv1", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("GlobalVertexMapv1_Dict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_GlobalVertexMapv1_Dict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_GlobalVertexMapv1_Dict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_GlobalVertexMapv1_Dict() {
  TriggerDictionaryInitialization_GlobalVertexMapv1_Dict_Impl();
}
