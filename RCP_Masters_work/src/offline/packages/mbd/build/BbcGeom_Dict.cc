// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME BbcGeom_Dict
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
#include "../BbcGeom.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static void *new_BbcGeom(void *p = nullptr);
   static void *newArray_BbcGeom(Long_t size, void *p);
   static void delete_BbcGeom(void *p);
   static void deleteArray_BbcGeom(void *p);
   static void destruct_BbcGeom(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BbcGeom*)
   {
      ::BbcGeom *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BbcGeom >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BbcGeom", ::BbcGeom::Class_Version(), "", 14,
                  typeid(::BbcGeom), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BbcGeom::Dictionary, isa_proxy, 4,
                  sizeof(::BbcGeom) );
      instance.SetNew(&new_BbcGeom);
      instance.SetNewArray(&newArray_BbcGeom);
      instance.SetDelete(&delete_BbcGeom);
      instance.SetDeleteArray(&deleteArray_BbcGeom);
      instance.SetDestructor(&destruct_BbcGeom);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BbcGeom*)
   {
      return GenerateInitInstanceLocal(static_cast<::BbcGeom*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::BbcGeom*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr BbcGeom::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BbcGeom::Class_Name()
{
   return "BbcGeom";
}

//______________________________________________________________________________
const char *BbcGeom::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BbcGeom*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BbcGeom::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BbcGeom*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BbcGeom::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BbcGeom*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BbcGeom::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BbcGeom*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void BbcGeom::Streamer(TBuffer &R__b)
{
   // Stream an object of class BbcGeom.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BbcGeom::Class(),this);
   } else {
      R__b.WriteClassBuffer(BbcGeom::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BbcGeom(void *p) {
      return  p ? new(p) ::BbcGeom : new ::BbcGeom;
   }
   static void *newArray_BbcGeom(Long_t nElements, void *p) {
      return p ? new(p) ::BbcGeom[nElements] : new ::BbcGeom[nElements];
   }
   // Wrapper around operator delete
   static void delete_BbcGeom(void *p) {
      delete (static_cast<::BbcGeom*>(p));
   }
   static void deleteArray_BbcGeom(void *p) {
      delete [] (static_cast<::BbcGeom*>(p));
   }
   static void destruct_BbcGeom(void *p) {
      typedef ::BbcGeom current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::BbcGeom

namespace {
  void TriggerDictionaryInitialization_BbcGeom_Dict_Impl() {
    static const char* headers[] = {
"0",
nullptr
    };
    static const char* includePaths[] = {
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "BbcGeom_Dict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
class BbcGeom;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "BbcGeom_Dict dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#ifndef MBD_GEOM_H
#define MBD_GEOM_H

#include <phool/PHObject.h>

#include <vector>
#include <utility>
#include <tuple>
#include <iostream>
#include <limits>

class BbcGeom : public PHObject
{
  public:
    BbcGeom() = default;
    ~BbcGeom() override = default;

    virtual float get_x(const unsigned int /*pmtch*/) const {return std::numeric_limits<float>::quiet_NaN();};
    virtual float get_y(const unsigned int /*pmtch*/) const {return std::numeric_limits<float>::quiet_NaN();};
    virtual float get_z(const unsigned int /*pmtch*/) const {return std::numeric_limits<float>::quiet_NaN();};
    virtual float get_r(const unsigned int /*pmtch*/) const {return std::numeric_limits<float>::quiet_NaN();};
    virtual float get_phi(const unsigned int /*pmtch*/) const {return std::numeric_limits<float>::quiet_NaN();};
    virtual int   get_arm(const unsigned int /*pmtch*/) const {return -1;};
    virtual void  set_xyz(const unsigned int /*pmtch*/, const float /*x*/, const float /*y*/, const float /*z*/) {}

    // methods when accessing raw fee channels
    virtual int get_arm_feech(const unsigned int /*feech*/) const {return -1;};
    virtual int get_pmt(const unsigned int /*feech*/) const {return -1;};
    virtual int get_type(const unsigned int /*feech*/) const {return -1;}; // 0=T-channel, 1=Q-channel

  private:
    ClassDefOverride(BbcGeom, 1);
};


#endif // __BBC_GEOM_H__

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"BbcGeom", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("BbcGeom_Dict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_BbcGeom_Dict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_BbcGeom_Dict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_BbcGeom_Dict() {
  TriggerDictionaryInitialization_BbcGeom_Dict_Impl();
}
