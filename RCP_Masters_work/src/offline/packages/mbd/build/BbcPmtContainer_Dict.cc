// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME BbcPmtContainer_Dict
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
#include "../BbcPmtContainer.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static void *new_BbcPmtContainer(void *p = nullptr);
   static void *newArray_BbcPmtContainer(Long_t size, void *p);
   static void delete_BbcPmtContainer(void *p);
   static void deleteArray_BbcPmtContainer(void *p);
   static void destruct_BbcPmtContainer(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BbcPmtContainer*)
   {
      ::BbcPmtContainer *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BbcPmtContainer >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BbcPmtContainer", ::BbcPmtContainer::Class_Version(), "", 16,
                  typeid(::BbcPmtContainer), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BbcPmtContainer::Dictionary, isa_proxy, 4,
                  sizeof(::BbcPmtContainer) );
      instance.SetNew(&new_BbcPmtContainer);
      instance.SetNewArray(&newArray_BbcPmtContainer);
      instance.SetDelete(&delete_BbcPmtContainer);
      instance.SetDeleteArray(&deleteArray_BbcPmtContainer);
      instance.SetDestructor(&destruct_BbcPmtContainer);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BbcPmtContainer*)
   {
      return GenerateInitInstanceLocal(static_cast<::BbcPmtContainer*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::BbcPmtContainer*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr BbcPmtContainer::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BbcPmtContainer::Class_Name()
{
   return "BbcPmtContainer";
}

//______________________________________________________________________________
const char *BbcPmtContainer::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BbcPmtContainer*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BbcPmtContainer::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BbcPmtContainer*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BbcPmtContainer::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BbcPmtContainer*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BbcPmtContainer::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BbcPmtContainer*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void BbcPmtContainer::Streamer(TBuffer &R__b)
{
   // Stream an object of class BbcPmtContainer.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BbcPmtContainer::Class(),this);
   } else {
      R__b.WriteClassBuffer(BbcPmtContainer::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BbcPmtContainer(void *p) {
      return  p ? new(p) ::BbcPmtContainer : new ::BbcPmtContainer;
   }
   static void *newArray_BbcPmtContainer(Long_t nElements, void *p) {
      return p ? new(p) ::BbcPmtContainer[nElements] : new ::BbcPmtContainer[nElements];
   }
   // Wrapper around operator delete
   static void delete_BbcPmtContainer(void *p) {
      delete (static_cast<::BbcPmtContainer*>(p));
   }
   static void deleteArray_BbcPmtContainer(void *p) {
      delete [] (static_cast<::BbcPmtContainer*>(p));
   }
   static void destruct_BbcPmtContainer(void *p) {
      typedef ::BbcPmtContainer current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::BbcPmtContainer

namespace {
  void TriggerDictionaryInitialization_BbcPmtContainer_Dict_Impl() {
    static const char* headers[] = {
"0",
nullptr
    };
    static const char* includePaths[] = {
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "BbcPmtContainer_Dict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
class BbcPmtContainer;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "BbcPmtContainer_Dict dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
// virtual Bbc PMT Container class

#ifndef MBD_BBCPMTCONTAINER_H
#define MBD_BBCPMTCONTAINER_H

#include <phool/PHObject.h>

#include <iostream>
#include <string>

class BbcPmtHit;

///
class BbcPmtContainer : public PHObject
{
 public:
  /// dtor
  virtual ~BbcPmtContainer() = default;

  /** identify Function from PHObject
      @param os Output Stream
   */
  virtual void identify(std::ostream& os = std::cout) const override;

  /// Clear Event
  virtual void Reset() override;

  /// isValid returns non zero if object contains valid data
  virtual int isValid() const override;

  /** set number of PMTs for Bbc
      @param ival Number of Bbc Pmt's
   */
  virtual void set_npmt(const short ival);

  //! get Number of Bbc Pmt's
  virtual Short_t get_npmt() const;

  //! get BbcPmtHit Object
  virtual BbcPmtHit *get_pmt(const int ipmt) const;

 private:
  static void virtual_warning(const std::string& funcsname) ;

  ClassDefOverride(BbcPmtContainer, 1)
};

#endif  // MBD_BBCPMTCONTAINER_H

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"BbcPmtContainer", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("BbcPmtContainer_Dict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_BbcPmtContainer_Dict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_BbcPmtContainer_Dict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_BbcPmtContainer_Dict() {
  TriggerDictionaryInitialization_BbcPmtContainer_Dict_Impl();
}
