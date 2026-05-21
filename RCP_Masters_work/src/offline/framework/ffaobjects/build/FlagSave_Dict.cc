// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME FlagSave_Dict
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
#include "../FlagSave.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static void *new_FlagSave(void *p = nullptr);
   static void *newArray_FlagSave(Long_t size, void *p);
   static void delete_FlagSave(void *p);
   static void deleteArray_FlagSave(void *p);
   static void destruct_FlagSave(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::FlagSave*)
   {
      ::FlagSave *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::FlagSave >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("FlagSave", ::FlagSave::Class_Version(), "", 14,
                  typeid(::FlagSave), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::FlagSave::Dictionary, isa_proxy, 4,
                  sizeof(::FlagSave) );
      instance.SetNew(&new_FlagSave);
      instance.SetNewArray(&newArray_FlagSave);
      instance.SetDelete(&delete_FlagSave);
      instance.SetDeleteArray(&deleteArray_FlagSave);
      instance.SetDestructor(&destruct_FlagSave);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::FlagSave*)
   {
      return GenerateInitInstanceLocal(static_cast<::FlagSave*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::FlagSave*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr FlagSave::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *FlagSave::Class_Name()
{
   return "FlagSave";
}

//______________________________________________________________________________
const char *FlagSave::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::FlagSave*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int FlagSave::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::FlagSave*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *FlagSave::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::FlagSave*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *FlagSave::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::FlagSave*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void FlagSave::Streamer(TBuffer &R__b)
{
   // Stream an object of class FlagSave.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(FlagSave::Class(),this);
   } else {
      R__b.WriteClassBuffer(FlagSave::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_FlagSave(void *p) {
      return  p ? new(p) ::FlagSave : new ::FlagSave;
   }
   static void *newArray_FlagSave(Long_t nElements, void *p) {
      return p ? new(p) ::FlagSave[nElements] : new ::FlagSave[nElements];
   }
   // Wrapper around operator delete
   static void delete_FlagSave(void *p) {
      delete (static_cast<::FlagSave*>(p));
   }
   static void deleteArray_FlagSave(void *p) {
      delete [] (static_cast<::FlagSave*>(p));
   }
   static void destruct_FlagSave(void *p) {
      typedef ::FlagSave current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::FlagSave

namespace {
  void TriggerDictionaryInitialization_FlagSave_Dict_Impl() {
    static const char* headers[] = {
"0",
nullptr
    };
    static const char* includePaths[] = {
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "FlagSave_Dict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
class FlagSave;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "FlagSave_Dict dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
// Tell emacs that this is a C++ source
//  -*- C++ -*-.
#ifndef FFAOBJECTS_FLAGSAVE_H
#define FFAOBJECTS_FLAGSAVE_H

#include <phool/PHObject.h>
#include <phool/phool.h>

class PHFlag;

///
class FlagSave : public PHObject
{
 public:
  /// dtor
  ~FlagSave() override {}

  /// Clear Flag
  void Reset() override
  {
    std::cout << PHWHERE << "ERROR Reset() not implemented by daughter class" << std::endl;
    return;
  }

  /** identify Function from PHObject
      @param os Output Stream 
   */
  void identify(std::ostream& os = std::cout) const override
  {
    os << "identify yourself: virtual FlagSave Object" << std::endl;
    return;
  }

  /// isValid returns non zero if object contains valid data
  int isValid() const override
  {
    std::cout << PHWHERE << "isValid not implemented by daughter class" << std::endl;
    return 0;
  }

  /// Flags are read during InitRun() and written during End()
  /// Fills DST object with flags, if clearold is set, old flags from previous files
  /// which were deleted will not be saved
  virtual int FillFromPHFlag(const PHFlag* /*flags*/, const bool /* clearold */) { return -1; }
  /// Read back flags from the DST, if overwrite is set: flags from DST object will overwrite
  /// flag values set in the macro
  virtual int PutFlagsBack(PHFlag* /*flags*/, const bool /* overwrite */) { return -1; }

 private:
  ClassDefOverride(FlagSave, 1)
};

#endif

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"FlagSave", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("FlagSave_Dict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_FlagSave_Dict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_FlagSave_Dict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_FlagSave_Dict() {
  TriggerDictionaryInitialization_FlagSave_Dict_Impl();
}
