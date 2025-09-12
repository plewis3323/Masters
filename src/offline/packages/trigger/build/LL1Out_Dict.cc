// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME LL1Out_Dict
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
#include "../LL1Out.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static void *new_LL1Out(void *p = nullptr);
   static void *newArray_LL1Out(Long_t size, void *p);
   static void delete_LL1Out(void *p);
   static void deleteArray_LL1Out(void *p);
   static void destruct_LL1Out(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::LL1Out*)
   {
      ::LL1Out *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::LL1Out >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("LL1Out", ::LL1Out::Class_Version(), "", 17,
                  typeid(::LL1Out), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::LL1Out::Dictionary, isa_proxy, 4,
                  sizeof(::LL1Out) );
      instance.SetNew(&new_LL1Out);
      instance.SetNewArray(&newArray_LL1Out);
      instance.SetDelete(&delete_LL1Out);
      instance.SetDeleteArray(&deleteArray_LL1Out);
      instance.SetDestructor(&destruct_LL1Out);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::LL1Out*)
   {
      return GenerateInitInstanceLocal(static_cast<::LL1Out*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::LL1Out*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr LL1Out::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *LL1Out::Class_Name()
{
   return "LL1Out";
}

//______________________________________________________________________________
const char *LL1Out::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::LL1Out*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int LL1Out::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::LL1Out*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *LL1Out::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::LL1Out*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *LL1Out::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::LL1Out*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void LL1Out::Streamer(TBuffer &R__b)
{
   // Stream an object of class LL1Out.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(LL1Out::Class(),this);
   } else {
      R__b.WriteClassBuffer(LL1Out::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_LL1Out(void *p) {
      return  p ? new(p) ::LL1Out : new ::LL1Out;
   }
   static void *newArray_LL1Out(Long_t nElements, void *p) {
      return p ? new(p) ::LL1Out[nElements] : new ::LL1Out[nElements];
   }
   // Wrapper around operator delete
   static void delete_LL1Out(void *p) {
      delete (static_cast<::LL1Out*>(p));
   }
   static void deleteArray_LL1Out(void *p) {
      delete [] (static_cast<::LL1Out*>(p));
   }
   static void destruct_LL1Out(void *p) {
      typedef ::LL1Out current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::LL1Out

namespace {
  void TriggerDictionaryInitialization_LL1Out_Dict_Impl() {
    static const char* headers[] = {
"0",
nullptr
    };
    static const char* includePaths[] = {
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "LL1Out_Dict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
class LL1Out;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "LL1Out_Dict dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#ifndef TRIGGER_LL1OUT_H__
#define TRIGGER_LL1OUT_H__

#include "TriggerDefs.h"

#include <phool/PHObject.h>

#include <iostream>
#include <map>
#include <string>
#include <utility>
#include <vector> 

///
class LL1Out : public PHObject
{
 public:
  typedef std::map<unsigned int, std::vector<unsigned int>*> Map;
  typedef Map::const_iterator ConstIter;
  typedef Map::iterator Iter;
  typedef std::pair<Iter, Iter> Range;
  typedef std::pair<ConstIter, ConstIter> ConstRange;

  ///
  LL1Out() = default;
  ///
  virtual ~LL1Out() override = default;
  /// Clear Event from memory
  virtual void Reset() override { return; }

  void identify(std::ostream& os = std::cout) const override;
  int isValid() const override { return 1; }

  virtual std::string getLL1Type() const { return "none"; }

  virtual void setLL1Type(std::string& /*ll1type*/) {}
  virtual void setTriggerType(std::string& /*triggertype*/) {}

  virtual TriggerDefs::TriggerKey getTriggerKey() const { return 0; }
  virtual void setTriggerKey(TriggerDefs::TriggerKey /*key*/) {}

  virtual std::vector<unsigned int>* GetTriggerBits() { return nullptr; }
  virtual std::vector<unsigned int>* get_word(int /*word*/) { return nullptr; }

  virtual bool passesTrigger() { return 0; }
  virtual bool passesThreshold(int /*ith*/) { return 0; }

  virtual std::vector<std::pair<TriggerDefs::TriggerSumKey, unsigned short>> getTriggeredSums();
  virtual std::vector<TriggerDefs::TriggerSumKey> getTriggeredSumKeys(int ith = 0);
  virtual std::vector<TriggerDefs::TriggerPrimKey> getTriggeredPrimitives();

  virtual void addTriggeredSum(TriggerDefs::TriggerSumKey /*sk*/, unsigned short /*bit*/) { return; }
  virtual void addTriggeredPrimitive(TriggerDefs::TriggerPrimKey /*pk*/) { return; }

  virtual void add_word(int /*key*/, std::vector<unsigned int>* /*trigger_words*/) {}

  virtual void set_event_number(unsigned int /*evt*/) {}
  virtual unsigned int get_event_number() { return 0; }

  virtual void set_clock_number(unsigned int /*clk*/) {}
  virtual unsigned int get_clock_number() { return 0; }

  virtual ConstRange getTriggerWords() const;
  virtual Range getTriggerWords();

 private:  // so the ClassDef does not show up with doc++
  ClassDefOverride(LL1Out, 1);
};

#endif

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"LL1Out", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("LL1Out_Dict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_LL1Out_Dict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_LL1Out_Dict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_LL1Out_Dict() {
  TriggerDictionaryInitialization_LL1Out_Dict_Impl();
}
