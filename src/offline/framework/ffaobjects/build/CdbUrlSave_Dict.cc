// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME CdbUrlSave_Dict
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
#include "../CdbUrlSave.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static void *new_CdbUrlSave(void *p = nullptr);
   static void *newArray_CdbUrlSave(Long_t size, void *p);
   static void delete_CdbUrlSave(void *p);
   static void deleteArray_CdbUrlSave(void *p);
   static void destruct_CdbUrlSave(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CdbUrlSave*)
   {
      ::CdbUrlSave *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::CdbUrlSave >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("CdbUrlSave", ::CdbUrlSave::Class_Version(), "", 17,
                  typeid(::CdbUrlSave), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::CdbUrlSave::Dictionary, isa_proxy, 4,
                  sizeof(::CdbUrlSave) );
      instance.SetNew(&new_CdbUrlSave);
      instance.SetNewArray(&newArray_CdbUrlSave);
      instance.SetDelete(&delete_CdbUrlSave);
      instance.SetDeleteArray(&deleteArray_CdbUrlSave);
      instance.SetDestructor(&destruct_CdbUrlSave);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CdbUrlSave*)
   {
      return GenerateInitInstanceLocal(static_cast<::CdbUrlSave*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::CdbUrlSave*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr CdbUrlSave::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *CdbUrlSave::Class_Name()
{
   return "CdbUrlSave";
}

//______________________________________________________________________________
const char *CdbUrlSave::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CdbUrlSave*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int CdbUrlSave::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CdbUrlSave*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *CdbUrlSave::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CdbUrlSave*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *CdbUrlSave::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CdbUrlSave*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void CdbUrlSave::Streamer(TBuffer &R__b)
{
   // Stream an object of class CdbUrlSave.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(CdbUrlSave::Class(),this);
   } else {
      R__b.WriteClassBuffer(CdbUrlSave::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_CdbUrlSave(void *p) {
      return  p ? new(p) ::CdbUrlSave : new ::CdbUrlSave;
   }
   static void *newArray_CdbUrlSave(Long_t nElements, void *p) {
      return p ? new(p) ::CdbUrlSave[nElements] : new ::CdbUrlSave[nElements];
   }
   // Wrapper around operator delete
   static void delete_CdbUrlSave(void *p) {
      delete (static_cast<::CdbUrlSave*>(p));
   }
   static void deleteArray_CdbUrlSave(void *p) {
      delete [] (static_cast<::CdbUrlSave*>(p));
   }
   static void destruct_CdbUrlSave(void *p) {
      typedef ::CdbUrlSave current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::CdbUrlSave

namespace {
  void TriggerDictionaryInitialization_CdbUrlSave_Dict_Impl() {
    static const char* headers[] = {
"0",
nullptr
    };
    static const char* includePaths[] = {
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "CdbUrlSave_Dict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
class CdbUrlSave;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "CdbUrlSave_Dict dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
// Tell emacs that this is a C++ source
//  -*- C++ -*-.
#ifndef FFAOBJECTS_CDBURLSAVE_H
#define FFAOBJECTS_CDBURLSAVE_H

#include <phool/PHObject.h>

#include <cstdint>  // for uint64_t
#include <iostream>
#include <string>  // for string
#include <tuple>
#include <vector>  // for vector, vector<>::const_iterator

///
class CdbUrlSave : public PHObject
{
 public:
  /// dtor
  ~CdbUrlSave() override {}

  PHObject *CloneMe() const override;

  /// Clear Event
  void Reset() override;

  /** identify Function from PHObject
      @param os Output Stream 
   */
  void identify(std::ostream &os = std::cout) const override;

  /// isValid returns non zero if object contains valid data
  int isValid() const override;

  virtual void AddUrl(const std::string &, const std::string &, const uint64_t) { return; }
  virtual void AddUrl(const std::tuple<std::string, std::string, uint64_t> &) { return; }

  virtual std::vector<std::tuple<std::string, std::string, uint64_t>>::const_iterator begin() const;
  virtual std::vector<std::tuple<std::string, std::string, uint64_t>>::const_iterator end() const;

 private:
  ClassDefOverride(CdbUrlSave, 1)
};

#endif

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"CdbUrlSave", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("CdbUrlSave_Dict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_CdbUrlSave_Dict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_CdbUrlSave_Dict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_CdbUrlSave_Dict() {
  TriggerDictionaryInitialization_CdbUrlSave_Dict_Impl();
}
