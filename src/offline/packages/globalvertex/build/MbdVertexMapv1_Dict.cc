// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME MbdVertexMapv1_Dict
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
#include "../MbdVertexMapv1.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static void *new_MbdVertexMapv1(void *p = nullptr);
   static void *newArray_MbdVertexMapv1(Long_t size, void *p);
   static void delete_MbdVertexMapv1(void *p);
   static void deleteArray_MbdVertexMapv1(void *p);
   static void destruct_MbdVertexMapv1(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::MbdVertexMapv1*)
   {
      ::MbdVertexMapv1 *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::MbdVertexMapv1 >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("MbdVertexMapv1", ::MbdVertexMapv1::Class_Version(), "", 16,
                  typeid(::MbdVertexMapv1), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::MbdVertexMapv1::Dictionary, isa_proxy, 4,
                  sizeof(::MbdVertexMapv1) );
      instance.SetNew(&new_MbdVertexMapv1);
      instance.SetNewArray(&newArray_MbdVertexMapv1);
      instance.SetDelete(&delete_MbdVertexMapv1);
      instance.SetDeleteArray(&deleteArray_MbdVertexMapv1);
      instance.SetDestructor(&destruct_MbdVertexMapv1);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::MbdVertexMapv1*)
   {
      return GenerateInitInstanceLocal(static_cast<::MbdVertexMapv1*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::MbdVertexMapv1*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr MbdVertexMapv1::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *MbdVertexMapv1::Class_Name()
{
   return "MbdVertexMapv1";
}

//______________________________________________________________________________
const char *MbdVertexMapv1::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::MbdVertexMapv1*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int MbdVertexMapv1::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::MbdVertexMapv1*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *MbdVertexMapv1::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::MbdVertexMapv1*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *MbdVertexMapv1::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::MbdVertexMapv1*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void MbdVertexMapv1::Streamer(TBuffer &R__b)
{
   // Stream an object of class MbdVertexMapv1.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(MbdVertexMapv1::Class(),this);
   } else {
      R__b.WriteClassBuffer(MbdVertexMapv1::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_MbdVertexMapv1(void *p) {
      return  p ? new(p) ::MbdVertexMapv1 : new ::MbdVertexMapv1;
   }
   static void *newArray_MbdVertexMapv1(Long_t nElements, void *p) {
      return p ? new(p) ::MbdVertexMapv1[nElements] : new ::MbdVertexMapv1[nElements];
   }
   // Wrapper around operator delete
   static void delete_MbdVertexMapv1(void *p) {
      delete (static_cast<::MbdVertexMapv1*>(p));
   }
   static void deleteArray_MbdVertexMapv1(void *p) {
      delete [] (static_cast<::MbdVertexMapv1*>(p));
   }
   static void destruct_MbdVertexMapv1(void *p) {
      typedef ::MbdVertexMapv1 current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::MbdVertexMapv1

namespace ROOT {
   static TClass *maplEunsignedsPintcOMbdVertexmUgR_Dictionary();
   static void maplEunsignedsPintcOMbdVertexmUgR_TClassManip(TClass*);
   static void *new_maplEunsignedsPintcOMbdVertexmUgR(void *p = nullptr);
   static void *newArray_maplEunsignedsPintcOMbdVertexmUgR(Long_t size, void *p);
   static void delete_maplEunsignedsPintcOMbdVertexmUgR(void *p);
   static void deleteArray_maplEunsignedsPintcOMbdVertexmUgR(void *p);
   static void destruct_maplEunsignedsPintcOMbdVertexmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<unsigned int,MbdVertex*>*)
   {
      map<unsigned int,MbdVertex*> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<unsigned int,MbdVertex*>));
      static ::ROOT::TGenericClassInfo 
         instance("map<unsigned int,MbdVertex*>", -2, "map", 102,
                  typeid(map<unsigned int,MbdVertex*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEunsignedsPintcOMbdVertexmUgR_Dictionary, isa_proxy, 0,
                  sizeof(map<unsigned int,MbdVertex*>) );
      instance.SetNew(&new_maplEunsignedsPintcOMbdVertexmUgR);
      instance.SetNewArray(&newArray_maplEunsignedsPintcOMbdVertexmUgR);
      instance.SetDelete(&delete_maplEunsignedsPintcOMbdVertexmUgR);
      instance.SetDeleteArray(&deleteArray_maplEunsignedsPintcOMbdVertexmUgR);
      instance.SetDestructor(&destruct_maplEunsignedsPintcOMbdVertexmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<unsigned int,MbdVertex*> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("map<unsigned int,MbdVertex*>","std::map<unsigned int, MbdVertex*, std::less<unsigned int>, std::allocator<std::pair<unsigned int const, MbdVertex*> > >"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const map<unsigned int,MbdVertex*>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEunsignedsPintcOMbdVertexmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const map<unsigned int,MbdVertex*>*>(nullptr))->GetClass();
      maplEunsignedsPintcOMbdVertexmUgR_TClassManip(theClass);
   return theClass;
   }

   static void maplEunsignedsPintcOMbdVertexmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEunsignedsPintcOMbdVertexmUgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) map<unsigned int,MbdVertex*> : new map<unsigned int,MbdVertex*>;
   }
   static void *newArray_maplEunsignedsPintcOMbdVertexmUgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) map<unsigned int,MbdVertex*>[nElements] : new map<unsigned int,MbdVertex*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEunsignedsPintcOMbdVertexmUgR(void *p) {
      delete (static_cast<map<unsigned int,MbdVertex*>*>(p));
   }
   static void deleteArray_maplEunsignedsPintcOMbdVertexmUgR(void *p) {
      delete [] (static_cast<map<unsigned int,MbdVertex*>*>(p));
   }
   static void destruct_maplEunsignedsPintcOMbdVertexmUgR(void *p) {
      typedef map<unsigned int,MbdVertex*> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class map<unsigned int,MbdVertex*>

namespace {
  void TriggerDictionaryInitialization_MbdVertexMapv1_Dict_Impl() {
    static const char* headers[] = {
"0",
nullptr
    };
    static const char* includePaths[] = {
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "MbdVertexMapv1_Dict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
class MbdVertexMapv1;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "MbdVertexMapv1_Dict dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
// Tell emacs that this is a C++ source
//  -*- C++ -*-.
#ifndef GLOBALVERTEX_MBDVERTEXMAPV1_H
#define GLOBALVERTEX_MBDVERTEXMAPV1_H

#include "MbdVertexMap.h"

#include "MbdVertex.h"

#include <cstddef>  // for size_t
#include <iostream>
#include <map>

class MbdVertexMapv1 : public MbdVertexMap
{
 public:
  MbdVertexMapv1() = default;
  ~MbdVertexMapv1() override;

  void identify(std::ostream& os = std::cout) const override;
  void Reset() override { clear(); }
  int isValid() const override { return 1; }

  bool empty() const override { return _map.empty(); }
  size_t size() const override { return _map.size(); }
  size_t count(unsigned int idkey) const override { return _map.count(idkey); }
  void clear() override;

  const MbdVertex* get(unsigned int idkey) const override;
  MbdVertex* get(unsigned int idkey) override;
  MbdVertex* insert(MbdVertex* vertex) override;
  size_t erase(unsigned int idkey) override
  {
    delete _map[idkey];
    return _map.erase(idkey);
  }

  ConstIter begin() const override { return _map.begin(); }
  ConstIter find(unsigned int idkey) const override { return _map.find(idkey); }
  ConstIter end() const override { return _map.end(); }

  Iter begin() override { return _map.begin(); }
  Iter find(unsigned int idkey) override { return _map.find(idkey); }
  Iter end() override { return _map.end(); }

 private:
  std::map<unsigned int, MbdVertex*> _map;

  ClassDefOverride(MbdVertexMapv1, 1);
};

#endif  // G4MBD_MBDVERTEXMAPV1_H

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"MbdVertexMapv1", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("MbdVertexMapv1_Dict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_MbdVertexMapv1_Dict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_MbdVertexMapv1_Dict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_MbdVertexMapv1_Dict() {
  TriggerDictionaryInitialization_MbdVertexMapv1_Dict_Impl();
}
