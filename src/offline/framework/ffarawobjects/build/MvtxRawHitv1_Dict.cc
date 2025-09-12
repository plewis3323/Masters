// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME MvtxRawHitv1_Dict
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
#include "../MvtxRawHitv1.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static void *new_MvtxRawHitv1(void *p = nullptr);
   static void *newArray_MvtxRawHitv1(Long_t size, void *p);
   static void delete_MvtxRawHitv1(void *p);
   static void deleteArray_MvtxRawHitv1(void *p);
   static void destruct_MvtxRawHitv1(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::MvtxRawHitv1*)
   {
      ::MvtxRawHitv1 *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::MvtxRawHitv1 >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("MvtxRawHitv1", ::MvtxRawHitv1::Class_Version(), "", 10,
                  typeid(::MvtxRawHitv1), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::MvtxRawHitv1::Dictionary, isa_proxy, 4,
                  sizeof(::MvtxRawHitv1) );
      instance.SetNew(&new_MvtxRawHitv1);
      instance.SetNewArray(&newArray_MvtxRawHitv1);
      instance.SetDelete(&delete_MvtxRawHitv1);
      instance.SetDeleteArray(&deleteArray_MvtxRawHitv1);
      instance.SetDestructor(&destruct_MvtxRawHitv1);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::MvtxRawHitv1*)
   {
      return GenerateInitInstanceLocal(static_cast<::MvtxRawHitv1*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::MvtxRawHitv1*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr MvtxRawHitv1::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *MvtxRawHitv1::Class_Name()
{
   return "MvtxRawHitv1";
}

//______________________________________________________________________________
const char *MvtxRawHitv1::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::MvtxRawHitv1*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int MvtxRawHitv1::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::MvtxRawHitv1*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *MvtxRawHitv1::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::MvtxRawHitv1*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *MvtxRawHitv1::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::MvtxRawHitv1*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void MvtxRawHitv1::Streamer(TBuffer &R__b)
{
   // Stream an object of class MvtxRawHitv1.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(MvtxRawHitv1::Class(),this);
   } else {
      R__b.WriteClassBuffer(MvtxRawHitv1::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_MvtxRawHitv1(void *p) {
      return  p ? new(p) ::MvtxRawHitv1 : new ::MvtxRawHitv1;
   }
   static void *newArray_MvtxRawHitv1(Long_t nElements, void *p) {
      return p ? new(p) ::MvtxRawHitv1[nElements] : new ::MvtxRawHitv1[nElements];
   }
   // Wrapper around operator delete
   static void delete_MvtxRawHitv1(void *p) {
      delete (static_cast<::MvtxRawHitv1*>(p));
   }
   static void deleteArray_MvtxRawHitv1(void *p) {
      delete [] (static_cast<::MvtxRawHitv1*>(p));
   }
   static void destruct_MvtxRawHitv1(void *p) {
      typedef ::MvtxRawHitv1 current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::MvtxRawHitv1

namespace {
  void TriggerDictionaryInitialization_MvtxRawHitv1_Dict_Impl() {
    static const char* headers[] = {
"0",
nullptr
    };
    static const char* includePaths[] = {
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "MvtxRawHitv1_Dict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
class MvtxRawHitv1;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "MvtxRawHitv1_Dict dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#ifndef FUN4ALLRAW_MVTXRAWHITV1_H
#define FUN4ALLRAW_MVTXRAWHITV1_H

#include "MvtxRawHit.h"

#include <limits>

class MvtxRawHitv1 : public MvtxRawHit
{
 public:
  MvtxRawHitv1() {}
  MvtxRawHitv1(MvtxRawHit *mvtxhit);
  ~MvtxRawHitv1() override{};

  /** identify Function from PHObject
      @param os Output Stream
   */
  void identify(std::ostream &os = std::cout) const override;

  uint64_t get_bco() const override { return bco; }
  // cppcheck-suppress virtualCallInConstructor
  void set_bco(const uint64_t val) override { bco = val; }

  uint32_t get_strobe_bc() const override { return strobe_bc; }
  // cppcheck-suppress virtualCallInConstructor
  void set_strobe_bc(const uint32_t val) override { strobe_bc = val; }

  uint32_t get_chip_bc() const override { return chip_bc; }
  // cppcheck-suppress virtualCallInConstructor
  void set_chip_bc(const uint32_t val) override { chip_bc = val; }

  uint8_t get_layer_id() const override { return layer_id; }
  // cppcheck-suppress virtualCallInConstructor
  void set_layer_id(uint8_t val) override { layer_id = val; }

  uint8_t get_stave_id() const override { return stave_id; }
  // cppcheck-suppress virtualCallInConstructor
  void set_stave_id(uint8_t val) override { stave_id = val; }

  uint8_t get_chip_id() const override { return chip_id; }
  // cppcheck-suppress virtualCallInConstructor
  void set_chip_id(uint8_t val) override { chip_id = val; }

  uint16_t get_row() const override { return row; }
  // cppcheck-suppress virtualCallInConstructor
  void set_row(uint16_t val) override { row = val; }

  uint16_t get_col() const override { return col; }
  // cppcheck-suppress virtualCallInConstructor
  void set_col(uint16_t val) override { col = val; }

 protected:
  uint64_t bco = std::numeric_limits<uint64_t>::max();
  uint32_t strobe_bc = std::numeric_limits<uint32_t>::max();
  uint32_t chip_bc = std::numeric_limits<uint32_t>::max();
  uint8_t layer_id = std::numeric_limits<uint8_t>::max();
  uint8_t stave_id = std::numeric_limits<uint8_t>::max();
  uint8_t chip_id = std::numeric_limits<uint8_t>::max();
  uint16_t row = std::numeric_limits<uint16_t>::max();
  uint16_t col = std::numeric_limits<uint16_t>::max();

  ClassDefOverride(MvtxRawHitv1, 1)
};

#endif

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"MvtxRawHitv1", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("MvtxRawHitv1_Dict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_MvtxRawHitv1_Dict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_MvtxRawHitv1_Dict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_MvtxRawHitv1_Dict() {
  TriggerDictionaryInitialization_MvtxRawHitv1_Dict_Impl();
}
