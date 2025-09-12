// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME PHObject_Dict
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
#include "../PHObject.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static void *new_PHObject(void *p = nullptr);
   static void *newArray_PHObject(Long_t size, void *p);
   static void delete_PHObject(void *p);
   static void deleteArray_PHObject(void *p);
   static void destruct_PHObject(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::PHObject*)
   {
      ::PHObject *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::PHObject >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("PHObject", ::PHObject::Class_Version(), "", 15,
                  typeid(::PHObject), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::PHObject::Dictionary, isa_proxy, 4,
                  sizeof(::PHObject) );
      instance.SetNew(&new_PHObject);
      instance.SetNewArray(&newArray_PHObject);
      instance.SetDelete(&delete_PHObject);
      instance.SetDeleteArray(&deleteArray_PHObject);
      instance.SetDestructor(&destruct_PHObject);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::PHObject*)
   {
      return GenerateInitInstanceLocal(static_cast<::PHObject*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::PHObject*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr PHObject::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *PHObject::Class_Name()
{
   return "PHObject";
}

//______________________________________________________________________________
const char *PHObject::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::PHObject*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int PHObject::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::PHObject*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *PHObject::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::PHObject*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *PHObject::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::PHObject*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void PHObject::Streamer(TBuffer &R__b)
{
   // Stream an object of class PHObject.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(PHObject::Class(),this);
   } else {
      R__b.WriteClassBuffer(PHObject::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_PHObject(void *p) {
      return  p ? new(p) ::PHObject : new ::PHObject;
   }
   static void *newArray_PHObject(Long_t nElements, void *p) {
      return p ? new(p) ::PHObject[nElements] : new ::PHObject[nElements];
   }
   // Wrapper around operator delete
   static void delete_PHObject(void *p) {
      delete (static_cast<::PHObject*>(p));
   }
   static void deleteArray_PHObject(void *p) {
      delete [] (static_cast<::PHObject*>(p));
   }
   static void destruct_PHObject(void *p) {
      typedef ::PHObject current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::PHObject

namespace {
  void TriggerDictionaryInitialization_PHObject_Dict_Impl() {
    static const char* headers[] = {
"0",
nullptr
    };
    static const char* includePaths[] = {
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "PHObject_Dict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
class PHObject;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "PHObject_Dict dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#ifndef PHOOL_PHOBJECT_H
#define PHOOL_PHOBJECT_H

//  Declaration of class PHObject
//  Purpose: Tiny layer between TObject and output objects and
//           enforce some standards
//  Author: Chris Pinkenburg

#include <TObject.h>

#include <iostream>

class PHObject : public TObject
{
 public:
  /// ctor
  PHObject() {}

  /// dtor
  ~PHObject() override {}
  /// Virtual copy constructor.
  virtual PHObject* CloneMe() const;

  virtual PHObject* clone() const final;
  PHObject* Clone(const char* newname = "") const final;
  void Copy(TObject& object) const final;

  /** identify Function from PHObject
      @param os Output Stream
   */
  virtual void identify(std::ostream& os = std::cout) const;

  /// Clear Event
  virtual void Reset();

  /// isValid returns non zero if object contains vailid data
  virtual int isValid() const;

  virtual int Integrate() const { return 0; }
  virtual int Integrate(PHObject* /*obj*/) { return -1; }
  virtual void CopyFrom(const PHObject* obj);

 private:
  ClassDefOverride(PHObject, 0)  // no I/O
};

#endif /* PHOOL_PHOBJECT_H */

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"PHObject", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("PHObject_Dict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_PHObject_Dict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_PHObject_Dict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_PHObject_Dict() {
  TriggerDictionaryInitialization_PHObject_Dict_Impl();
}
