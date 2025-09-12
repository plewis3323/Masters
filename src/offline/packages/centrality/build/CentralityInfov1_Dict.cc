// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME CentralityInfov1_Dict
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
#include "../CentralityInfov1.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static void *new_CentralityInfov1(void *p = nullptr);
   static void *newArray_CentralityInfov1(Long_t size, void *p);
   static void delete_CentralityInfov1(void *p);
   static void deleteArray_CentralityInfov1(void *p);
   static void destruct_CentralityInfov1(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CentralityInfov1*)
   {
      ::CentralityInfov1 *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::CentralityInfov1 >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("CentralityInfov1", ::CentralityInfov1::Class_Version(), "", 11,
                  typeid(::CentralityInfov1), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::CentralityInfov1::Dictionary, isa_proxy, 4,
                  sizeof(::CentralityInfov1) );
      instance.SetNew(&new_CentralityInfov1);
      instance.SetNewArray(&newArray_CentralityInfov1);
      instance.SetDelete(&delete_CentralityInfov1);
      instance.SetDeleteArray(&deleteArray_CentralityInfov1);
      instance.SetDestructor(&destruct_CentralityInfov1);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CentralityInfov1*)
   {
      return GenerateInitInstanceLocal(static_cast<::CentralityInfov1*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::CentralityInfov1*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr CentralityInfov1::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *CentralityInfov1::Class_Name()
{
   return "CentralityInfov1";
}

//______________________________________________________________________________
const char *CentralityInfov1::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CentralityInfov1*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int CentralityInfov1::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CentralityInfov1*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *CentralityInfov1::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CentralityInfov1*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *CentralityInfov1::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CentralityInfov1*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void CentralityInfov1::Streamer(TBuffer &R__b)
{
   // Stream an object of class CentralityInfov1.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(CentralityInfov1::Class(),this);
   } else {
      R__b.WriteClassBuffer(CentralityInfov1::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_CentralityInfov1(void *p) {
      return  p ? new(p) ::CentralityInfov1 : new ::CentralityInfov1;
   }
   static void *newArray_CentralityInfov1(Long_t nElements, void *p) {
      return p ? new(p) ::CentralityInfov1[nElements] : new ::CentralityInfov1[nElements];
   }
   // Wrapper around operator delete
   static void delete_CentralityInfov1(void *p) {
      delete (static_cast<::CentralityInfov1*>(p));
   }
   static void deleteArray_CentralityInfov1(void *p) {
      delete [] (static_cast<::CentralityInfov1*>(p));
   }
   static void destruct_CentralityInfov1(void *p) {
      typedef ::CentralityInfov1 current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::CentralityInfov1

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

namespace {
  void TriggerDictionaryInitialization_CentralityInfov1_Dict_Impl() {
    static const char* headers[] = {
"0",
nullptr
    };
    static const char* includePaths[] = {
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "CentralityInfov1_Dict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
class CentralityInfov1;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "CentralityInfov1_Dict dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#ifndef CENTRALITY_CENTRALITYINFOV1_H
#define CENTRALITY_CENTRALITYINFOV1_H

#include "CentralityInfo.h"

#include <iostream>
#include <map>

class CentralityInfov1 : public CentralityInfo
{
 public:
  CentralityInfov1() = default;
  ~CentralityInfov1() override {}

  void identify(std::ostream &os = std::cout) const override;
  void Reset() override;
  int isValid() const override { return 1; }

  PHObject* CloneMe() const override { return new CentralityInfov1(*this); }
  void CopyTo(CentralityInfo *info) override;

  bool has_quantity(const PROP prop_id) const override;
  float get_quantity(const PROP prop_id) const override;
  void set_quantity(const PROP prop_id, const float value) override;

  bool has_centile(const PROP prop_id) const override;
  float get_centile(const PROP prop_id) const override;
  void set_centile(const PROP prop_id, const float value) override;

 private:
  std::map<int, float> _quantity_map;
  std::map<int, float> _centile_map;

  ClassDefOverride(CentralityInfov1, 1);
};

#endif

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"CentralityInfov1", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("CentralityInfov1_Dict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_CentralityInfov1_Dict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_CentralityInfov1_Dict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_CentralityInfov1_Dict() {
  TriggerDictionaryInitialization_CentralityInfov1_Dict_Impl();
}
