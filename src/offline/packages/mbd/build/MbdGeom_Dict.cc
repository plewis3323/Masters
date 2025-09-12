// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME MbdGeom_Dict
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
#include "../MbdGeom.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static void *new_MbdGeom(void *p = nullptr);
   static void *newArray_MbdGeom(Long_t size, void *p);
   static void delete_MbdGeom(void *p);
   static void deleteArray_MbdGeom(void *p);
   static void destruct_MbdGeom(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::MbdGeom*)
   {
      ::MbdGeom *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::MbdGeom >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("MbdGeom", ::MbdGeom::Class_Version(), "", 14,
                  typeid(::MbdGeom), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::MbdGeom::Dictionary, isa_proxy, 4,
                  sizeof(::MbdGeom) );
      instance.SetNew(&new_MbdGeom);
      instance.SetNewArray(&newArray_MbdGeom);
      instance.SetDelete(&delete_MbdGeom);
      instance.SetDeleteArray(&deleteArray_MbdGeom);
      instance.SetDestructor(&destruct_MbdGeom);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::MbdGeom*)
   {
      return GenerateInitInstanceLocal(static_cast<::MbdGeom*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::MbdGeom*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr MbdGeom::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *MbdGeom::Class_Name()
{
   return "MbdGeom";
}

//______________________________________________________________________________
const char *MbdGeom::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::MbdGeom*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int MbdGeom::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::MbdGeom*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *MbdGeom::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::MbdGeom*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *MbdGeom::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::MbdGeom*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void MbdGeom::Streamer(TBuffer &R__b)
{
   // Stream an object of class MbdGeom.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(MbdGeom::Class(),this);
   } else {
      R__b.WriteClassBuffer(MbdGeom::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_MbdGeom(void *p) {
      return  p ? new(p) ::MbdGeom : new ::MbdGeom;
   }
   static void *newArray_MbdGeom(Long_t nElements, void *p) {
      return p ? new(p) ::MbdGeom[nElements] : new ::MbdGeom[nElements];
   }
   // Wrapper around operator delete
   static void delete_MbdGeom(void *p) {
      delete (static_cast<::MbdGeom*>(p));
   }
   static void deleteArray_MbdGeom(void *p) {
      delete [] (static_cast<::MbdGeom*>(p));
   }
   static void destruct_MbdGeom(void *p) {
      typedef ::MbdGeom current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::MbdGeom

namespace {
  void TriggerDictionaryInitialization_MbdGeom_Dict_Impl() {
    static const char* headers[] = {
"0",
nullptr
    };
    static const char* includePaths[] = {
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "MbdGeom_Dict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
class MbdGeom;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "MbdGeom_Dict dictionary payload"


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

class MbdGeom : public PHObject
{
  public:
    MbdGeom() = default;
    ~MbdGeom() override = default;

    virtual float get_x(const unsigned int /*pmtch*/) const {return std::numeric_limits<float>::quiet_NaN();};
    virtual float get_y(const unsigned int /*pmtch*/) const {return std::numeric_limits<float>::quiet_NaN();};
    virtual float get_z(const unsigned int /*pmtch*/) const {return std::numeric_limits<float>::quiet_NaN();};
    virtual float get_r(const unsigned int /*pmtch*/) const {return std::numeric_limits<float>::quiet_NaN();};
    virtual float get_phi(const unsigned int /*pmtch*/) const {return std::numeric_limits<float>::quiet_NaN();};
    virtual int   get_arm(const unsigned int pmtch) const { return pmtch / 64; }
    virtual int   get_feech(const unsigned int pmtch, const unsigned int type = 1) const {
      return (pmtch / 8) * 16 + pmtch % 8 + 8*type;
    }
    virtual void  set_xyz(const unsigned int /*pmtch*/, const float /*x*/, const float /*y*/, const float /*z*/) {}

    // methods when accessing raw fee channels
    virtual int get_arm_feech(const unsigned int feech) const { return get_pmt(feech) / 64; }
    virtual int get_pmt(const unsigned int feech) const { return (feech / 16) * 8 + feech % 8; }
    virtual int get_type(const unsigned int feech) const { return (feech / 8) % 2; }  // 0=T-channel, 1=Q-channel

    virtual void download_hv() {}

    virtual void Reset() override {}

  private:
    ClassDefOverride(MbdGeom, 1);
};


#endif // __MBD_GEOM_H__

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"MbdGeom", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("MbdGeom_Dict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_MbdGeom_Dict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_MbdGeom_Dict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_MbdGeom_Dict() {
  TriggerDictionaryInitialization_MbdGeom_Dict_Impl();
}
