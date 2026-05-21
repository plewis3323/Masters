// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME EventHeaderv2_Dict
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
#include "../EventHeaderv2.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static void *new_EventHeaderv2(void *p = nullptr);
   static void *newArray_EventHeaderv2(Long_t size, void *p);
   static void delete_EventHeaderv2(void *p);
   static void deleteArray_EventHeaderv2(void *p);
   static void destruct_EventHeaderv2(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::EventHeaderv2*)
   {
      ::EventHeaderv2 *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::EventHeaderv2 >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("EventHeaderv2", ::EventHeaderv2::Class_Version(), "", 21,
                  typeid(::EventHeaderv2), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::EventHeaderv2::Dictionary, isa_proxy, 4,
                  sizeof(::EventHeaderv2) );
      instance.SetNew(&new_EventHeaderv2);
      instance.SetNewArray(&newArray_EventHeaderv2);
      instance.SetDelete(&delete_EventHeaderv2);
      instance.SetDeleteArray(&deleteArray_EventHeaderv2);
      instance.SetDestructor(&destruct_EventHeaderv2);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::EventHeaderv2*)
   {
      return GenerateInitInstanceLocal(static_cast<::EventHeaderv2*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::EventHeaderv2*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr EventHeaderv2::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *EventHeaderv2::Class_Name()
{
   return "EventHeaderv2";
}

//______________________________________________________________________________
const char *EventHeaderv2::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EventHeaderv2*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int EventHeaderv2::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EventHeaderv2*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *EventHeaderv2::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EventHeaderv2*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *EventHeaderv2::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EventHeaderv2*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void EventHeaderv2::Streamer(TBuffer &R__b)
{
   // Stream an object of class EventHeaderv2.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(EventHeaderv2::Class(),this);
   } else {
      R__b.WriteClassBuffer(EventHeaderv2::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_EventHeaderv2(void *p) {
      return  p ? new(p) ::EventHeaderv2 : new ::EventHeaderv2;
   }
   static void *newArray_EventHeaderv2(Long_t nElements, void *p) {
      return p ? new(p) ::EventHeaderv2[nElements] : new ::EventHeaderv2[nElements];
   }
   // Wrapper around operator delete
   static void delete_EventHeaderv2(void *p) {
      delete (static_cast<::EventHeaderv2*>(p));
   }
   static void deleteArray_EventHeaderv2(void *p) {
      delete [] (static_cast<::EventHeaderv2*>(p));
   }
   static void destruct_EventHeaderv2(void *p) {
      typedef ::EventHeaderv2 current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::EventHeaderv2

namespace {
  void TriggerDictionaryInitialization_EventHeaderv2_Dict_Impl() {
    static const char* headers[] = {
"0",
nullptr
    };
    static const char* includePaths[] = {
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "EventHeaderv2_Dict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
class EventHeaderv2;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "EventHeaderv2_Dict dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
// Tell emacs that this is a C++ source
//  -*- C++ -*-.
#ifndef FFAOBJECTS_EVENTHEADERV2_H
#define FFAOBJECTS_EVENTHEADERV2_H

/*!
 * \file EventHeaderv2.h
 * \author Hugo Pereira Da Costa <hugo.pereira-da-costa@cea.fr>
 */

#include "EventHeaderv1.h"

#include <cstdint>   // for int64_t
#include <iostream>  // for cout, ostream

class PHObject;

//! simple event header with ID and time
class EventHeaderv2 : public EventHeaderv1
{
 public:
  //! ctor
  EventHeaderv2() = default;

  //! dtor
  ~EventHeaderv2() override = default;

  //! clone
  PHObject* CloneMe() const override
  {
    return new EventHeaderv2(*this);
  }

  ///  Clear Event
  void Reset() override;

  /*!
   * identify Function from PHObject
   * @param os Output Stream 
   */
  void identify(std::ostream& os = std::cout) const override;

  void CopyTo(EventHeader *) override;

  //! bunch crossing
  void set_BunchCrossing(int64_t value) override
  {
    m_bunchCrossing = value;
  }

  //! bunch crossing
  int64_t get_BunchCrossing() const override
  {
    return m_bunchCrossing;
  }

 private:
  //! bunch crossing id
  int64_t m_bunchCrossing {0};

  ClassDefOverride(EventHeaderv2, 2)
};

#endif

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"EventHeaderv2", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("EventHeaderv2_Dict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_EventHeaderv2_Dict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_EventHeaderv2_Dict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_EventHeaderv2_Dict() {
  TriggerDictionaryInitialization_EventHeaderv2_Dict_Impl();
}
