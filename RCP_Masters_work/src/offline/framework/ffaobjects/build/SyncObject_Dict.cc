// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME SyncObject_Dict
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
#include "../SyncObject.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static void *new_SyncObject(void *p = nullptr);
   static void *newArray_SyncObject(Long_t size, void *p);
   static void delete_SyncObject(void *p);
   static void deleteArray_SyncObject(void *p);
   static void destruct_SyncObject(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::SyncObject*)
   {
      ::SyncObject *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::SyncObject >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("SyncObject", ::SyncObject::Class_Version(), "", 13,
                  typeid(::SyncObject), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::SyncObject::Dictionary, isa_proxy, 4,
                  sizeof(::SyncObject) );
      instance.SetNew(&new_SyncObject);
      instance.SetNewArray(&newArray_SyncObject);
      instance.SetDelete(&delete_SyncObject);
      instance.SetDeleteArray(&deleteArray_SyncObject);
      instance.SetDestructor(&destruct_SyncObject);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::SyncObject*)
   {
      return GenerateInitInstanceLocal(static_cast<::SyncObject*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::SyncObject*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr SyncObject::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *SyncObject::Class_Name()
{
   return "SyncObject";
}

//______________________________________________________________________________
const char *SyncObject::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::SyncObject*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int SyncObject::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::SyncObject*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *SyncObject::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::SyncObject*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *SyncObject::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::SyncObject*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void SyncObject::Streamer(TBuffer &R__b)
{
   // Stream an object of class SyncObject.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(SyncObject::Class(),this);
   } else {
      R__b.WriteClassBuffer(SyncObject::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_SyncObject(void *p) {
      return  p ? new(p) ::SyncObject : new ::SyncObject;
   }
   static void *newArray_SyncObject(Long_t nElements, void *p) {
      return p ? new(p) ::SyncObject[nElements] : new ::SyncObject[nElements];
   }
   // Wrapper around operator delete
   static void delete_SyncObject(void *p) {
      delete (static_cast<::SyncObject*>(p));
   }
   static void deleteArray_SyncObject(void *p) {
      delete [] (static_cast<::SyncObject*>(p));
   }
   static void destruct_SyncObject(void *p) {
      typedef ::SyncObject current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::SyncObject

namespace {
  void TriggerDictionaryInitialization_SyncObject_Dict_Impl() {
    static const char* headers[] = {
"0",
nullptr
    };
    static const char* includePaths[] = {
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "SyncObject_Dict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
class SyncObject;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "SyncObject_Dict dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
// Tell emacs that this is a C++ source
//  -*- C++ -*-.
#ifndef FFAOBJECTS_SYNCOBJECT_H
#define FFAOBJECTS_SYNCOBJECT_H

#include <phool/PHObject.h>

#include <iostream>

///
class SyncObject : public PHObject
{
 public:
  /// ctor - daughter class copy ctor needs this
  SyncObject() = default;
  /// copy ctor daughter class copy ctor needs also this
  SyncObject(const SyncObject& source) = default;
  /// dtor
  ~SyncObject() override {}
  /// Clear Sync
  void Reset() override;

  /** identify Function from PHObject
      @param os Output Stream 
   */
  void identify(std::ostream& os = std::cout) const override;

  /// isValid returns non zero if object contains valid data
  int isValid() const override;

  PHObject* CloneMe() const override;
  SyncObject& operator=(const SyncObject& source);
  virtual unsigned int Different(const SyncObject* other) const;

  /// set Event Counter
  virtual void EventCounter(const int /*ival*/) { return; }

  /// set Event Number
  virtual void EventNumber(const int /*ival*/) { return; }

  /// set Segment Number
  virtual void SegmentNumber(const int /*ival*/) { return; }

  /// set Run Number
  virtual void RunNumber(const int /*ival*/) { return; }

 protected:
  /// get Event Number
  virtual int EventNumber() const { return -9999; }
  /// get Event Counter
  virtual int EventCounter() const { return -9999; }
  /// get Run Number
  virtual int RunNumber() const { return -9999; }
  /// get Segment Number
  virtual int SegmentNumber() const { return -9999; }

 private:  // prevent doc++ from showing ClassDefOverride
  friend class SyncObjectv1;
  friend class Fun4AllDstInputManager;
  friend class Fun4AllDstPileupInputManager;
  friend class DumpSyncObject;
  friend class SegmentSelect;

  ClassDefOverride(SyncObject, 1)
};

#endif

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"SyncObject", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("SyncObject_Dict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_SyncObject_Dict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_SyncObject_Dict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_SyncObject_Dict() {
  TriggerDictionaryInitialization_SyncObject_Dict_Impl();
}
