// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME GlobalVertexMap_Dict
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
#include "../GlobalVertexMap.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static void delete_GlobalVertexMap(void *p);
   static void deleteArray_GlobalVertexMap(void *p);
   static void destruct_GlobalVertexMap(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::GlobalVertexMap*)
   {
      ::GlobalVertexMap *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::GlobalVertexMap >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("GlobalVertexMap", ::GlobalVertexMap::Class_Version(), "", 15,
                  typeid(::GlobalVertexMap), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::GlobalVertexMap::Dictionary, isa_proxy, 4,
                  sizeof(::GlobalVertexMap) );
      instance.SetDelete(&delete_GlobalVertexMap);
      instance.SetDeleteArray(&deleteArray_GlobalVertexMap);
      instance.SetDestructor(&destruct_GlobalVertexMap);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::GlobalVertexMap*)
   {
      return GenerateInitInstanceLocal(static_cast<::GlobalVertexMap*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::GlobalVertexMap*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr GlobalVertexMap::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *GlobalVertexMap::Class_Name()
{
   return "GlobalVertexMap";
}

//______________________________________________________________________________
const char *GlobalVertexMap::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::GlobalVertexMap*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int GlobalVertexMap::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::GlobalVertexMap*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *GlobalVertexMap::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::GlobalVertexMap*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *GlobalVertexMap::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::GlobalVertexMap*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void GlobalVertexMap::Streamer(TBuffer &R__b)
{
   // Stream an object of class GlobalVertexMap.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(GlobalVertexMap::Class(),this);
   } else {
      R__b.WriteClassBuffer(GlobalVertexMap::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_GlobalVertexMap(void *p) {
      delete (static_cast<::GlobalVertexMap*>(p));
   }
   static void deleteArray_GlobalVertexMap(void *p) {
      delete [] (static_cast<::GlobalVertexMap*>(p));
   }
   static void destruct_GlobalVertexMap(void *p) {
      typedef ::GlobalVertexMap current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::GlobalVertexMap

namespace {
  void TriggerDictionaryInitialization_GlobalVertexMap_Dict_Impl() {
    static const char* headers[] = {
"0",
nullptr
    };
    static const char* includePaths[] = {
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "GlobalVertexMap_Dict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
class GlobalVertexMap;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "GlobalVertexMap_Dict dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
// Tell emacs that this is a C++ source
//  -*- C++ -*-.
#ifndef GLOBALVERTEX_GLOBALVERTEXMAP_H
#define GLOBALVERTEX_GLOBALVERTEXMAP_H

#include <phool/PHObject.h>

#include <iostream>
#include <map>

class GlobalVertex;

class GlobalVertexMap : public PHObject
{
 public:
  typedef std::map<unsigned int, GlobalVertex*>::const_iterator ConstIter;
  typedef std::map<unsigned int, GlobalVertex*>::iterator Iter;

  ~GlobalVertexMap() override {}

  void identify(std::ostream& os = std::cout) const override { os << "GlobalVertexMap base class" << std::endl; }
  int isValid() const override { return 0; }
  virtual void CopyTo(GlobalVertexMap*) { return; }

  virtual bool empty() const { return true; }
  virtual size_t size() const { return 0; }
  virtual size_t count(unsigned int /*idkey*/) const { return 0; }
  virtual void clear() {}

  virtual const GlobalVertex* get(unsigned int /*idkey*/) const { return nullptr; }
  virtual GlobalVertex* get(unsigned int /*idkey*/) { return nullptr; }
  virtual GlobalVertex* insert(GlobalVertex* /*vertex*/) { return nullptr; }
  virtual size_t erase(unsigned int /*idkey*/) { return 0; }

  virtual ConstIter begin() const;
  virtual ConstIter find(unsigned int idkey) const;
  virtual ConstIter end() const;

  virtual Iter begin();
  virtual Iter find(unsigned int idkey);
  virtual Iter end();

 protected:
  GlobalVertexMap() {}

 private:
  ClassDefOverride(GlobalVertexMap, 1);
};

#endif  // G4VERTEX_GLOBALVERTEXMAP_H

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"GlobalVertexMap", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("GlobalVertexMap_Dict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_GlobalVertexMap_Dict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_GlobalVertexMap_Dict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_GlobalVertexMap_Dict() {
  TriggerDictionaryInitialization_GlobalVertexMap_Dict_Impl();
}
