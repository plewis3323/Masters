// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME BbcGeomV1_Dict
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
#include "../BbcGeomV1.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static void *new_BbcGeomV1(void *p = nullptr);
   static void *newArray_BbcGeomV1(Long_t size, void *p);
   static void delete_BbcGeomV1(void *p);
   static void deleteArray_BbcGeomV1(void *p);
   static void destruct_BbcGeomV1(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BbcGeomV1*)
   {
      ::BbcGeomV1 *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BbcGeomV1 >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BbcGeomV1", ::BbcGeomV1::Class_Version(), "", 8,
                  typeid(::BbcGeomV1), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BbcGeomV1::Dictionary, isa_proxy, 4,
                  sizeof(::BbcGeomV1) );
      instance.SetNew(&new_BbcGeomV1);
      instance.SetNewArray(&newArray_BbcGeomV1);
      instance.SetDelete(&delete_BbcGeomV1);
      instance.SetDeleteArray(&deleteArray_BbcGeomV1);
      instance.SetDestructor(&destruct_BbcGeomV1);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BbcGeomV1*)
   {
      return GenerateInitInstanceLocal(static_cast<::BbcGeomV1*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::BbcGeomV1*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr BbcGeomV1::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BbcGeomV1::Class_Name()
{
   return "BbcGeomV1";
}

//______________________________________________________________________________
const char *BbcGeomV1::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BbcGeomV1*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BbcGeomV1::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BbcGeomV1*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BbcGeomV1::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BbcGeomV1*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BbcGeomV1::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BbcGeomV1*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void BbcGeomV1::Streamer(TBuffer &R__b)
{
   // Stream an object of class BbcGeomV1.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BbcGeomV1::Class(),this);
   } else {
      R__b.WriteClassBuffer(BbcGeomV1::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BbcGeomV1(void *p) {
      return  p ? new(p) ::BbcGeomV1 : new ::BbcGeomV1;
   }
   static void *newArray_BbcGeomV1(Long_t nElements, void *p) {
      return p ? new(p) ::BbcGeomV1[nElements] : new ::BbcGeomV1[nElements];
   }
   // Wrapper around operator delete
   static void delete_BbcGeomV1(void *p) {
      delete (static_cast<::BbcGeomV1*>(p));
   }
   static void deleteArray_BbcGeomV1(void *p) {
      delete [] (static_cast<::BbcGeomV1*>(p));
   }
   static void destruct_BbcGeomV1(void *p) {
      typedef ::BbcGeomV1 current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::BbcGeomV1

namespace {
  void TriggerDictionaryInitialization_BbcGeomV1_Dict_Impl() {
    static const char* headers[] = {
"0",
nullptr
    };
    static const char* includePaths[] = {
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "BbcGeomV1_Dict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
class BbcGeomV1;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "BbcGeomV1_Dict dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#ifndef __BBC_GEOM_V1_H__
#define __BBC_GEOM_V1_H__

#include "BbcGeom.h"

class BbcGeomV1 : public BbcGeom
{
 public:
  BbcGeomV1();
  ~BbcGeomV1() override = default;

  float get_x(const unsigned int pmtch) const override { return pmt_x[pmtch]; }
  float get_y(const unsigned int pmtch) const override { return pmt_y[pmtch]; }
  float get_z(const unsigned int pmtch) const override { return pmt_z[pmtch]; }
  float get_r(const unsigned int pmtch) const override { return pmt_r[pmtch]; }
  float get_phi(const unsigned int pmtch) const override { return pmt_phi[pmtch]; }
  int get_arm(const unsigned int pmtch) const override { return pmtch / 64; }
  void set_xyz(const unsigned int ipmt, const float x, const float y, const float z) override;

  int get_arm_feech(const unsigned int feech) const override { return get_pmt(feech) / 64; }
  int get_pmt(const unsigned int feech) const override { return (feech / 16) * 8 + feech % 8; }
  int get_type(const unsigned int feech) const override { return (feech / 8) % 2; }  // 0=T-channel, 1=Q-channel

 private:
  float pmt_x[128]{};
  float pmt_y[128]{};
  float pmt_z[128]{};
  float pmt_r[128]{};
  float pmt_phi[128]{};

  ClassDefOverride(BbcGeomV1, 1)
};

#endif  // __BBC_GEOM_V1_H__

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"BbcGeomV1", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("BbcGeomV1_Dict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_BbcGeomV1_Dict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_BbcGeomV1_Dict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_BbcGeomV1_Dict() {
  TriggerDictionaryInitialization_BbcGeomV1_Dict_Impl();
}
