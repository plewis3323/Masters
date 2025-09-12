// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME MvtxFeeIdInfo_Dict
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
#include "../MvtxFeeIdInfo.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static void *new_MvtxFeeIdInfo(void *p = nullptr);
   static void *newArray_MvtxFeeIdInfo(Long_t size, void *p);
   static void delete_MvtxFeeIdInfo(void *p);
   static void deleteArray_MvtxFeeIdInfo(void *p);
   static void destruct_MvtxFeeIdInfo(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::MvtxFeeIdInfo*)
   {
      ::MvtxFeeIdInfo *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::MvtxFeeIdInfo >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("MvtxFeeIdInfo", ::MvtxFeeIdInfo::Class_Version(), "", 10,
                  typeid(::MvtxFeeIdInfo), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::MvtxFeeIdInfo::Dictionary, isa_proxy, 4,
                  sizeof(::MvtxFeeIdInfo) );
      instance.SetNew(&new_MvtxFeeIdInfo);
      instance.SetNewArray(&newArray_MvtxFeeIdInfo);
      instance.SetDelete(&delete_MvtxFeeIdInfo);
      instance.SetDeleteArray(&deleteArray_MvtxFeeIdInfo);
      instance.SetDestructor(&destruct_MvtxFeeIdInfo);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::MvtxFeeIdInfo*)
   {
      return GenerateInitInstanceLocal(static_cast<::MvtxFeeIdInfo*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::MvtxFeeIdInfo*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr MvtxFeeIdInfo::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *MvtxFeeIdInfo::Class_Name()
{
   return "MvtxFeeIdInfo";
}

//______________________________________________________________________________
const char *MvtxFeeIdInfo::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::MvtxFeeIdInfo*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int MvtxFeeIdInfo::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::MvtxFeeIdInfo*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *MvtxFeeIdInfo::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::MvtxFeeIdInfo*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *MvtxFeeIdInfo::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::MvtxFeeIdInfo*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void MvtxFeeIdInfo::Streamer(TBuffer &R__b)
{
   // Stream an object of class MvtxFeeIdInfo.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(MvtxFeeIdInfo::Class(),this);
   } else {
      R__b.WriteClassBuffer(MvtxFeeIdInfo::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_MvtxFeeIdInfo(void *p) {
      return  p ? new(p) ::MvtxFeeIdInfo : new ::MvtxFeeIdInfo;
   }
   static void *newArray_MvtxFeeIdInfo(Long_t nElements, void *p) {
      return p ? new(p) ::MvtxFeeIdInfo[nElements] : new ::MvtxFeeIdInfo[nElements];
   }
   // Wrapper around operator delete
   static void delete_MvtxFeeIdInfo(void *p) {
      delete (static_cast<::MvtxFeeIdInfo*>(p));
   }
   static void deleteArray_MvtxFeeIdInfo(void *p) {
      delete [] (static_cast<::MvtxFeeIdInfo*>(p));
   }
   static void destruct_MvtxFeeIdInfo(void *p) {
      typedef ::MvtxFeeIdInfo current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::MvtxFeeIdInfo

namespace {
  void TriggerDictionaryInitialization_MvtxFeeIdInfo_Dict_Impl() {
    static const char* headers[] = {
"0",
nullptr
    };
    static const char* includePaths[] = {
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "MvtxFeeIdInfo_Dict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
class MvtxFeeIdInfo;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "MvtxFeeIdInfo_Dict dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#ifndef FUN4ALLRAW_MVTXFEEIDINFO_H
#define FUN4ALLRAW_MVTXFEEIDINFO_H

#include <phool/PHObject.h>

#include <limits>

class MvtxFeeIdInfo : public PHObject
{
 public:
  //! ctor
  MvtxFeeIdInfo() = default;

  //! cp/mv ctor
  MvtxFeeIdInfo(const MvtxFeeIdInfo&) = default;
  MvtxFeeIdInfo(MvtxFeeIdInfo&&) = default;

  //! cp/mv assignment
  MvtxFeeIdInfo& operator=(const MvtxFeeIdInfo&) = default;
  MvtxFeeIdInfo& operator=(MvtxFeeIdInfo&&) = default;

  //! dtor
  ~MvtxFeeIdInfo() override = default;

  virtual uint16_t get_feeId() const { return std::numeric_limits<uint16_t>::max(); }
  virtual void set_feeId(const uint16_t /*dummy*/) { return; }

  virtual uint32_t get_detField() const { return std::numeric_limits<uint32_t>::max(); }
  virtual void set_detField(const uint32_t /*dummy*/) { return; }

  virtual uint64_t get_bco() const { return std::numeric_limits<uint64_t>::max(); }
  virtual void set_bco(const uint64_t /*dummy*/) { return; }

 private:
  ClassDefOverride(MvtxFeeIdInfo, 1)
};

#endif  // FUN4ALLRAW_MVTXFEEIDINFO

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"MvtxFeeIdInfo", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("MvtxFeeIdInfo_Dict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_MvtxFeeIdInfo_Dict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_MvtxFeeIdInfo_Dict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_MvtxFeeIdInfo_Dict() {
  TriggerDictionaryInitialization_MvtxFeeIdInfo_Dict_Impl();
}
