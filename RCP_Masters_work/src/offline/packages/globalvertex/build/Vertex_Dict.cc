// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME Vertex_Dict
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
#include "../Vertex.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static void delete_Vertex(void *p);
   static void deleteArray_Vertex(void *p);
   static void destruct_Vertex(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::Vertex*)
   {
      ::Vertex *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::Vertex >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("Vertex", ::Vertex::Class_Version(), "", 15,
                  typeid(::Vertex), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::Vertex::Dictionary, isa_proxy, 4,
                  sizeof(::Vertex) );
      instance.SetDelete(&delete_Vertex);
      instance.SetDeleteArray(&deleteArray_Vertex);
      instance.SetDestructor(&destruct_Vertex);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::Vertex*)
   {
      return GenerateInitInstanceLocal(static_cast<::Vertex*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::Vertex*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr Vertex::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *Vertex::Class_Name()
{
   return "Vertex";
}

//______________________________________________________________________________
const char *Vertex::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::Vertex*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int Vertex::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::Vertex*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *Vertex::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::Vertex*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *Vertex::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::Vertex*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void Vertex::Streamer(TBuffer &R__b)
{
   // Stream an object of class Vertex.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(Vertex::Class(),this);
   } else {
      R__b.WriteClassBuffer(Vertex::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_Vertex(void *p) {
      delete (static_cast<::Vertex*>(p));
   }
   static void deleteArray_Vertex(void *p) {
      delete [] (static_cast<::Vertex*>(p));
   }
   static void destruct_Vertex(void *p) {
      typedef ::Vertex current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::Vertex

namespace {
  void TriggerDictionaryInitialization_Vertex_Dict_Impl() {
    static const char* headers[] = {
"0",
nullptr
    };
    static const char* includePaths[] = {
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "Vertex_Dict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
class Vertex;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "Vertex_Dict dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
// Tell emacs that this is a C++ source
//  -*- C++ -*-.
#ifndef GLOBALVERTEX_VERTEX_H
#define GLOBALVERTEX_VERTEX_H

#include <phool/PHObject.h>

#include <cstddef>
#include <iostream>
#include <limits>
#include <set>

class Vertex : public PHObject
{
 public:
  typedef std::set<unsigned int> TrackSet;
  typedef std::set<unsigned int>::const_iterator ConstTrackIter;
  typedef std::set<unsigned int>::iterator TrackIter;

  ~Vertex() override = default;

  // PHObject virtual overloads

  void identify(std::ostream& os = std::cout) const override { os << "Vertex base class" << std::endl; }
  PHObject* CloneMe() const override { return nullptr; }
  int isValid() const override { return 0; }

  // vertex info

  virtual unsigned int get_id() const { return std::numeric_limits<unsigned int>::max(); }
  virtual void set_id(unsigned int) {}

  virtual float get_t() const { return std::numeric_limits<float>::quiet_NaN(); }
  virtual void set_t(float) {}

  // Interface functions to maintain backwards compatibility with svtxvertex_v1
  virtual float get_t0() const { return get_t(); }
  virtual void set_t0(float t0) { set_t(t0); }

  virtual float get_t_err() const { return std::numeric_limits<float>::quiet_NaN(); }
  virtual void set_t_err(float) {}

  virtual float get_x() const { return std::numeric_limits<float>::quiet_NaN(); }
  virtual void set_x(float) {}

  virtual float get_y() const { return std::numeric_limits<float>::quiet_NaN(); }
  virtual void set_y(float) {}

  virtual float get_z() const { return std::numeric_limits<float>::quiet_NaN(); }
  virtual void set_z(float) {}

  virtual float get_chisq() const { return std::numeric_limits<float>::quiet_NaN(); }
  virtual void set_chisq(float) {}

  virtual unsigned int get_ndof() const { return std::numeric_limits<unsigned int>::max(); }
  virtual void set_ndof(unsigned int) {}

  virtual float get_position(unsigned int) const { return std::numeric_limits<float>::quiet_NaN(); }
  virtual void set_position(unsigned int /*coor*/, float /*xi*/) {}

  virtual float get_error(unsigned int /*i*/, unsigned int /*j*/) const { return std::numeric_limits<float>::quiet_NaN(); }
  virtual void set_error(unsigned int /*i*/, unsigned int /*j*/, float /*value*/) {}

  // beam crossing methods
  virtual unsigned int get_beam_crossing() const { return std::numeric_limits<unsigned int>::max(); }
  virtual void set_beam_crossing(unsigned int) {}

  // bbcvertex methods
  virtual void set_bbc_ns(int, int, float, float) {}
  virtual int get_bbc_npmt(int) const { return std::numeric_limits<int>::max(); }
  virtual float get_z_err() const { return std::numeric_limits<float>::quiet_NaN(); }
  virtual void set_z_err(float) {}

  virtual float get_bbc_q(int) const { return std::numeric_limits<float>::quiet_NaN(); }
  virtual float get_bbc_t(int) const { return std::numeric_limits<float>::quiet_NaN(); }

  // svtxvertex methods
  virtual void clear_tracks() {}
  virtual bool empty_tracks() { return true; }
  virtual size_t size_tracks() const { return 0; }
  virtual void insert_track(unsigned int /*trackid*/) {}
  virtual size_t erase_track(unsigned int /*trackid*/) { return 0; }
  virtual ConstTrackIter begin_tracks() const;
  virtual ConstTrackIter find_track(unsigned int trackid) const;
  virtual ConstTrackIter end_tracks() const;
  virtual TrackIter begin_tracks();
  virtual TrackIter find_track(unsigned int trackid);
  virtual TrackIter end_tracks();

 protected:
  Vertex() = default;

 private:
  ClassDefOverride(Vertex, 1);
};

#endif

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"Vertex", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("Vertex_Dict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_Vertex_Dict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_Vertex_Dict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_Vertex_Dict() {
  TriggerDictionaryInitialization_Vertex_Dict_Impl();
}
