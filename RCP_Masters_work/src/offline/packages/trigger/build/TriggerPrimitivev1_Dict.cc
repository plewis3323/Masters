// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME TriggerPrimitivev1_Dict
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
#include "../TriggerPrimitivev1.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static void *new_TriggerPrimitivev1(void *p = nullptr);
   static void *newArray_TriggerPrimitivev1(Long_t size, void *p);
   static void delete_TriggerPrimitivev1(void *p);
   static void deleteArray_TriggerPrimitivev1(void *p);
   static void destruct_TriggerPrimitivev1(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TriggerPrimitivev1*)
   {
      ::TriggerPrimitivev1 *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TriggerPrimitivev1 >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TriggerPrimitivev1", ::TriggerPrimitivev1::Class_Version(), "", 14,
                  typeid(::TriggerPrimitivev1), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TriggerPrimitivev1::Dictionary, isa_proxy, 4,
                  sizeof(::TriggerPrimitivev1) );
      instance.SetNew(&new_TriggerPrimitivev1);
      instance.SetNewArray(&newArray_TriggerPrimitivev1);
      instance.SetDelete(&delete_TriggerPrimitivev1);
      instance.SetDeleteArray(&deleteArray_TriggerPrimitivev1);
      instance.SetDestructor(&destruct_TriggerPrimitivev1);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TriggerPrimitivev1*)
   {
      return GenerateInitInstanceLocal(static_cast<::TriggerPrimitivev1*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TriggerPrimitivev1*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr TriggerPrimitivev1::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TriggerPrimitivev1::Class_Name()
{
   return "TriggerPrimitivev1";
}

//______________________________________________________________________________
const char *TriggerPrimitivev1::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TriggerPrimitivev1*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TriggerPrimitivev1::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TriggerPrimitivev1*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TriggerPrimitivev1::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TriggerPrimitivev1*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TriggerPrimitivev1::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TriggerPrimitivev1*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void TriggerPrimitivev1::Streamer(TBuffer &R__b)
{
   // Stream an object of class TriggerPrimitivev1.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TriggerPrimitivev1::Class(),this);
   } else {
      R__b.WriteClassBuffer(TriggerPrimitivev1::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TriggerPrimitivev1(void *p) {
      return  p ? new(p) ::TriggerPrimitivev1 : new ::TriggerPrimitivev1;
   }
   static void *newArray_TriggerPrimitivev1(Long_t nElements, void *p) {
      return p ? new(p) ::TriggerPrimitivev1[nElements] : new ::TriggerPrimitivev1[nElements];
   }
   // Wrapper around operator delete
   static void delete_TriggerPrimitivev1(void *p) {
      delete (static_cast<::TriggerPrimitivev1*>(p));
   }
   static void deleteArray_TriggerPrimitivev1(void *p) {
      delete [] (static_cast<::TriggerPrimitivev1*>(p));
   }
   static void destruct_TriggerPrimitivev1(void *p) {
      typedef ::TriggerPrimitivev1 current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TriggerPrimitivev1

namespace ROOT {
   static TClass *maplEunsignedsPintcOvectorlEunsignedsPintgRmUgR_Dictionary();
   static void maplEunsignedsPintcOvectorlEunsignedsPintgRmUgR_TClassManip(TClass*);
   static void *new_maplEunsignedsPintcOvectorlEunsignedsPintgRmUgR(void *p = nullptr);
   static void *newArray_maplEunsignedsPintcOvectorlEunsignedsPintgRmUgR(Long_t size, void *p);
   static void delete_maplEunsignedsPintcOvectorlEunsignedsPintgRmUgR(void *p);
   static void deleteArray_maplEunsignedsPintcOvectorlEunsignedsPintgRmUgR(void *p);
   static void destruct_maplEunsignedsPintcOvectorlEunsignedsPintgRmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<unsigned int,vector<unsigned int>*>*)
   {
      map<unsigned int,vector<unsigned int>*> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<unsigned int,vector<unsigned int>*>));
      static ::ROOT::TGenericClassInfo 
         instance("map<unsigned int,vector<unsigned int>*>", -2, "map", 102,
                  typeid(map<unsigned int,vector<unsigned int>*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEunsignedsPintcOvectorlEunsignedsPintgRmUgR_Dictionary, isa_proxy, 0,
                  sizeof(map<unsigned int,vector<unsigned int>*>) );
      instance.SetNew(&new_maplEunsignedsPintcOvectorlEunsignedsPintgRmUgR);
      instance.SetNewArray(&newArray_maplEunsignedsPintcOvectorlEunsignedsPintgRmUgR);
      instance.SetDelete(&delete_maplEunsignedsPintcOvectorlEunsignedsPintgRmUgR);
      instance.SetDeleteArray(&deleteArray_maplEunsignedsPintcOvectorlEunsignedsPintgRmUgR);
      instance.SetDestructor(&destruct_maplEunsignedsPintcOvectorlEunsignedsPintgRmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<unsigned int,vector<unsigned int>*> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("map<unsigned int,vector<unsigned int>*>","std::map<unsigned int, std::vector<unsigned int, std::allocator<unsigned int> >*, std::less<unsigned int>, std::allocator<std::pair<unsigned int const, std::vector<unsigned int, std::allocator<unsigned int> >*> > >"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const map<unsigned int,vector<unsigned int>*>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEunsignedsPintcOvectorlEunsignedsPintgRmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const map<unsigned int,vector<unsigned int>*>*>(nullptr))->GetClass();
      maplEunsignedsPintcOvectorlEunsignedsPintgRmUgR_TClassManip(theClass);
   return theClass;
   }

   static void maplEunsignedsPintcOvectorlEunsignedsPintgRmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEunsignedsPintcOvectorlEunsignedsPintgRmUgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) map<unsigned int,vector<unsigned int>*> : new map<unsigned int,vector<unsigned int>*>;
   }
   static void *newArray_maplEunsignedsPintcOvectorlEunsignedsPintgRmUgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) map<unsigned int,vector<unsigned int>*>[nElements] : new map<unsigned int,vector<unsigned int>*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEunsignedsPintcOvectorlEunsignedsPintgRmUgR(void *p) {
      delete (static_cast<map<unsigned int,vector<unsigned int>*>*>(p));
   }
   static void deleteArray_maplEunsignedsPintcOvectorlEunsignedsPintgRmUgR(void *p) {
      delete [] (static_cast<map<unsigned int,vector<unsigned int>*>*>(p));
   }
   static void destruct_maplEunsignedsPintcOvectorlEunsignedsPintgRmUgR(void *p) {
      typedef map<unsigned int,vector<unsigned int>*> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class map<unsigned int,vector<unsigned int>*>

namespace {
  void TriggerDictionaryInitialization_TriggerPrimitivev1_Dict_Impl() {
    static const char* headers[] = {
"0",
nullptr
    };
    static const char* includePaths[] = {
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "TriggerPrimitivev1_Dict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
class TriggerPrimitivev1;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "TriggerPrimitivev1_Dict dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#ifndef TRIGGER_TRIGGERPRIMITIVEV1_H__
#define TRIGGER_TRIGGERPRIMITIVEV1_H__

#include "TriggerDefs.h"
#include "TriggerPrimitive.h"

#include <cstddef>
#include <iostream>
#include <vector>

///
class TriggerPrimitivev1 : public TriggerPrimitive
{
 public:
  TriggerPrimitivev1() = default;
  TriggerPrimitivev1(TriggerDefs::TriggerPrimKey key);
  virtual ~TriggerPrimitivev1() override = default;

  /// Clear Event from memory
  void Reset() override;
  void identify(std::ostream& os = std::cout) const override;
  int isValid() const override;

  std::vector<unsigned int>* get_sum_at_key(TriggerDefs::TriggerSumKey) override;

  void add_sum(TriggerDefs::TriggerSumKey key, std::vector<unsigned int>* sum) override;

  ConstRange getSums() const override;
  Range getSums() override;

  size_t size() override { return _sums.size(); }

 private:
  TriggerDefs::TriggerPrimKey m_triggerprimkey = TriggerDefs::TRIGGERPRIMKEYMAX;
  Map _sums{};

 private:  // so the ClassDef does not show up with doc++
  ClassDefOverride(TriggerPrimitivev1, 1);
};

#endif

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"TriggerPrimitivev1", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("TriggerPrimitivev1_Dict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_TriggerPrimitivev1_Dict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_TriggerPrimitivev1_Dict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_TriggerPrimitivev1_Dict() {
  TriggerDictionaryInitialization_TriggerPrimitivev1_Dict_Impl();
}
