// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME SvtxVertex_v1_Dict
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
#include "../SvtxVertex_v1.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static void *new_SvtxVertex_v1(void *p = nullptr);
   static void *newArray_SvtxVertex_v1(Long_t size, void *p);
   static void delete_SvtxVertex_v1(void *p);
   static void deleteArray_SvtxVertex_v1(void *p);
   static void destruct_SvtxVertex_v1(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::SvtxVertex_v1*)
   {
      ::SvtxVertex_v1 *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::SvtxVertex_v1 >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("SvtxVertex_v1", ::SvtxVertex_v1::Class_Version(), "", 17,
                  typeid(::SvtxVertex_v1), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::SvtxVertex_v1::Dictionary, isa_proxy, 4,
                  sizeof(::SvtxVertex_v1) );
      instance.SetNew(&new_SvtxVertex_v1);
      instance.SetNewArray(&newArray_SvtxVertex_v1);
      instance.SetDelete(&delete_SvtxVertex_v1);
      instance.SetDeleteArray(&deleteArray_SvtxVertex_v1);
      instance.SetDestructor(&destruct_SvtxVertex_v1);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::SvtxVertex_v1*)
   {
      return GenerateInitInstanceLocal(static_cast<::SvtxVertex_v1*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::SvtxVertex_v1*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr SvtxVertex_v1::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *SvtxVertex_v1::Class_Name()
{
   return "SvtxVertex_v1";
}

//______________________________________________________________________________
const char *SvtxVertex_v1::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::SvtxVertex_v1*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int SvtxVertex_v1::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::SvtxVertex_v1*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *SvtxVertex_v1::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::SvtxVertex_v1*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *SvtxVertex_v1::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::SvtxVertex_v1*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void SvtxVertex_v1::Streamer(TBuffer &R__b)
{
   // Stream an object of class SvtxVertex_v1.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(SvtxVertex_v1::Class(),this);
   } else {
      R__b.WriteClassBuffer(SvtxVertex_v1::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_SvtxVertex_v1(void *p) {
      return  p ? new(p) ::SvtxVertex_v1 : new ::SvtxVertex_v1;
   }
   static void *newArray_SvtxVertex_v1(Long_t nElements, void *p) {
      return p ? new(p) ::SvtxVertex_v1[nElements] : new ::SvtxVertex_v1[nElements];
   }
   // Wrapper around operator delete
   static void delete_SvtxVertex_v1(void *p) {
      delete (static_cast<::SvtxVertex_v1*>(p));
   }
   static void deleteArray_SvtxVertex_v1(void *p) {
      delete [] (static_cast<::SvtxVertex_v1*>(p));
   }
   static void destruct_SvtxVertex_v1(void *p) {
      typedef ::SvtxVertex_v1 current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::SvtxVertex_v1

namespace ROOT {
   static TClass *setlEunsignedsPintgR_Dictionary();
   static void setlEunsignedsPintgR_TClassManip(TClass*);
   static void *new_setlEunsignedsPintgR(void *p = nullptr);
   static void *newArray_setlEunsignedsPintgR(Long_t size, void *p);
   static void delete_setlEunsignedsPintgR(void *p);
   static void deleteArray_setlEunsignedsPintgR(void *p);
   static void destruct_setlEunsignedsPintgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const set<unsigned int>*)
   {
      set<unsigned int> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(set<unsigned int>));
      static ::ROOT::TGenericClassInfo 
         instance("set<unsigned int>", -2, "set", 96,
                  typeid(set<unsigned int>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &setlEunsignedsPintgR_Dictionary, isa_proxy, 0,
                  sizeof(set<unsigned int>) );
      instance.SetNew(&new_setlEunsignedsPintgR);
      instance.SetNewArray(&newArray_setlEunsignedsPintgR);
      instance.SetDelete(&delete_setlEunsignedsPintgR);
      instance.SetDeleteArray(&deleteArray_setlEunsignedsPintgR);
      instance.SetDestructor(&destruct_setlEunsignedsPintgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Insert< set<unsigned int> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("set<unsigned int>","std::set<unsigned int, std::less<unsigned int>, std::allocator<unsigned int> >"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const set<unsigned int>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *setlEunsignedsPintgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const set<unsigned int>*>(nullptr))->GetClass();
      setlEunsignedsPintgR_TClassManip(theClass);
   return theClass;
   }

   static void setlEunsignedsPintgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_setlEunsignedsPintgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) set<unsigned int> : new set<unsigned int>;
   }
   static void *newArray_setlEunsignedsPintgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) set<unsigned int>[nElements] : new set<unsigned int>[nElements];
   }
   // Wrapper around operator delete
   static void delete_setlEunsignedsPintgR(void *p) {
      delete (static_cast<set<unsigned int>*>(p));
   }
   static void deleteArray_setlEunsignedsPintgR(void *p) {
      delete [] (static_cast<set<unsigned int>*>(p));
   }
   static void destruct_setlEunsignedsPintgR(void *p) {
      typedef set<unsigned int> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class set<unsigned int>

namespace {
  void TriggerDictionaryInitialization_SvtxVertex_v1_Dict_Impl() {
    static const char* headers[] = {
"0",
nullptr
    };
    static const char* includePaths[] = {
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "SvtxVertex_v1_Dict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
class SvtxVertex_v1;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "SvtxVertex_v1_Dict dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
// Tell emacs that this is a C++ source
//  -*- C++ -*-.
#ifndef GLOBALVERTEX_SVTXVERTEXV1_H
#define GLOBALVERTEX_SVTXVERTEXV1_H

#include "SvtxVertex.h"

#include <cstddef>  // for size_t
#include <iostream>
#include <limits>
#include <set>

class PHObject;

class SvtxVertex_v1 : public SvtxVertex
{
 public:
  SvtxVertex_v1();
  ~SvtxVertex_v1() override = default;

  // PHObject virtual overloads

  void identify(std::ostream& os = std::cout) const override;
  void Reset() override { *this = SvtxVertex_v1(); }
  int isValid() const override;
  PHObject* CloneMe() const override { return new SvtxVertex_v1(*this); }

  // vertex info

  unsigned int get_id() const override { return _id; }
  void set_id(unsigned int id) override { _id = id; }

  float get_t0() const override { return get_t(); }
  void set_t0(float t0) override { set_t(t0); }

  float get_t() const override { return _t0; }
  void set_t(float t0) override { _t0 = t0; }

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
  // associated track ids methods
  //
  void clear_tracks() override { _track_ids.clear(); }
  bool empty_tracks() override { return _track_ids.empty(); }
  size_t size_tracks() const override { return _track_ids.size(); }
  void insert_track(unsigned int trackid) override { _track_ids.insert(trackid); }
  size_t erase_track(unsigned int trackid) override { return _track_ids.erase(trackid); }
  ConstTrackIter begin_tracks() const override { return _track_ids.begin(); }
  ConstTrackIter find_track(unsigned int trackid) const override { return _track_ids.find(trackid); }
  ConstTrackIter end_tracks() const override { return _track_ids.end(); }
  TrackIter begin_tracks() override { return _track_ids.begin(); }
  TrackIter find_track(unsigned int trackid) override { return _track_ids.find(trackid); }
  TrackIter end_tracks() override { return _track_ids.end(); }

 private:
  unsigned int covar_index(unsigned int i, unsigned int j) const;

  unsigned int _id{std::numeric_limits<unsigned int>::max()};    //< unique identifier within container
  float _t0{std::numeric_limits<float>::quiet_NaN()};            //< collision time
  float _pos[3]{};                                                 //< collision position x,y,z
  float _chisq{std::numeric_limits<float>::quiet_NaN()};         //< vertex fit chisq
  unsigned int _ndof{std::numeric_limits<unsigned int>::max()};  //< degrees of freedom
  float _err[6]{};                                                 //< error covariance matrix (packed storage) (+/- cm^2)
  std::set<unsigned int> _track_ids;                             //< list of track ids

  ClassDefOverride(SvtxVertex_v1, 1);
};

#endif

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"SvtxVertex_v1", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("SvtxVertex_v1_Dict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_SvtxVertex_v1_Dict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_SvtxVertex_v1_Dict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_SvtxVertex_v1_Dict() {
  TriggerDictionaryInitialization_SvtxVertex_v1_Dict_Impl();
}
