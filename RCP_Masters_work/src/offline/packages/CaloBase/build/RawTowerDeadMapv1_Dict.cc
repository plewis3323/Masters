// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME RawTowerDeadMapv1_Dict
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
#include "../RawTowerDeadMapv1.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static void *new_RawTowerDeadMapv1(void *p = nullptr);
   static void *newArray_RawTowerDeadMapv1(Long_t size, void *p);
   static void delete_RawTowerDeadMapv1(void *p);
   static void deleteArray_RawTowerDeadMapv1(void *p);
   static void destruct_RawTowerDeadMapv1(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RawTowerDeadMapv1*)
   {
      ::RawTowerDeadMapv1 *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RawTowerDeadMapv1 >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RawTowerDeadMapv1", ::RawTowerDeadMapv1::Class_Version(), "", 11,
                  typeid(::RawTowerDeadMapv1), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RawTowerDeadMapv1::Dictionary, isa_proxy, 4,
                  sizeof(::RawTowerDeadMapv1) );
      instance.SetNew(&new_RawTowerDeadMapv1);
      instance.SetNewArray(&newArray_RawTowerDeadMapv1);
      instance.SetDelete(&delete_RawTowerDeadMapv1);
      instance.SetDeleteArray(&deleteArray_RawTowerDeadMapv1);
      instance.SetDestructor(&destruct_RawTowerDeadMapv1);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RawTowerDeadMapv1*)
   {
      return GenerateInitInstanceLocal(static_cast<::RawTowerDeadMapv1*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RawTowerDeadMapv1*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr RawTowerDeadMapv1::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *RawTowerDeadMapv1::Class_Name()
{
   return "RawTowerDeadMapv1";
}

//______________________________________________________________________________
const char *RawTowerDeadMapv1::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RawTowerDeadMapv1*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int RawTowerDeadMapv1::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RawTowerDeadMapv1*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RawTowerDeadMapv1::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RawTowerDeadMapv1*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RawTowerDeadMapv1::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RawTowerDeadMapv1*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void RawTowerDeadMapv1::Streamer(TBuffer &R__b)
{
   // Stream an object of class RawTowerDeadMapv1.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RawTowerDeadMapv1::Class(),this);
   } else {
      R__b.WriteClassBuffer(RawTowerDeadMapv1::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RawTowerDeadMapv1(void *p) {
      return  p ? new(p) ::RawTowerDeadMapv1 : new ::RawTowerDeadMapv1;
   }
   static void *newArray_RawTowerDeadMapv1(Long_t nElements, void *p) {
      return p ? new(p) ::RawTowerDeadMapv1[nElements] : new ::RawTowerDeadMapv1[nElements];
   }
   // Wrapper around operator delete
   static void delete_RawTowerDeadMapv1(void *p) {
      delete (static_cast<::RawTowerDeadMapv1*>(p));
   }
   static void deleteArray_RawTowerDeadMapv1(void *p) {
      delete [] (static_cast<::RawTowerDeadMapv1*>(p));
   }
   static void destruct_RawTowerDeadMapv1(void *p) {
      typedef ::RawTowerDeadMapv1 current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RawTowerDeadMapv1

namespace ROOT {
   static TClass *setlEunsignedsPintgR_Dictionary();
   static void setlEunsignedsPintgR_TClassManip(TClass*);
   static void *new_setlEunsignedsPintgR(void *p = nullptr);
   static void *newArray_setlEunsignedsPintgR(Long_t size, void *p);
   static void delete_setlEunsignedsPintgR(void *p);
   static void deleteArray_setlEunsignedsPintgR(void *p);
   static void destruct_setlEunsignedsPintgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const set<unsigned int>*)
   {
      set<unsigned int> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(set<unsigned int>));
      static ::ROOT::TGenericClassInfo 
         instance("set<unsigned int>", -2, "set", 96,
                  typeid(set<unsigned int>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &setlEunsignedsPintgR_Dictionary, isa_proxy, 0,
                  sizeof(set<unsigned int>) );
      instance.SetNew(&new_setlEunsignedsPintgR);
      instance.SetNewArray(&newArray_setlEunsignedsPintgR);
      instance.SetDelete(&delete_setlEunsignedsPintgR);
      instance.SetDeleteArray(&deleteArray_setlEunsignedsPintgR);
      instance.SetDestructor(&destruct_setlEunsignedsPintgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Insert< set<unsigned int> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("set<unsigned int>","std::set<unsigned int, std::less<unsigned int>, std::allocator<unsigned int> >"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const set<unsigned int>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *setlEunsignedsPintgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const set<unsigned int>*>(nullptr))->GetClass();
      setlEunsignedsPintgR_TClassManip(theClass);
   return theClass;
   }

   static void setlEunsignedsPintgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_setlEunsignedsPintgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) set<unsigned int> : new set<unsigned int>;
   }
   static void *newArray_setlEunsignedsPintgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) set<unsigned int>[nElements] : new set<unsigned int>[nElements];
   }
   // Wrapper around operator delete
   static void delete_setlEunsignedsPintgR(void *p) {
      delete (static_cast<set<unsigned int>*>(p));
   }
   static void deleteArray_setlEunsignedsPintgR(void *p) {
      delete [] (static_cast<set<unsigned int>*>(p));
   }
   static void destruct_setlEunsignedsPintgR(void *p) {
      typedef set<unsigned int> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class set<unsigned int>

namespace {
  void TriggerDictionaryInitialization_RawTowerDeadMapv1_Dict_Impl() {
    static const char* headers[] = {
"0",
nullptr
    };
    static const char* includePaths[] = {
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "RawTowerDeadMapv1_Dict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
class RawTowerDeadMapv1;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "RawTowerDeadMapv1_Dict dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#ifndef CALOBASE_RAWTOWERDEADMAPV1_H
#define CALOBASE_RAWTOWERDEADMAPV1_H

#include "RawTowerDeadMap.h"
#include "RawTowerDefs.h"

#include <iostream>

class RawTowerDeadMapv1 : public RawTowerDeadMap
{
 public:
  RawTowerDeadMapv1(RawTowerDefs::CalorimeterId caloid = RawTowerDefs::NONE)
    : _caloid(caloid)
  {
  }
  ~RawTowerDeadMapv1() override {}

  void Reset() override;
  int isValid() const override;
  void identify(std::ostream &os = std::cout) const override;

  void setCalorimeterID(RawTowerDefs::CalorimeterId caloid) override { _caloid = caloid; }
  RawTowerDefs::CalorimeterId getCalorimeterID() override { return _caloid; }
  void addDeadTower(const unsigned int ieta, const unsigned int iphi) override;
  void addDeadTower(RawTowerDefs::keytype key) override;

  bool isDeadTower(RawTowerDefs::keytype key) override;
  bool isDeadTower(const unsigned int ieta, const unsigned int iphi) override;
  //! return all towers
  const Map &getDeadTowers(void) const override;
  Map &getDeadTowers(void) override;

  unsigned int size() const override { return m_DeadTowers.size(); }

 private:
  RawTowerDefs::CalorimeterId _caloid;
  Map m_DeadTowers;

  ClassDefOverride(RawTowerDeadMapv1, 1)
};

#endif

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"RawTowerDeadMapv1", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("RawTowerDeadMapv1_Dict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_RawTowerDeadMapv1_Dict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_RawTowerDeadMapv1_Dict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_RawTowerDeadMapv1_Dict() {
  TriggerDictionaryInitialization_RawTowerDeadMapv1_Dict_Impl();
}
