// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME BbcVertexMap_Dict
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
#include "../BbcVertexMap.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static void delete_BbcVertexMap(void *p);
   static void deleteArray_BbcVertexMap(void *p);
   static void destruct_BbcVertexMap(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BbcVertexMap*)
   {
      ::BbcVertexMap *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BbcVertexMap >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BbcVertexMap", ::BbcVertexMap::Class_Version(), "", 14,
                  typeid(::BbcVertexMap), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BbcVertexMap::Dictionary, isa_proxy, 4,
                  sizeof(::BbcVertexMap) );
      instance.SetDelete(&delete_BbcVertexMap);
      instance.SetDeleteArray(&deleteArray_BbcVertexMap);
      instance.SetDestructor(&destruct_BbcVertexMap);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BbcVertexMap*)
   {
      return GenerateInitInstanceLocal(static_cast<::BbcVertexMap*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::BbcVertexMap*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr BbcVertexMap::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BbcVertexMap::Class_Name()
{
   return "BbcVertexMap";
}

//______________________________________________________________________________
const char *BbcVertexMap::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BbcVertexMap*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BbcVertexMap::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BbcVertexMap*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BbcVertexMap::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BbcVertexMap*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BbcVertexMap::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BbcVertexMap*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void BbcVertexMap::Streamer(TBuffer &R__b)
{
   // Stream an object of class BbcVertexMap.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BbcVertexMap::Class(),this);
   } else {
      R__b.WriteClassBuffer(BbcVertexMap::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_BbcVertexMap(void *p) {
      delete (static_cast<::BbcVertexMap*>(p));
   }
   static void deleteArray_BbcVertexMap(void *p) {
      delete [] (static_cast<::BbcVertexMap*>(p));
   }
   static void destruct_BbcVertexMap(void *p) {
      typedef ::BbcVertexMap current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::BbcVertexMap

namespace {
  void TriggerDictionaryInitialization_BbcVertexMap_Dict_Impl() {
    static const char* headers[] = {
"0",
nullptr
    };
    static const char* includePaths[] = {
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "BbcVertexMap_Dict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
class BbcVertexMap;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "BbcVertexMap_Dict dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#ifndef G4BBC_BBCVERTEXMAP_H
#define G4BBC_BBCVERTEXMAP_H

#include <phool/PHObject.h>

#include <cstddef>  // for size_t
#include <iostream>
#include <map>

class BbcVertex;

class BbcVertexMap : public PHObject
{
 public:
  typedef std::map<unsigned int, BbcVertex*>::const_iterator ConstIter;
  typedef std::map<unsigned int, BbcVertex*>::iterator Iter;

  ~BbcVertexMap() override {}

  void identify(std::ostream& os = std::cout) const override { os << "BbcVertexMap base class" << std::endl; }
  int isValid() const override { return 0; }

  virtual bool empty() const { return true; }
  virtual size_t size() const { return 0; }
  virtual size_t count(unsigned int /*idkey*/) const { return 0; }
  virtual void clear() {}

  virtual const BbcVertex* get(unsigned int /*idkey*/) const { return nullptr; }
  virtual BbcVertex* get(unsigned int /*idkey*/) { return nullptr; }
  virtual BbcVertex* insert(BbcVertex* /*vertex*/) { return nullptr; }
  virtual size_t erase(unsigned int /*idkey*/) { return 0; }

  virtual ConstIter begin() const;
  virtual ConstIter find(unsigned int idkey) const;
  virtual ConstIter end() const;

  virtual Iter begin();
  virtual Iter find(unsigned int idkey);
  virtual Iter end();

 protected:
  BbcVertexMap() {}

 private:
  ClassDefOverride(BbcVertexMap, 1);
};

#endif  // G4BBC_BBCVERTEXMAP_H

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"BbcVertexMap", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("BbcVertexMap_Dict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_BbcVertexMap_Dict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_BbcVertexMap_Dict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_BbcVertexMap_Dict() {
  TriggerDictionaryInitialization_BbcVertexMap_Dict_Impl();
}
