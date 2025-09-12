// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME MbdVertexv1_Dict
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
#include "../MbdVertexv1.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static void *new_MbdVertexv1(void *p = nullptr);
   static void *newArray_MbdVertexv1(Long_t size, void *p);
   static void delete_MbdVertexv1(void *p);
   static void deleteArray_MbdVertexv1(void *p);
   static void destruct_MbdVertexv1(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::MbdVertexv1*)
   {
      ::MbdVertexv1 *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::MbdVertexv1 >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("MbdVertexv1", ::MbdVertexv1::Class_Version(), "", 13,
                  typeid(::MbdVertexv1), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::MbdVertexv1::Dictionary, isa_proxy, 4,
                  sizeof(::MbdVertexv1) );
      instance.SetNew(&new_MbdVertexv1);
      instance.SetNewArray(&newArray_MbdVertexv1);
      instance.SetDelete(&delete_MbdVertexv1);
      instance.SetDeleteArray(&deleteArray_MbdVertexv1);
      instance.SetDestructor(&destruct_MbdVertexv1);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::MbdVertexv1*)
   {
      return GenerateInitInstanceLocal(static_cast<::MbdVertexv1*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::MbdVertexv1*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr MbdVertexv1::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *MbdVertexv1::Class_Name()
{
   return "MbdVertexv1";
}

//______________________________________________________________________________
const char *MbdVertexv1::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::MbdVertexv1*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int MbdVertexv1::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::MbdVertexv1*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *MbdVertexv1::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::MbdVertexv1*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *MbdVertexv1::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::MbdVertexv1*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void MbdVertexv1::Streamer(TBuffer &R__b)
{
   // Stream an object of class MbdVertexv1.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(MbdVertexv1::Class(),this);
   } else {
      R__b.WriteClassBuffer(MbdVertexv1::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_MbdVertexv1(void *p) {
      return  p ? new(p) ::MbdVertexv1 : new ::MbdVertexv1;
   }
   static void *newArray_MbdVertexv1(Long_t nElements, void *p) {
      return p ? new(p) ::MbdVertexv1[nElements] : new ::MbdVertexv1[nElements];
   }
   // Wrapper around operator delete
   static void delete_MbdVertexv1(void *p) {
      delete (static_cast<::MbdVertexv1*>(p));
   }
   static void deleteArray_MbdVertexv1(void *p) {
      delete [] (static_cast<::MbdVertexv1*>(p));
   }
   static void destruct_MbdVertexv1(void *p) {
      typedef ::MbdVertexv1 current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::MbdVertexv1

namespace {
  void TriggerDictionaryInitialization_MbdVertexv1_Dict_Impl() {
    static const char* headers[] = {
"0",
nullptr
    };
    static const char* includePaths[] = {
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "MbdVertexv1_Dict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
class MbdVertexv1;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "MbdVertexv1_Dict dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
// Tell emacs that this is a C++ source
//  -*- C++ -*-.
#ifndef GLOBALVERTEX_MBDVERTEXV1_H
#define GLOBALVERTEX_MBDVERTEXV1_H

#include "MbdVertex.h"

#include <iostream>
#include <limits>

class MbdVertexv1 : public MbdVertex
{
 public:
  MbdVertexv1() = default;
  ~MbdVertexv1() override = default;

  // PHObject virtual overloads

  void identify(std::ostream& os = std::cout) const override;
  void Reset() override { *this = MbdVertexv1(); }
  int isValid() const override;
  PHObject* CloneMe() const override { return new MbdVertexv1(*this); }

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
  unsigned int _id{std::numeric_limits<unsigned int>::max()};  //< unique identifier within container
  float _t{std::numeric_limits<float>::quiet_NaN()};           //< collision time
  float _t_err{std::numeric_limits<float>::quiet_NaN()};       //< collision time uncertainty
  float _z{std::numeric_limits<float>::quiet_NaN()};           //< collision position z
  float _z_err{std::numeric_limits<float>::quiet_NaN()};       //< collision position z uncertainty

  ClassDefOverride(MbdVertexv1, 1);
};

#endif

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"MbdVertexv1", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("MbdVertexv1_Dict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_MbdVertexv1_Dict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_MbdVertexv1_Dict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_MbdVertexv1_Dict() {
  TriggerDictionaryInitialization_MbdVertexv1_Dict_Impl();
}
