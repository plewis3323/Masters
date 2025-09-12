// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME MbdVertexMap_Dict
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
#include "../MbdVertexMap.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static void delete_MbdVertexMap(void *p);
   static void deleteArray_MbdVertexMap(void *p);
   static void destruct_MbdVertexMap(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::MbdVertexMap*)
   {
      ::MbdVertexMap *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::MbdVertexMap >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("MbdVertexMap", ::MbdVertexMap::Class_Version(), "", 16,
                  typeid(::MbdVertexMap), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::MbdVertexMap::Dictionary, isa_proxy, 4,
                  sizeof(::MbdVertexMap) );
      instance.SetDelete(&delete_MbdVertexMap);
      instance.SetDeleteArray(&deleteArray_MbdVertexMap);
      instance.SetDestructor(&destruct_MbdVertexMap);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::MbdVertexMap*)
   {
      return GenerateInitInstanceLocal(static_cast<::MbdVertexMap*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::MbdVertexMap*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr MbdVertexMap::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *MbdVertexMap::Class_Name()
{
   return "MbdVertexMap";
}

//______________________________________________________________________________
const char *MbdVertexMap::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::MbdVertexMap*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int MbdVertexMap::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::MbdVertexMap*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *MbdVertexMap::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::MbdVertexMap*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *MbdVertexMap::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::MbdVertexMap*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void MbdVertexMap::Streamer(TBuffer &R__b)
{
   // Stream an object of class MbdVertexMap.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(MbdVertexMap::Class(),this);
   } else {
      R__b.WriteClassBuffer(MbdVertexMap::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_MbdVertexMap(void *p) {
      delete (static_cast<::MbdVertexMap*>(p));
   }
   static void deleteArray_MbdVertexMap(void *p) {
      delete [] (static_cast<::MbdVertexMap*>(p));
   }
   static void destruct_MbdVertexMap(void *p) {
      typedef ::MbdVertexMap current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::MbdVertexMap

namespace {
  void TriggerDictionaryInitialization_MbdVertexMap_Dict_Impl() {
    static const char* headers[] = {
"0",
nullptr
    };
    static const char* includePaths[] = {
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "MbdVertexMap_Dict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
class MbdVertexMap;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "MbdVertexMap_Dict dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
// Tell emacs that this is a C++ source
//  -*- C++ -*-.
#ifndef GLOBALVERTEX_MBDVERTEXMAP_H
#define GLOBALVERTEX_MBDVERTEXMAP_H

#include <phool/PHObject.h>

#include <cstddef>  // for size_t
#include <iostream>
#include <map>

class MbdVertex;

class MbdVertexMap : public PHObject
{
 public:
  typedef std::map<unsigned int, MbdVertex*>::const_iterator ConstIter;
  typedef std::map<unsigned int, MbdVertex*>::iterator Iter;

  ~MbdVertexMap() override = default;

  void identify(std::ostream& os = std::cout) const override { os << "MbdVertexMap base class" << std::endl; }
  int isValid() const override { return 0; }

  virtual bool empty() const { return true; }
  virtual size_t size() const { return 0; }
  virtual size_t count(unsigned int /*idkey*/) const { return 0; }
  virtual void clear() {}

  virtual const MbdVertex* get(unsigned int /*idkey*/) const { return nullptr; }
  virtual MbdVertex* get(unsigned int /*idkey*/) { return nullptr; }
  virtual MbdVertex* insert(MbdVertex* /*vertex*/) { return nullptr; }
  virtual size_t erase(unsigned int /*idkey*/) { return 0; }

  virtual ConstIter begin() const;
  virtual ConstIter find(unsigned int idkey) const;
  virtual ConstIter end() const;

  virtual Iter begin();
  virtual Iter find(unsigned int idkey);
  virtual Iter end();

 protected:
  MbdVertexMap() = default;

 private:
  ClassDefOverride(MbdVertexMap, 1);
};

#endif  // G4MBD_MBDVERTEXMAP_H

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"MbdVertexMap", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("MbdVertexMap_Dict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_MbdVertexMap_Dict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_MbdVertexMap_Dict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_MbdVertexMap_Dict() {
  TriggerDictionaryInitialization_MbdVertexMap_Dict_Impl();
}
