// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME EventHeaderv1_Dict
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
#include "../EventHeaderv1.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static void *new_EventHeaderv1(void *p = nullptr);
   static void *newArray_EventHeaderv1(Long_t size, void *p);
   static void delete_EventHeaderv1(void *p);
   static void deleteArray_EventHeaderv1(void *p);
   static void destruct_EventHeaderv1(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::EventHeaderv1*)
   {
      ::EventHeaderv1 *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::EventHeaderv1 >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("EventHeaderv1", ::EventHeaderv1::Class_Version(), "", 18,
                  typeid(::EventHeaderv1), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::EventHeaderv1::Dictionary, isa_proxy, 4,
                  sizeof(::EventHeaderv1) );
      instance.SetNew(&new_EventHeaderv1);
      instance.SetNewArray(&newArray_EventHeaderv1);
      instance.SetDelete(&delete_EventHeaderv1);
      instance.SetDeleteArray(&deleteArray_EventHeaderv1);
      instance.SetDestructor(&destruct_EventHeaderv1);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::EventHeaderv1*)
   {
      return GenerateInitInstanceLocal(static_cast<::EventHeaderv1*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::EventHeaderv1*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr EventHeaderv1::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *EventHeaderv1::Class_Name()
{
   return "EventHeaderv1";
}

//______________________________________________________________________________
const char *EventHeaderv1::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EventHeaderv1*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int EventHeaderv1::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EventHeaderv1*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *EventHeaderv1::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EventHeaderv1*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *EventHeaderv1::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EventHeaderv1*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void EventHeaderv1::Streamer(TBuffer &R__b)
{
   // Stream an object of class EventHeaderv1.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(EventHeaderv1::Class(),this);
   } else {
      R__b.WriteClassBuffer(EventHeaderv1::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_EventHeaderv1(void *p) {
      return  p ? new(p) ::EventHeaderv1 : new ::EventHeaderv1;
   }
   static void *newArray_EventHeaderv1(Long_t nElements, void *p) {
      return p ? new(p) ::EventHeaderv1[nElements] : new ::EventHeaderv1[nElements];
   }
   // Wrapper around operator delete
   static void delete_EventHeaderv1(void *p) {
      delete (static_cast<::EventHeaderv1*>(p));
   }
   static void deleteArray_EventHeaderv1(void *p) {
      delete [] (static_cast<::EventHeaderv1*>(p));
   }
   static void destruct_EventHeaderv1(void *p) {
      typedef ::EventHeaderv1 current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::EventHeaderv1

namespace ROOT {
   static TClass *maplEstringcOlonggR_Dictionary();
   static void maplEstringcOlonggR_TClassManip(TClass*);
   static void *new_maplEstringcOlonggR(void *p = nullptr);
   static void *newArray_maplEstringcOlonggR(Long_t size, void *p);
   static void delete_maplEstringcOlonggR(void *p);
   static void deleteArray_maplEstringcOlonggR(void *p);
   static void destruct_maplEstringcOlonggR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<string,long>*)
   {
      map<string,long> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<string,long>));
      static ::ROOT::TGenericClassInfo 
         instance("map<string,long>", -2, "map", 102,
                  typeid(map<string,long>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEstringcOlonggR_Dictionary, isa_proxy, 0,
                  sizeof(map<string,long>) );
      instance.SetNew(&new_maplEstringcOlonggR);
      instance.SetNewArray(&newArray_maplEstringcOlonggR);
      instance.SetDelete(&delete_maplEstringcOlonggR);
      instance.SetDeleteArray(&deleteArray_maplEstringcOlonggR);
      instance.SetDestructor(&destruct_maplEstringcOlonggR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<string,long> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("map<string,long>","std::map<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >, long, std::less<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > >, std::allocator<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const, long> > >"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const map<string,long>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEstringcOlonggR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const map<string,long>*>(nullptr))->GetClass();
      maplEstringcOlonggR_TClassManip(theClass);
   return theClass;
   }

   static void maplEstringcOlonggR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEstringcOlonggR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) map<string,long> : new map<string,long>;
   }
   static void *newArray_maplEstringcOlonggR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) map<string,long>[nElements] : new map<string,long>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEstringcOlonggR(void *p) {
      delete (static_cast<map<string,long>*>(p));
   }
   static void deleteArray_maplEstringcOlonggR(void *p) {
      delete [] (static_cast<map<string,long>*>(p));
   }
   static void destruct_maplEstringcOlonggR(void *p) {
      typedef map<string,long> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class map<string,long>

namespace ROOT {
   static TClass *maplEstringcOfloatgR_Dictionary();
   static void maplEstringcOfloatgR_TClassManip(TClass*);
   static void *new_maplEstringcOfloatgR(void *p = nullptr);
   static void *newArray_maplEstringcOfloatgR(Long_t size, void *p);
   static void delete_maplEstringcOfloatgR(void *p);
   static void deleteArray_maplEstringcOfloatgR(void *p);
   static void destruct_maplEstringcOfloatgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<string,float>*)
   {
      map<string,float> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<string,float>));
      static ::ROOT::TGenericClassInfo 
         instance("map<string,float>", -2, "map", 102,
                  typeid(map<string,float>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEstringcOfloatgR_Dictionary, isa_proxy, 0,
                  sizeof(map<string,float>) );
      instance.SetNew(&new_maplEstringcOfloatgR);
      instance.SetNewArray(&newArray_maplEstringcOfloatgR);
      instance.SetDelete(&delete_maplEstringcOfloatgR);
      instance.SetDeleteArray(&deleteArray_maplEstringcOfloatgR);
      instance.SetDestructor(&destruct_maplEstringcOfloatgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<string,float> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("map<string,float>","std::map<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >, float, std::less<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > >, std::allocator<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const, float> > >"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const map<string,float>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEstringcOfloatgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const map<string,float>*>(nullptr))->GetClass();
      maplEstringcOfloatgR_TClassManip(theClass);
   return theClass;
   }

   static void maplEstringcOfloatgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEstringcOfloatgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) map<string,float> : new map<string,float>;
   }
   static void *newArray_maplEstringcOfloatgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) map<string,float>[nElements] : new map<string,float>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEstringcOfloatgR(void *p) {
      delete (static_cast<map<string,float>*>(p));
   }
   static void deleteArray_maplEstringcOfloatgR(void *p) {
      delete [] (static_cast<map<string,float>*>(p));
   }
   static void destruct_maplEstringcOfloatgR(void *p) {
      typedef map<string,float> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class map<string,float>

namespace {
  void TriggerDictionaryInitialization_EventHeaderv1_Dict_Impl() {
    static const char* headers[] = {
"0",
nullptr
    };
    static const char* includePaths[] = {
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "EventHeaderv1_Dict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
class EventHeaderv1;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "EventHeaderv1_Dict dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
// Tell emacs that this is a C++ source
//  -*- C++ -*-.
#ifndef FFAOBJECTS_EVENTHEADERV1_H
#define FFAOBJECTS_EVENTHEADERV1_H

#include "EventHeader.h"

#include <cstdint>   // for int64_t
#include <iostream>  // for cout, ostream
#include <map>
#include <string>

class PHObject;

//! simple event header with ID and time
class EventHeaderv1 : public EventHeader
{
 public:
  /// ctor
  EventHeaderv1() = default;
  /// dtor
  ~EventHeaderv1() override = default;

  PHObject *CloneMe() const override { return new EventHeaderv1(*this); }

  ///  Clear Event
  void Reset() override;

  /** identify Function from PHObject
      @param os Output Stream 
   */
  void identify(std::ostream &os = std::cout) const override;

  /// isValid returns non zero if object contains valid data
  int isValid() const override;

  void CopyTo(EventHeader *) override;

  /// get Run Number
  int get_RunNumber() const override { return RunNumber; }
  /// set Run Number
  void set_RunNumber(const int run) override { RunNumber = run; }

  /// get Event Number
  int get_EvtSequence() const override { return EvtSequence; }
  /// set Event Number
  void set_EvtSequence(const int evtno) override { EvtSequence = evtno; }

  void set_floatval(const std::string &name, const float fval) override;
  float get_floatval(const std::string &name) const override;

  void set_intval(const std::string &name, const int64_t ival) override;
  int64_t get_intval(const std::string &name) const override;

 private:
  int RunNumber {0};    // Run number
  int EvtSequence {0};  // Event number
  std::map<std::string, int64_t> m_IntEventProperties;
  std::map<std::string, float> m_FloatEventProperties;

  ClassDefOverride(EventHeaderv1, 2)
};

#endif

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"EventHeaderv1", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("EventHeaderv1_Dict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_EventHeaderv1_Dict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_EventHeaderv1_Dict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_EventHeaderv1_Dict() {
  TriggerDictionaryInitialization_EventHeaderv1_Dict_Impl();
}
