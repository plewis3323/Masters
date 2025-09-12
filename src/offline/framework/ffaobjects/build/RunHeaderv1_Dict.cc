// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME RunHeaderv1_Dict
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
#include "../RunHeaderv1.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static void *new_RunHeaderv1(void *p = nullptr);
   static void *newArray_RunHeaderv1(Long_t size, void *p);
   static void delete_RunHeaderv1(void *p);
   static void deleteArray_RunHeaderv1(void *p);
   static void destruct_RunHeaderv1(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RunHeaderv1*)
   {
      ::RunHeaderv1 *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RunHeaderv1 >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RunHeaderv1", ::RunHeaderv1::Class_Version(), "", 14,
                  typeid(::RunHeaderv1), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RunHeaderv1::Dictionary, isa_proxy, 4,
                  sizeof(::RunHeaderv1) );
      instance.SetNew(&new_RunHeaderv1);
      instance.SetNewArray(&newArray_RunHeaderv1);
      instance.SetDelete(&delete_RunHeaderv1);
      instance.SetDeleteArray(&deleteArray_RunHeaderv1);
      instance.SetDestructor(&destruct_RunHeaderv1);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RunHeaderv1*)
   {
      return GenerateInitInstanceLocal(static_cast<::RunHeaderv1*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RunHeaderv1*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr RunHeaderv1::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *RunHeaderv1::Class_Name()
{
   return "RunHeaderv1";
}

//______________________________________________________________________________
const char *RunHeaderv1::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RunHeaderv1*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int RunHeaderv1::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RunHeaderv1*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RunHeaderv1::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RunHeaderv1*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RunHeaderv1::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RunHeaderv1*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void RunHeaderv1::Streamer(TBuffer &R__b)
{
   // Stream an object of class RunHeaderv1.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RunHeaderv1::Class(),this);
   } else {
      R__b.WriteClassBuffer(RunHeaderv1::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RunHeaderv1(void *p) {
      return  p ? new(p) ::RunHeaderv1 : new ::RunHeaderv1;
   }
   static void *newArray_RunHeaderv1(Long_t nElements, void *p) {
      return p ? new(p) ::RunHeaderv1[nElements] : new ::RunHeaderv1[nElements];
   }
   // Wrapper around operator delete
   static void delete_RunHeaderv1(void *p) {
      delete (static_cast<::RunHeaderv1*>(p));
   }
   static void deleteArray_RunHeaderv1(void *p) {
      delete [] (static_cast<::RunHeaderv1*>(p));
   }
   static void destruct_RunHeaderv1(void *p) {
      typedef ::RunHeaderv1 current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RunHeaderv1

namespace ROOT {
   static TClass *maplEstringcOintgR_Dictionary();
   static void maplEstringcOintgR_TClassManip(TClass*);
   static void *new_maplEstringcOintgR(void *p = nullptr);
   static void *newArray_maplEstringcOintgR(Long_t size, void *p);
   static void delete_maplEstringcOintgR(void *p);
   static void deleteArray_maplEstringcOintgR(void *p);
   static void destruct_maplEstringcOintgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<string,int>*)
   {
      map<string,int> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<string,int>));
      static ::ROOT::TGenericClassInfo 
         instance("map<string,int>", -2, "map", 102,
                  typeid(map<string,int>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEstringcOintgR_Dictionary, isa_proxy, 0,
                  sizeof(map<string,int>) );
      instance.SetNew(&new_maplEstringcOintgR);
      instance.SetNewArray(&newArray_maplEstringcOintgR);
      instance.SetDelete(&delete_maplEstringcOintgR);
      instance.SetDeleteArray(&deleteArray_maplEstringcOintgR);
      instance.SetDestructor(&destruct_maplEstringcOintgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<string,int> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("map<string,int>","std::map<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >, int, std::less<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > >, std::allocator<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const, int> > >"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const map<string,int>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEstringcOintgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const map<string,int>*>(nullptr))->GetClass();
      maplEstringcOintgR_TClassManip(theClass);
   return theClass;
   }

   static void maplEstringcOintgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEstringcOintgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) map<string,int> : new map<string,int>;
   }
   static void *newArray_maplEstringcOintgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) map<string,int>[nElements] : new map<string,int>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEstringcOintgR(void *p) {
      delete (static_cast<map<string,int>*>(p));
   }
   static void deleteArray_maplEstringcOintgR(void *p) {
      delete [] (static_cast<map<string,int>*>(p));
   }
   static void destruct_maplEstringcOintgR(void *p) {
      typedef map<string,int> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class map<string,int>

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
  void TriggerDictionaryInitialization_RunHeaderv1_Dict_Impl() {
    static const char* headers[] = {
"0",
nullptr
    };
    static const char* includePaths[] = {
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "RunHeaderv1_Dict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
class RunHeaderv1;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "RunHeaderv1_Dict dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
// Tell emacs that this is a C++ source
//  -*- C++ -*-.
#ifndef FFAOBJECTS_RUNHEADERV1_H
#define FFAOBJECTS_RUNHEADERV1_H

#include "RunHeader.h"

#include <iostream>
#include <map>
#include <string>

class RunHeaderv1 : public RunHeader
{
 public:
  RunHeaderv1() = default;
  ~RunHeaderv1() override = default;

  void Reset() override { return; }
  void identify(std::ostream &os = std::cout) const override;
  int isValid() const override;
  PHObject* CloneMe() const override { return new RunHeaderv1(*this);}
  int get_RunNumber() const override { return RunNumber; }
  void set_RunNumber(const int run) override
  {
    RunNumber = run;
    return;
  }

  void set_floatval(const std::string &name, const float fval) override;
  float get_floatval(const std::string &name) const override;

  void set_intval(const std::string &name, const int ival) override;
  int get_intval(const std::string &name) const override;

 private:
  int RunNumber = 0;
  std::map<std::string, int> m_IntRunProperties;
  std::map<std::string, float> m_FloatRunProperties;

  ClassDefOverride(RunHeaderv1, 1)
};

#endif /* FFAOBJECTS_RUNHEADERV1_H */

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"RunHeaderv1", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("RunHeaderv1_Dict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_RunHeaderv1_Dict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_RunHeaderv1_Dict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_RunHeaderv1_Dict() {
  TriggerDictionaryInitialization_RunHeaderv1_Dict_Impl();
}
