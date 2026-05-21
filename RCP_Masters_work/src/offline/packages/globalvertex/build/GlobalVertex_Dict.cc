// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME GlobalVertex_Dict
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
#include "../GlobalVertex.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static void delete_GlobalVertex(void *p);
   static void deleteArray_GlobalVertex(void *p);
   static void destruct_GlobalVertex(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::GlobalVertex*)
   {
      ::GlobalVertex *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::GlobalVertex >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("GlobalVertex", ::GlobalVertex::Class_Version(), "", 16,
                  typeid(::GlobalVertex), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::GlobalVertex::Dictionary, isa_proxy, 4,
                  sizeof(::GlobalVertex) );
      instance.SetDelete(&delete_GlobalVertex);
      instance.SetDeleteArray(&deleteArray_GlobalVertex);
      instance.SetDestructor(&destruct_GlobalVertex);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::GlobalVertex*)
   {
      return GenerateInitInstanceLocal(static_cast<::GlobalVertex*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::GlobalVertex*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr GlobalVertex::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *GlobalVertex::Class_Name()
{
   return "GlobalVertex";
}

//______________________________________________________________________________
const char *GlobalVertex::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::GlobalVertex*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int GlobalVertex::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::GlobalVertex*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *GlobalVertex::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::GlobalVertex*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *GlobalVertex::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::GlobalVertex*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void GlobalVertex::Streamer(TBuffer &R__b)
{
   // Stream an object of class GlobalVertex.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(GlobalVertex::Class(),this);
   } else {
      R__b.WriteClassBuffer(GlobalVertex::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_GlobalVertex(void *p) {
      delete (static_cast<::GlobalVertex*>(p));
   }
   static void deleteArray_GlobalVertex(void *p) {
      delete [] (static_cast<::GlobalVertex*>(p));
   }
   static void destruct_GlobalVertex(void *p) {
      typedef ::GlobalVertex current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::GlobalVertex

namespace {
  void TriggerDictionaryInitialization_GlobalVertex_Dict_Impl() {
    static const char* headers[] = {
"0",
nullptr
    };
    static const char* includePaths[] = {
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "GlobalVertex_Dict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
class GlobalVertex;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "GlobalVertex_Dict dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
// Tell emacs that this is a C++ source
//  -*- C++ -*-.
#ifndef GLOBALVERTEX_GLOBALVERTEX_H
#define GLOBALVERTEX_GLOBALVERTEX_H

#include "Vertex.h"

#include <phool/PHObject.h>

#include <iostream>
#include <limits>
#include <map>

class GlobalVertex : public PHObject
{
 public:
  // the order matters (best vertex -> highest number), so leave some space in case we want to wedge other vertices in here
  enum VTXTYPE
  {
    UNDEFINED = 0,
    TRUTH = 100,
    SMEARED = 200,
    MBD = 300,
    SVTX = 400,
    SVTX_MBD = 500
  };

  typedef std::vector<const Vertex*> VertexVector;
  typedef std::map<GlobalVertex::VTXTYPE, VertexVector>::const_iterator ConstVertexIter;
  typedef std::map<GlobalVertex::VTXTYPE, VertexVector>::iterator VertexIter;

  // Deprecated as of GlobalVertexv2
  typedef std::map<GlobalVertex::VTXTYPE, unsigned int>::const_iterator ConstVtxIter;
  typedef std::map<GlobalVertex::VTXTYPE, unsigned int>::iterator VtxIter;

  ~GlobalVertex() override = default;

  // PHObject virtual overloads

  void identify(std::ostream& os = std::cout) const override
  {
    os << "GlobalVertex base class" << std::endl;
  }
  int isValid() const override { return 0; }
  PHObject* CloneMe() const override { return nullptr; }

  // vertex info

  virtual unsigned int get_id() const { return std::numeric_limits<unsigned int>::max(); }
  virtual void set_id(unsigned int) { return; }

  virtual float get_t() const { return std::numeric_limits<float>::quiet_NaN(); }
  virtual void set_t(float) { return; }

  virtual float get_t_err() const { return std::numeric_limits<float>::quiet_NaN(); }
  virtual void set_t_err(float) { return; }

  virtual float get_x() const { return std::numeric_limits<float>::quiet_NaN(); }
  virtual void set_x(float) { return; }

  virtual float get_y() const { return std::numeric_limits<float>::quiet_NaN(); }
  virtual void set_y(float) { return; }

  virtual float get_z() const { return std::numeric_limits<float>::quiet_NaN(); }
  virtual void set_z(float) { return; }

  virtual float get_chisq() const { return std::numeric_limits<float>::quiet_NaN(); }
  virtual void set_chisq(float) { return; }

  virtual unsigned int get_ndof() const { return std::numeric_limits<unsigned int>::max(); }
  virtual void set_ndof(unsigned int) { return; }

  virtual float get_position(unsigned int /*coor*/) const { return std::numeric_limits<float>::quiet_NaN(); }
  virtual void set_position(unsigned int /*coor*/, float /*xi*/) { return; }

  virtual float get_error(unsigned int /*i*/, unsigned int /*j*/) const { return std::numeric_limits<float>::quiet_NaN(); }
  virtual void set_error(unsigned int /*i*/, unsigned int /*j*/, float /*value*/) { return; }

  virtual unsigned int get_beam_crossing() const { return std::numeric_limits<unsigned int>::max(); }
  virtual void set_beam_crossing(unsigned int) { return; }

  virtual bool empty_vtxs() const { return true; }
  virtual size_t size_vtxs() const { return 0; }
  virtual size_t count_vtxs(VTXTYPE) const { return 0; }
  virtual void clear_vtxs() { return; }
  virtual void insert_vtx(VTXTYPE, const Vertex*) { return; }
  virtual void clone_insert_vtx(VTXTYPE, const Vertex*) { return; }
  virtual size_t erase_vtxs(VTXTYPE) { return 0; }
  virtual void erase_vtxs(VertexIter) { return; }

  virtual ConstVertexIter begin_vertexes() const;
  virtual ConstVertexIter find_vertexes(VTXTYPE type) const;
  virtual ConstVertexIter end_vertexes() const;

  virtual VertexIter begin_vertexes();
  virtual VertexIter find_vertexes(VTXTYPE type);
  virtual VertexIter end_vertexes();

  //
  // associated vertex ids methods
  // vtx id container accessors are deprecated.
  // Use actual vertex container accessors instead
  //
  virtual bool empty_vtxids() const { return true; }
  virtual size_t size_vtxids() const { return 0; }
  virtual size_t count_vtxids(VTXTYPE /*type*/) const { return 0; }

  virtual void clear_vtxids() { return; }
  virtual void insert_vtxids(VTXTYPE /*type*/, unsigned int /*vtxid*/) { return; }
  virtual size_t erase_vtxids(VTXTYPE /*type*/) { return 0; }
  virtual void erase_vtxids(VtxIter /*iter*/) { return; }
  virtual void erase_vtxids(VtxIter /*first*/, VtxIter /*last*/) { return; }

  virtual ConstVtxIter begin_vtxids() const;
  virtual ConstVtxIter find_vtxids(VTXTYPE type) const;
  virtual ConstVtxIter end_vtxids() const;

  virtual VtxIter begin_vtxids();
  virtual VtxIter find_vtxids(VTXTYPE type);
  virtual VtxIter end_vtxids();

 protected:
  GlobalVertex() = default;

 private:
  ClassDefOverride(GlobalVertex, 1);
};

#endif

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"GlobalVertex", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("GlobalVertex_Dict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_GlobalVertex_Dict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_GlobalVertex_Dict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_GlobalVertex_Dict() {
  TriggerDictionaryInitialization_GlobalVertex_Dict_Impl();
}
