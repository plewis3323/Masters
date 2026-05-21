// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME Gl1Packetv2_Dict
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
#include "../Gl1Packetv2.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static void *new_Gl1Packetv2(void *p = nullptr);
   static void *newArray_Gl1Packetv2(Long_t size, void *p);
   static void delete_Gl1Packetv2(void *p);
   static void deleteArray_Gl1Packetv2(void *p);
   static void destruct_Gl1Packetv2(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::Gl1Packetv2*)
   {
      ::Gl1Packetv2 *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::Gl1Packetv2 >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("Gl1Packetv2", ::Gl1Packetv2::Class_Version(), "", 11,
                  typeid(::Gl1Packetv2), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::Gl1Packetv2::Dictionary, isa_proxy, 4,
                  sizeof(::Gl1Packetv2) );
      instance.SetNew(&new_Gl1Packetv2);
      instance.SetNewArray(&newArray_Gl1Packetv2);
      instance.SetDelete(&delete_Gl1Packetv2);
      instance.SetDeleteArray(&deleteArray_Gl1Packetv2);
      instance.SetDestructor(&destruct_Gl1Packetv2);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::Gl1Packetv2*)
   {
      return GenerateInitInstanceLocal(static_cast<::Gl1Packetv2*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::Gl1Packetv2*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr Gl1Packetv2::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *Gl1Packetv2::Class_Name()
{
   return "Gl1Packetv2";
}

//______________________________________________________________________________
const char *Gl1Packetv2::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::Gl1Packetv2*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int Gl1Packetv2::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::Gl1Packetv2*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *Gl1Packetv2::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::Gl1Packetv2*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *Gl1Packetv2::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::Gl1Packetv2*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void Gl1Packetv2::Streamer(TBuffer &R__b)
{
   // Stream an object of class Gl1Packetv2.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(Gl1Packetv2::Class(),this);
   } else {
      R__b.WriteClassBuffer(Gl1Packetv2::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_Gl1Packetv2(void *p) {
      return  p ? new(p) ::Gl1Packetv2 : new ::Gl1Packetv2;
   }
   static void *newArray_Gl1Packetv2(Long_t nElements, void *p) {
      return p ? new(p) ::Gl1Packetv2[nElements] : new ::Gl1Packetv2[nElements];
   }
   // Wrapper around operator delete
   static void delete_Gl1Packetv2(void *p) {
      delete (static_cast<::Gl1Packetv2*>(p));
   }
   static void deleteArray_Gl1Packetv2(void *p) {
      delete [] (static_cast<::Gl1Packetv2*>(p));
   }
   static void destruct_Gl1Packetv2(void *p) {
      typedef ::Gl1Packetv2 current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::Gl1Packetv2

namespace {
  void TriggerDictionaryInitialization_Gl1Packetv2_Dict_Impl() {
    static const char* headers[] = {
"0",
nullptr
    };
    static const char* includePaths[] = {
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "Gl1Packetv2_Dict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
class Gl1Packetv2;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "Gl1Packetv2_Dict dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#ifndef FUN4ALLRAW_GL1PACKETV2_H
#define FUN4ALLRAW_GL1PACKETV2_H

#include "Gl1Packet.h"

#include <array>
#include <limits>

class Gl1Packetv2 : public Gl1Packet
{
 public:
  Gl1Packetv2() = default;
  ~Gl1Packetv2() override = default;

  void Reset() override;
  void identify(std::ostream &os = std::cout) const override;
  void FillFrom(const Gl1Packet *pkt) override;

  void setPacketNumber(const unsigned int i) override { packet_nr = i; }
  unsigned int getPacketNumber() const override { return packet_nr; }

  void setBunchNumber(const uint64_t i) override { BunchNumber = i; }
  uint64_t getBunchNumber() const override { return BunchNumber; }
  void setTriggerInput(const uint64_t i) override { TriggerInput = i; }
  uint64_t getTriggerInput() const override { return TriggerInput; }

  void setLiveVector(const uint64_t i) override { LiveVector = i; }
  void setTriggerVector(const uint64_t i) override { setLiveVector(i); }  // backward compatibility
  uint64_t getLiveVector() const override { return LiveVector; }
  uint64_t getTriggerVector() const override { return getLiveVector(); }  // backward compatibility

  void setScaledVector(const uint64_t i) override { ScaledVector = i; }
  uint64_t getScaledVector() const override { return ScaledVector; }

  void setGTMBusyVector(const uint64_t i) override { GTMBusyVector = i; }
  uint64_t getGTMBusyVector() const override { return GTMBusyVector; }

  void setScaler(int iscal, int index, uint64_t lval) override { scaler.at(iscal).at(index) = lval; }
  void setGl1pScaler(int iscal, int index, uint64_t lval) override { gl1pscaler.at(iscal).at(index) = lval; }

  int iValue(const int i) const override;
  long long lValue(const int /*i*/, const std::string &what) const override;
  long long lValue(const int i, const int j) const override;

  void dump(std::ostream &os = std::cout) const override;

 protected:
  unsigned int packet_nr{0};
  uint64_t BunchNumber{std::numeric_limits<uint64_t>::max()};
  uint64_t TriggerInput{0};
  uint64_t LiveVector{0};
  uint64_t ScaledVector{0};
  uint64_t GTMBusyVector{0};
  std::array<std::array<uint64_t, 3>, 64> scaler{{{0}}};
  std::array<std::array<uint64_t, 3>, 16> gl1pscaler{{{0}}};

 private:
  ClassDefOverride(Gl1Packetv2, 2)
};

#endif

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"Gl1Packetv2", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("Gl1Packetv2_Dict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_Gl1Packetv2_Dict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_Gl1Packetv2_Dict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_Gl1Packetv2_Dict() {
  TriggerDictionaryInitialization_Gl1Packetv2_Dict_Impl();
}
