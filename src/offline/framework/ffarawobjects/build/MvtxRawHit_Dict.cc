// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME MvtxRawHit_Dict
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
#include "../MvtxRawHit.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static void *new_MvtxRawHit(void *p = nullptr);
   static void *newArray_MvtxRawHit(Long_t size, void *p);
   static void delete_MvtxRawHit(void *p);
   static void deleteArray_MvtxRawHit(void *p);
   static void destruct_MvtxRawHit(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::MvtxRawHit*)
   {
      ::MvtxRawHit *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::MvtxRawHit >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("MvtxRawHit", ::MvtxRawHit::Class_Version(), "", 10,
                  typeid(::MvtxRawHit), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::MvtxRawHit::Dictionary, isa_proxy, 4,
                  sizeof(::MvtxRawHit) );
      instance.SetNew(&new_MvtxRawHit);
      instance.SetNewArray(&newArray_MvtxRawHit);
      instance.SetDelete(&delete_MvtxRawHit);
      instance.SetDeleteArray(&deleteArray_MvtxRawHit);
      instance.SetDestructor(&destruct_MvtxRawHit);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::MvtxRawHit*)
   {
      return GenerateInitInstanceLocal(static_cast<::MvtxRawHit*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::MvtxRawHit*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr MvtxRawHit::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *MvtxRawHit::Class_Name()
{
   return "MvtxRawHit";
}

//______________________________________________________________________________
const char *MvtxRawHit::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::MvtxRawHit*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int MvtxRawHit::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::MvtxRawHit*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *MvtxRawHit::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::MvtxRawHit*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *MvtxRawHit::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::MvtxRawHit*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void MvtxRawHit::Streamer(TBuffer &R__b)
{
   // Stream an object of class MvtxRawHit.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(MvtxRawHit::Class(),this);
   } else {
      R__b.WriteClassBuffer(MvtxRawHit::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_MvtxRawHit(void *p) {
      return  p ? new(p) ::MvtxRawHit : new ::MvtxRawHit;
   }
   static void *newArray_MvtxRawHit(Long_t nElements, void *p) {
      return p ? new(p) ::MvtxRawHit[nElements] : new ::MvtxRawHit[nElements];
   }
   // Wrapper around operator delete
   static void delete_MvtxRawHit(void *p) {
      delete (static_cast<::MvtxRawHit*>(p));
   }
   static void deleteArray_MvtxRawHit(void *p) {
      delete [] (static_cast<::MvtxRawHit*>(p));
   }
   static void destruct_MvtxRawHit(void *p) {
      typedef ::MvtxRawHit current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::MvtxRawHit

namespace {
  void TriggerDictionaryInitialization_MvtxRawHit_Dict_Impl() {
    static const char* headers[] = {
"0",
nullptr
    };
    static const char* includePaths[] = {
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "MvtxRawHit_Dict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
class MvtxRawHit;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "MvtxRawHit_Dict dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#ifndef FUN4ALLRAW_MVTXRAWTHIT_H
#define FUN4ALLRAW_MVTXRAWTHIT_H

#include <phool/PHObject.h>

#include <limits>

class MvtxRawHit : public PHObject
{
 public:
  MvtxRawHit() = default;
  virtual ~MvtxRawHit() = default;

  virtual uint64_t get_bco() const { return std::numeric_limits<uint64_t>::max(); }
  virtual void set_bco(const uint64_t) { return; }

  virtual uint32_t get_strobe_bc() const { return std::numeric_limits<uint32_t>::max(); }
  virtual void set_strobe_bc(const uint32_t) { return; }

  virtual uint32_t get_chip_bc() const { return std::numeric_limits<uint32_t>::max(); }
  virtual void set_chip_bc(const uint32_t) { return; }

  virtual uint8_t get_layer_id() const { return std::numeric_limits<uint8_t>::max(); }
  virtual void set_layer_id(uint8_t) { return; }

  virtual uint8_t get_stave_id() const { return std::numeric_limits<uint8_t>::max(); }
  virtual void set_stave_id(uint8_t) { return; }

  virtual uint8_t get_chip_id() const { return std::numeric_limits<uint8_t>::max(); }
  virtual void set_chip_id(uint8_t) { return; }

  virtual uint16_t get_row() const { return std::numeric_limits<uint16_t>::max(); }
  virtual void set_row(uint16_t) { return; }

  virtual uint16_t get_col() const { return std::numeric_limits<uint16_t>::max(); }
  virtual void set_col(uint16_t) { return; }

 private:
  ClassDefOverride(MvtxRawHit, 1)
};

#endif

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"MvtxRawHit", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("MvtxRawHit_Dict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_MvtxRawHit_Dict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_MvtxRawHit_Dict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_MvtxRawHit_Dict() {
  TriggerDictionaryInitialization_MvtxRawHit_Dict_Impl();
}
