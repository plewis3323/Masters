// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME BbcVertexv2_Dict
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
#include "../BbcVertexv2.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static void *new_BbcVertexv2(void *p = nullptr);
   static void *newArray_BbcVertexv2(Long_t size, void *p);
   static void delete_BbcVertexv2(void *p);
   static void deleteArray_BbcVertexv2(void *p);
   static void destruct_BbcVertexv2(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BbcVertexv2*)
   {
      ::BbcVertexv2 *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BbcVertexv2 >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BbcVertexv2", ::BbcVertexv2::Class_Version(), "", 11,
                  typeid(::BbcVertexv2), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BbcVertexv2::Dictionary, isa_proxy, 4,
                  sizeof(::BbcVertexv2) );
      instance.SetNew(&new_BbcVertexv2);
      instance.SetNewArray(&newArray_BbcVertexv2);
      instance.SetDelete(&delete_BbcVertexv2);
      instance.SetDeleteArray(&deleteArray_BbcVertexv2);
      instance.SetDestructor(&destruct_BbcVertexv2);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BbcVertexv2*)
   {
      return GenerateInitInstanceLocal(static_cast<::BbcVertexv2*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::BbcVertexv2*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr BbcVertexv2::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BbcVertexv2::Class_Name()
{
   return "BbcVertexv2";
}

//______________________________________________________________________________
const char *BbcVertexv2::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BbcVertexv2*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BbcVertexv2::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BbcVertexv2*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BbcVertexv2::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BbcVertexv2*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BbcVertexv2::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BbcVertexv2*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void BbcVertexv2::Streamer(TBuffer &R__b)
{
   // Stream an object of class BbcVertexv2.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BbcVertexv2::Class(),this);
   } else {
      R__b.WriteClassBuffer(BbcVertexv2::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BbcVertexv2(void *p) {
      return  p ? new(p) ::BbcVertexv2 : new ::BbcVertexv2;
   }
   static void *newArray_BbcVertexv2(Long_t nElements, void *p) {
      return p ? new(p) ::BbcVertexv2[nElements] : new ::BbcVertexv2[nElements];
   }
   // Wrapper around operator delete
   static void delete_BbcVertexv2(void *p) {
      delete (static_cast<::BbcVertexv2*>(p));
   }
   static void deleteArray_BbcVertexv2(void *p) {
      delete [] (static_cast<::BbcVertexv2*>(p));
   }
   static void destruct_BbcVertexv2(void *p) {
      typedef ::BbcVertexv2 current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::BbcVertexv2

namespace {
  void TriggerDictionaryInitialization_BbcVertexv2_Dict_Impl() {
    static const char* headers[] = {
"0",
nullptr
    };
    static const char* includePaths[] = {
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "BbcVertexv2_Dict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
class BbcVertexv2;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "BbcVertexv2_Dict dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#ifndef G4BBC_BBCVERTEXV2_H
#define G4BBC_BBCVERTEXV2_H

#include "BbcVertex.h"

#include <iostream>
#include <limits>

class BbcVertexv2 : public BbcVertex
{
 public:
  BbcVertexv2();
  ~BbcVertexv2() override = default;

  // PHObject virtual overloads

  void identify(std::ostream& os = std::cout) const override;
  void Reset() override { *this = BbcVertexv2(); }
  int isValid() const override;
  PHObject* CloneMe() const override { return new BbcVertexv2(*this); }

  // vertex info

  unsigned int get_id() const override { return _id; }
  void set_id(unsigned int id) override { _id = id; }

  float get_t() const override { return _t; }
  void set_t(float t) override { _t = t; }

  float get_t_err() const override { return _t_err; }
  void set_t_err(float t_err) override { _t_err = t_err; }

  float get_z() const override { return _z; }
  void set_z(float z) override { _z = z; }

  float get_z_err() const override { return _z_err; }
  void set_z_err(float z_err) override { _z_err = z_err; }

  void set_bbc_ns(int iarm, int bbc_npmt, float bbc_q, float bbc_t) override
  {
    _bbc_ns_npmt[iarm] = bbc_npmt;
    _bbc_ns_q[iarm] = bbc_q;
    _bbc_ns_t[iarm] = bbc_t;
  }

  int get_bbc_npmt(int iarm) const override { return _bbc_ns_npmt[iarm]; }
  float get_bbc_q(int iarm) const override { return _bbc_ns_q[iarm]; }
  float get_bbc_t(int iarm) const override { return _bbc_ns_t[iarm]; }

 private:
  unsigned int _id{std::numeric_limits<unsigned int>::max()};  //< unique identifier within container
  float _t{std::numeric_limits<float>::quiet_NaN()};          //< collision time
  float _t_err{std::numeric_limits<float>::quiet_NaN()};      //< collision time uncertainty
  float _z{std::numeric_limits<float>::quiet_NaN()};          //< collision position z
  float _z_err{std::numeric_limits<float>::quiet_NaN()};      //< collision position z uncertainty
  int _bbc_ns_npmt[2]{};
  float _bbc_ns_q[2]{};
  float _bbc_ns_t[2]{};

  ClassDefOverride(BbcVertexv2, 1);
};

#endif

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"BbcVertexv2", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("BbcVertexv2_Dict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_BbcVertexv2_Dict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_BbcVertexv2_Dict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_BbcVertexv2_Dict() {
  TriggerDictionaryInitialization_BbcVertexv2_Dict_Impl();
}
