// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME Gl1Packetv1_Dict
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
#include "../Gl1Packetv1.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static void *new_Gl1Packetv1(void *p = nullptr);
   static void *newArray_Gl1Packetv1(Long_t size, void *p);
   static void delete_Gl1Packetv1(void *p);
   static void deleteArray_Gl1Packetv1(void *p);
   static void destruct_Gl1Packetv1(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::Gl1Packetv1*)
   {
      ::Gl1Packetv1 *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::Gl1Packetv1 >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("Gl1Packetv1", ::Gl1Packetv1::Class_Version(), "", 11,
                  typeid(::Gl1Packetv1), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::Gl1Packetv1::Dictionary, isa_proxy, 4,
                  sizeof(::Gl1Packetv1) );
      instance.SetNew(&new_Gl1Packetv1);
      instance.SetNewArray(&newArray_Gl1Packetv1);
      instance.SetDelete(&delete_Gl1Packetv1);
      instance.SetDeleteArray(&deleteArray_Gl1Packetv1);
      instance.SetDestructor(&destruct_Gl1Packetv1);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::Gl1Packetv1*)
   {
      return GenerateInitInstanceLocal(static_cast<::Gl1Packetv1*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::Gl1Packetv1*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr Gl1Packetv1::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *Gl1Packetv1::Class_Name()
{
   return "Gl1Packetv1";
}

//______________________________________________________________________________
const char *Gl1Packetv1::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::Gl1Packetv1*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int Gl1Packetv1::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::Gl1Packetv1*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *Gl1Packetv1::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::Gl1Packetv1*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *Gl1Packetv1::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::Gl1Packetv1*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void Gl1Packetv1::Streamer(TBuffer &R__b)
{
   // Stream an object of class Gl1Packetv1.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(Gl1Packetv1::Class(),this);
   } else {
      R__b.WriteClassBuffer(Gl1Packetv1::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_Gl1Packetv1(void *p) {
      return  p ? new(p) ::Gl1Packetv1 : new ::Gl1Packetv1;
   }
   static void *newArray_Gl1Packetv1(Long_t nElements, void *p) {
      return p ? new(p) ::Gl1Packetv1[nElements] : new ::Gl1Packetv1[nElements];
   }
   // Wrapper around operator delete
   static void delete_Gl1Packetv1(void *p) {
      delete (static_cast<::Gl1Packetv1*>(p));
   }
   static void deleteArray_Gl1Packetv1(void *p) {
      delete [] (static_cast<::Gl1Packetv1*>(p));
   }
   static void destruct_Gl1Packetv1(void *p) {
      typedef ::Gl1Packetv1 current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::Gl1Packetv1

namespace {
  void TriggerDictionaryInitialization_Gl1Packetv1_Dict_Impl() {
    static const char* headers[] = {
"0",
nullptr
    };
    static const char* includePaths[] = {
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "Gl1Packetv1_Dict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
class Gl1Packetv1;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "Gl1Packetv1_Dict dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#ifndef FUN4ALLRAW_GL1PACKETV1_H
#define FUN4ALLRAW_GL1PACKETV1_H

#include "Gl1Packet.h"

#include <array>
#include <limits>

class Gl1Packetv1 : public Gl1Packet
{
 public:
  Gl1Packetv1() = default;
  ~Gl1Packetv1() override = default;

  void Reset() override;
  void identify(std::ostream &os = std::cout) const override;
  void FillFrom(const Gl1Packet *pkt) override;

  void setPacketNumber(const unsigned int i) override { packet_nr = i; }
  unsigned int getPacketNumber() const override { return packet_nr; }

  void setBunchNumber(const uint64_t i) override { BunchNumber = i; }
  uint64_t getBunchNumber() const override { return BunchNumber; }
  void setTriggerInput(const uint64_t i) override { TriggerInput = i; }
  uint64_t getTriggerInput() const override { return TriggerInput; }
  void setTriggerVector(const uint64_t i) override { TriggerVector = i; }
  uint64_t getTriggerVector() const override { return TriggerVector; }
  void setScaler(int iscal, int index, uint64_t lval) override { scaler.at(iscal).at(index) = lval; }

  int iValue(const int i) const override;
  long long lValue(const int /*i*/, const std::string &what) const override;
  long long lValue(const int i, const int j) const override;

  void dump(std::ostream &os = std::cout) const override;

 protected:
  unsigned int packet_nr{0};
  uint64_t BunchNumber{std::numeric_limits<uint64_t>::max()};
  uint64_t TriggerInput{0};
  uint64_t TriggerVector{0};
  std::array<std::array<uint64_t, 3>, 64> scaler{{{0}}};

 private:
  ClassDefOverride(Gl1Packetv1, 1)
};

#endif

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"Gl1Packetv1", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("Gl1Packetv1_Dict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_Gl1Packetv1_Dict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_Gl1Packetv1_Dict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_Gl1Packetv1_Dict() {
  TriggerDictionaryInitialization_Gl1Packetv1_Dict_Impl();
}
