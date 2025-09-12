// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME TriggerPrimitive_Dict
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
#include "../TriggerPrimitive.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static void *new_TriggerPrimitive(void *p = nullptr);
   static void *newArray_TriggerPrimitive(Long_t size, void *p);
   static void delete_TriggerPrimitive(void *p);
   static void deleteArray_TriggerPrimitive(void *p);
   static void destruct_TriggerPrimitive(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TriggerPrimitive*)
   {
      ::TriggerPrimitive *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TriggerPrimitive >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TriggerPrimitive", ::TriggerPrimitive::Class_Version(), "", 17,
                  typeid(::TriggerPrimitive), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TriggerPrimitive::Dictionary, isa_proxy, 4,
                  sizeof(::TriggerPrimitive) );
      instance.SetNew(&new_TriggerPrimitive);
      instance.SetNewArray(&newArray_TriggerPrimitive);
      instance.SetDelete(&delete_TriggerPrimitive);
      instance.SetDeleteArray(&deleteArray_TriggerPrimitive);
      instance.SetDestructor(&destruct_TriggerPrimitive);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TriggerPrimitive*)
   {
      return GenerateInitInstanceLocal(static_cast<::TriggerPrimitive*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TriggerPrimitive*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr TriggerPrimitive::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TriggerPrimitive::Class_Name()
{
   return "TriggerPrimitive";
}

//______________________________________________________________________________
const char *TriggerPrimitive::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TriggerPrimitive*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TriggerPrimitive::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TriggerPrimitive*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TriggerPrimitive::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TriggerPrimitive*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TriggerPrimitive::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TriggerPrimitive*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void TriggerPrimitive::Streamer(TBuffer &R__b)
{
   // Stream an object of class TriggerPrimitive.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TriggerPrimitive::Class(),this);
   } else {
      R__b.WriteClassBuffer(TriggerPrimitive::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TriggerPrimitive(void *p) {
      return  p ? new(p) ::TriggerPrimitive : new ::TriggerPrimitive;
   }
   static void *newArray_TriggerPrimitive(Long_t nElements, void *p) {
      return p ? new(p) ::TriggerPrimitive[nElements] : new ::TriggerPrimitive[nElements];
   }
   // Wrapper around operator delete
   static void delete_TriggerPrimitive(void *p) {
      delete (static_cast<::TriggerPrimitive*>(p));
   }
   static void deleteArray_TriggerPrimitive(void *p) {
      delete [] (static_cast<::TriggerPrimitive*>(p));
   }
   static void destruct_TriggerPrimitive(void *p) {
      typedef ::TriggerPrimitive current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TriggerPrimitive

namespace {
  void TriggerDictionaryInitialization_TriggerPrimitive_Dict_Impl() {
    static const char* headers[] = {
"0",
nullptr
    };
    static const char* includePaths[] = {
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "TriggerPrimitive_Dict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
class TriggerPrimitive;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "TriggerPrimitive_Dict dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#ifndef TRIGGER_TRIGGERPRIMITIVE_H
#define TRIGGER_TRIGGERPRIMITIVE_H

#include "TriggerDefs.h"

#include <phool/PHObject.h>

#include <cstddef>
#include <iostream>
#include <map>
#include <utility>
#include <vector>

///
class TriggerPrimitive : public PHObject
{
 public:
  typedef std::map<TriggerDefs::TriggerSumKey, std::vector<unsigned int>*> Map;
  typedef Map::const_iterator ConstIter;
  typedef Map::iterator Iter;
  typedef std::pair<Iter, Iter> Range;
  typedef std::pair<ConstIter, ConstIter> ConstRange;

  TriggerPrimitive() = default;
  virtual ~TriggerPrimitive() override = default;

  /// Clear Event from memory
  virtual void Reset() override { return; }
  void identify(std::ostream& os = std::cout) const override;
  int isValid() const override { return 0; }

  virtual std::vector<unsigned int>* get_sum_at_key(TriggerDefs::TriggerSumKey) { return nullptr; }

  virtual void add_sum(TriggerDefs::TriggerSumKey /*key*/, std::vector<unsigned int>* /*sum*/) { return; }

  virtual ConstRange getSums() const;
  virtual Range getSums();

  virtual size_t size() { return 0; }

 private:  // so the ClassDef does not show up with doc++
  ClassDefOverride(TriggerPrimitive, 1);
};

#endif

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"TriggerPrimitive", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("TriggerPrimitive_Dict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_TriggerPrimitive_Dict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_TriggerPrimitive_Dict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_TriggerPrimitive_Dict() {
  TriggerDictionaryInitialization_TriggerPrimitive_Dict_Impl();
}
