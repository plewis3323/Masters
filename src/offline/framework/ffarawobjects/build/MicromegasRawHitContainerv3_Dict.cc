// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME MicromegasRawHitContainerv3_Dict
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
#include "../MicromegasRawHitContainerv3.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static void *new_MicromegasRawHitContainerv3(void *p = nullptr);
   static void *newArray_MicromegasRawHitContainerv3(Long_t size, void *p);
   static void delete_MicromegasRawHitContainerv3(void *p);
   static void deleteArray_MicromegasRawHitContainerv3(void *p);
   static void destruct_MicromegasRawHitContainerv3(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::MicromegasRawHitContainerv3*)
   {
      ::MicromegasRawHitContainerv3 *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::MicromegasRawHitContainerv3 >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("MicromegasRawHitContainerv3", ::MicromegasRawHitContainerv3::Class_Version(), "", 12,
                  typeid(::MicromegasRawHitContainerv3), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::MicromegasRawHitContainerv3::Dictionary, isa_proxy, 4,
                  sizeof(::MicromegasRawHitContainerv3) );
      instance.SetNew(&new_MicromegasRawHitContainerv3);
      instance.SetNewArray(&newArray_MicromegasRawHitContainerv3);
      instance.SetDelete(&delete_MicromegasRawHitContainerv3);
      instance.SetDeleteArray(&deleteArray_MicromegasRawHitContainerv3);
      instance.SetDestructor(&destruct_MicromegasRawHitContainerv3);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::MicromegasRawHitContainerv3*)
   {
      return GenerateInitInstanceLocal(static_cast<::MicromegasRawHitContainerv3*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::MicromegasRawHitContainerv3*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr MicromegasRawHitContainerv3::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *MicromegasRawHitContainerv3::Class_Name()
{
   return "MicromegasRawHitContainerv3";
}

//______________________________________________________________________________
const char *MicromegasRawHitContainerv3::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::MicromegasRawHitContainerv3*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int MicromegasRawHitContainerv3::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::MicromegasRawHitContainerv3*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *MicromegasRawHitContainerv3::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::MicromegasRawHitContainerv3*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *MicromegasRawHitContainerv3::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::MicromegasRawHitContainerv3*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void MicromegasRawHitContainerv3::Streamer(TBuffer &R__b)
{
   // Stream an object of class MicromegasRawHitContainerv3.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(MicromegasRawHitContainerv3::Class(),this);
   } else {
      R__b.WriteClassBuffer(MicromegasRawHitContainerv3::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_MicromegasRawHitContainerv3(void *p) {
      return  p ? new(p) ::MicromegasRawHitContainerv3 : new ::MicromegasRawHitContainerv3;
   }
   static void *newArray_MicromegasRawHitContainerv3(Long_t nElements, void *p) {
      return p ? new(p) ::MicromegasRawHitContainerv3[nElements] : new ::MicromegasRawHitContainerv3[nElements];
   }
   // Wrapper around operator delete
   static void delete_MicromegasRawHitContainerv3(void *p) {
      delete (static_cast<::MicromegasRawHitContainerv3*>(p));
   }
   static void deleteArray_MicromegasRawHitContainerv3(void *p) {
      delete [] (static_cast<::MicromegasRawHitContainerv3*>(p));
   }
   static void destruct_MicromegasRawHitContainerv3(void *p) {
      typedef ::MicromegasRawHitContainerv3 current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::MicromegasRawHitContainerv3

namespace {
  void TriggerDictionaryInitialization_MicromegasRawHitContainerv3_Dict_Impl() {
    static const char* headers[] = {
"0",
nullptr
    };
    static const char* includePaths[] = {
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "MicromegasRawHitContainerv3_Dict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
class MicromegasRawHitContainerv3;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "MicromegasRawHitContainerv3_Dict dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#ifndef FUN4ALLRAW_MICROMEGASRAWHITCONTAINERv3_H
#define FUN4ALLRAW_MICROMEGASRAWHITCONTAINERv3_H

#include "MicromegasRawHitContainer.h"

class MicromegasRawHit;
class TClonesArray;

// NOLINTNEXTLINE(hicpp-special-member-functions)
class MicromegasRawHitContainerv3 : public MicromegasRawHitContainer
{
 public:

  /// constructor
  explicit MicromegasRawHitContainerv3();

  /// destructor
  ~MicromegasRawHitContainerv3() override;

  /// Clear Event
  void Reset() override;

  /** identify Function from PHObject
      @param os Output Stream
   */
  void identify(std::ostream &os = std::cout) const override;

  /// isValid returns non zero if object contains vailid data
  int isValid() const override;

  MicromegasRawHit *AddHit() override;
  MicromegasRawHit *AddHit(MicromegasRawHit*) override;
  unsigned int get_nhits() override;
  MicromegasRawHit *get_hit(unsigned int) override;

 private:
  TClonesArray *MicromegasRawHitsTCArray{nullptr};
  ClassDefOverride(MicromegasRawHitContainerv3, 1)
};

#endif

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"MicromegasRawHitContainerv3", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("MicromegasRawHitContainerv3_Dict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_MicromegasRawHitContainerv3_Dict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_MicromegasRawHitContainerv3_Dict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_MicromegasRawHitContainerv3_Dict() {
  TriggerDictionaryInitialization_MicromegasRawHitContainerv3_Dict_Impl();
}
