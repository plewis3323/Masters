// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME BbcVertexv1_Dict
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
#include "../BbcVertexv1.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static void *new_BbcVertexv1(void *p = nullptr);
   static void *newArray_BbcVertexv1(Long_t size, void *p);
   static void delete_BbcVertexv1(void *p);
   static void deleteArray_BbcVertexv1(void *p);
   static void destruct_BbcVertexv1(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BbcVertexv1*)
   {
      ::BbcVertexv1 *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BbcVertexv1 >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BbcVertexv1", ::BbcVertexv1::Class_Version(), "", 11,
                  typeid(::BbcVertexv1), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BbcVertexv1::Dictionary, isa_proxy, 4,
                  sizeof(::BbcVertexv1) );
      instance.SetNew(&new_BbcVertexv1);
      instance.SetNewArray(&newArray_BbcVertexv1);
      instance.SetDelete(&delete_BbcVertexv1);
      instance.SetDeleteArray(&deleteArray_BbcVertexv1);
      instance.SetDestructor(&destruct_BbcVertexv1);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BbcVertexv1*)
   {
      return GenerateInitInstanceLocal(static_cast<::BbcVertexv1*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::BbcVertexv1*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr BbcVertexv1::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BbcVertexv1::Class_Name()
{
   return "BbcVertexv1";
}

//______________________________________________________________________________
const char *BbcVertexv1::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BbcVertexv1*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BbcVertexv1::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BbcVertexv1*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BbcVertexv1::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BbcVertexv1*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BbcVertexv1::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BbcVertexv1*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void BbcVertexv1::Streamer(TBuffer &R__b)
{
   // Stream an object of class BbcVertexv1.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BbcVertexv1::Class(),this);
   } else {
      R__b.WriteClassBuffer(BbcVertexv1::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BbcVertexv1(void *p) {
      return  p ? new(p) ::BbcVertexv1 : new ::BbcVertexv1;
   }
   static void *newArray_BbcVertexv1(Long_t nElements, void *p) {
      return p ? new(p) ::BbcVertexv1[nElements] : new ::BbcVertexv1[nElements];
   }
   // Wrapper around operator delete
   static void delete_BbcVertexv1(void *p) {
      delete (static_cast<::BbcVertexv1*>(p));
   }
   static void deleteArray_BbcVertexv1(void *p) {
      delete [] (static_cast<::BbcVertexv1*>(p));
   }
   static void destruct_BbcVertexv1(void *p) {
      typedef ::BbcVertexv1 current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::BbcVertexv1

namespace {
  void TriggerDictionaryInitialization_BbcVertexv1_Dict_Impl() {
    static const char* headers[] = {
"0",
nullptr
    };
    static const char* includePaths[] = {
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "BbcVertexv1_Dict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
class BbcVertexv1;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "BbcVertexv1_Dict dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#ifndef G4BBC_BBCVERTEXV1_H
#define G4BBC_BBCVERTEXV1_H

#include "BbcVertex.h"

#include <iostream>
#include <limits>

class BbcVertexv1 : public BbcVertex
{
 public:
  BbcVertexv1() = default;;
  ~BbcVertexv1() override = default;

  // PHObject virtual overloads

  void identify(std::ostream& os = std::cout) const override;
  void Reset() override { *this = BbcVertexv1(); }
  int isValid() const override;
  PHObject* CloneMe() const override { return new BbcVertexv1(*this); }

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

 private:
  unsigned int _id {std::numeric_limits<unsigned int>::max()};  //< unique identifier within container
  float _t {std::numeric_limits<float>::quiet_NaN()};          //< collision time
  float _t_err {std::numeric_limits<float>::quiet_NaN()};      //< collision time uncertainty
  float _z {std::numeric_limits<float>::quiet_NaN()};          //< collision position z
  float _z_err {std::numeric_limits<float>::quiet_NaN()};      //< collision position z uncertainty

  ClassDefOverride(BbcVertexv1, 1);
};

#endif

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"BbcVertexv1", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("BbcVertexv1_Dict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_BbcVertexv1_Dict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_BbcVertexv1_Dict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_BbcVertexv1_Dict() {
  TriggerDictionaryInitialization_BbcVertexv1_Dict_Impl();
}
