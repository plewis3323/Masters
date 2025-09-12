// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME TowerInfoSimv1_Dict
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
#include "../TowerInfoSimv1.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static void *new_TowerInfoSimv1(void *p = nullptr);
   static void *newArray_TowerInfoSimv1(Long_t size, void *p);
   static void delete_TowerInfoSimv1(void *p);
   static void deleteArray_TowerInfoSimv1(void *p);
   static void destruct_TowerInfoSimv1(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TowerInfoSimv1*)
   {
      ::TowerInfoSimv1 *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TowerInfoSimv1 >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TowerInfoSimv1", ::TowerInfoSimv1::Class_Version(), "", 11,
                  typeid(::TowerInfoSimv1), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TowerInfoSimv1::Dictionary, isa_proxy, 4,
                  sizeof(::TowerInfoSimv1) );
      instance.SetNew(&new_TowerInfoSimv1);
      instance.SetNewArray(&newArray_TowerInfoSimv1);
      instance.SetDelete(&delete_TowerInfoSimv1);
      instance.SetDeleteArray(&deleteArray_TowerInfoSimv1);
      instance.SetDestructor(&destruct_TowerInfoSimv1);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TowerInfoSimv1*)
   {
      return GenerateInitInstanceLocal(static_cast<::TowerInfoSimv1*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TowerInfoSimv1*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr TowerInfoSimv1::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TowerInfoSimv1::Class_Name()
{
   return "TowerInfoSimv1";
}

//______________________________________________________________________________
const char *TowerInfoSimv1::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TowerInfoSimv1*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TowerInfoSimv1::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TowerInfoSimv1*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TowerInfoSimv1::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TowerInfoSimv1*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TowerInfoSimv1::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TowerInfoSimv1*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void TowerInfoSimv1::Streamer(TBuffer &R__b)
{
   // Stream an object of class TowerInfoSimv1.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TowerInfoSimv1::Class(),this);
   } else {
      R__b.WriteClassBuffer(TowerInfoSimv1::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TowerInfoSimv1(void *p) {
      return  p ? new(p) ::TowerInfoSimv1 : new ::TowerInfoSimv1;
   }
   static void *newArray_TowerInfoSimv1(Long_t nElements, void *p) {
      return p ? new(p) ::TowerInfoSimv1[nElements] : new ::TowerInfoSimv1[nElements];
   }
   // Wrapper around operator delete
   static void delete_TowerInfoSimv1(void *p) {
      delete (static_cast<::TowerInfoSimv1*>(p));
   }
   static void deleteArray_TowerInfoSimv1(void *p) {
      delete [] (static_cast<::TowerInfoSimv1*>(p));
   }
   static void destruct_TowerInfoSimv1(void *p) {
      typedef ::TowerInfoSimv1 current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TowerInfoSimv1

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
  void TriggerDictionaryInitialization_TowerInfoSimv1_Dict_Impl() {
    static const char* headers[] = {
"0",
nullptr
    };
    static const char* includePaths[] = {
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "TowerInfoSimv1_Dict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
class TowerInfoSimv1;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "TowerInfoSimv1_Dict dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#ifndef TOWERINFOSIMV1_H
#define TOWERINFOSIMV1_H

#include "TowerInfov2.h"
#include "TowerInfo.h"

#include <cstdint>  // For int16_t

class TowerInfoSimv1 : public TowerInfov2
{
 public:
    
  TowerInfoSimv1() {}
  ~TowerInfoSimv1() override {}
  
  void Reset() override;
  void Clear(Option_t* = "") override;

  void copy_tower(TowerInfo* tower) override;

  EdepMap& get_hitEdepMap() override;
  ShowerEdepMap& get_showerEdepMap() override;
  const EdepMap& get_hitEdepMap() const override;
  const ShowerEdepMap& get_showerEdepMap() const override;
  void add_edep(const PHG4HitDefs::keytype g4hitid, const float edep) override;
  void add_shower_edep(const int showerid, const float edep) override;

 private:
  EdepMap _hitedeps;
  ShowerEdepMap _showeredeps;

  ClassDefOverride(TowerInfoSimv1, 1);
  // Inherit other methods and properties from TowerInfov2
};

#endif

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"TowerInfoSimv1", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("TowerInfoSimv1_Dict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_TowerInfoSimv1_Dict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_TowerInfoSimv1_Dict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_TowerInfoSimv1_Dict() {
  TriggerDictionaryInitialization_TowerInfoSimv1_Dict_Impl();
}
