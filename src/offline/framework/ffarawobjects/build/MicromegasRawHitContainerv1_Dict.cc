// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME MicromegasRawHitContainerv1_Dict
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
#include "../MicromegasRawHitContainerv1.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static void *new_MicromegasRawHitContainerv1(void *p = nullptr);
   static void *newArray_MicromegasRawHitContainerv1(Long_t size, void *p);
   static void delete_MicromegasRawHitContainerv1(void *p);
   static void deleteArray_MicromegasRawHitContainerv1(void *p);
   static void destruct_MicromegasRawHitContainerv1(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::MicromegasRawHitContainerv1*)
   {
      ::MicromegasRawHitContainerv1 *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::MicromegasRawHitContainerv1 >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("MicromegasRawHitContainerv1", ::MicromegasRawHitContainerv1::Class_Version(), "", 11,
                  typeid(::MicromegasRawHitContainerv1), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::MicromegasRawHitContainerv1::Dictionary, isa_proxy, 4,
                  sizeof(::MicromegasRawHitContainerv1) );
      instance.SetNew(&new_MicromegasRawHitContainerv1);
      instance.SetNewArray(&newArray_MicromegasRawHitContainerv1);
      instance.SetDelete(&delete_MicromegasRawHitContainerv1);
      instance.SetDeleteArray(&deleteArray_MicromegasRawHitContainerv1);
      instance.SetDestructor(&destruct_MicromegasRawHitContainerv1);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::MicromegasRawHitContainerv1*)
   {
      return GenerateInitInstanceLocal(static_cast<::MicromegasRawHitContainerv1*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::MicromegasRawHitContainerv1*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr MicromegasRawHitContainerv1::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *MicromegasRawHitContainerv1::Class_Name()
{
   return "MicromegasRawHitContainerv1";
}

//______________________________________________________________________________
const char *MicromegasRawHitContainerv1::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::MicromegasRawHitContainerv1*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int MicromegasRawHitContainerv1::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::MicromegasRawHitContainerv1*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *MicromegasRawHitContainerv1::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::MicromegasRawHitContainerv1*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *MicromegasRawHitContainerv1::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::MicromegasRawHitContainerv1*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void MicromegasRawHitContainerv1::Streamer(TBuffer &R__b)
{
   // Stream an object of class MicromegasRawHitContainerv1.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(MicromegasRawHitContainerv1::Class(),this);
   } else {
      R__b.WriteClassBuffer(MicromegasRawHitContainerv1::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_MicromegasRawHitContainerv1(void *p) {
      return  p ? new(p) ::MicromegasRawHitContainerv1 : new ::MicromegasRawHitContainerv1;
   }
   static void *newArray_MicromegasRawHitContainerv1(Long_t nElements, void *p) {
      return p ? new(p) ::MicromegasRawHitContainerv1[nElements] : new ::MicromegasRawHitContainerv1[nElements];
   }
   // Wrapper around operator delete
   static void delete_MicromegasRawHitContainerv1(void *p) {
      delete (static_cast<::MicromegasRawHitContainerv1*>(p));
   }
   static void deleteArray_MicromegasRawHitContainerv1(void *p) {
      delete [] (static_cast<::MicromegasRawHitContainerv1*>(p));
   }
   static void destruct_MicromegasRawHitContainerv1(void *p) {
      typedef ::MicromegasRawHitContainerv1 current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::MicromegasRawHitContainerv1

namespace {
  void TriggerDictionaryInitialization_MicromegasRawHitContainerv1_Dict_Impl() {
    static const char* headers[] = {
"0",
nullptr
    };
    static const char* includePaths[] = {
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "MicromegasRawHitContainerv1_Dict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
class MicromegasRawHitContainerv1;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "MicromegasRawHitContainerv1_Dict dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#ifndef FUN4ALLRAW_MICROMEGASRAWHITCONTAINERV1_H
#define FUN4ALLRAW_MICROMEGASRAWHITCONTAINERV1_H

#include "MicromegasRawHitContainer.h"

class MicromegasRawHit;
class TClonesArray;

class MicromegasRawHitContainerv1 : public MicromegasRawHitContainer
{
  public:
  explicit MicromegasRawHitContainerv1();

  //! destructor
  ~MicromegasRawHitContainerv1() override;

  /// Clear Event
  void Reset() override;

  /** identify Function from PHObject
  @param os Output Stream
  */
  void identify(std::ostream &os = std::cout) const override;

  /// isValid returns non zero if object contains vailid data
  int isValid() const override;

  MicromegasRawHit *AddHit() override;
  MicromegasRawHit *AddHit(MicromegasRawHit *) override;
  unsigned int get_nhits() override;
  MicromegasRawHit *get_hit(unsigned int) override;

 private:
  TClonesArray *MicromegasRawHitsTCArray = nullptr;

  ClassDefOverride(MicromegasRawHitContainerv1, 1)
};

#endif

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"MicromegasRawHitContainerv1", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("MicromegasRawHitContainerv1_Dict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_MicromegasRawHitContainerv1_Dict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_MicromegasRawHitContainerv1_Dict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_MicromegasRawHitContainerv1_Dict() {
  TriggerDictionaryInitialization_MicromegasRawHitContainerv1_Dict_Impl();
}
