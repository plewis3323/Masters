// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME TriggerPrimitiveContainerv1_Dict
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
#include "../TriggerPrimitiveContainerv1.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static void *new_TriggerPrimitiveContainerv1(void *p = nullptr);
   static void *newArray_TriggerPrimitiveContainerv1(Long_t size, void *p);
   static void delete_TriggerPrimitiveContainerv1(void *p);
   static void deleteArray_TriggerPrimitiveContainerv1(void *p);
   static void destruct_TriggerPrimitiveContainerv1(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TriggerPrimitiveContainerv1*)
   {
      ::TriggerPrimitiveContainerv1 *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TriggerPrimitiveContainerv1 >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TriggerPrimitiveContainerv1", ::TriggerPrimitiveContainerv1::Class_Version(), "", 18,
                  typeid(::TriggerPrimitiveContainerv1), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TriggerPrimitiveContainerv1::Dictionary, isa_proxy, 4,
                  sizeof(::TriggerPrimitiveContainerv1) );
      instance.SetNew(&new_TriggerPrimitiveContainerv1);
      instance.SetNewArray(&newArray_TriggerPrimitiveContainerv1);
      instance.SetDelete(&delete_TriggerPrimitiveContainerv1);
      instance.SetDeleteArray(&deleteArray_TriggerPrimitiveContainerv1);
      instance.SetDestructor(&destruct_TriggerPrimitiveContainerv1);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TriggerPrimitiveContainerv1*)
   {
      return GenerateInitInstanceLocal(static_cast<::TriggerPrimitiveContainerv1*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TriggerPrimitiveContainerv1*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr TriggerPrimitiveContainerv1::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TriggerPrimitiveContainerv1::Class_Name()
{
   return "TriggerPrimitiveContainerv1";
}

//______________________________________________________________________________
const char *TriggerPrimitiveContainerv1::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TriggerPrimitiveContainerv1*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TriggerPrimitiveContainerv1::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TriggerPrimitiveContainerv1*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TriggerPrimitiveContainerv1::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TriggerPrimitiveContainerv1*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TriggerPrimitiveContainerv1::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TriggerPrimitiveContainerv1*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void TriggerPrimitiveContainerv1::Streamer(TBuffer &R__b)
{
   // Stream an object of class TriggerPrimitiveContainerv1.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TriggerPrimitiveContainerv1::Class(),this);
   } else {
      R__b.WriteClassBuffer(TriggerPrimitiveContainerv1::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TriggerPrimitiveContainerv1(void *p) {
      return  p ? new(p) ::TriggerPrimitiveContainerv1 : new ::TriggerPrimitiveContainerv1;
   }
   static void *newArray_TriggerPrimitiveContainerv1(Long_t nElements, void *p) {
      return p ? new(p) ::TriggerPrimitiveContainerv1[nElements] : new ::TriggerPrimitiveContainerv1[nElements];
   }
   // Wrapper around operator delete
   static void delete_TriggerPrimitiveContainerv1(void *p) {
      delete (static_cast<::TriggerPrimitiveContainerv1*>(p));
   }
   static void deleteArray_TriggerPrimitiveContainerv1(void *p) {
      delete [] (static_cast<::TriggerPrimitiveContainerv1*>(p));
   }
   static void destruct_TriggerPrimitiveContainerv1(void *p) {
      typedef ::TriggerPrimitiveContainerv1 current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TriggerPrimitiveContainerv1

namespace ROOT {
   static TClass *maplEunsignedsPintcOTriggerPrimitivemUgR_Dictionary();
   static void maplEunsignedsPintcOTriggerPrimitivemUgR_TClassManip(TClass*);
   static void *new_maplEunsignedsPintcOTriggerPrimitivemUgR(void *p = nullptr);
   static void *newArray_maplEunsignedsPintcOTriggerPrimitivemUgR(Long_t size, void *p);
   static void delete_maplEunsignedsPintcOTriggerPrimitivemUgR(void *p);
   static void deleteArray_maplEunsignedsPintcOTriggerPrimitivemUgR(void *p);
   static void destruct_maplEunsignedsPintcOTriggerPrimitivemUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<unsigned int,TriggerPrimitive*>*)
   {
      map<unsigned int,TriggerPrimitive*> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<unsigned int,TriggerPrimitive*>));
      static ::ROOT::TGenericClassInfo 
         instance("map<unsigned int,TriggerPrimitive*>", -2, "map", 102,
                  typeid(map<unsigned int,TriggerPrimitive*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEunsignedsPintcOTriggerPrimitivemUgR_Dictionary, isa_proxy, 0,
                  sizeof(map<unsigned int,TriggerPrimitive*>) );
      instance.SetNew(&new_maplEunsignedsPintcOTriggerPrimitivemUgR);
      instance.SetNewArray(&newArray_maplEunsignedsPintcOTriggerPrimitivemUgR);
      instance.SetDelete(&delete_maplEunsignedsPintcOTriggerPrimitivemUgR);
      instance.SetDeleteArray(&deleteArray_maplEunsignedsPintcOTriggerPrimitivemUgR);
      instance.SetDestructor(&destruct_maplEunsignedsPintcOTriggerPrimitivemUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<unsigned int,TriggerPrimitive*> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("map<unsigned int,TriggerPrimitive*>","std::map<unsigned int, TriggerPrimitive*, std::less<unsigned int>, std::allocator<std::pair<unsigned int const, TriggerPrimitive*> > >"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const map<unsigned int,TriggerPrimitive*>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEunsignedsPintcOTriggerPrimitivemUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const map<unsigned int,TriggerPrimitive*>*>(nullptr))->GetClass();
      maplEunsignedsPintcOTriggerPrimitivemUgR_TClassManip(theClass);
   return theClass;
   }

   static void maplEunsignedsPintcOTriggerPrimitivemUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEunsignedsPintcOTriggerPrimitivemUgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) map<unsigned int,TriggerPrimitive*> : new map<unsigned int,TriggerPrimitive*>;
   }
   static void *newArray_maplEunsignedsPintcOTriggerPrimitivemUgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) map<unsigned int,TriggerPrimitive*>[nElements] : new map<unsigned int,TriggerPrimitive*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEunsignedsPintcOTriggerPrimitivemUgR(void *p) {
      delete (static_cast<map<unsigned int,TriggerPrimitive*>*>(p));
   }
   static void deleteArray_maplEunsignedsPintcOTriggerPrimitivemUgR(void *p) {
      delete [] (static_cast<map<unsigned int,TriggerPrimitive*>*>(p));
   }
   static void destruct_maplEunsignedsPintcOTriggerPrimitivemUgR(void *p) {
      typedef map<unsigned int,TriggerPrimitive*> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class map<unsigned int,TriggerPrimitive*>

namespace {
  void TriggerDictionaryInitialization_TriggerPrimitiveContainerv1_Dict_Impl() {
    static const char* headers[] = {
"0",
nullptr
    };
    static const char* includePaths[] = {
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "TriggerPrimitiveContainerv1_Dict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
class TriggerPrimitiveContainerv1;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "TriggerPrimitiveContainerv1_Dict dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#ifndef TRIGGER_TRIGGERPRIMITIVECONTAINERV1_H
#define TRIGGER_TRIGGERPRIMITIVECONTAINERV1_H

#include "TriggerPrimitiveContainer.h"

#include "TriggerDefs.h"

#include <iostream>
#include <map>
#include <utility>

class TriggerPrimitive;

///

class TriggerPrimitiveContainerv1 : public TriggerPrimitiveContainer
{
 public:
  typedef std::map<TriggerDefs::TriggerPrimKey, TriggerPrimitive*> Map;
  typedef Map::const_iterator ConstIter;
  typedef Map::iterator Iter;
  typedef std::pair<Iter, Iter> Range;
  typedef std::pair<ConstIter, ConstIter> ConstRange;

  ///
  TriggerPrimitiveContainerv1() = default;

  TriggerPrimitiveContainerv1(TriggerDefs::TriggerId tid, TriggerDefs::DetectorId did);
  ///
  ~TriggerPrimitiveContainerv1() override;

  /// Clear Event from memory
  void Reset() override;
  void identify(std::ostream& os = std::cout) const override;
  int isValid() const override;

  void setTriggerId(TriggerDefs::TriggerId triggerid) override { m_triggerid = triggerid; };
  void setDetectorId(TriggerDefs::DetectorId detectorid) override { m_detectorid = detectorid; };
  void setPrimitiveId(TriggerDefs::PrimitiveId primitiveid) override { m_primitiveid = primitiveid; };

  TriggerPrimitive* get_primitive_at_key(TriggerDefs::TriggerPrimKey /* index */) override;

  void add_primitive(TriggerDefs::TriggerPrimKey, TriggerPrimitive*) override;
  TriggerDefs::TriggerId getTriggerId() { return m_triggerid; }
  TriggerDefs::DetectorId getDetectorId() { return m_detectorid; }
  TriggerDefs::PrimitiveId getPrimitiveId() { return m_primitiveid; }

  ConstRange getTriggerPrimitives() const override;
  Range getTriggerPrimitives() override;

  size_t size() override { return _primitives.size(); }

 private:  // so the ClassDef does not show up with doc++
  TriggerDefs::TriggerId m_triggerid = TriggerDefs::TriggerId::noneTId;
  TriggerDefs::DetectorId m_detectorid = TriggerDefs::DetectorId::noneDId;
  TriggerDefs::PrimitiveId m_primitiveid = TriggerDefs::PrimitiveId::nonePId;

  Map _primitives{};

  ClassDefOverride(TriggerPrimitiveContainerv1, 1);
};

#endif

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"TriggerPrimitiveContainerv1", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("TriggerPrimitiveContainerv1_Dict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_TriggerPrimitiveContainerv1_Dict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_TriggerPrimitiveContainerv1_Dict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_TriggerPrimitiveContainerv1_Dict() {
  TriggerDictionaryInitialization_TriggerPrimitiveContainerv1_Dict_Impl();
}
