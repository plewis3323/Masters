// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME PdbParameterMap_Dict
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
#include "../PdbParameterMap.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static void *new_PdbParameterMap(void *p = nullptr);
   static void *newArray_PdbParameterMap(Long_t size, void *p);
   static void delete_PdbParameterMap(void *p);
   static void deleteArray_PdbParameterMap(void *p);
   static void destruct_PdbParameterMap(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::PdbParameterMap*)
   {
      ::PdbParameterMap *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::PdbParameterMap >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("PdbParameterMap", ::PdbParameterMap::Class_Version(), "", 15,
                  typeid(::PdbParameterMap), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::PdbParameterMap::Dictionary, isa_proxy, 4,
                  sizeof(::PdbParameterMap) );
      instance.SetNew(&new_PdbParameterMap);
      instance.SetNewArray(&newArray_PdbParameterMap);
      instance.SetDelete(&delete_PdbParameterMap);
      instance.SetDeleteArray(&deleteArray_PdbParameterMap);
      instance.SetDestructor(&destruct_PdbParameterMap);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::PdbParameterMap*)
   {
      return GenerateInitInstanceLocal(static_cast<::PdbParameterMap*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::PdbParameterMap*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr PdbParameterMap::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *PdbParameterMap::Class_Name()
{
   return "PdbParameterMap";
}

//______________________________________________________________________________
const char *PdbParameterMap::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::PdbParameterMap*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int PdbParameterMap::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::PdbParameterMap*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *PdbParameterMap::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::PdbParameterMap*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *PdbParameterMap::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::PdbParameterMap*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void PdbParameterMap::Streamer(TBuffer &R__b)
{
   // Stream an object of class PdbParameterMap.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(PdbParameterMap::Class(),this);
   } else {
      R__b.WriteClassBuffer(PdbParameterMap::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_PdbParameterMap(void *p) {
      return  p ? new(p) ::PdbParameterMap : new ::PdbParameterMap;
   }
   static void *newArray_PdbParameterMap(Long_t nElements, void *p) {
      return p ? new(p) ::PdbParameterMap[nElements] : new ::PdbParameterMap[nElements];
   }
   // Wrapper around operator delete
   static void delete_PdbParameterMap(void *p) {
      delete (static_cast<::PdbParameterMap*>(p));
   }
   static void deleteArray_PdbParameterMap(void *p) {
      delete [] (static_cast<::PdbParameterMap*>(p));
   }
   static void destruct_PdbParameterMap(void *p) {
      typedef ::PdbParameterMap current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::PdbParameterMap

namespace ROOT {
   static TClass *maplEconstsPstringcOstringgR_Dictionary();
   static void maplEconstsPstringcOstringgR_TClassManip(TClass*);
   static void *new_maplEconstsPstringcOstringgR(void *p = nullptr);
   static void *newArray_maplEconstsPstringcOstringgR(Long_t size, void *p);
   static void delete_maplEconstsPstringcOstringgR(void *p);
   static void deleteArray_maplEconstsPstringcOstringgR(void *p);
   static void destruct_maplEconstsPstringcOstringgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<const string,string>*)
   {
      map<const string,string> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<const string,string>));
      static ::ROOT::TGenericClassInfo 
         instance("map<const string,string>", -2, "map", 102,
                  typeid(map<const string,string>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEconstsPstringcOstringgR_Dictionary, isa_proxy, 0,
                  sizeof(map<const string,string>) );
      instance.SetNew(&new_maplEconstsPstringcOstringgR);
      instance.SetNewArray(&newArray_maplEconstsPstringcOstringgR);
      instance.SetDelete(&delete_maplEconstsPstringcOstringgR);
      instance.SetDeleteArray(&deleteArray_maplEconstsPstringcOstringgR);
      instance.SetDestructor(&destruct_maplEconstsPstringcOstringgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<const string,string> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("map<const string,string>","std::map<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::less<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const>, std::allocator<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > > > >"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const map<const string,string>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEconstsPstringcOstringgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const map<const string,string>*>(nullptr))->GetClass();
      maplEconstsPstringcOstringgR_TClassManip(theClass);
   return theClass;
   }

   static void maplEconstsPstringcOstringgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEconstsPstringcOstringgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) map<const string,string> : new map<const string,string>;
   }
   static void *newArray_maplEconstsPstringcOstringgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) map<const string,string>[nElements] : new map<const string,string>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEconstsPstringcOstringgR(void *p) {
      delete (static_cast<map<const string,string>*>(p));
   }
   static void deleteArray_maplEconstsPstringcOstringgR(void *p) {
      delete [] (static_cast<map<const string,string>*>(p));
   }
   static void destruct_maplEconstsPstringcOstringgR(void *p) {
      typedef map<const string,string> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class map<const string,string>

namespace ROOT {
   static TClass *maplEconstsPstringcOintgR_Dictionary();
   static void maplEconstsPstringcOintgR_TClassManip(TClass*);
   static void *new_maplEconstsPstringcOintgR(void *p = nullptr);
   static void *newArray_maplEconstsPstringcOintgR(Long_t size, void *p);
   static void delete_maplEconstsPstringcOintgR(void *p);
   static void deleteArray_maplEconstsPstringcOintgR(void *p);
   static void destruct_maplEconstsPstringcOintgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<const string,int>*)
   {
      map<const string,int> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<const string,int>));
      static ::ROOT::TGenericClassInfo 
         instance("map<const string,int>", -2, "map", 102,
                  typeid(map<const string,int>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEconstsPstringcOintgR_Dictionary, isa_proxy, 0,
                  sizeof(map<const string,int>) );
      instance.SetNew(&new_maplEconstsPstringcOintgR);
      instance.SetNewArray(&newArray_maplEconstsPstringcOintgR);
      instance.SetDelete(&delete_maplEconstsPstringcOintgR);
      instance.SetDeleteArray(&deleteArray_maplEconstsPstringcOintgR);
      instance.SetDestructor(&destruct_maplEconstsPstringcOintgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<const string,int> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("map<const string,int>","std::map<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const, int, std::less<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const>, std::allocator<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const, int> > >"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const map<const string,int>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEconstsPstringcOintgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const map<const string,int>*>(nullptr))->GetClass();
      maplEconstsPstringcOintgR_TClassManip(theClass);
   return theClass;
   }

   static void maplEconstsPstringcOintgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEconstsPstringcOintgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) map<const string,int> : new map<const string,int>;
   }
   static void *newArray_maplEconstsPstringcOintgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) map<const string,int>[nElements] : new map<const string,int>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEconstsPstringcOintgR(void *p) {
      delete (static_cast<map<const string,int>*>(p));
   }
   static void deleteArray_maplEconstsPstringcOintgR(void *p) {
      delete [] (static_cast<map<const string,int>*>(p));
   }
   static void destruct_maplEconstsPstringcOintgR(void *p) {
      typedef map<const string,int> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class map<const string,int>

namespace ROOT {
   static TClass *maplEconstsPstringcOdoublegR_Dictionary();
   static void maplEconstsPstringcOdoublegR_TClassManip(TClass*);
   static void *new_maplEconstsPstringcOdoublegR(void *p = nullptr);
   static void *newArray_maplEconstsPstringcOdoublegR(Long_t size, void *p);
   static void delete_maplEconstsPstringcOdoublegR(void *p);
   static void deleteArray_maplEconstsPstringcOdoublegR(void *p);
   static void destruct_maplEconstsPstringcOdoublegR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<const string,double>*)
   {
      map<const string,double> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<const string,double>));
      static ::ROOT::TGenericClassInfo 
         instance("map<const string,double>", -2, "map", 102,
                  typeid(map<const string,double>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEconstsPstringcOdoublegR_Dictionary, isa_proxy, 0,
                  sizeof(map<const string,double>) );
      instance.SetNew(&new_maplEconstsPstringcOdoublegR);
      instance.SetNewArray(&newArray_maplEconstsPstringcOdoublegR);
      instance.SetDelete(&delete_maplEconstsPstringcOdoublegR);
      instance.SetDeleteArray(&deleteArray_maplEconstsPstringcOdoublegR);
      instance.SetDestructor(&destruct_maplEconstsPstringcOdoublegR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<const string,double> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("map<const string,double>","std::map<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const, double, std::less<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const>, std::allocator<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const, double> > >"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const map<const string,double>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEconstsPstringcOdoublegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const map<const string,double>*>(nullptr))->GetClass();
      maplEconstsPstringcOdoublegR_TClassManip(theClass);
   return theClass;
   }

   static void maplEconstsPstringcOdoublegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEconstsPstringcOdoublegR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) map<const string,double> : new map<const string,double>;
   }
   static void *newArray_maplEconstsPstringcOdoublegR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) map<const string,double>[nElements] : new map<const string,double>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEconstsPstringcOdoublegR(void *p) {
      delete (static_cast<map<const string,double>*>(p));
   }
   static void deleteArray_maplEconstsPstringcOdoublegR(void *p) {
      delete [] (static_cast<map<const string,double>*>(p));
   }
   static void destruct_maplEconstsPstringcOdoublegR(void *p) {
      typedef map<const string,double> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class map<const string,double>

namespace {
  void TriggerDictionaryInitialization_PdbParameterMap_Dict_Impl() {
    static const char* headers[] = {
"0",
nullptr
    };
    static const char* includePaths[] = {
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "PdbParameterMap_Dict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
class PdbParameterMap;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "PdbParameterMap_Dict dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#ifndef PDBCAL_BASE_PDBPARAMETERMAP_H
#define PDBCAL_BASE_PDBPARAMETERMAP_H

#include "PdbCalChan.h"

#include <cstddef>
#include <map>
#include <string>
#include <utility>

class PHObject;

class PdbParameterMap : public PdbCalChan
{
 public:
  typedef std::map<const std::string, double> dMap;
  typedef std::map<const std::string, int> iMap;
  typedef std::map<const std::string, std::string> strMap;
  typedef dMap::const_iterator dIter;
  typedef iMap::const_iterator iIter;
  typedef strMap::const_iterator strIter;
  typedef std::pair<dIter, dIter> dConstRange;
  typedef std::pair<iIter, iIter> iConstRange;
  typedef std::pair<strIter, strIter> strConstRange;

  PdbParameterMap() = default;
  ~PdbParameterMap() override = default;

  PHObject *CloneMe() const override { return new PdbParameterMap(*this); }

  void print() const override;
  void Reset() override;  // from PHObject - clear content

  //! hash of binary information for checking purpose
  size_t get_hash() const;

  dConstRange get_dparam_iters() const
  {
    return std::make_pair(dparams.begin(), dparams.end());
  }

  iConstRange get_iparam_iters() const
  {
    return std::make_pair(iparams.begin(), iparams.end());
  }

  strConstRange get_cparam_iters() const
  {
    return std::make_pair(cparams.begin(), cparams.end());
  }

  void set_int_param(const std::string &name, const int ival);
  void set_double_param(const std::string &name, const double dval);
  void set_string_param(const std::string &name, const std::string &str);

 protected:
  dMap dparams;
  iMap iparams;
  strMap cparams;

  ClassDefOverride(PdbParameterMap, 1)
};

#endif

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"PdbParameterMap", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("PdbParameterMap_Dict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_PdbParameterMap_Dict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_PdbParameterMap_Dict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_PdbParameterMap_Dict() {
  TriggerDictionaryInitialization_PdbParameterMap_Dict_Impl();
}
