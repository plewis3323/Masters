// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME TowerInfoSimv2_Dict
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
#include "../TowerInfoSimv2.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static void *new_TowerInfoSimv2(void *p = nullptr);
   static void *newArray_TowerInfoSimv2(Long_t size, void *p);
   static void delete_TowerInfoSimv2(void *p);
   static void deleteArray_TowerInfoSimv2(void *p);
   static void destruct_TowerInfoSimv2(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TowerInfoSimv2*)
   {
      ::TowerInfoSimv2 *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TowerInfoSimv2 >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TowerInfoSimv2", ::TowerInfoSimv2::Class_Version(), "", 11,
                  typeid(::TowerInfoSimv2), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TowerInfoSimv2::Dictionary, isa_proxy, 4,
                  sizeof(::TowerInfoSimv2) );
      instance.SetNew(&new_TowerInfoSimv2);
      instance.SetNewArray(&newArray_TowerInfoSimv2);
      instance.SetDelete(&delete_TowerInfoSimv2);
      instance.SetDeleteArray(&deleteArray_TowerInfoSimv2);
      instance.SetDestructor(&destruct_TowerInfoSimv2);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TowerInfoSimv2*)
   {
      return GenerateInitInstanceLocal(static_cast<::TowerInfoSimv2*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TowerInfoSimv2*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr TowerInfoSimv2::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TowerInfoSimv2::Class_Name()
{
   return "TowerInfoSimv2";
}

//______________________________________________________________________________
const char *TowerInfoSimv2::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TowerInfoSimv2*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TowerInfoSimv2::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TowerInfoSimv2*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TowerInfoSimv2::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TowerInfoSimv2*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TowerInfoSimv2::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TowerInfoSimv2*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void TowerInfoSimv2::Streamer(TBuffer &R__b)
{
   // Stream an object of class TowerInfoSimv2.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TowerInfoSimv2::Class(),this);
   } else {
      R__b.WriteClassBuffer(TowerInfoSimv2::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TowerInfoSimv2(void *p) {
      return  p ? new(p) ::TowerInfoSimv2 : new ::TowerInfoSimv2;
   }
   static void *newArray_TowerInfoSimv2(Long_t nElements, void *p) {
      return p ? new(p) ::TowerInfoSimv2[nElements] : new ::TowerInfoSimv2[nElements];
   }
   // Wrapper around operator delete
   static void delete_TowerInfoSimv2(void *p) {
      delete (static_cast<::TowerInfoSimv2*>(p));
   }
   static void deleteArray_TowerInfoSimv2(void *p) {
      delete [] (static_cast<::TowerInfoSimv2*>(p));
   }
   static void destruct_TowerInfoSimv2(void *p) {
      typedef ::TowerInfoSimv2 current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TowerInfoSimv2

namespace ROOT {
   static TClass *maplEintcOfloatgR_Dictionary();
   static void maplEintcOfloatgR_TClassManip(TClass*);
   static void *new_maplEintcOfloatgR(void *p = nullptr);
   static void *newArray_maplEintcOfloatgR(Long_t size, void *p);
   static void delete_maplEintcOfloatgR(void *p);
   static void deleteArray_maplEintcOfloatgR(void *p);
   static void destruct_maplEintcOfloatgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<int,float>*)
   {
      map<int,float> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<int,float>));
      static ::ROOT::TGenericClassInfo 
         instance("map<int,float>", -2, "map", 102,
                  typeid(map<int,float>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEintcOfloatgR_Dictionary, isa_proxy, 0,
                  sizeof(map<int,float>) );
      instance.SetNew(&new_maplEintcOfloatgR);
      instance.SetNewArray(&newArray_maplEintcOfloatgR);
      instance.SetDelete(&delete_maplEintcOfloatgR);
      instance.SetDeleteArray(&deleteArray_maplEintcOfloatgR);
      instance.SetDestructor(&destruct_maplEintcOfloatgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<int,float> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("map<int,float>","std::map<int, float, std::less<int>, std::allocator<std::pair<int const, float> > >"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const map<int,float>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEintcOfloatgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const map<int,float>*>(nullptr))->GetClass();
      maplEintcOfloatgR_TClassManip(theClass);
   return theClass;
   }

   static void maplEintcOfloatgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEintcOfloatgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) map<int,float> : new map<int,float>;
   }
   static void *newArray_maplEintcOfloatgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) map<int,float>[nElements] : new map<int,float>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEintcOfloatgR(void *p) {
      delete (static_cast<map<int,float>*>(p));
   }
   static void deleteArray_maplEintcOfloatgR(void *p) {
      delete [] (static_cast<map<int,float>*>(p));
   }
   static void destruct_maplEintcOfloatgR(void *p) {
      typedef map<int,float> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class map<int,float>

namespace ROOT {
   static TClass *maplEULong64_tcOfloatgR_Dictionary();
   static void maplEULong64_tcOfloatgR_TClassManip(TClass*);
   static void *new_maplEULong64_tcOfloatgR(void *p = nullptr);
   static void *newArray_maplEULong64_tcOfloatgR(Long_t size, void *p);
   static void delete_maplEULong64_tcOfloatgR(void *p);
   static void deleteArray_maplEULong64_tcOfloatgR(void *p);
   static void destruct_maplEULong64_tcOfloatgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<ULong64_t,float>*)
   {
      map<ULong64_t,float> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<ULong64_t,float>));
      static ::ROOT::TGenericClassInfo 
         instance("map<ULong64_t,float>", -2, "map", 102,
                  typeid(map<ULong64_t,float>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEULong64_tcOfloatgR_Dictionary, isa_proxy, 0,
                  sizeof(map<ULong64_t,float>) );
      instance.SetNew(&new_maplEULong64_tcOfloatgR);
      instance.SetNewArray(&newArray_maplEULong64_tcOfloatgR);
      instance.SetDelete(&delete_maplEULong64_tcOfloatgR);
      instance.SetDeleteArray(&deleteArray_maplEULong64_tcOfloatgR);
      instance.SetDestructor(&destruct_maplEULong64_tcOfloatgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<ULong64_t,float> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("map<ULong64_t,float>","std::map<unsigned long long, float, std::less<unsigned long long>, std::allocator<std::pair<unsigned long long const, float> > >"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const map<ULong64_t,float>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEULong64_tcOfloatgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const map<ULong64_t,float>*>(nullptr))->GetClass();
      maplEULong64_tcOfloatgR_TClassManip(theClass);
   return theClass;
   }

   static void maplEULong64_tcOfloatgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEULong64_tcOfloatgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) map<ULong64_t,float> : new map<ULong64_t,float>;
   }
   static void *newArray_maplEULong64_tcOfloatgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) map<ULong64_t,float>[nElements] : new map<ULong64_t,float>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEULong64_tcOfloatgR(void *p) {
      delete (static_cast<map<ULong64_t,float>*>(p));
   }
   static void deleteArray_maplEULong64_tcOfloatgR(void *p) {
      delete [] (static_cast<map<ULong64_t,float>*>(p));
   }
   static void destruct_maplEULong64_tcOfloatgR(void *p) {
      typedef map<ULong64_t,float> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class map<ULong64_t,float>

namespace {
  void TriggerDictionaryInitialization_TowerInfoSimv2_Dict_Impl() {
    static const char* headers[] = {
"0",
nullptr
    };
    static const char* includePaths[] = {
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "TowerInfoSimv2_Dict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
class TowerInfoSimv2;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "TowerInfoSimv2_Dict dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#ifndef TOWERINFOSIMV2_H
#define TOWERINFOSIMV2_H

#include "TowerInfoSimv1.h"
#include "TowerInfo.h"

#include <cstdint>  // For int16_t

class TowerInfoSimv2 : public TowerInfoSimv1
{
 public:
    
  TowerInfoSimv2() {}
  ~TowerInfoSimv2() override {}
  
  void Reset() override;
  void Clear(Option_t* = "") override;

  void copy_tower(TowerInfo* tower) override;

  int get_nsample() const override { return nsample; }
  int16_t get_waveform_value(int index) const override;
  void set_waveform_value(int index, int16_t value) override;

 private:
  EdepMap _hitedeps;
  ShowerEdepMap _showeredeps;

  static const int nsample = 31;
  int16_t _waveform[nsample] = {0}; // Initializes the entire array to zero

  ClassDefOverride(TowerInfoSimv2, 1);
  // Inherit other methods and properties from TowerInfoSimv1
};

#endif

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"TowerInfoSimv2", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("TowerInfoSimv2_Dict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_TowerInfoSimv2_Dict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_TowerInfoSimv2_Dict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_TowerInfoSimv2_Dict() {
  TriggerDictionaryInitialization_TowerInfoSimv2_Dict_Impl();
}
