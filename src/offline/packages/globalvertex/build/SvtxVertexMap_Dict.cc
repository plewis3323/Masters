// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME SvtxVertexMap_Dict
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
#include "../SvtxVertexMap.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static void delete_SvtxVertexMap(void *p);
   static void deleteArray_SvtxVertexMap(void *p);
   static void destruct_SvtxVertexMap(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::SvtxVertexMap*)
   {
      ::SvtxVertexMap *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::SvtxVertexMap >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("SvtxVertexMap", ::SvtxVertexMap::Class_Version(), "", 16,
                  typeid(::SvtxVertexMap), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::SvtxVertexMap::Dictionary, isa_proxy, 4,
                  sizeof(::SvtxVertexMap) );
      instance.SetDelete(&delete_SvtxVertexMap);
      instance.SetDeleteArray(&deleteArray_SvtxVertexMap);
      instance.SetDestructor(&destruct_SvtxVertexMap);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::SvtxVertexMap*)
   {
      return GenerateInitInstanceLocal(static_cast<::SvtxVertexMap*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::SvtxVertexMap*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr SvtxVertexMap::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *SvtxVertexMap::Class_Name()
{
   return "SvtxVertexMap";
}

//______________________________________________________________________________
const char *SvtxVertexMap::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::SvtxVertexMap*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int SvtxVertexMap::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::SvtxVertexMap*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *SvtxVertexMap::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::SvtxVertexMap*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *SvtxVertexMap::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::SvtxVertexMap*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void SvtxVertexMap::Streamer(TBuffer &R__b)
{
   // Stream an object of class SvtxVertexMap.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(SvtxVertexMap::Class(),this);
   } else {
      R__b.WriteClassBuffer(SvtxVertexMap::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_SvtxVertexMap(void *p) {
      delete (static_cast<::SvtxVertexMap*>(p));
   }
   static void deleteArray_SvtxVertexMap(void *p) {
      delete [] (static_cast<::SvtxVertexMap*>(p));
   }
   static void destruct_SvtxVertexMap(void *p) {
      typedef ::SvtxVertexMap current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::SvtxVertexMap

namespace {
  void TriggerDictionaryInitialization_SvtxVertexMap_Dict_Impl() {
    static const char* headers[] = {
"0",
nullptr
    };
    static const char* includePaths[] = {
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "SvtxVertexMap_Dict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
class SvtxVertexMap;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "SvtxVertexMap_Dict dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
// Tell emacs that this is a C++ source
//  -*- C++ -*-.
#ifndef GLOBALVERTEX_SVTXVERTEXMAP_H
#define GLOBALVERTEX_SVTXVERTEXMAP_H

#include "SvtxVertex.h"

#include <phool/PHObject.h>

#include <cstddef>
#include <iostream>
#include <map>

class SvtxVertexMap : public PHObject
{
 public:
  typedef std::map<unsigned int, SvtxVertex*> VertexMap;
  typedef std::map<unsigned int, SvtxVertex*>::const_iterator ConstIter;
  typedef std::map<unsigned int, SvtxVertex*>::iterator Iter;

  ~SvtxVertexMap() override {}

  void identify(std::ostream& os = std::cout) const override
  {
    os << "SvtxVertexMap base class" << std::endl;
  }
  int isValid() const override { return 0; }
  PHObject* CloneMe() const override { return nullptr; }

  virtual bool empty() const { return true; }
  virtual size_t size() const { return 0; }
  virtual size_t count(unsigned int /*idkey*/) const { return 0; }
  virtual void clear() {}

  virtual const SvtxVertex* get(unsigned int /*idkey*/) const { return nullptr; }
  virtual SvtxVertex* get(unsigned int /*idkey*/) { return nullptr; }

  //! Add vertex to container. Note the container take to ownership
  virtual SvtxVertex* insert(SvtxVertex* /*cluster*/) { return nullptr; }
  //! legacy interface. Add vertex to container. Note the container does not take ownership
  virtual SvtxVertex* insert_clone(const SvtxVertex* /*vertex*/) { return nullptr; }

  virtual size_t erase(unsigned int /*idkey*/) { return 0; }

  virtual ConstIter begin() const;
  virtual ConstIter find(unsigned int idkey) const;
  virtual ConstIter end() const;

  virtual Iter begin();
  virtual Iter find(unsigned int idkey);
  virtual Iter end();

 protected:
  SvtxVertexMap() {}

 private:
  ClassDefOverride(SvtxVertexMap, 1);
};

#endif

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"SvtxVertexMap", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("SvtxVertexMap_Dict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_SvtxVertexMap_Dict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_SvtxVertexMap_Dict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_SvtxVertexMap_Dict() {
  TriggerDictionaryInitialization_SvtxVertexMap_Dict_Impl();
}
