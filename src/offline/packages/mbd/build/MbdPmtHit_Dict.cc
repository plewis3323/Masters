// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME MbdPmtHit_Dict
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
#include "../MbdPmtHit.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static void *new_MbdPmtHit(void *p = nullptr);
   static void *newArray_MbdPmtHit(Long_t size, void *p);
   static void delete_MbdPmtHit(void *p);
   static void deleteArray_MbdPmtHit(void *p);
   static void destruct_MbdPmtHit(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::MbdPmtHit*)
   {
      ::MbdPmtHit *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::MbdPmtHit >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("MbdPmtHit", ::MbdPmtHit::Class_Version(), "", 15,
                  typeid(::MbdPmtHit), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::MbdPmtHit::Dictionary, isa_proxy, 4,
                  sizeof(::MbdPmtHit) );
      instance.SetNew(&new_MbdPmtHit);
      instance.SetNewArray(&newArray_MbdPmtHit);
      instance.SetDelete(&delete_MbdPmtHit);
      instance.SetDeleteArray(&deleteArray_MbdPmtHit);
      instance.SetDestructor(&destruct_MbdPmtHit);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::MbdPmtHit*)
   {
      return GenerateInitInstanceLocal(static_cast<::MbdPmtHit*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::MbdPmtHit*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr MbdPmtHit::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *MbdPmtHit::Class_Name()
{
   return "MbdPmtHit";
}

//______________________________________________________________________________
const char *MbdPmtHit::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::MbdPmtHit*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int MbdPmtHit::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::MbdPmtHit*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *MbdPmtHit::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::MbdPmtHit*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *MbdPmtHit::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::MbdPmtHit*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void MbdPmtHit::Streamer(TBuffer &R__b)
{
   // Stream an object of class MbdPmtHit.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(MbdPmtHit::Class(),this);
   } else {
      R__b.WriteClassBuffer(MbdPmtHit::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_MbdPmtHit(void *p) {
      return  p ? new(p) ::MbdPmtHit : new ::MbdPmtHit;
   }
   static void *newArray_MbdPmtHit(Long_t nElements, void *p) {
      return p ? new(p) ::MbdPmtHit[nElements] : new ::MbdPmtHit[nElements];
   }
   // Wrapper around operator delete
   static void delete_MbdPmtHit(void *p) {
      delete (static_cast<::MbdPmtHit*>(p));
   }
   static void deleteArray_MbdPmtHit(void *p) {
      delete [] (static_cast<::MbdPmtHit*>(p));
   }
   static void destruct_MbdPmtHit(void *p) {
      typedef ::MbdPmtHit current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::MbdPmtHit

namespace {
  void TriggerDictionaryInitialization_MbdPmtHit_Dict_Impl() {
    static const char* headers[] = {
"0",
nullptr
    };
    static const char* includePaths[] = {
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "MbdPmtHit_Dict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
class MbdPmtHit;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "MbdPmtHit_Dict dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
// Tell emacs that this is a C++ source
//  -*- C++ -*-.
#ifndef MBD_MBDPMTHIT_H
#define MBD_MBDPMTHIT_H

#include "MbdReturnCodes.h"

#include <phool/PHObject.h>
#include <phool/phool.h>

#include <iostream>

class MbdPmtHit : public PHObject
{
 public:
  MbdPmtHit() {}
  virtual ~MbdPmtHit() override = default;

  virtual Short_t get_pmt() const
  {
    PHOOL_VIRTUAL_WARNING;
    return -9999;
  }

  virtual Float_t get_q() const
  {
    PHOOL_VIRTUAL_WARNING;
    return MbdReturnCodes::MBD_INVALID_FLOAT;
  }

  virtual Float_t get_time() const
  {
    PHOOL_VIRTUAL_WARNING;
    return MbdReturnCodes::MBD_INVALID_FLOAT;
  }

  virtual Float_t get_tt() const
  {
    PHOOL_VIRTUAL_WARNING;
    return MbdReturnCodes::MBD_INVALID_FLOAT;
  }

  virtual Float_t get_tq() const
  {
    PHOOL_VIRTUAL_WARNING;
    return MbdReturnCodes::MBD_INVALID_FLOAT;
  }

  virtual Float_t get_npe() const
  {
    PHOOL_VIRTUAL_WARNING;
    return MbdReturnCodes::MBD_INVALID_FLOAT;
  }

  virtual void set_pmt(const Short_t /*pmt*/, const Float_t /*q*/, const Float_t /*tt*/, const Float_t /*tq*/)
  {
    PHOOL_VIRTUAL_WARNING;
  }

  virtual void set_simpmt(const Float_t /*npe*/)
  {
    PHOOL_VIRTUAL_WARNING;
  }

  virtual void set_npe(const Float_t /*npe*/)
  {
    PHOOL_VIRTUAL_WARNING;
  }

  virtual void identify(std::ostream& out = std::cout) const override;

  virtual int isValid() const override { return 0; }

 private:
  ClassDefOverride(MbdPmtHit, 1)
};

#endif

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"MbdPmtHit", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("MbdPmtHit_Dict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_MbdPmtHit_Dict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_MbdPmtHit_Dict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_MbdPmtHit_Dict() {
  TriggerDictionaryInitialization_MbdPmtHit_Dict_Impl();
}
