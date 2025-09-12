// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME MvtxRawHitContainerv1_Dict
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
#include "../MvtxRawHitContainerv1.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static void *new_MvtxRawHitContainerv1(void *p = nullptr);
   static void *newArray_MvtxRawHitContainerv1(Long_t size, void *p);
   static void delete_MvtxRawHitContainerv1(void *p);
   static void deleteArray_MvtxRawHitContainerv1(void *p);
   static void destruct_MvtxRawHitContainerv1(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::MvtxRawHitContainerv1*)
   {
      ::MvtxRawHitContainerv1 *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::MvtxRawHitContainerv1 >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("MvtxRawHitContainerv1", ::MvtxRawHitContainerv1::Class_Version(), "", 11,
                  typeid(::MvtxRawHitContainerv1), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::MvtxRawHitContainerv1::Dictionary, isa_proxy, 4,
                  sizeof(::MvtxRawHitContainerv1) );
      instance.SetNew(&new_MvtxRawHitContainerv1);
      instance.SetNewArray(&newArray_MvtxRawHitContainerv1);
      instance.SetDelete(&delete_MvtxRawHitContainerv1);
      instance.SetDeleteArray(&deleteArray_MvtxRawHitContainerv1);
      instance.SetDestructor(&destruct_MvtxRawHitContainerv1);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::MvtxRawHitContainerv1*)
   {
      return GenerateInitInstanceLocal(static_cast<::MvtxRawHitContainerv1*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::MvtxRawHitContainerv1*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr MvtxRawHitContainerv1::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *MvtxRawHitContainerv1::Class_Name()
{
   return "MvtxRawHitContainerv1";
}

//______________________________________________________________________________
const char *MvtxRawHitContainerv1::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::MvtxRawHitContainerv1*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int MvtxRawHitContainerv1::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::MvtxRawHitContainerv1*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *MvtxRawHitContainerv1::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::MvtxRawHitContainerv1*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *MvtxRawHitContainerv1::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::MvtxRawHitContainerv1*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void MvtxRawHitContainerv1::Streamer(TBuffer &R__b)
{
   // Stream an object of class MvtxRawHitContainerv1.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(MvtxRawHitContainerv1::Class(),this);
   } else {
      R__b.WriteClassBuffer(MvtxRawHitContainerv1::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_MvtxRawHitContainerv1(void *p) {
      return  p ? new(p) ::MvtxRawHitContainerv1 : new ::MvtxRawHitContainerv1;
   }
   static void *newArray_MvtxRawHitContainerv1(Long_t nElements, void *p) {
      return p ? new(p) ::MvtxRawHitContainerv1[nElements] : new ::MvtxRawHitContainerv1[nElements];
   }
   // Wrapper around operator delete
   static void delete_MvtxRawHitContainerv1(void *p) {
      delete (static_cast<::MvtxRawHitContainerv1*>(p));
   }
   static void deleteArray_MvtxRawHitContainerv1(void *p) {
      delete [] (static_cast<::MvtxRawHitContainerv1*>(p));
   }
   static void destruct_MvtxRawHitContainerv1(void *p) {
      typedef ::MvtxRawHitContainerv1 current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::MvtxRawHitContainerv1

namespace {
  void TriggerDictionaryInitialization_MvtxRawHitContainerv1_Dict_Impl() {
    static const char* headers[] = {
"0",
nullptr
    };
    static const char* includePaths[] = {
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "MvtxRawHitContainerv1_Dict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
class MvtxRawHitContainerv1;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "MvtxRawHitContainerv1_Dict dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#ifndef FUN4ALLRAW_MVTXHITRAWCONTAINERV1_H
#define FUN4ALLRAW_MVTXHITRAWCONTAINERV1_H

#include "MvtxRawHitContainer.h"

class MvtxRawHit;
class TClonesArray;

class MvtxRawHitContainerv1 : public MvtxRawHitContainer
{
 public:
  MvtxRawHitContainerv1();
  ~MvtxRawHitContainerv1() override;

  /// Clear Event
  void Reset() override;

  /** identify Function from PHObject
      @param os Output Stream
   */
  void identify(std::ostream &os = std::cout) const override;

  /// isValid returns non zero if object contains vailid data
  int isValid() const override;

  MvtxRawHit *AddHit() override;
  MvtxRawHit *AddHit(MvtxRawHit *mvtxhit) override;
  unsigned int get_nhits() override;
  MvtxRawHit *get_hit(unsigned int index) override;

 private:
  TClonesArray *MvtxRawHitsTCArray = nullptr;

  ClassDefOverride(MvtxRawHitContainerv1, 1)
};

#endif

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"MvtxRawHitContainerv1", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("MvtxRawHitContainerv1_Dict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_MvtxRawHitContainerv1_Dict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_MvtxRawHitContainerv1_Dict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_MvtxRawHitContainerv1_Dict() {
  TriggerDictionaryInitialization_MvtxRawHitContainerv1_Dict_Impl();
}
