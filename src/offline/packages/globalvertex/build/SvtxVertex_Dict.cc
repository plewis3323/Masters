// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME SvtxVertex_Dict
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
#include "../SvtxVertex.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static void *new_SvtxVertex(void *p = nullptr);
   static void *newArray_SvtxVertex(Long_t size, void *p);
   static void delete_SvtxVertex(void *p);
   static void deleteArray_SvtxVertex(void *p);
   static void destruct_SvtxVertex(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::SvtxVertex*)
   {
      ::SvtxVertex *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::SvtxVertex >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("SvtxVertex", ::SvtxVertex::Class_Version(), "", 14,
                  typeid(::SvtxVertex), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::SvtxVertex::Dictionary, isa_proxy, 4,
                  sizeof(::SvtxVertex) );
      instance.SetNew(&new_SvtxVertex);
      instance.SetNewArray(&newArray_SvtxVertex);
      instance.SetDelete(&delete_SvtxVertex);
      instance.SetDeleteArray(&deleteArray_SvtxVertex);
      instance.SetDestructor(&destruct_SvtxVertex);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::SvtxVertex*)
   {
      return GenerateInitInstanceLocal(static_cast<::SvtxVertex*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::SvtxVertex*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr SvtxVertex::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *SvtxVertex::Class_Name()
{
   return "SvtxVertex";
}

//______________________________________________________________________________
const char *SvtxVertex::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::SvtxVertex*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int SvtxVertex::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::SvtxVertex*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *SvtxVertex::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::SvtxVertex*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *SvtxVertex::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::SvtxVertex*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void SvtxVertex::Streamer(TBuffer &R__b)
{
   // Stream an object of class SvtxVertex.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(SvtxVertex::Class(),this);
   } else {
      R__b.WriteClassBuffer(SvtxVertex::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_SvtxVertex(void *p) {
      return  p ? new(p) ::SvtxVertex : new ::SvtxVertex;
   }
   static void *newArray_SvtxVertex(Long_t nElements, void *p) {
      return p ? new(p) ::SvtxVertex[nElements] : new ::SvtxVertex[nElements];
   }
   // Wrapper around operator delete
   static void delete_SvtxVertex(void *p) {
      delete (static_cast<::SvtxVertex*>(p));
   }
   static void deleteArray_SvtxVertex(void *p) {
      delete [] (static_cast<::SvtxVertex*>(p));
   }
   static void destruct_SvtxVertex(void *p) {
      typedef ::SvtxVertex current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::SvtxVertex

namespace {
  void TriggerDictionaryInitialization_SvtxVertex_Dict_Impl() {
    static const char* headers[] = {
"0",
nullptr
    };
    static const char* includePaths[] = {
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "SvtxVertex_Dict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
class SvtxVertex;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "SvtxVertex_Dict dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
// Tell emacs that this is a C++ source
//  -*- C++ -*-.
#ifndef GLOBALVERTEX_SVTXVERTEX_H
#define GLOBALVERTEX_SVTXVERTEX_H

#include "Vertex.h"

#include <cstddef>
#include <iostream>
#include <limits>

class SvtxVertex : public Vertex
{
 public:
  ~SvtxVertex() override = default;

  // PHObject virtual overloads

  void identify(std::ostream& os = std::cout) const override
  {
    os << "SvtxVertex base class" << std::endl;
  }

  int isValid() const override { return 0; }
  PHObject* CloneMe() const override { return nullptr; }

  // vertex info

  virtual unsigned int get_id() const override { return std::numeric_limits<unsigned int>::max(); }
  virtual void set_id(unsigned int) override {}

  virtual float get_t0() const override { return get_t(); }
  virtual void set_t0(float t0) override { set_t(t0); }

  virtual float get_t() const override { return std::numeric_limits<float>::quiet_NaN(); }
  virtual void set_t(float) override {}

  virtual float get_x() const override { return std::numeric_limits<float>::quiet_NaN(); }
  virtual void set_x(float) override {}

  virtual float get_y() const override { return std::numeric_limits<float>::quiet_NaN(); }
  virtual void set_y(float) override {}

  virtual float get_z() const override { return std::numeric_limits<float>::quiet_NaN(); }
  virtual void set_z(float) override {}

  virtual float get_chisq() const override { return std::numeric_limits<float>::quiet_NaN(); }
  virtual void set_chisq(float) override {}

  virtual unsigned int get_ndof() const override { return std::numeric_limits<unsigned int>::max(); }
  virtual void set_ndof(unsigned int) override {}

  virtual float get_position(unsigned int) const override { return std::numeric_limits<float>::quiet_NaN(); }
  virtual void set_position(unsigned int, float) override {}

  virtual float get_error(unsigned int, unsigned int) const override { return std::numeric_limits<float>::quiet_NaN(); }
  virtual void set_error(unsigned int, unsigned int, float) override {}

  //
  // associated track ids methods
  //
  virtual void clear_tracks() override {}
  virtual bool empty_tracks() override { return true; }
  virtual size_t size_tracks() const override { return 0; }
  virtual void insert_track(unsigned int /*trackid*/) override {}
  virtual size_t erase_track(unsigned int /*trackid*/) override { return 0; }
  virtual ConstTrackIter begin_tracks() const override;
  virtual ConstTrackIter find_track(unsigned int trackid) const override;
  virtual ConstTrackIter end_tracks() const override;
  virtual TrackIter begin_tracks() override;
  virtual TrackIter find_track(unsigned int trackid) override;
  virtual TrackIter end_tracks() override;

 protected:
  ClassDefOverride(SvtxVertex, 1);
};

#endif

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"SvtxVertex", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("SvtxVertex_Dict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_SvtxVertex_Dict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_SvtxVertex_Dict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_SvtxVertex_Dict() {
  TriggerDictionaryInitialization_SvtxVertex_Dict_Impl();
}
