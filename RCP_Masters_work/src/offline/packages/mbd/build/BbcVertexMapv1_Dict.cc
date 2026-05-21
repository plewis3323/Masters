// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME BbcVertexMapv1_Dict
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
#include "../BbcVertexMapv1.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static void *new_BbcVertexMapv1(void *p = nullptr);
   static void *newArray_BbcVertexMapv1(Long_t size, void *p);
   static void delete_BbcVertexMapv1(void *p);
   static void deleteArray_BbcVertexMapv1(void *p);
   static void destruct_BbcVertexMapv1(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BbcVertexMapv1*)
   {
      ::BbcVertexMapv1 *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BbcVertexMapv1 >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BbcVertexMapv1", ::BbcVertexMapv1::Class_Version(), "", 14,
                  typeid(::BbcVertexMapv1), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BbcVertexMapv1::Dictionary, isa_proxy, 4,
                  sizeof(::BbcVertexMapv1) );
      instance.SetNew(&new_BbcVertexMapv1);
      instance.SetNewArray(&newArray_BbcVertexMapv1);
      instance.SetDelete(&delete_BbcVertexMapv1);
      instance.SetDeleteArray(&deleteArray_BbcVertexMapv1);
      instance.SetDestructor(&destruct_BbcVertexMapv1);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BbcVertexMapv1*)
   {
      return GenerateInitInstanceLocal(static_cast<::BbcVertexMapv1*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::BbcVertexMapv1*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr BbcVertexMapv1::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BbcVertexMapv1::Class_Name()
{
   return "BbcVertexMapv1";
}

//______________________________________________________________________________
const char *BbcVertexMapv1::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BbcVertexMapv1*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BbcVertexMapv1::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BbcVertexMapv1*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BbcVertexMapv1::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BbcVertexMapv1*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BbcVertexMapv1::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BbcVertexMapv1*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void BbcVertexMapv1::Streamer(TBuffer &R__b)
{
   // Stream an object of class BbcVertexMapv1.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BbcVertexMapv1::Class(),this);
   } else {
      R__b.WriteClassBuffer(BbcVertexMapv1::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BbcVertexMapv1(void *p) {
      return  p ? new(p) ::BbcVertexMapv1 : new ::BbcVertexMapv1;
   }
   static void *newArray_BbcVertexMapv1(Long_t nElements, void *p) {
      return p ? new(p) ::BbcVertexMapv1[nElements] : new ::BbcVertexMapv1[nElements];
   }
   // Wrapper around operator delete
   static void delete_BbcVertexMapv1(void *p) {
      delete (static_cast<::BbcVertexMapv1*>(p));
   }
   static void deleteArray_BbcVertexMapv1(void *p) {
      delete [] (static_cast<::BbcVertexMapv1*>(p));
   }
   static void destruct_BbcVertexMapv1(void *p) {
      typedef ::BbcVertexMapv1 current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::BbcVertexMapv1

namespace ROOT {
   static TClass *maplEunsignedsPintcOBbcVertexmUgR_Dictionary();
   static void maplEunsignedsPintcOBbcVertexmUgR_TClassManip(TClass*);
   static void *new_maplEunsignedsPintcOBbcVertexmUgR(void *p = nullptr);
   static void *newArray_maplEunsignedsPintcOBbcVertexmUgR(Long_t size, void *p);
   static void delete_maplEunsignedsPintcOBbcVertexmUgR(void *p);
   static void deleteArray_maplEunsignedsPintcOBbcVertexmUgR(void *p);
   static void destruct_maplEunsignedsPintcOBbcVertexmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<unsigned int,BbcVertex*>*)
   {
      map<unsigned int,BbcVertex*> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<unsigned int,BbcVertex*>));
      static ::ROOT::TGenericClassInfo 
         instance("map<unsigned int,BbcVertex*>", -2, "map", 102,
                  typeid(map<unsigned int,BbcVertex*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEunsignedsPintcOBbcVertexmUgR_Dictionary, isa_proxy, 0,
                  sizeof(map<unsigned int,BbcVertex*>) );
      instance.SetNew(&new_maplEunsignedsPintcOBbcVertexmUgR);
      instance.SetNewArray(&newArray_maplEunsignedsPintcOBbcVertexmUgR);
      instance.SetDelete(&delete_maplEunsignedsPintcOBbcVertexmUgR);
      instance.SetDeleteArray(&deleteArray_maplEunsignedsPintcOBbcVertexmUgR);
      instance.SetDestructor(&destruct_maplEunsignedsPintcOBbcVertexmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<unsigned int,BbcVertex*> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("map<unsigned int,BbcVertex*>","std::map<unsigned int, BbcVertex*, std::less<unsigned int>, std::allocator<std::pair<unsigned int const, BbcVertex*> > >"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const map<unsigned int,BbcVertex*>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEunsignedsPintcOBbcVertexmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const map<unsigned int,BbcVertex*>*>(nullptr))->GetClass();
      maplEunsignedsPintcOBbcVertexmUgR_TClassManip(theClass);
   return theClass;
   }

   static void maplEunsignedsPintcOBbcVertexmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEunsignedsPintcOBbcVertexmUgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) map<unsigned int,BbcVertex*> : new map<unsigned int,BbcVertex*>;
   }
   static void *newArray_maplEunsignedsPintcOBbcVertexmUgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) map<unsigned int,BbcVertex*>[nElements] : new map<unsigned int,BbcVertex*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEunsignedsPintcOBbcVertexmUgR(void *p) {
      delete (static_cast<map<unsigned int,BbcVertex*>*>(p));
   }
   static void deleteArray_maplEunsignedsPintcOBbcVertexmUgR(void *p) {
      delete [] (static_cast<map<unsigned int,BbcVertex*>*>(p));
   }
   static void destruct_maplEunsignedsPintcOBbcVertexmUgR(void *p) {
      typedef map<unsigned int,BbcVertex*> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class map<unsigned int,BbcVertex*>

namespace {
  void TriggerDictionaryInitialization_BbcVertexMapv1_Dict_Impl() {
    static const char* headers[] = {
"0",
nullptr
    };
    static const char* includePaths[] = {
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "BbcVertexMapv1_Dict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
class BbcVertexMapv1;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "BbcVertexMapv1_Dict dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#ifndef G4BBC_BBCVERTEXMAPV1_H
#define G4BBC_BBCVERTEXMAPV1_H

#include "BbcVertexMap.h"

#include "BbcVertex.h"

#include <cstddef>  // for size_t
#include <iostream>
#include <map>

class BbcVertexMapv1 : public BbcVertexMap
{
 public:
  BbcVertexMapv1() = default;
  ~BbcVertexMapv1() override;

  void identify(std::ostream& os = std::cout) const override;
  void Reset() override { clear(); }
  int isValid() const override { return 1; }

  bool empty() const override { return _map.empty(); }
  size_t size() const override { return _map.size(); }
  size_t count(unsigned int idkey) const override { return _map.count(idkey); }
  void clear() override;

  const BbcVertex* get(unsigned int idkey) const override;
  BbcVertex* get(unsigned int idkey) override;
  BbcVertex* insert(BbcVertex* vertex) override;
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
  std::map<unsigned int, BbcVertex*> _map;

  ClassDefOverride(BbcVertexMapv1, 1);
};

#endif  // G4BBC_BBCVERTEXMAPV1_H

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"BbcVertexMapv1", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("BbcVertexMapv1_Dict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_BbcVertexMapv1_Dict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_BbcVertexMapv1_Dict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_BbcVertexMapv1_Dict() {
  TriggerDictionaryInitialization_BbcVertexMapv1_Dict_Impl();
}
