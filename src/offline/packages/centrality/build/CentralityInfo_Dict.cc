// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME CentralityInfo_Dict
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
#include "../CentralityInfo.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static void delete_CentralityInfo(void *p);
   static void deleteArray_CentralityInfo(void *p);
   static void destruct_CentralityInfo(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CentralityInfo*)
   {
      ::CentralityInfo *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::CentralityInfo >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("CentralityInfo", ::CentralityInfo::Class_Version(), "", 14,
                  typeid(::CentralityInfo), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::CentralityInfo::Dictionary, isa_proxy, 4,
                  sizeof(::CentralityInfo) );
      instance.SetDelete(&delete_CentralityInfo);
      instance.SetDeleteArray(&deleteArray_CentralityInfo);
      instance.SetDestructor(&destruct_CentralityInfo);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CentralityInfo*)
   {
      return GenerateInitInstanceLocal(static_cast<::CentralityInfo*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::CentralityInfo*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr CentralityInfo::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *CentralityInfo::Class_Name()
{
   return "CentralityInfo";
}

//______________________________________________________________________________
const char *CentralityInfo::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CentralityInfo*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int CentralityInfo::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CentralityInfo*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *CentralityInfo::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CentralityInfo*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *CentralityInfo::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CentralityInfo*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void CentralityInfo::Streamer(TBuffer &R__b)
{
   // Stream an object of class CentralityInfo.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(CentralityInfo::Class(),this);
   } else {
      R__b.WriteClassBuffer(CentralityInfo::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_CentralityInfo(void *p) {
      delete (static_cast<::CentralityInfo*>(p));
   }
   static void deleteArray_CentralityInfo(void *p) {
      delete [] (static_cast<::CentralityInfo*>(p));
   }
   static void destruct_CentralityInfo(void *p) {
      typedef ::CentralityInfo current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::CentralityInfo

namespace {
  void TriggerDictionaryInitialization_CentralityInfo_Dict_Impl() {
    static const char* headers[] = {
"0",
nullptr
    };
    static const char* includePaths[] = {
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "CentralityInfo_Dict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
class CentralityInfo;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "CentralityInfo_Dict dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#ifndef CENTRALITY_CENTRALITYINFO_H
#define CENTRALITY_CENTRALITYINFO_H

//===========================================================
/// \file CentralityInfo.h
/// \brief Lightweight centrality information storage node
/// \author Dennis V. Perepelitsa
//===========================================================

#include <phool/PHObject.h>

class CentralityInfo : public PHObject
{
 public:
  ~CentralityInfo() override{};

  void identify(std::ostream &os = std::cout) const override { os << "CentralityInfo base class" << std::endl; };
  int isValid() const override { return 0; }
  virtual void CopyTo(CentralityInfo *) {return;}

  enum PROP
  {

    //! Minimum Bias Detector (MBD) North-side charge sum
    mbd_N = 0,
    //! MBD South-side charge sum
    mbd_S = 1,
    //! MBD North+South charge sum
    mbd_NS = 2,

    //! sPHENIX Event Plane Detector (sEPD) North-side energy sum
    epd_N = 3,
    //! sEPD South-side energy sum
    epd_S = 4,
    //! sEPD North+South energy sum
    epd_NS = 5,

    //! Impact parameter (b) in HIJING event
    bimp = 6

  };

  virtual bool has_quantity(const PROP /*prop_id*/) const { return false; }
  virtual float get_quantity(const PROP /*prop_id*/) const { return -99; }
  virtual void set_quantity(const PROP /*prop_id*/, const float /*value*/) { return; }

  virtual bool has_centile(const PROP /*prop_id*/) const { return false; }
  virtual float get_centile(const PROP /*prop_id*/) const { return -99; }
  virtual void set_centile(const PROP /*prop_id*/, const float /*value*/) { return; }

  virtual bool has_centrality_bin(const PROP /*prop_id*/) const { return false; }
  virtual int get_centrality_bin(const PROP /*prop_id*/) const { return -99; }
  virtual void set_centrality_bin(const PROP /*prop_id*/, const int /*value*/) { return; }

 protected:
  CentralityInfo() {}

 private:
  ClassDefOverride(CentralityInfo, 1);
};

#endif

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"CentralityInfo", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("CentralityInfo_Dict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_CentralityInfo_Dict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_CentralityInfo_Dict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_CentralityInfo_Dict() {
  TriggerDictionaryInitialization_CentralityInfo_Dict_Impl();
}
