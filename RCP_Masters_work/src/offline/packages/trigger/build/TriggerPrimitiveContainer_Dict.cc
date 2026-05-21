// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME TriggerPrimitiveContainer_Dict
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
#include "../TriggerPrimitiveContainer.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static void *new_TriggerPrimitiveContainer(void *p = nullptr);
   static void *newArray_TriggerPrimitiveContainer(Long_t size, void *p);
   static void delete_TriggerPrimitiveContainer(void *p);
   static void deleteArray_TriggerPrimitiveContainer(void *p);
   static void destruct_TriggerPrimitiveContainer(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TriggerPrimitiveContainer*)
   {
      ::TriggerPrimitiveContainer *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TriggerPrimitiveContainer >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TriggerPrimitiveContainer", ::TriggerPrimitiveContainer::Class_Version(), "", 18,
                  typeid(::TriggerPrimitiveContainer), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TriggerPrimitiveContainer::Dictionary, isa_proxy, 4,
                  sizeof(::TriggerPrimitiveContainer) );
      instance.SetNew(&new_TriggerPrimitiveContainer);
      instance.SetNewArray(&newArray_TriggerPrimitiveContainer);
      instance.SetDelete(&delete_TriggerPrimitiveContainer);
      instance.SetDeleteArray(&deleteArray_TriggerPrimitiveContainer);
      instance.SetDestructor(&destruct_TriggerPrimitiveContainer);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TriggerPrimitiveContainer*)
   {
      return GenerateInitInstanceLocal(static_cast<::TriggerPrimitiveContainer*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TriggerPrimitiveContainer*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr TriggerPrimitiveContainer::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TriggerPrimitiveContainer::Class_Name()
{
   return "TriggerPrimitiveContainer";
}

//______________________________________________________________________________
const char *TriggerPrimitiveContainer::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TriggerPrimitiveContainer*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TriggerPrimitiveContainer::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TriggerPrimitiveContainer*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TriggerPrimitiveContainer::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TriggerPrimitiveContainer*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TriggerPrimitiveContainer::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TriggerPrimitiveContainer*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void TriggerPrimitiveContainer::Streamer(TBuffer &R__b)
{
   // Stream an object of class TriggerPrimitiveContainer.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TriggerPrimitiveContainer::Class(),this);
   } else {
      R__b.WriteClassBuffer(TriggerPrimitiveContainer::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TriggerPrimitiveContainer(void *p) {
      return  p ? new(p) ::TriggerPrimitiveContainer : new ::TriggerPrimitiveContainer;
   }
   static void *newArray_TriggerPrimitiveContainer(Long_t nElements, void *p) {
      return p ? new(p) ::TriggerPrimitiveContainer[nElements] : new ::TriggerPrimitiveContainer[nElements];
   }
   // Wrapper around operator delete
   static void delete_TriggerPrimitiveContainer(void *p) {
      delete (static_cast<::TriggerPrimitiveContainer*>(p));
   }
   static void deleteArray_TriggerPrimitiveContainer(void *p) {
      delete [] (static_cast<::TriggerPrimitiveContainer*>(p));
   }
   static void destruct_TriggerPrimitiveContainer(void *p) {
      typedef ::TriggerPrimitiveContainer current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TriggerPrimitiveContainer

namespace {
  void TriggerDictionaryInitialization_TriggerPrimitiveContainer_Dict_Impl() {
    static const char* headers[] = {
"0",
nullptr
    };
    static const char* includePaths[] = {
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "TriggerPrimitiveContainer_Dict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
class TriggerPrimitiveContainer;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "TriggerPrimitiveContainer_Dict dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#ifndef TRIGGER_TRIGGERPRIMITIVECONTAINER_H
#define TRIGGER_TRIGGERPRIMITIVECONTAINER_H

#include "TriggerDefs.h"

#include <phool/PHObject.h>

#include <cstddef>
#include <iostream>
#include <map>
#include <utility>

class TriggerPrimitive;

///
class TriggerPrimitiveContainer : public PHObject
{
 public:
  typedef std::map<TriggerDefs::TriggerPrimKey, TriggerPrimitive*> Map;
  typedef Map::const_iterator ConstIter;
  typedef Map::iterator Iter;
  typedef std::pair<Iter, Iter> Range;
  typedef std::pair<ConstIter, ConstIter> ConstRange;

  TriggerPrimitiveContainer() = default;
  virtual ~TriggerPrimitiveContainer() override = default;

  /// Clear Event from memory
  virtual void Reset() override { return; };
  void identify(std::ostream& os = std::cout) const override;
  int isValid() const override { return 1; }

  virtual void setTriggerId(TriggerDefs::TriggerId /*triggerid*/) { return; }
  virtual void setDetectorId(TriggerDefs::DetectorId /*detectorid*/) { return; }
  virtual void setPrimitiveId(TriggerDefs::PrimitiveId /*primitiveid*/) { return; }

  virtual TriggerPrimitive* get_primitive_at_key(TriggerDefs::TriggerPrimKey) { return nullptr; }

  virtual void add_primitive(TriggerDefs::TriggerPrimKey, TriggerPrimitive*) { return; }

  virtual size_t size() { return 0; }

  virtual ConstRange getTriggerPrimitives() const;
  virtual Range getTriggerPrimitives();

 private:  // so the ClassDef does not show up with doc++
  ClassDefOverride(TriggerPrimitiveContainer, 1);
};

#endif

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"TriggerPrimitiveContainer", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("TriggerPrimitiveContainer_Dict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_TriggerPrimitiveContainer_Dict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_TriggerPrimitiveContainer_Dict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_TriggerPrimitiveContainer_Dict() {
  TriggerDictionaryInitialization_TriggerPrimitiveContainer_Dict_Impl();
}
