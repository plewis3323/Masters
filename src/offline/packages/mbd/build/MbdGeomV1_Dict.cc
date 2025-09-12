// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME MbdGeomV1_Dict
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
#include "../MbdGeomV1.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static void *new_MbdGeomV1(void *p = nullptr);
   static void *newArray_MbdGeomV1(Long_t size, void *p);
   static void delete_MbdGeomV1(void *p);
   static void deleteArray_MbdGeomV1(void *p);
   static void destruct_MbdGeomV1(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::MbdGeomV1*)
   {
      ::MbdGeomV1 *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::MbdGeomV1 >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("MbdGeomV1", ::MbdGeomV1::Class_Version(), "", 8,
                  typeid(::MbdGeomV1), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::MbdGeomV1::Dictionary, isa_proxy, 4,
                  sizeof(::MbdGeomV1) );
      instance.SetNew(&new_MbdGeomV1);
      instance.SetNewArray(&newArray_MbdGeomV1);
      instance.SetDelete(&delete_MbdGeomV1);
      instance.SetDeleteArray(&deleteArray_MbdGeomV1);
      instance.SetDestructor(&destruct_MbdGeomV1);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::MbdGeomV1*)
   {
      return GenerateInitInstanceLocal(static_cast<::MbdGeomV1*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::MbdGeomV1*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr MbdGeomV1::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *MbdGeomV1::Class_Name()
{
   return "MbdGeomV1";
}

//______________________________________________________________________________
const char *MbdGeomV1::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::MbdGeomV1*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int MbdGeomV1::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::MbdGeomV1*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *MbdGeomV1::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::MbdGeomV1*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *MbdGeomV1::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::MbdGeomV1*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void MbdGeomV1::Streamer(TBuffer &R__b)
{
   // Stream an object of class MbdGeomV1.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(MbdGeomV1::Class(),this);
   } else {
      R__b.WriteClassBuffer(MbdGeomV1::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_MbdGeomV1(void *p) {
      return  p ? new(p) ::MbdGeomV1 : new ::MbdGeomV1;
   }
   static void *newArray_MbdGeomV1(Long_t nElements, void *p) {
      return p ? new(p) ::MbdGeomV1[nElements] : new ::MbdGeomV1[nElements];
   }
   // Wrapper around operator delete
   static void delete_MbdGeomV1(void *p) {
      delete (static_cast<::MbdGeomV1*>(p));
   }
   static void deleteArray_MbdGeomV1(void *p) {
      delete [] (static_cast<::MbdGeomV1*>(p));
   }
   static void destruct_MbdGeomV1(void *p) {
      typedef ::MbdGeomV1 current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::MbdGeomV1

namespace {
  void TriggerDictionaryInitialization_MbdGeomV1_Dict_Impl() {
    static const char* headers[] = {
"0",
nullptr
    };
    static const char* includePaths[] = {
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "MbdGeomV1_Dict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
class MbdGeomV1;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "MbdGeomV1_Dict dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#ifndef __MBD_GEOM_V1_H__
#define __MBD_GEOM_V1_H__

#include "MbdGeom.h"

class MbdGeomV1 : public MbdGeom
{
 public:
  MbdGeomV1();
  ~MbdGeomV1() override = default;

  float get_x(const unsigned int pmtch) const override { return pmt_x[pmtch]; }
  float get_y(const unsigned int pmtch) const override { return pmt_y[pmtch]; }
  float get_z(const unsigned int pmtch) const override { return pmt_z[pmtch]; }
  float get_r(const unsigned int pmtch) const override { return pmt_r[pmtch]; }
  float get_phi(const unsigned int pmtch) const override { return pmt_phi[pmtch]; }

  void set_xyz(const unsigned int ipmt, const float x, const float y, const float z) override;

  virtual void Reset() override {}

 private:
  float pmt_x[128]{};
  float pmt_y[128]{};
  float pmt_z[128]{};
  float pmt_r[128]{};
  float pmt_phi[128]{};

  ClassDefOverride(MbdGeomV1, 1)
};

#endif  // __MBD_GEOM_V1_H__

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"MbdGeomV1", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("MbdGeomV1_Dict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_MbdGeomV1_Dict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_MbdGeomV1_Dict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_MbdGeomV1_Dict() {
  TriggerDictionaryInitialization_MbdGeomV1_Dict_Impl();
}
