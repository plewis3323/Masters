// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME MvtxFeeIdInfov1_Dict
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
#include "../MvtxFeeIdInfov1.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static void *new_MvtxFeeIdInfov1(void *p = nullptr);
   static void *newArray_MvtxFeeIdInfov1(Long_t size, void *p);
   static void delete_MvtxFeeIdInfov1(void *p);
   static void deleteArray_MvtxFeeIdInfov1(void *p);
   static void destruct_MvtxFeeIdInfov1(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::MvtxFeeIdInfov1*)
   {
      ::MvtxFeeIdInfov1 *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::MvtxFeeIdInfov1 >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("MvtxFeeIdInfov1", ::MvtxFeeIdInfov1::Class_Version(), "", 10,
                  typeid(::MvtxFeeIdInfov1), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::MvtxFeeIdInfov1::Dictionary, isa_proxy, 4,
                  sizeof(::MvtxFeeIdInfov1) );
      instance.SetNew(&new_MvtxFeeIdInfov1);
      instance.SetNewArray(&newArray_MvtxFeeIdInfov1);
      instance.SetDelete(&delete_MvtxFeeIdInfov1);
      instance.SetDeleteArray(&deleteArray_MvtxFeeIdInfov1);
      instance.SetDestructor(&destruct_MvtxFeeIdInfov1);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::MvtxFeeIdInfov1*)
   {
      return GenerateInitInstanceLocal(static_cast<::MvtxFeeIdInfov1*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::MvtxFeeIdInfov1*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr MvtxFeeIdInfov1::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *MvtxFeeIdInfov1::Class_Name()
{
   return "MvtxFeeIdInfov1";
}

//______________________________________________________________________________
const char *MvtxFeeIdInfov1::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::MvtxFeeIdInfov1*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int MvtxFeeIdInfov1::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::MvtxFeeIdInfov1*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *MvtxFeeIdInfov1::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::MvtxFeeIdInfov1*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *MvtxFeeIdInfov1::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::MvtxFeeIdInfov1*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void MvtxFeeIdInfov1::Streamer(TBuffer &R__b)
{
   // Stream an object of class MvtxFeeIdInfov1.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(MvtxFeeIdInfov1::Class(),this);
   } else {
      R__b.WriteClassBuffer(MvtxFeeIdInfov1::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_MvtxFeeIdInfov1(void *p) {
      return  p ? new(p) ::MvtxFeeIdInfov1 : new ::MvtxFeeIdInfov1;
   }
   static void *newArray_MvtxFeeIdInfov1(Long_t nElements, void *p) {
      return p ? new(p) ::MvtxFeeIdInfov1[nElements] : new ::MvtxFeeIdInfov1[nElements];
   }
   // Wrapper around operator delete
   static void delete_MvtxFeeIdInfov1(void *p) {
      delete (static_cast<::MvtxFeeIdInfov1*>(p));
   }
   static void deleteArray_MvtxFeeIdInfov1(void *p) {
      delete [] (static_cast<::MvtxFeeIdInfov1*>(p));
   }
   static void destruct_MvtxFeeIdInfov1(void *p) {
      typedef ::MvtxFeeIdInfov1 current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::MvtxFeeIdInfov1

namespace {
  void TriggerDictionaryInitialization_MvtxFeeIdInfov1_Dict_Impl() {
    static const char* headers[] = {
"0",
nullptr
    };
    static const char* includePaths[] = {
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "MvtxFeeIdInfov1_Dict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
class MvtxFeeIdInfov1;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "MvtxFeeIdInfov1_Dict dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#ifndef FUN4ALLRAW_MVTXFEEIDINFOV1_H
#define FUN4ALLRAW_MVTXFEEIDINFOV1_H

#include "MvtxFeeIdInfo.h"

#include <limits>

class MvtxFeeIdInfov1 : public MvtxFeeIdInfo
{
 public:
  //! ctor
  MvtxFeeIdInfov1() = default;
  explicit MvtxFeeIdInfov1(MvtxFeeIdInfo* info);

  //! cp/mv ctor
  MvtxFeeIdInfov1(const MvtxFeeIdInfov1&) = default;
  MvtxFeeIdInfov1(MvtxFeeIdInfov1&&) = default;

  //! cp/mv assigment
  MvtxFeeIdInfov1& operator=(const MvtxFeeIdInfov1&) = default;
  MvtxFeeIdInfov1& operator=(MvtxFeeIdInfov1&&) = default;

  //! dtor
  ~MvtxFeeIdInfov1() override = default;

  /** identify Function from PHObject
      @param os Output Stream
   */
  void identify(std::ostream& os = std::cout) const override;

  uint16_t get_feeId() const override { return m_feeId; }
  // cppcheck-suppress virtualCallInConstructor
  void set_feeId(const uint16_t val) override { m_feeId = val; }

  uint32_t get_detField() const override { return m_detField; }
  // cppcheck-suppress virtualCallInConstructor
  void set_detField(const uint32_t val) override { m_detField = val; }

  uint64_t get_bco() const override { return m_bco; }
  // cppcheck-suppress virtualCallInConstructor
  void set_bco(const uint64_t val) override { m_bco = val; }

 private:
  uint16_t m_feeId = std::numeric_limits<uint16_t>::max();
  uint32_t m_detField = std::numeric_limits<uint32_t>::max();
  uint64_t m_bco = std::numeric_limits<uint64_t>::max();

  ClassDefOverride(MvtxFeeIdInfov1, 1)
};

#endif

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"MvtxFeeIdInfov1", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("MvtxFeeIdInfov1_Dict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_MvtxFeeIdInfov1_Dict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_MvtxFeeIdInfov1_Dict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_MvtxFeeIdInfov1_Dict() {
  TriggerDictionaryInitialization_MvtxFeeIdInfov1_Dict_Impl();
}
