// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME CentralityInfov2_Dict
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
#include "../CentralityInfov2.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static void *new_CentralityInfov2(void *p = nullptr);
   static void *newArray_CentralityInfov2(Long_t size, void *p);
   static void delete_CentralityInfov2(void *p);
   static void deleteArray_CentralityInfov2(void *p);
   static void destruct_CentralityInfov2(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CentralityInfov2*)
   {
      ::CentralityInfov2 *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::CentralityInfov2 >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("CentralityInfov2", ::CentralityInfov2::Class_Version(), "", 11,
                  typeid(::CentralityInfov2), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::CentralityInfov2::Dictionary, isa_proxy, 4,
                  sizeof(::CentralityInfov2) );
      instance.SetNew(&new_CentralityInfov2);
      instance.SetNewArray(&newArray_CentralityInfov2);
      instance.SetDelete(&delete_CentralityInfov2);
      instance.SetDeleteArray(&deleteArray_CentralityInfov2);
      instance.SetDestructor(&destruct_CentralityInfov2);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CentralityInfov2*)
   {
      return GenerateInitInstanceLocal(static_cast<::CentralityInfov2*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::CentralityInfov2*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr CentralityInfov2::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *CentralityInfov2::Class_Name()
{
   return "CentralityInfov2";
}

//______________________________________________________________________________
const char *CentralityInfov2::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CentralityInfov2*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int CentralityInfov2::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CentralityInfov2*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *CentralityInfov2::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CentralityInfov2*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *CentralityInfov2::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CentralityInfov2*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void CentralityInfov2::Streamer(TBuffer &R__b)
{
   // Stream an object of class CentralityInfov2.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(CentralityInfov2::Class(),this);
   } else {
      R__b.WriteClassBuffer(CentralityInfov2::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_CentralityInfov2(void *p) {
      return  p ? new(p) ::CentralityInfov2 : new ::CentralityInfov2;
   }
   static void *newArray_CentralityInfov2(Long_t nElements, void *p) {
      return p ? new(p) ::CentralityInfov2[nElements] : new ::CentralityInfov2[nElements];
   }
   // Wrapper around operator delete
   static void delete_CentralityInfov2(void *p) {
      delete (static_cast<::CentralityInfov2*>(p));
   }
   static void deleteArray_CentralityInfov2(void *p) {
      delete [] (static_cast<::CentralityInfov2*>(p));
   }
   static void destruct_CentralityInfov2(void *p) {
      typedef ::CentralityInfov2 current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::CentralityInfov2

namespace ROOT {
   static TClass *maplEintcOintgR_Dictionary();
   static void maplEintcOintgR_TClassManip(TClass*);
   static void *new_maplEintcOintgR(void *p = nullptr);
   static void *newArray_maplEintcOintgR(Long_t size, void *p);
   static void delete_maplEintcOintgR(void *p);
   static void deleteArray_maplEintcOintgR(void *p);
   static void destruct_maplEintcOintgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<int,int>*)
   {
      map<int,int> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<int,int>));
      static ::ROOT::TGenericClassInfo 
         instance("map<int,int>", -2, "map", 102,
                  typeid(map<int,int>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEintcOintgR_Dictionary, isa_proxy, 0,
                  sizeof(map<int,int>) );
      instance.SetNew(&new_maplEintcOintgR);
      instance.SetNewArray(&newArray_maplEintcOintgR);
      instance.SetDelete(&delete_maplEintcOintgR);
      instance.SetDeleteArray(&deleteArray_maplEintcOintgR);
      instance.SetDestructor(&destruct_maplEintcOintgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<int,int> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("map<int,int>","std::map<int, int, std::less<int>, std::allocator<std::pair<int const, int> > >"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const map<int,int>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEintcOintgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const map<int,int>*>(nullptr))->GetClass();
      maplEintcOintgR_TClassManip(theClass);
   return theClass;
   }

   static void maplEintcOintgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEintcOintgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) map<int,int> : new map<int,int>;
   }
   static void *newArray_maplEintcOintgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) map<int,int>[nElements] : new map<int,int>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEintcOintgR(void *p) {
      delete (static_cast<map<int,int>*>(p));
   }
   static void deleteArray_maplEintcOintgR(void *p) {
      delete [] (static_cast<map<int,int>*>(p));
   }
   static void destruct_maplEintcOintgR(void *p) {
      typedef map<int,int> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class map<int,int>

namespace {
  void TriggerDictionaryInitialization_CentralityInfov2_Dict_Impl() {
    static const char* headers[] = {
"0",
nullptr
    };
    static const char* includePaths[] = {
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "CentralityInfov2_Dict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
class CentralityInfov2;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "CentralityInfov2_Dict dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#ifndef CENTRALITY_CENTRALITYINFOV2_H
#define CENTRALITY_CENTRALITYINFOV2_H

#include "CentralityInfov1.h"

#include <iostream>
#include <map>

class CentralityInfov2 : public CentralityInfov1
{
 public:
  CentralityInfov2() = default;
  ~CentralityInfov2() override = default;

  void identify(std::ostream &os = std::cout) const override;
  void Reset() override {}

  PHObject* CloneMe() const override { return new CentralityInfov2(*this); }
  void CopyTo(CentralityInfo *info) override;

  bool has_centrality_bin(const PROP prop_id) const override;
  int get_centrality_bin(const PROP prop_id) const override;
  void set_centrality_bin(const PROP prop_id, const int value) override;
 private:

  std::map<int, int> _centrality_bin_map;

  ClassDefOverride(CentralityInfov2, 1);
};

#endif

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"CentralityInfov2", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("CentralityInfov2_Dict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_CentralityInfov2_Dict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_CentralityInfov2_Dict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_CentralityInfov2_Dict() {
  TriggerDictionaryInitialization_CentralityInfov2_Dict_Impl();
}
