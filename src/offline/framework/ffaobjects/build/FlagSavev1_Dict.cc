// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME FlagSavev1_Dict
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
#include "../FlagSavev1.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static void *new_FlagSavev1(void *p = nullptr);
   static void *newArray_FlagSavev1(Long_t size, void *p);
   static void delete_FlagSavev1(void *p);
   static void deleteArray_FlagSavev1(void *p);
   static void destruct_FlagSavev1(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::FlagSavev1*)
   {
      ::FlagSavev1 *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::FlagSavev1 >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("FlagSavev1", ::FlagSavev1::Class_Version(), "", 19,
                  typeid(::FlagSavev1), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::FlagSavev1::Dictionary, isa_proxy, 4,
                  sizeof(::FlagSavev1) );
      instance.SetNew(&new_FlagSavev1);
      instance.SetNewArray(&newArray_FlagSavev1);
      instance.SetDelete(&delete_FlagSavev1);
      instance.SetDeleteArray(&deleteArray_FlagSavev1);
      instance.SetDestructor(&destruct_FlagSavev1);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::FlagSavev1*)
   {
      return GenerateInitInstanceLocal(static_cast<::FlagSavev1*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::FlagSavev1*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr FlagSavev1::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *FlagSavev1::Class_Name()
{
   return "FlagSavev1";
}

//______________________________________________________________________________
const char *FlagSavev1::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::FlagSavev1*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int FlagSavev1::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::FlagSavev1*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *FlagSavev1::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::FlagSavev1*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *FlagSavev1::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::FlagSavev1*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void FlagSavev1::Streamer(TBuffer &R__b)
{
   // Stream an object of class FlagSavev1.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(FlagSavev1::Class(),this);
   } else {
      R__b.WriteClassBuffer(FlagSavev1::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_FlagSavev1(void *p) {
      return  p ? new(p) ::FlagSavev1 : new ::FlagSavev1;
   }
   static void *newArray_FlagSavev1(Long_t nElements, void *p) {
      return p ? new(p) ::FlagSavev1[nElements] : new ::FlagSavev1[nElements];
   }
   // Wrapper around operator delete
   static void delete_FlagSavev1(void *p) {
      delete (static_cast<::FlagSavev1*>(p));
   }
   static void deleteArray_FlagSavev1(void *p) {
      delete [] (static_cast<::FlagSavev1*>(p));
   }
   static void destruct_FlagSavev1(void *p) {
      typedef ::FlagSavev1 current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::FlagSavev1

namespace ROOT {
   static TClass *maplEstringcOunsignedsPlonggR_Dictionary();
   static void maplEstringcOunsignedsPlonggR_TClassManip(TClass*);
   static void *new_maplEstringcOunsignedsPlonggR(void *p = nullptr);
   static void *newArray_maplEstringcOunsignedsPlonggR(Long_t size, void *p);
   static void delete_maplEstringcOunsignedsPlonggR(void *p);
   static void deleteArray_maplEstringcOunsignedsPlonggR(void *p);
   static void destruct_maplEstringcOunsignedsPlonggR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<string,unsigned long>*)
   {
      map<string,unsigned long> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<string,unsigned long>));
      static ::ROOT::TGenericClassInfo 
         instance("map<string,unsigned long>", -2, "map", 102,
                  typeid(map<string,unsigned long>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEstringcOunsignedsPlonggR_Dictionary, isa_proxy, 0,
                  sizeof(map<string,unsigned long>) );
      instance.SetNew(&new_maplEstringcOunsignedsPlonggR);
      instance.SetNewArray(&newArray_maplEstringcOunsignedsPlonggR);
      instance.SetDelete(&delete_maplEstringcOunsignedsPlonggR);
      instance.SetDeleteArray(&deleteArray_maplEstringcOunsignedsPlonggR);
      instance.SetDestructor(&destruct_maplEstringcOunsignedsPlonggR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<string,unsigned long> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("map<string,unsigned long>","std::map<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >, unsigned long, std::less<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > >, std::allocator<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const, unsigned long> > >"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const map<string,unsigned long>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEstringcOunsignedsPlonggR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const map<string,unsigned long>*>(nullptr))->GetClass();
      maplEstringcOunsignedsPlonggR_TClassManip(theClass);
   return theClass;
   }

   static void maplEstringcOunsignedsPlonggR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEstringcOunsignedsPlonggR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) map<string,unsigned long> : new map<string,unsigned long>;
   }
   static void *newArray_maplEstringcOunsignedsPlonggR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) map<string,unsigned long>[nElements] : new map<string,unsigned long>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEstringcOunsignedsPlonggR(void *p) {
      delete (static_cast<map<string,unsigned long>*>(p));
   }
   static void deleteArray_maplEstringcOunsignedsPlonggR(void *p) {
      delete [] (static_cast<map<string,unsigned long>*>(p));
   }
   static void destruct_maplEstringcOunsignedsPlonggR(void *p) {
      typedef map<string,unsigned long> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class map<string,unsigned long>

namespace ROOT {
   static TClass *maplEstringcOstringgR_Dictionary();
   static void maplEstringcOstringgR_TClassManip(TClass*);
   static void *new_maplEstringcOstringgR(void *p = nullptr);
   static void *newArray_maplEstringcOstringgR(Long_t size, void *p);
   static void delete_maplEstringcOstringgR(void *p);
   static void deleteArray_maplEstringcOstringgR(void *p);
   static void destruct_maplEstringcOstringgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<string,string>*)
   {
      map<string,string> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<string,string>));
      static ::ROOT::TGenericClassInfo 
         instance("map<string,string>", -2, "map", 102,
                  typeid(map<string,string>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEstringcOstringgR_Dictionary, isa_proxy, 0,
                  sizeof(map<string,string>) );
      instance.SetNew(&new_maplEstringcOstringgR);
      instance.SetNewArray(&newArray_maplEstringcOstringgR);
      instance.SetDelete(&delete_maplEstringcOstringgR);
      instance.SetDeleteArray(&deleteArray_maplEstringcOstringgR);
      instance.SetDestructor(&destruct_maplEstringcOstringgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<string,string> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("map<string,string>","std::map<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::less<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > >, std::allocator<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > > > >"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const map<string,string>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEstringcOstringgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const map<string,string>*>(nullptr))->GetClass();
      maplEstringcOstringgR_TClassManip(theClass);
   return theClass;
   }

   static void maplEstringcOstringgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEstringcOstringgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) map<string,string> : new map<string,string>;
   }
   static void *newArray_maplEstringcOstringgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) map<string,string>[nElements] : new map<string,string>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEstringcOstringgR(void *p) {
      delete (static_cast<map<string,string>*>(p));
   }
   static void deleteArray_maplEstringcOstringgR(void *p) {
      delete [] (static_cast<map<string,string>*>(p));
   }
   static void destruct_maplEstringcOstringgR(void *p) {
      typedef map<string,string> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class map<string,string>

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

namespace ROOT {
   static TClass *maplEstringcOdoublegR_Dictionary();
   static void maplEstringcOdoublegR_TClassManip(TClass*);
   static void *new_maplEstringcOdoublegR(void *p = nullptr);
   static void *newArray_maplEstringcOdoublegR(Long_t size, void *p);
   static void delete_maplEstringcOdoublegR(void *p);
   static void deleteArray_maplEstringcOdoublegR(void *p);
   static void destruct_maplEstringcOdoublegR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<string,double>*)
   {
      map<string,double> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<string,double>));
      static ::ROOT::TGenericClassInfo 
         instance("map<string,double>", -2, "map", 102,
                  typeid(map<string,double>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEstringcOdoublegR_Dictionary, isa_proxy, 0,
                  sizeof(map<string,double>) );
      instance.SetNew(&new_maplEstringcOdoublegR);
      instance.SetNewArray(&newArray_maplEstringcOdoublegR);
      instance.SetDelete(&delete_maplEstringcOdoublegR);
      instance.SetDeleteArray(&deleteArray_maplEstringcOdoublegR);
      instance.SetDestructor(&destruct_maplEstringcOdoublegR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<string,double> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("map<string,double>","std::map<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >, double, std::less<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > >, std::allocator<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const, double> > >"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const map<string,double>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEstringcOdoublegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const map<string,double>*>(nullptr))->GetClass();
      maplEstringcOdoublegR_TClassManip(theClass);
   return theClass;
   }

   static void maplEstringcOdoublegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEstringcOdoublegR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) map<string,double> : new map<string,double>;
   }
   static void *newArray_maplEstringcOdoublegR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) map<string,double>[nElements] : new map<string,double>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEstringcOdoublegR(void *p) {
      delete (static_cast<map<string,double>*>(p));
   }
   static void deleteArray_maplEstringcOdoublegR(void *p) {
      delete [] (static_cast<map<string,double>*>(p));
   }
   static void destruct_maplEstringcOdoublegR(void *p) {
      typedef map<string,double> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class map<string,double>

namespace {
  void TriggerDictionaryInitialization_FlagSavev1_Dict_Impl() {
    static const char* headers[] = {
"0",
nullptr
    };
    static const char* includePaths[] = {
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "FlagSavev1_Dict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
class FlagSavev1;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "FlagSavev1_Dict dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
// Tell emacs that this is a C++ source
//  -*- C++ -*-.
#ifndef FFAOBJECTS_FLAGSAVEV1_H
#define FFAOBJECTS_FLAGSAVEV1_H

#include "FlagSave.h"

#include <cstdint>  // for uint64_t
#include <iostream>
#include <map>
#include <string>

class PHFlag;
class PHObject;

///
class FlagSavev1 : public FlagSave
{
 public:
  /// ctor
  FlagSavev1() = default;
  /// dtor
  ~FlagSavev1() override = default;

  PHObject *CloneMe() const override;

  ///  Clear Event
  void Reset() override {}
  int isValid() const override;

  /** identify Function from PHObject
      @param os Output Stream 
   */
  void identify(std::ostream &os = std::cout) const override;

  int FillFromPHFlag(const PHFlag *flags, const bool clearold) override;
  int PutFlagsBack(PHFlag *flags, const bool overwrite) override;

 private:
  void ClearAll();
  int FillIntFromPHFlag(const PHFlag *flags);
  int Filluint64FromPHFlag(const PHFlag *flags);
  int FillDoubleFromPHFlag(const PHFlag *flags);
  int FillFloatFromPHFlag(const PHFlag *flags);
  int FillStringFromPHFlag(const PHFlag *flags);

  int PutIntToPHFlag(PHFlag *flags, const bool overwrite);
  int Putuint64ToPHFlag(PHFlag *flags, const bool overwrite);
  int PutDoubleToPHFlag(PHFlag *flags, const bool overwrite);
  int PutFloatToPHFlag(PHFlag *flags, const bool overwrite);
  int PutStringToPHFlag(PHFlag *flags, const bool overwrite);

  void PrintIntFlag(std::ostream &os) const;
  void Printuint64Flag(std::ostream &os) const;
  void PrintDoubleFlag(std::ostream &os) const;
  void PrintFloatFlag(std::ostream &os) const;
  void PrintStringFlag(std::ostream &os) const;

  std::map<std::string, int> intflag;
  std::map<std::string, double> doubleflag;
  std::map<std::string, float> floatflag;
  std::map<std::string, std::string> stringflag;
  std::map<std::string, uint64_t> m_uint64flag_map;

  ClassDefOverride(FlagSavev1, 2)
};

#endif

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"FlagSavev1", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("FlagSavev1_Dict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_FlagSavev1_Dict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_FlagSavev1_Dict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_FlagSavev1_Dict() {
  TriggerDictionaryInitialization_FlagSavev1_Dict_Impl();
}
