// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME MbdVertex_Dict
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
#include "../MbdVertex.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static void delete_MbdVertex(void *p);
   static void deleteArray_MbdVertex(void *p);
   static void destruct_MbdVertex(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::MbdVertex*)
   {
      ::MbdVertex *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::MbdVertex >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("MbdVertex", ::MbdVertex::Class_Version(), "", 13,
                  typeid(::MbdVertex), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::MbdVertex::Dictionary, isa_proxy, 4,
                  sizeof(::MbdVertex) );
      instance.SetDelete(&delete_MbdVertex);
      instance.SetDeleteArray(&deleteArray_MbdVertex);
      instance.SetDestructor(&destruct_MbdVertex);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::MbdVertex*)
   {
      return GenerateInitInstanceLocal(static_cast<::MbdVertex*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::MbdVertex*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr MbdVertex::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *MbdVertex::Class_Name()
{
   return "MbdVertex";
}

//______________________________________________________________________________
const char *MbdVertex::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::MbdVertex*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int MbdVertex::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::MbdVertex*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *MbdVertex::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::MbdVertex*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *MbdVertex::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::MbdVertex*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void MbdVertex::Streamer(TBuffer &R__b)
{
   // Stream an object of class MbdVertex.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(MbdVertex::Class(),this);
   } else {
      R__b.WriteClassBuffer(MbdVertex::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_MbdVertex(void *p) {
      delete (static_cast<::MbdVertex*>(p));
   }
   static void deleteArray_MbdVertex(void *p) {
      delete [] (static_cast<::MbdVertex*>(p));
   }
   static void destruct_MbdVertex(void *p) {
      typedef ::MbdVertex current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::MbdVertex

namespace {
  void TriggerDictionaryInitialization_MbdVertex_Dict_Impl() {
    static const char* headers[] = {
"0",
nullptr
    };
    static const char* includePaths[] = {
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "MbdVertex_Dict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
class MbdVertex;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "MbdVertex_Dict dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
// Tell emacs that this is a C++ source
//  -*- C++ -*-.
#ifndef GLOBALVERTEX_MBDVERTEX_H
#define GLOBALVERTEX_MBDVERTEX_H

#include "Vertex.h"

#include <cmath>
#include <iostream>

class MbdVertex : public Vertex
{
 public:
  ~MbdVertex() override {}

  // PHObject virtual overloads

  void identify(std::ostream& os = std::cout) const override { os << "MbdVertex base class" << std::endl; }
  PHObject* CloneMe() const override { return nullptr; }
  int isValid() const override { return 0; }

  // vertex info

  virtual unsigned int get_id() const override { return std::numeric_limits<unsigned int>::max(); }
  virtual void set_id(unsigned int) override {}

  virtual float get_t() const override { return std::numeric_limits<float>::quiet_NaN(); }
  virtual void set_t(float) override {}

  virtual float get_t_err() const override { return std::numeric_limits<float>::quiet_NaN(); }
  virtual void set_t_err(float) override {}

  virtual float get_z() const override { return std::numeric_limits<float>::quiet_NaN(); }
  virtual void set_z(float) override {}

  virtual float get_z_err() const override { return std::numeric_limits<float>::quiet_NaN(); }
  virtual void set_z_err(float) override {}

  virtual unsigned int get_beam_crossing() const override { return std::numeric_limits<unsigned int>::max(); }
  virtual void set_beam_crossing(unsigned int) override {}

  virtual void set_bbc_ns(int, int, float, float) override {}
  virtual int get_bbc_npmt(int) const override { return std::numeric_limits<int>::max(); }
  virtual float get_bbc_q(int) const override { return std::numeric_limits<float>::quiet_NaN(); }
  virtual float get_bbc_t(int) const override { return std::numeric_limits<float>::quiet_NaN(); }

 protected:
  MbdVertex() {}

 private:
  ClassDefOverride(MbdVertex, 1);
};

#endif

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"MbdVertex", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("MbdVertex_Dict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_MbdVertex_Dict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_MbdVertex_Dict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_MbdVertex_Dict() {
  TriggerDictionaryInitialization_MbdVertex_Dict_Impl();
}
