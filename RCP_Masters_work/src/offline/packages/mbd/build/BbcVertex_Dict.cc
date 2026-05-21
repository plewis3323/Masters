// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME BbcVertex_Dict
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
#include "../BbcVertex.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static void delete_BbcVertex(void *p);
   static void deleteArray_BbcVertex(void *p);
   static void destruct_BbcVertex(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BbcVertex*)
   {
      ::BbcVertex *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BbcVertex >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BbcVertex", ::BbcVertex::Class_Version(), "", 11,
                  typeid(::BbcVertex), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BbcVertex::Dictionary, isa_proxy, 4,
                  sizeof(::BbcVertex) );
      instance.SetDelete(&delete_BbcVertex);
      instance.SetDeleteArray(&deleteArray_BbcVertex);
      instance.SetDestructor(&destruct_BbcVertex);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BbcVertex*)
   {
      return GenerateInitInstanceLocal(static_cast<::BbcVertex*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::BbcVertex*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr BbcVertex::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BbcVertex::Class_Name()
{
   return "BbcVertex";
}

//______________________________________________________________________________
const char *BbcVertex::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BbcVertex*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BbcVertex::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BbcVertex*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BbcVertex::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BbcVertex*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BbcVertex::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BbcVertex*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void BbcVertex::Streamer(TBuffer &R__b)
{
   // Stream an object of class BbcVertex.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BbcVertex::Class(),this);
   } else {
      R__b.WriteClassBuffer(BbcVertex::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_BbcVertex(void *p) {
      delete (static_cast<::BbcVertex*>(p));
   }
   static void deleteArray_BbcVertex(void *p) {
      delete [] (static_cast<::BbcVertex*>(p));
   }
   static void destruct_BbcVertex(void *p) {
      typedef ::BbcVertex current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::BbcVertex

namespace {
  void TriggerDictionaryInitialization_BbcVertex_Dict_Impl() {
    static const char* headers[] = {
"0",
nullptr
    };
    static const char* includePaths[] = {
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "BbcVertex_Dict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
class BbcVertex;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "BbcVertex_Dict dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#ifndef G4BBC_BBCVERTEX_H
#define G4BBC_BBCVERTEX_H

#include <phool/PHObject.h>

#include <iostream>
#include <limits>

class BbcVertex : public PHObject
{
 public:
  ~BbcVertex() override = default;

  // PHObject virtual overloads

  void identify(std::ostream& os = std::cout) const override { os << "BbcVertex base class" << std::endl; }
  PHObject* CloneMe() const override { return nullptr; }
  int isValid() const override { return 0; }

  // vertex info

  virtual unsigned int get_id() const { return 0xFFFFFFFF; }
  virtual void set_id(unsigned int) {}

  virtual float get_t() const { return std::numeric_limits<float>::quiet_NaN(); }
  virtual void set_t(float) {}

  virtual float get_t_err() const { return std::numeric_limits<float>::quiet_NaN(); }
  virtual void set_t_err(float) {}

  virtual float get_z() const { return std::numeric_limits<float>::quiet_NaN(); }
  virtual void set_z(float) {}

  virtual float get_z_err() const { return std::numeric_limits<float>::quiet_NaN(); }
  virtual void set_z_err(float) {}

  virtual void set_bbc_ns(int, int, float, float) {}
  virtual int get_bbc_npmt(int) const { return std::numeric_limits<int>::max(); }
  virtual float get_bbc_q(int) const { return std::numeric_limits<float>::quiet_NaN(); }
  virtual float get_bbc_t(int) const { return std::numeric_limits<float>::quiet_NaN(); }

 protected:
  BbcVertex() {}

 private:
  ClassDefOverride(BbcVertex, 1);
};

#endif

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"BbcVertex", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("BbcVertex_Dict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_BbcVertex_Dict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_BbcVertex_Dict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_BbcVertex_Dict() {
  TriggerDictionaryInitialization_BbcVertex_Dict_Impl();
}
