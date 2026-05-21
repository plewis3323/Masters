// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME GlobalVertexv2_Dict
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
#include "../GlobalVertexv2.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static void *new_GlobalVertexv2(void *p = nullptr);
   static void *newArray_GlobalVertexv2(Long_t size, void *p);
   static void delete_GlobalVertexv2(void *p);
   static void deleteArray_GlobalVertexv2(void *p);
   static void destruct_GlobalVertexv2(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::GlobalVertexv2*)
   {
      ::GlobalVertexv2 *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::GlobalVertexv2 >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("GlobalVertexv2", ::GlobalVertexv2::Class_Version(), "", 17,
                  typeid(::GlobalVertexv2), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::GlobalVertexv2::Dictionary, isa_proxy, 4,
                  sizeof(::GlobalVertexv2) );
      instance.SetNew(&new_GlobalVertexv2);
      instance.SetNewArray(&newArray_GlobalVertexv2);
      instance.SetDelete(&delete_GlobalVertexv2);
      instance.SetDeleteArray(&deleteArray_GlobalVertexv2);
      instance.SetDestructor(&destruct_GlobalVertexv2);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::GlobalVertexv2*)
   {
      return GenerateInitInstanceLocal(static_cast<::GlobalVertexv2*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::GlobalVertexv2*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr GlobalVertexv2::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *GlobalVertexv2::Class_Name()
{
   return "GlobalVertexv2";
}

//______________________________________________________________________________
const char *GlobalVertexv2::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::GlobalVertexv2*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int GlobalVertexv2::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::GlobalVertexv2*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *GlobalVertexv2::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::GlobalVertexv2*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *GlobalVertexv2::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::GlobalVertexv2*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void GlobalVertexv2::Streamer(TBuffer &R__b)
{
   // Stream an object of class GlobalVertexv2.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(GlobalVertexv2::Class(),this);
   } else {
      R__b.WriteClassBuffer(GlobalVertexv2::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_GlobalVertexv2(void *p) {
      return  p ? new(p) ::GlobalVertexv2 : new ::GlobalVertexv2;
   }
   static void *newArray_GlobalVertexv2(Long_t nElements, void *p) {
      return p ? new(p) ::GlobalVertexv2[nElements] : new ::GlobalVertexv2[nElements];
   }
   // Wrapper around operator delete
   static void delete_GlobalVertexv2(void *p) {
      delete (static_cast<::GlobalVertexv2*>(p));
   }
   static void deleteArray_GlobalVertexv2(void *p) {
      delete [] (static_cast<::GlobalVertexv2*>(p));
   }
   static void destruct_GlobalVertexv2(void *p) {
      typedef ::GlobalVertexv2 current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::GlobalVertexv2

namespace ROOT {
   static TClass *vectorlEconstsPVertexmUgR_Dictionary();
   static void vectorlEconstsPVertexmUgR_TClassManip(TClass*);
   static void *new_vectorlEconstsPVertexmUgR(void *p = nullptr);
   static void *newArray_vectorlEconstsPVertexmUgR(Long_t size, void *p);
   static void delete_vectorlEconstsPVertexmUgR(void *p);
   static void deleteArray_vectorlEconstsPVertexmUgR(void *p);
   static void destruct_vectorlEconstsPVertexmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<const Vertex*>*)
   {
      vector<const Vertex*> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<const Vertex*>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<const Vertex*>", -2, "vector", 428,
                  typeid(vector<const Vertex*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEconstsPVertexmUgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<const Vertex*>) );
      instance.SetNew(&new_vectorlEconstsPVertexmUgR);
      instance.SetNewArray(&newArray_vectorlEconstsPVertexmUgR);
      instance.SetDelete(&delete_vectorlEconstsPVertexmUgR);
      instance.SetDeleteArray(&deleteArray_vectorlEconstsPVertexmUgR);
      instance.SetDestructor(&destruct_vectorlEconstsPVertexmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<const Vertex*> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<const Vertex*>","std::vector<Vertex const*, std::allocator<Vertex const*> >"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<const Vertex*>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEconstsPVertexmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<const Vertex*>*>(nullptr))->GetClass();
      vectorlEconstsPVertexmUgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEconstsPVertexmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEconstsPVertexmUgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<const Vertex*> : new vector<const Vertex*>;
   }
   static void *newArray_vectorlEconstsPVertexmUgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<const Vertex*>[nElements] : new vector<const Vertex*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEconstsPVertexmUgR(void *p) {
      delete (static_cast<vector<const Vertex*>*>(p));
   }
   static void deleteArray_vectorlEconstsPVertexmUgR(void *p) {
      delete [] (static_cast<vector<const Vertex*>*>(p));
   }
   static void destruct_vectorlEconstsPVertexmUgR(void *p) {
      typedef vector<const Vertex*> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<const Vertex*>

namespace ROOT {
   static TClass *maplEGlobalVertexcLcLVTXTYPEcOvectorlEconstsPVertexmUgRsPgR_Dictionary();
   static void maplEGlobalVertexcLcLVTXTYPEcOvectorlEconstsPVertexmUgRsPgR_TClassManip(TClass*);
   static void *new_maplEGlobalVertexcLcLVTXTYPEcOvectorlEconstsPVertexmUgRsPgR(void *p = nullptr);
   static void *newArray_maplEGlobalVertexcLcLVTXTYPEcOvectorlEconstsPVertexmUgRsPgR(Long_t size, void *p);
   static void delete_maplEGlobalVertexcLcLVTXTYPEcOvectorlEconstsPVertexmUgRsPgR(void *p);
   static void deleteArray_maplEGlobalVertexcLcLVTXTYPEcOvectorlEconstsPVertexmUgRsPgR(void *p);
   static void destruct_maplEGlobalVertexcLcLVTXTYPEcOvectorlEconstsPVertexmUgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<GlobalVertex::VTXTYPE,vector<const Vertex*> >*)
   {
      map<GlobalVertex::VTXTYPE,vector<const Vertex*> > *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<GlobalVertex::VTXTYPE,vector<const Vertex*> >));
      static ::ROOT::TGenericClassInfo 
         instance("map<GlobalVertex::VTXTYPE,vector<const Vertex*> >", -2, "map", 102,
                  typeid(map<GlobalVertex::VTXTYPE,vector<const Vertex*> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEGlobalVertexcLcLVTXTYPEcOvectorlEconstsPVertexmUgRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(map<GlobalVertex::VTXTYPE,vector<const Vertex*> >) );
      instance.SetNew(&new_maplEGlobalVertexcLcLVTXTYPEcOvectorlEconstsPVertexmUgRsPgR);
      instance.SetNewArray(&newArray_maplEGlobalVertexcLcLVTXTYPEcOvectorlEconstsPVertexmUgRsPgR);
      instance.SetDelete(&delete_maplEGlobalVertexcLcLVTXTYPEcOvectorlEconstsPVertexmUgRsPgR);
      instance.SetDeleteArray(&deleteArray_maplEGlobalVertexcLcLVTXTYPEcOvectorlEconstsPVertexmUgRsPgR);
      instance.SetDestructor(&destruct_maplEGlobalVertexcLcLVTXTYPEcOvectorlEconstsPVertexmUgRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<GlobalVertex::VTXTYPE,vector<const Vertex*> > >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("map<GlobalVertex::VTXTYPE,vector<const Vertex*> >","std::map<GlobalVertex::VTXTYPE, std::vector<Vertex const*, std::allocator<Vertex const*> >, std::less<GlobalVertex::VTXTYPE>, std::allocator<std::pair<GlobalVertex::VTXTYPE const, std::vector<Vertex const*, std::allocator<Vertex const*> > > > >"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const map<GlobalVertex::VTXTYPE,vector<const Vertex*> >*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEGlobalVertexcLcLVTXTYPEcOvectorlEconstsPVertexmUgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const map<GlobalVertex::VTXTYPE,vector<const Vertex*> >*>(nullptr))->GetClass();
      maplEGlobalVertexcLcLVTXTYPEcOvectorlEconstsPVertexmUgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void maplEGlobalVertexcLcLVTXTYPEcOvectorlEconstsPVertexmUgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEGlobalVertexcLcLVTXTYPEcOvectorlEconstsPVertexmUgRsPgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) map<GlobalVertex::VTXTYPE,vector<const Vertex*> > : new map<GlobalVertex::VTXTYPE,vector<const Vertex*> >;
   }
   static void *newArray_maplEGlobalVertexcLcLVTXTYPEcOvectorlEconstsPVertexmUgRsPgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) map<GlobalVertex::VTXTYPE,vector<const Vertex*> >[nElements] : new map<GlobalVertex::VTXTYPE,vector<const Vertex*> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEGlobalVertexcLcLVTXTYPEcOvectorlEconstsPVertexmUgRsPgR(void *p) {
      delete (static_cast<map<GlobalVertex::VTXTYPE,vector<const Vertex*> >*>(p));
   }
   static void deleteArray_maplEGlobalVertexcLcLVTXTYPEcOvectorlEconstsPVertexmUgRsPgR(void *p) {
      delete [] (static_cast<map<GlobalVertex::VTXTYPE,vector<const Vertex*> >*>(p));
   }
   static void destruct_maplEGlobalVertexcLcLVTXTYPEcOvectorlEconstsPVertexmUgRsPgR(void *p) {
      typedef map<GlobalVertex::VTXTYPE,vector<const Vertex*> > current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class map<GlobalVertex::VTXTYPE,vector<const Vertex*> >

namespace {
  void TriggerDictionaryInitialization_GlobalVertexv2_Dict_Impl() {
    static const char* headers[] = {
"0",
nullptr
    };
    static const char* includePaths[] = {
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "GlobalVertexv2_Dict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
class GlobalVertexv2;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "GlobalVertexv2_Dict dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
// Tell emacs that this is a C++ source
//  -*- C++ -*-.
#ifndef GLOBALVERTEX_GLOBALVERTEXV2_H
#define GLOBALVERTEX_GLOBALVERTEXV2_H

#include "GlobalVertex.h"

#include <cstddef>  // for size_t
#include <iostream>
#include <limits>
#include <map>

class PHObject;

class GlobalVertexv2 : public GlobalVertex
{
 public:
  GlobalVertexv2() = default;
  GlobalVertexv2(const unsigned int id);
  ~GlobalVertexv2() override;

  // PHObject virtual overloads

  void identify(std::ostream& os = std::cout) const override;
  void Reset() override;
  int isValid() const override;
  PHObject* CloneMe() const override { return new GlobalVertexv2(*this); }

  unsigned int get_id() const override { return _id; }
  void set_id(unsigned int id) override { _id = id; }

  unsigned int get_beam_crossing() const override { return _bco; }
  void set_beam_crossing(unsigned int bco) override { _bco = bco; }

  float get_t() const override;
  float get_t_err() const override;
  float get_x() const override;
  float get_y() const override;
  float get_z() const override;
  float get_chisq() const override;
  unsigned int get_ndof() const override;
  float get_position(unsigned int coor) const override;
  float get_error(unsigned int i, unsigned int j) const override;

  //
  // associated vertex methods
  //

  bool empty_vtxs() const override { return _vtxs.empty(); }
  size_t size_vtxs() const override { return _vtxs.size(); }
  size_t count_vtxs(GlobalVertex::VTXTYPE type) const override;

  void clear_vtxs() override { _vtxs.clear(); }
  void insert_vtx(GlobalVertex::VTXTYPE type, const Vertex* vertex) override;
  void clone_insert_vtx(GlobalVertex::VTXTYPE type, const Vertex* vertex) override;
  size_t erase_vtxs(GlobalVertex::VTXTYPE type) override { return _vtxs.erase(type); }
  void erase_vtxs(GlobalVertex::VertexIter iter) override { _vtxs.erase(iter); }

  GlobalVertex::ConstVertexIter begin_vertexes() const override { return _vtxs.begin(); }
  GlobalVertex::ConstVertexIter find_vertexes(GlobalVertex::VTXTYPE type) const override { return _vtxs.find(type); }
  GlobalVertex::ConstVertexIter end_vertexes() const override { return _vtxs.end(); }

  GlobalVertex::VertexIter begin_vertexes() override { return _vtxs.begin(); }
  GlobalVertex::VertexIter find_vertexes(GlobalVertex::VTXTYPE type) override { return _vtxs.find(type); }
  GlobalVertex::VertexIter end_vertexes() override { return _vtxs.end(); }

 private:
  unsigned int _id{std::numeric_limits<unsigned int>::max()};
  unsigned int _bco{std::numeric_limits<unsigned int>::max()};  //< global bco
  std::map<GlobalVertex::VTXTYPE, VertexVector> _vtxs;          //< list of vtxs

  ClassDefOverride(GlobalVertexv2, 2);
};

#endif

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"GlobalVertexv2", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("GlobalVertexv2_Dict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_GlobalVertexv2_Dict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_GlobalVertexv2_Dict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_GlobalVertexv2_Dict() {
  TriggerDictionaryInitialization_GlobalVertexv2_Dict_Impl();
}
