// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME MbdVertexv2_Dict
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
#include "../MbdVertexv2.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static void *new_MbdVertexv2(void *p = nullptr);
   static void *newArray_MbdVertexv2(Long_t size, void *p);
   static void delete_MbdVertexv2(void *p);
   static void deleteArray_MbdVertexv2(void *p);
   static void destruct_MbdVertexv2(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::MbdVertexv2*)
   {
      ::MbdVertexv2 *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::MbdVertexv2 >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("MbdVertexv2", ::MbdVertexv2::Class_Version(), "", 13,
                  typeid(::MbdVertexv2), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::MbdVertexv2::Dictionary, isa_proxy, 4,
                  sizeof(::MbdVertexv2) );
      instance.SetNew(&new_MbdVertexv2);
      instance.SetNewArray(&newArray_MbdVertexv2);
      instance.SetDelete(&delete_MbdVertexv2);
      instance.SetDeleteArray(&deleteArray_MbdVertexv2);
      instance.SetDestructor(&destruct_MbdVertexv2);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::MbdVertexv2*)
   {
      return GenerateInitInstanceLocal(static_cast<::MbdVertexv2*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::MbdVertexv2*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr MbdVertexv2::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *MbdVertexv2::Class_Name()
{
   return "MbdVertexv2";
}

//______________________________________________________________________________
const char *MbdVertexv2::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::MbdVertexv2*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int MbdVertexv2::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::MbdVertexv2*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *MbdVertexv2::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::MbdVertexv2*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *MbdVertexv2::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::MbdVertexv2*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void MbdVertexv2::Streamer(TBuffer &R__b)
{
   // Stream an object of class MbdVertexv2.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(MbdVertexv2::Class(),this);
   } else {
      R__b.WriteClassBuffer(MbdVertexv2::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_MbdVertexv2(void *p) {
      return  p ? new(p) ::MbdVertexv2 : new ::MbdVertexv2;
   }
   static void *newArray_MbdVertexv2(Long_t nElements, void *p) {
      return p ? new(p) ::MbdVertexv2[nElements] : new ::MbdVertexv2[nElements];
   }
   // Wrapper around operator delete
   static void delete_MbdVertexv2(void *p) {
      delete (static_cast<::MbdVertexv2*>(p));
   }
   static void deleteArray_MbdVertexv2(void *p) {
      delete [] (static_cast<::MbdVertexv2*>(p));
   }
   static void destruct_MbdVertexv2(void *p) {
      typedef ::MbdVertexv2 current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::MbdVertexv2

namespace {
  void TriggerDictionaryInitialization_MbdVertexv2_Dict_Impl() {
    static const char* headers[] = {
"0",
nullptr
    };
    static const char* includePaths[] = {
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "MbdVertexv2_Dict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
class MbdVertexv2;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "MbdVertexv2_Dict dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
// Tell emacs that this is a C++ source
//  -*- C++ -*-.
#ifndef GLOBALVERTEX_MBDVERTEXV2_H
#define GLOBALVERTEX_MBDVERTEXV2_H

#include "MbdVertex.h"

#include <iostream>
#include <limits>

class MbdVertexv2 : public MbdVertex
{
 public:
  MbdVertexv2() = default;
  ~MbdVertexv2() override = default;

  // PHObject virtual overloads

  void identify(std::ostream& os = std::cout) const override;
  void Reset() override { *this = MbdVertexv2(); }
  int isValid() const override;
  PHObject* CloneMe() const override { return new MbdVertexv2(*this); }

  // vertex info

  unsigned int get_id() const override { return _id; }
  void set_id(unsigned int id) override { _id = id; }

  float get_t() const override { return _t; }
  void set_t(float t) override { _t = t; }

  float get_t_err() const override { return _t_err; }
  void set_t_err(float t_err) override { _t_err = t_err; }

  // Return 0 for now, can implement beam spot
  float get_x() const override { return 0; }
  float get_y() const override { return 0; }

  float get_z() const override { return _z; }
  void set_z(float z) override { _z = z; }

  float get_z_err() const override { return _z_err; }
  void set_z_err(float z_err) override { _z_err = z_err; }

  float get_position(unsigned int coor) const override;

  unsigned int get_beam_crossing() const override { return _bco; }
  void set_beam_crossing(unsigned int bco) override { _bco = bco; }

 private:
  unsigned int _id{std::numeric_limits<unsigned int>::max()};   //< unique identifier within container
  unsigned int _bco{std::numeric_limits<unsigned int>::max()};  //< global bco
  float _t{std::numeric_limits<float>::quiet_NaN()};            //< collision time
  float _t_err{std::numeric_limits<float>::quiet_NaN()};        //< collision time uncertainty
  float _z{std::numeric_limits<float>::quiet_NaN()};            //< collision position z
  float _z_err{std::numeric_limits<float>::quiet_NaN()};        //< collision position z uncertainty

  ClassDefOverride(MbdVertexv2, 1);
};

#endif

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"MbdVertexv2", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("MbdVertexv2_Dict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_MbdVertexv2_Dict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_MbdVertexv2_Dict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_MbdVertexv2_Dict() {
  TriggerDictionaryInitialization_MbdVertexv2_Dict_Impl();
}
