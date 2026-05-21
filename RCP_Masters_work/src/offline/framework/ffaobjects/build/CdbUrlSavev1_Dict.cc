// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME CdbUrlSavev1_Dict
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
#include "../CdbUrlSavev1.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static void *new_CdbUrlSavev1(void *p = nullptr);
   static void *newArray_CdbUrlSavev1(Long_t size, void *p);
   static void delete_CdbUrlSavev1(void *p);
   static void deleteArray_CdbUrlSavev1(void *p);
   static void destruct_CdbUrlSavev1(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CdbUrlSavev1*)
   {
      ::CdbUrlSavev1 *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::CdbUrlSavev1 >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("CdbUrlSavev1", ::CdbUrlSavev1::Class_Version(), "", 19,
                  typeid(::CdbUrlSavev1), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::CdbUrlSavev1::Dictionary, isa_proxy, 4,
                  sizeof(::CdbUrlSavev1) );
      instance.SetNew(&new_CdbUrlSavev1);
      instance.SetNewArray(&newArray_CdbUrlSavev1);
      instance.SetDelete(&delete_CdbUrlSavev1);
      instance.SetDeleteArray(&deleteArray_CdbUrlSavev1);
      instance.SetDestructor(&destruct_CdbUrlSavev1);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CdbUrlSavev1*)
   {
      return GenerateInitInstanceLocal(static_cast<::CdbUrlSavev1*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::CdbUrlSavev1*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr CdbUrlSavev1::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *CdbUrlSavev1::Class_Name()
{
   return "CdbUrlSavev1";
}

//______________________________________________________________________________
const char *CdbUrlSavev1::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CdbUrlSavev1*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int CdbUrlSavev1::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CdbUrlSavev1*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *CdbUrlSavev1::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CdbUrlSavev1*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *CdbUrlSavev1::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CdbUrlSavev1*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void CdbUrlSavev1::Streamer(TBuffer &R__b)
{
   // Stream an object of class CdbUrlSavev1.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(CdbUrlSavev1::Class(),this);
   } else {
      R__b.WriteClassBuffer(CdbUrlSavev1::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_CdbUrlSavev1(void *p) {
      return  p ? new(p) ::CdbUrlSavev1 : new ::CdbUrlSavev1;
   }
   static void *newArray_CdbUrlSavev1(Long_t nElements, void *p) {
      return p ? new(p) ::CdbUrlSavev1[nElements] : new ::CdbUrlSavev1[nElements];
   }
   // Wrapper around operator delete
   static void delete_CdbUrlSavev1(void *p) {
      delete (static_cast<::CdbUrlSavev1*>(p));
   }
   static void deleteArray_CdbUrlSavev1(void *p) {
      delete [] (static_cast<::CdbUrlSavev1*>(p));
   }
   static void destruct_CdbUrlSavev1(void *p) {
      typedef ::CdbUrlSavev1 current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::CdbUrlSavev1

namespace ROOT {
   static TClass *vectorlEtuplelEstringcOstringcOunsignedsPlonggRsPgR_Dictionary();
   static void vectorlEtuplelEstringcOstringcOunsignedsPlonggRsPgR_TClassManip(TClass*);
   static void *new_vectorlEtuplelEstringcOstringcOunsignedsPlonggRsPgR(void *p = nullptr);
   static void *newArray_vectorlEtuplelEstringcOstringcOunsignedsPlonggRsPgR(Long_t size, void *p);
   static void delete_vectorlEtuplelEstringcOstringcOunsignedsPlonggRsPgR(void *p);
   static void deleteArray_vectorlEtuplelEstringcOstringcOunsignedsPlonggRsPgR(void *p);
   static void destruct_vectorlEtuplelEstringcOstringcOunsignedsPlonggRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<tuple<string,string,unsigned long> >*)
   {
      vector<tuple<string,string,unsigned long> > *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<tuple<string,string,unsigned long> >));
      static ::ROOT::TGenericClassInfo 
         instance("vector<tuple<string,string,unsigned long> >", -2, "vector", 428,
                  typeid(vector<tuple<string,string,unsigned long> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEtuplelEstringcOstringcOunsignedsPlonggRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<tuple<string,string,unsigned long> >) );
      instance.SetNew(&new_vectorlEtuplelEstringcOstringcOunsignedsPlonggRsPgR);
      instance.SetNewArray(&newArray_vectorlEtuplelEstringcOstringcOunsignedsPlonggRsPgR);
      instance.SetDelete(&delete_vectorlEtuplelEstringcOstringcOunsignedsPlonggRsPgR);
      instance.SetDeleteArray(&deleteArray_vectorlEtuplelEstringcOstringcOunsignedsPlonggRsPgR);
      instance.SetDestructor(&destruct_vectorlEtuplelEstringcOstringcOunsignedsPlonggRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<tuple<string,string,unsigned long> > >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<tuple<string,string,unsigned long> >","std::vector<std::tuple<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >, unsigned long>, std::allocator<std::tuple<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >, unsigned long> > >"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<tuple<string,string,unsigned long> >*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEtuplelEstringcOstringcOunsignedsPlonggRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<tuple<string,string,unsigned long> >*>(nullptr))->GetClass();
      vectorlEtuplelEstringcOstringcOunsignedsPlonggRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEtuplelEstringcOstringcOunsignedsPlonggRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEtuplelEstringcOstringcOunsignedsPlonggRsPgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<tuple<string,string,unsigned long> > : new vector<tuple<string,string,unsigned long> >;
   }
   static void *newArray_vectorlEtuplelEstringcOstringcOunsignedsPlonggRsPgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<tuple<string,string,unsigned long> >[nElements] : new vector<tuple<string,string,unsigned long> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEtuplelEstringcOstringcOunsignedsPlonggRsPgR(void *p) {
      delete (static_cast<vector<tuple<string,string,unsigned long> >*>(p));
   }
   static void deleteArray_vectorlEtuplelEstringcOstringcOunsignedsPlonggRsPgR(void *p) {
      delete [] (static_cast<vector<tuple<string,string,unsigned long> >*>(p));
   }
   static void destruct_vectorlEtuplelEstringcOstringcOunsignedsPlonggRsPgR(void *p) {
      typedef vector<tuple<string,string,unsigned long> > current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<tuple<string,string,unsigned long> >

namespace {
  void TriggerDictionaryInitialization_CdbUrlSavev1_Dict_Impl() {
    static const char* headers[] = {
"0",
nullptr
    };
    static const char* includePaths[] = {
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "CdbUrlSavev1_Dict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
class CdbUrlSavev1;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "CdbUrlSavev1_Dict dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
// Tell emacs that this is a C++ source
//  -*- C++ -*-.
#ifndef FFAOBJECTS_CDBURLSAVEV1_H
#define FFAOBJECTS_CDBURLSAVEV1_H

#include "CdbUrlSave.h"

#include <cstdint>  // for uint64_t
#include <iostream>
#include <string>  // for string
#include <tuple>
#include <vector>  // for vector<>::const_iterator, vector

class PHObject;

///
class CdbUrlSavev1 : public CdbUrlSave
{
 public:
  /// dtor
  ~CdbUrlSavev1() override {}

  PHObject *CloneMe() const override;

  /// Clear Event
  void Reset() override;

  /** identify Function from PHObject
      @param os Output Stream 
   */
  void identify(std::ostream &os = std::cout) const override;

  /// isValid returns non zero if object contains valid data
  int isValid() const override;

  void AddUrl(const std::string &domain, const std::string &url, const uint64_t timestamp) override;
  void AddUrl(const std::tuple<std::string, std::string, uint64_t> &tup) override;

  std::vector<std::tuple<std::string, std::string, uint64_t>>::const_iterator begin() const override;
  std::vector<std::tuple<std::string, std::string, uint64_t>>::const_iterator end() const override;

 private:
  std::vector<std::tuple<std::string, std::string, uint64_t>> m_CdbUrlVector;

  ClassDefOverride(CdbUrlSavev1, 1)
};

#endif

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"CdbUrlSavev1", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("CdbUrlSavev1_Dict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_CdbUrlSavev1_Dict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_CdbUrlSavev1_Dict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_CdbUrlSavev1_Dict() {
  TriggerDictionaryInitialization_CdbUrlSavev1_Dict_Impl();
}
