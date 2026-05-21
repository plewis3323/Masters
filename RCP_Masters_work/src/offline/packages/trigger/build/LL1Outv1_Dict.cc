// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME LL1Outv1_Dict
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
#include "../LL1Outv1.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static void *new_LL1Outv1(void *p = nullptr);
   static void *newArray_LL1Outv1(Long_t size, void *p);
   static void delete_LL1Outv1(void *p);
   static void deleteArray_LL1Outv1(void *p);
   static void destruct_LL1Outv1(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::LL1Outv1*)
   {
      ::LL1Outv1 *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::LL1Outv1 >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("LL1Outv1", ::LL1Outv1::Class_Version(), "", 16,
                  typeid(::LL1Outv1), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::LL1Outv1::Dictionary, isa_proxy, 4,
                  sizeof(::LL1Outv1) );
      instance.SetNew(&new_LL1Outv1);
      instance.SetNewArray(&newArray_LL1Outv1);
      instance.SetDelete(&delete_LL1Outv1);
      instance.SetDeleteArray(&deleteArray_LL1Outv1);
      instance.SetDestructor(&destruct_LL1Outv1);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::LL1Outv1*)
   {
      return GenerateInitInstanceLocal(static_cast<::LL1Outv1*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::LL1Outv1*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr LL1Outv1::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *LL1Outv1::Class_Name()
{
   return "LL1Outv1";
}

//______________________________________________________________________________
const char *LL1Outv1::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::LL1Outv1*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int LL1Outv1::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::LL1Outv1*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *LL1Outv1::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::LL1Outv1*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *LL1Outv1::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::LL1Outv1*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void LL1Outv1::Streamer(TBuffer &R__b)
{
   // Stream an object of class LL1Outv1.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(LL1Outv1::Class(),this);
   } else {
      R__b.WriteClassBuffer(LL1Outv1::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_LL1Outv1(void *p) {
      return  p ? new(p) ::LL1Outv1 : new ::LL1Outv1;
   }
   static void *newArray_LL1Outv1(Long_t nElements, void *p) {
      return p ? new(p) ::LL1Outv1[nElements] : new ::LL1Outv1[nElements];
   }
   // Wrapper around operator delete
   static void delete_LL1Outv1(void *p) {
      delete (static_cast<::LL1Outv1*>(p));
   }
   static void deleteArray_LL1Outv1(void *p) {
      delete [] (static_cast<::LL1Outv1*>(p));
   }
   static void destruct_LL1Outv1(void *p) {
      typedef ::LL1Outv1 current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::LL1Outv1

namespace ROOT {
   static TClass *vectorlEunsignedsPintgR_Dictionary();
   static void vectorlEunsignedsPintgR_TClassManip(TClass*);
   static void *new_vectorlEunsignedsPintgR(void *p = nullptr);
   static void *newArray_vectorlEunsignedsPintgR(Long_t size, void *p);
   static void delete_vectorlEunsignedsPintgR(void *p);
   static void deleteArray_vectorlEunsignedsPintgR(void *p);
   static void destruct_vectorlEunsignedsPintgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<unsigned int>*)
   {
      vector<unsigned int> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<unsigned int>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<unsigned int>", -2, "vector", 428,
                  typeid(vector<unsigned int>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEunsignedsPintgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<unsigned int>) );
      instance.SetNew(&new_vectorlEunsignedsPintgR);
      instance.SetNewArray(&newArray_vectorlEunsignedsPintgR);
      instance.SetDelete(&delete_vectorlEunsignedsPintgR);
      instance.SetDeleteArray(&deleteArray_vectorlEunsignedsPintgR);
      instance.SetDestructor(&destruct_vectorlEunsignedsPintgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<unsigned int> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<unsigned int>","std::vector<unsigned int, std::allocator<unsigned int> >"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<unsigned int>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEunsignedsPintgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<unsigned int>*>(nullptr))->GetClass();
      vectorlEunsignedsPintgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEunsignedsPintgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEunsignedsPintgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<unsigned int> : new vector<unsigned int>;
   }
   static void *newArray_vectorlEunsignedsPintgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<unsigned int>[nElements] : new vector<unsigned int>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEunsignedsPintgR(void *p) {
      delete (static_cast<vector<unsigned int>*>(p));
   }
   static void deleteArray_vectorlEunsignedsPintgR(void *p) {
      delete [] (static_cast<vector<unsigned int>*>(p));
   }
   static void destruct_vectorlEunsignedsPintgR(void *p) {
      typedef vector<unsigned int> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<unsigned int>

namespace ROOT {
   static TClass *vectorlEpairlEunsignedsPintcOunsignedsPshortgRsPgR_Dictionary();
   static void vectorlEpairlEunsignedsPintcOunsignedsPshortgRsPgR_TClassManip(TClass*);
   static void *new_vectorlEpairlEunsignedsPintcOunsignedsPshortgRsPgR(void *p = nullptr);
   static void *newArray_vectorlEpairlEunsignedsPintcOunsignedsPshortgRsPgR(Long_t size, void *p);
   static void delete_vectorlEpairlEunsignedsPintcOunsignedsPshortgRsPgR(void *p);
   static void deleteArray_vectorlEpairlEunsignedsPintcOunsignedsPshortgRsPgR(void *p);
   static void destruct_vectorlEpairlEunsignedsPintcOunsignedsPshortgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<pair<unsigned int,unsigned short> >*)
   {
      vector<pair<unsigned int,unsigned short> > *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<pair<unsigned int,unsigned short> >));
      static ::ROOT::TGenericClassInfo 
         instance("vector<pair<unsigned int,unsigned short> >", -2, "vector", 428,
                  typeid(vector<pair<unsigned int,unsigned short> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEpairlEunsignedsPintcOunsignedsPshortgRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<pair<unsigned int,unsigned short> >) );
      instance.SetNew(&new_vectorlEpairlEunsignedsPintcOunsignedsPshortgRsPgR);
      instance.SetNewArray(&newArray_vectorlEpairlEunsignedsPintcOunsignedsPshortgRsPgR);
      instance.SetDelete(&delete_vectorlEpairlEunsignedsPintcOunsignedsPshortgRsPgR);
      instance.SetDeleteArray(&deleteArray_vectorlEpairlEunsignedsPintcOunsignedsPshortgRsPgR);
      instance.SetDestructor(&destruct_vectorlEpairlEunsignedsPintcOunsignedsPshortgRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<pair<unsigned int,unsigned short> > >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<pair<unsigned int,unsigned short> >","std::vector<std::pair<unsigned int, unsigned short>, std::allocator<std::pair<unsigned int, unsigned short> > >"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<pair<unsigned int,unsigned short> >*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEpairlEunsignedsPintcOunsignedsPshortgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<pair<unsigned int,unsigned short> >*>(nullptr))->GetClass();
      vectorlEpairlEunsignedsPintcOunsignedsPshortgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEpairlEunsignedsPintcOunsignedsPshortgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEpairlEunsignedsPintcOunsignedsPshortgRsPgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<pair<unsigned int,unsigned short> > : new vector<pair<unsigned int,unsigned short> >;
   }
   static void *newArray_vectorlEpairlEunsignedsPintcOunsignedsPshortgRsPgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<pair<unsigned int,unsigned short> >[nElements] : new vector<pair<unsigned int,unsigned short> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEpairlEunsignedsPintcOunsignedsPshortgRsPgR(void *p) {
      delete (static_cast<vector<pair<unsigned int,unsigned short> >*>(p));
   }
   static void deleteArray_vectorlEpairlEunsignedsPintcOunsignedsPshortgRsPgR(void *p) {
      delete [] (static_cast<vector<pair<unsigned int,unsigned short> >*>(p));
   }
   static void destruct_vectorlEpairlEunsignedsPintcOunsignedsPshortgRsPgR(void *p) {
      typedef vector<pair<unsigned int,unsigned short> > current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<pair<unsigned int,unsigned short> >

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
  void TriggerDictionaryInitialization_LL1Outv1_Dict_Impl() {
    static const char* headers[] = {
"0",
nullptr
    };
    static const char* includePaths[] = {
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "LL1Outv1_Dict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
class LL1Outv1;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "LL1Outv1_Dict dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#ifndef TRIGGER_LL1OUTV1_H
#define TRIGGER_LL1OUTV1_H

#include "LL1Out.h"
#include "TriggerDefs.h"

#include <iostream>
#include <map>
#include <string>
#include <utility>
#include <vector>

///
class LL1Outv1 : public LL1Out
{
 public:
  typedef std::map<unsigned int, std::vector<unsigned int>*> Map;
  typedef Map::const_iterator ConstIter;
  typedef Map::iterator Iter;
  typedef std::pair<Iter, Iter> Range;
  typedef std::pair<ConstIter, ConstIter> ConstRange;

  ///
  LL1Outv1();

  LL1Outv1(const std::string& triggertype, const std::string& ll1type);
  ///
  ~LL1Outv1() override;

  /// Clear Event from memory
  void Reset() override;

  void identify(std::ostream& os = std::cout) const override;

  /// isValid returns non zero if object contains vailid data
  int isValid() const override;

  // Get Trigger Type
  std::string getLL1Type() const override { return m_ll1_type; }

  // Set Trigger Type
  void setLL1Type(std::string& ll1type) override { m_ll1_type = ll1type; }
  void setTriggerType(std::string& triggertype) override { m_trigger_type = triggertype; }

  TriggerDefs::TriggerKey getTriggerKey() const override { return m_trigger_key; }
  void setTriggerKey(TriggerDefs::TriggerKey key) override { m_trigger_key = key; }

  std::vector<unsigned int>* GetTriggerBits() override { return m_trigger_bits; }
  std::vector<unsigned int>* get_word(int word) override { return m_trigger_words[word]; }
  bool passesTrigger() override;

  bool passesThreshold(int ith) override;

  std::vector<std::pair<TriggerDefs::TriggerSumKey, unsigned short>> getTriggeredSums() override;
  std::vector<TriggerDefs::TriggerSumKey> getTriggeredSumKeys(int ith = 0) override;
  std::vector<TriggerDefs::TriggerPrimKey> getTriggeredPrimitives() override { return m_triggered_primitives;}

  void addTriggeredSum(TriggerDefs::TriggerSumKey sk, unsigned short bit) override;
  void addTriggeredPrimitive(TriggerDefs::TriggerPrimKey pk) override;

  void add_word(int key, std::vector<unsigned int>* trigger_words) override { m_trigger_words[key] = trigger_words; }

  void set_event_number(unsigned int evt) override { m_event_number = evt; }
  unsigned int get_event_number() override { return m_event_number; }
  void set_clock_number(unsigned int clk) override { m_clock_number = clk; }
  unsigned int get_clock_number() override { return m_clock_number; }

  ConstRange getTriggerWords() const override;
  Range getTriggerWords() override;

 protected:
  int idx{0};
  unsigned int m_event_number{0};
  unsigned int m_clock_number{0};
  unsigned int m_thresholds[10]{0};

  TriggerDefs::TriggerKey m_trigger_key = TriggerDefs::TRIGGERKEYMAX;
  TriggerDefs::TriggerId m_triggerid = TriggerDefs::TriggerId::noneTId;

  std::string m_ll1_type{"NONE"};
  std::string m_trigger_type{"NONE"};
  std::vector<unsigned int>* m_trigger_bits{nullptr};
  std::vector<std::pair<unsigned int, unsigned short>> m_triggered_sums = {};

  std::vector<unsigned int> m_triggered_primitives = {};

  Map m_trigger_words{};

 private:  // so the ClassDef does not show up with doc++
  ClassDefOverride(LL1Outv1, 1);
};

#endif

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"LL1Outv1", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("LL1Outv1_Dict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_LL1Outv1_Dict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_LL1Outv1_Dict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_LL1Outv1_Dict() {
  TriggerDictionaryInitialization_LL1Outv1_Dict_Impl();
}
