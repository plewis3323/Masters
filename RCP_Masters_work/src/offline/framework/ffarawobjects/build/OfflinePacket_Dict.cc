// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME OfflinePacket_Dict
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
#include "../OfflinePacket.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static void *new_OfflinePacket(void *p = nullptr);
   static void *newArray_OfflinePacket(Long_t size, void *p);
   static void delete_OfflinePacket(void *p);
   static void deleteArray_OfflinePacket(void *p);
   static void destruct_OfflinePacket(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::OfflinePacket*)
   {
      ::OfflinePacket *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::OfflinePacket >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("OfflinePacket", ::OfflinePacket::Class_Version(), "", 11,
                  typeid(::OfflinePacket), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::OfflinePacket::Dictionary, isa_proxy, 4,
                  sizeof(::OfflinePacket) );
      instance.SetNew(&new_OfflinePacket);
      instance.SetNewArray(&newArray_OfflinePacket);
      instance.SetDelete(&delete_OfflinePacket);
      instance.SetDeleteArray(&deleteArray_OfflinePacket);
      instance.SetDestructor(&destruct_OfflinePacket);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::OfflinePacket*)
   {
      return GenerateInitInstanceLocal(static_cast<::OfflinePacket*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::OfflinePacket*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr OfflinePacket::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *OfflinePacket::Class_Name()
{
   return "OfflinePacket";
}

//______________________________________________________________________________
const char *OfflinePacket::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::OfflinePacket*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int OfflinePacket::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::OfflinePacket*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *OfflinePacket::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::OfflinePacket*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *OfflinePacket::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::OfflinePacket*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void OfflinePacket::Streamer(TBuffer &R__b)
{
   // Stream an object of class OfflinePacket.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(OfflinePacket::Class(),this);
   } else {
      R__b.WriteClassBuffer(OfflinePacket::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_OfflinePacket(void *p) {
      return  p ? new(p) ::OfflinePacket : new ::OfflinePacket;
   }
   static void *newArray_OfflinePacket(Long_t nElements, void *p) {
      return p ? new(p) ::OfflinePacket[nElements] : new ::OfflinePacket[nElements];
   }
   // Wrapper around operator delete
   static void delete_OfflinePacket(void *p) {
      delete (static_cast<::OfflinePacket*>(p));
   }
   static void deleteArray_OfflinePacket(void *p) {
      delete [] (static_cast<::OfflinePacket*>(p));
   }
   static void destruct_OfflinePacket(void *p) {
      typedef ::OfflinePacket current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::OfflinePacket

namespace {
  void TriggerDictionaryInitialization_OfflinePacket_Dict_Impl() {
    static const char* headers[] = {
"0",
nullptr
    };
    static const char* includePaths[] = {
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "OfflinePacket_Dict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
class OfflinePacket;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "OfflinePacket_Dict dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#ifndef FUN4ALLRAW_OFFLINEPACKET_H
#define FUN4ALLRAW_OFFLINEPACKET_H

#include <phool/PHObject.h>

#include <iostream>
#include <limits>

class OfflinePacket : public PHObject
{
 public:
  OfflinePacket() = default;
  virtual ~OfflinePacket() = default;
  virtual void FillFrom(const OfflinePacket * /*pkt*/) { return; }

  virtual int getIdentifier() const { return std::numeric_limits<int>::min(); }
  virtual void setIdentifier(const int) { return; }
  virtual int getHitFormat() const { return std::numeric_limits<int>::min(); }
  virtual void setHitFormat(const int) { return; }
  virtual int getEvtSequence() const { return std::numeric_limits<int>::min(); }
  virtual void setEvtSequence(const int) { return; }
  virtual uint64_t getBCO() const { return std::numeric_limits<uint64_t>::max(); }
  virtual void setBCO(const uint64_t) { return; }
  virtual int iValue(const int) const { return std::numeric_limits<int>::min(); }
  virtual int iValue(const int, const std::string &) const { return std::numeric_limits<int>::min(); }
  virtual int iValue(const int, const int) const { return std::numeric_limits<int>::min(); }

  virtual long long lValue(const int /*i*/, const std::string & /*what*/) const { return std::numeric_limits<uint64_t>::max(); }
  virtual long long lValue(const int /*i*/, const int /*j*/) const { return std::numeric_limits<uint64_t>::max(); }

  virtual void dump(std::ostream &os = std::cout) const;

 private:
  ClassDefOverride(OfflinePacket, 1)
};

#endif

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"OfflinePacket", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("OfflinePacket_Dict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_OfflinePacket_Dict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_OfflinePacket_Dict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_OfflinePacket_Dict() {
  TriggerDictionaryInitialization_OfflinePacket_Dict_Impl();
}
