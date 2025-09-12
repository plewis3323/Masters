// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME GlobalVertexv1_Dict
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
#include "../GlobalVertexv1.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static void *new_GlobalVertexv1(void *p = nullptr);
   static void *newArray_GlobalVertexv1(Long_t size, void *p);
   static void delete_GlobalVertexv1(void *p);
   static void deleteArray_GlobalVertexv1(void *p);
   static void destruct_GlobalVertexv1(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::GlobalVertexv1*)
   {
      ::GlobalVertexv1 *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::GlobalVertexv1 >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("GlobalVertexv1", ::GlobalVertexv1::Class_Version(), "", 18,
                  typeid(::GlobalVertexv1), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::GlobalVertexv1::Dictionary, isa_proxy, 4,
                  sizeof(::GlobalVertexv1) );
      instance.SetNew(&new_GlobalVertexv1);
      instance.SetNewArray(&newArray_GlobalVertexv1);
      instance.SetDelete(&delete_GlobalVertexv1);
      instance.SetDeleteArray(&deleteArray_GlobalVertexv1);
      instance.SetDestructor(&destruct_GlobalVertexv1);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::GlobalVertexv1*)
   {
      return GenerateInitInstanceLocal(static_cast<::GlobalVertexv1*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::GlobalVertexv1*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr GlobalVertexv1::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *GlobalVertexv1::Class_Name()
{
   return "GlobalVertexv1";
}

//______________________________________________________________________________
const char *GlobalVertexv1::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::GlobalVertexv1*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int GlobalVertexv1::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::GlobalVertexv1*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *GlobalVertexv1::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::GlobalVertexv1*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *GlobalVertexv1::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::GlobalVertexv1*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void GlobalVertexv1::Streamer(TBuffer &R__b)
{
   // Stream an object of class GlobalVertexv1.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(GlobalVertexv1::Class(),this);
   } else {
      R__b.WriteClassBuffer(GlobalVertexv1::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_GlobalVertexv1(void *p) {
      return  p ? new(p) ::GlobalVertexv1 : new ::GlobalVertexv1;
   }
   static void *newArray_GlobalVertexv1(Long_t nElements, void *p) {
      return p ? new(p) ::GlobalVertexv1[nElements] : new ::GlobalVertexv1[nElements];
   }
   // Wrapper around operator delete
   static void delete_GlobalVertexv1(void *p) {
      delete (static_cast<::GlobalVertexv1*>(p));
   }
   static void deleteArray_GlobalVertexv1(void *p) {
      delete [] (static_cast<::GlobalVertexv1*>(p));
   }
   static void destruct_GlobalVertexv1(void *p) {
      typedef ::GlobalVertexv1 current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::GlobalVertexv1

namespace ROOT {
   static TClass *maplEGlobalVertexcLcLVTXTYPEcOunsignedsPintgR_Dictionary();
   static void maplEGlobalVertexcLcLVTXTYPEcOunsignedsPintgR_TClassManip(TClass*);
   static void *new_maplEGlobalVertexcLcLVTXTYPEcOunsignedsPintgR(void *p = nullptr);
   static void *newArray_maplEGlobalVertexcLcLVTXTYPEcOunsignedsPintgR(Long_t size, void *p);
   static void delete_maplEGlobalVertexcLcLVTXTYPEcOunsignedsPintgR(void *p);
   static void deleteArray_maplEGlobalVertexcLcLVTXTYPEcOunsignedsPintgR(void *p);
   static void destruct_maplEGlobalVertexcLcLVTXTYPEcOunsignedsPintgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<GlobalVertex::VTXTYPE,unsigned int>*)
   {
      map<GlobalVertex::VTXTYPE,unsigned int> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<GlobalVertex::VTXTYPE,unsigned int>));
      static ::ROOT::TGenericClassInfo 
         instance("map<GlobalVertex::VTXTYPE,unsigned int>", -2, "map", 102,
                  typeid(map<GlobalVertex::VTXTYPE,unsigned int>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEGlobalVertexcLcLVTXTYPEcOunsignedsPintgR_Dictionary, isa_proxy, 0,
                  sizeof(map<GlobalVertex::VTXTYPE,unsigned int>) );
      instance.SetNew(&new_maplEGlobalVertexcLcLVTXTYPEcOunsignedsPintgR);
      instance.SetNewArray(&newArray_maplEGlobalVertexcLcLVTXTYPEcOunsignedsPintgR);
      instance.SetDelete(&delete_maplEGlobalVertexcLcLVTXTYPEcOunsignedsPintgR);
      instance.SetDeleteArray(&deleteArray_maplEGlobalVertexcLcLVTXTYPEcOunsignedsPintgR);
      instance.SetDestructor(&destruct_maplEGlobalVertexcLcLVTXTYPEcOunsignedsPintgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<GlobalVertex::VTXTYPE,unsigned int> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("map<GlobalVertex::VTXTYPE,unsigned int>","std::map<GlobalVertex::VTXTYPE, unsigned int, std::less<GlobalVertex::VTXTYPE>, std::allocator<std::pair<GlobalVertex::VTXTYPE const, unsigned int> > >"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const map<GlobalVertex::VTXTYPE,unsigned int>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEGlobalVertexcLcLVTXTYPEcOunsignedsPintgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const map<GlobalVertex::VTXTYPE,unsigned int>*>(nullptr))->GetClass();
      maplEGlobalVertexcLcLVTXTYPEcOunsignedsPintgR_TClassManip(theClass);
   return theClass;
   }

   static void maplEGlobalVertexcLcLVTXTYPEcOunsignedsPintgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEGlobalVertexcLcLVTXTYPEcOunsignedsPintgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) map<GlobalVertex::VTXTYPE,unsigned int> : new map<GlobalVertex::VTXTYPE,unsigned int>;
   }
   static void *newArray_maplEGlobalVertexcLcLVTXTYPEcOunsignedsPintgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) map<GlobalVertex::VTXTYPE,unsigned int>[nElements] : new map<GlobalVertex::VTXTYPE,unsigned int>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEGlobalVertexcLcLVTXTYPEcOunsignedsPintgR(void *p) {
      delete (static_cast<map<GlobalVertex::VTXTYPE,unsigned int>*>(p));
   }
   static void deleteArray_maplEGlobalVertexcLcLVTXTYPEcOunsignedsPintgR(void *p) {
      delete [] (static_cast<map<GlobalVertex::VTXTYPE,unsigned int>*>(p));
   }
   static void destruct_maplEGlobalVertexcLcLVTXTYPEcOunsignedsPintgR(void *p) {
      typedef map<GlobalVertex::VTXTYPE,unsigned int> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class map<GlobalVertex::VTXTYPE,unsigned int>

namespace {
  void TriggerDictionaryInitialization_GlobalVertexv1_Dict_Impl() {
    static const char* headers[] = {
"0",
nullptr
    };
    static const char* includePaths[] = {
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "GlobalVertexv1_Dict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
class GlobalVertexv1;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "GlobalVertexv1_Dict dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
// Tell emacs that this is a C++ source
//  -*- C++ -*-.
#ifndef GLOBALVERTEX_GLOBALVERTEXV1_H
#define GLOBALVERTEX_GLOBALVERTEXV1_H

#include "GlobalVertex.h"

#include <cstddef>  // for size_t
#include <iostream>
#include <limits>
#include <map>
#include <utility>  // for pair, make_pair

class PHObject;

class GlobalVertexv1 : public GlobalVertex
{
 public:
  GlobalVertexv1(const GlobalVertex::VTXTYPE id = GlobalVertex::UNDEFINED);
  ~GlobalVertexv1() override = default;

  // PHObject virtual overloads

  void identify(std::ostream& os = std::cout) const override;
  void Reset() override { *this = GlobalVertexv1(); }
  int isValid() const override;
  PHObject* CloneMe() const override { return new GlobalVertexv1(*this); }

  // vertex info

  unsigned int get_id() const override { return _id; }
  void set_id(unsigned int id) override { _id = id; }

  float get_t() const override { return _t; }
  void set_t(float t) override { _t = t; }

  float get_t_err() const override { return _t_err; }
  void set_t_err(float t_err) override { _t_err = t_err; }

  float get_x() const override { return _pos[0]; }
  void set_x(float x) override { _pos[0] = x; }

  float get_y() const override { return _pos[1]; }
  void set_y(float y) override { _pos[1] = y; }

  float get_z() const override { return _pos[2]; }
  void set_z(float z) override { _pos[2] = z; }

  float get_chisq() const override { return _chisq; }
  void set_chisq(float chisq) override { _chisq = chisq; }

  unsigned int get_ndof() const override { return _ndof; }
  void set_ndof(unsigned int ndof) override { _ndof = ndof; }

  float get_position(unsigned int coor) const override { return _pos[coor]; }
  void set_position(unsigned int coor, float xi) override { _pos[coor] = xi; }

  float get_error(unsigned int i, unsigned int j) const override;        //< get vertex error covar
  void set_error(unsigned int i, unsigned int j, float value) override;  //< set vertex error covar

  //
  // associated vertex ids methods
  //

  bool empty_vtxids() const override { return _vtx_ids.empty(); }
  size_t size_vtxids() const override { return _vtx_ids.size(); }
  size_t count_vtxids(GlobalVertex::VTXTYPE type) const override { return _vtx_ids.count(type); }

  void clear_vtxids() override { _vtx_ids.clear(); }
  void insert_vtxids(GlobalVertex::VTXTYPE type, unsigned int vtxid) override { _vtx_ids.insert(std::make_pair(type, vtxid)); }
  size_t erase_vtxids(GlobalVertex::VTXTYPE type) override { return _vtx_ids.erase(type); }
  void erase_vtxids(GlobalVertex::VtxIter iter) override { _vtx_ids.erase(iter); }
  void erase_vtxids(GlobalVertex::VtxIter first, GlobalVertex::VtxIter last) override { _vtx_ids.erase(first, last); }

  GlobalVertex::ConstVtxIter begin_vtxids() const override { return _vtx_ids.begin(); }
  GlobalVertex::ConstVtxIter find_vtxids(GlobalVertex::VTXTYPE type) const override { return _vtx_ids.find(type); }
  GlobalVertex::ConstVtxIter end_vtxids() const override { return _vtx_ids.end(); }

  GlobalVertex::VtxIter begin_vtxids() override { return _vtx_ids.begin(); }
  GlobalVertex::VtxIter find_vtxids(GlobalVertex::VTXTYPE type) override { return _vtx_ids.find(type); }
  GlobalVertex::VtxIter end_vtxids() override { return _vtx_ids.end(); }

 private:
  unsigned int covar_index(unsigned int i, unsigned int j) const;

  unsigned int _id = std::numeric_limits<unsigned int>::max();  //< unique identifier within container
  float _t = std::numeric_limits<float>::quiet_NaN();           //< collision time
  float _t_err = std::numeric_limits<float>::quiet_NaN();       //< collision time uncertainty
  float _pos[3] = {};                                           //< collision position x,y,z
  float _chisq = std::numeric_limits<float>::quiet_NaN();       //< vertex fit chisq
  unsigned int _ndof = std::numeric_limits<unsigned int>::max();
  float _err[6] = {};                                      //< error covariance matrix (+/- cm^2)
  std::map<GlobalVertex::VTXTYPE, unsigned int> _vtx_ids;  //< list of vtx ids

  ClassDefOverride(GlobalVertexv1, 1);
};

#endif

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"GlobalVertexv1", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("GlobalVertexv1_Dict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_GlobalVertexv1_Dict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_GlobalVertexv1_Dict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_GlobalVertexv1_Dict() {
  TriggerDictionaryInitialization_GlobalVertexv1_Dict_Impl();
}
