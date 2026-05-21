// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME MbdPmtContainer_Dict
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
#include "../MbdPmtContainer.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static void *new_MbdPmtContainer(void *p = nullptr);
   static void *newArray_MbdPmtContainer(Long_t size, void *p);
   static void delete_MbdPmtContainer(void *p);
   static void deleteArray_MbdPmtContainer(void *p);
   static void destruct_MbdPmtContainer(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::MbdPmtContainer*)
   {
      ::MbdPmtContainer *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::MbdPmtContainer >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("MbdPmtContainer", ::MbdPmtContainer::Class_Version(), "", 16,
                  typeid(::MbdPmtContainer), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::MbdPmtContainer::Dictionary, isa_proxy, 4,
                  sizeof(::MbdPmtContainer) );
      instance.SetNew(&new_MbdPmtContainer);
      instance.SetNewArray(&newArray_MbdPmtContainer);
      instance.SetDelete(&delete_MbdPmtContainer);
      instance.SetDeleteArray(&deleteArray_MbdPmtContainer);
      instance.SetDestructor(&destruct_MbdPmtContainer);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::MbdPmtContainer*)
   {
      return GenerateInitInstanceLocal(static_cast<::MbdPmtContainer*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::MbdPmtContainer*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr MbdPmtContainer::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *MbdPmtContainer::Class_Name()
{
   return "MbdPmtContainer";
}

//______________________________________________________________________________
const char *MbdPmtContainer::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::MbdPmtContainer*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int MbdPmtContainer::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::MbdPmtContainer*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *MbdPmtContainer::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::MbdPmtContainer*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *MbdPmtContainer::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::MbdPmtContainer*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void MbdPmtContainer::Streamer(TBuffer &R__b)
{
   // Stream an object of class MbdPmtContainer.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(MbdPmtContainer::Class(),this);
   } else {
      R__b.WriteClassBuffer(MbdPmtContainer::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_MbdPmtContainer(void *p) {
      return  p ? new(p) ::MbdPmtContainer : new ::MbdPmtContainer;
   }
   static void *newArray_MbdPmtContainer(Long_t nElements, void *p) {
      return p ? new(p) ::MbdPmtContainer[nElements] : new ::MbdPmtContainer[nElements];
   }
   // Wrapper around operator delete
   static void delete_MbdPmtContainer(void *p) {
      delete (static_cast<::MbdPmtContainer*>(p));
   }
   static void deleteArray_MbdPmtContainer(void *p) {
      delete [] (static_cast<::MbdPmtContainer*>(p));
   }
   static void destruct_MbdPmtContainer(void *p) {
      typedef ::MbdPmtContainer current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::MbdPmtContainer

namespace {
  void TriggerDictionaryInitialization_MbdPmtContainer_Dict_Impl() {
    static const char* headers[] = {
"0",
nullptr
    };
    static const char* includePaths[] = {
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "MbdPmtContainer_Dict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
class MbdPmtContainer;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "MbdPmtContainer_Dict dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
// virtual Mbd PMT Container class

#ifndef MBD_MBDPMTCONTAINER_H__
#define MBD_MBDPMTCONTAINER_H__

#include <phool/PHObject.h>

#include <iostream>
#include <string>

class MbdPmtHit;

///
class MbdPmtContainer : public PHObject
{
 public:
  /// dtor
  virtual ~MbdPmtContainer() {}

  /** identify Function from PHObject
      @param os Output Stream
   */
  virtual void identify(std::ostream& os = std::cout) const override;

  /// Clear Event
  virtual void Reset() override;

  /// isValid returns non zero if object contains valid data
  virtual int isValid() const override;

  /** set number of PMTs for Mbd
      @param ival Number of Mbd Pmt's
   */
  virtual void set_npmt(const short ival);

  //! get Number of Mbd Pmt's
  virtual Short_t get_npmt() const;

  //! get MbdPmtHit Object
  virtual MbdPmtHit *get_pmt(const int ipmt) const;

 private:
  static void virtual_warning(const std::string& funcsname) ;

  ClassDefOverride(MbdPmtContainer, 1)
};

#endif  // __MBD_MBDPMTCONTAINER_H__

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"MbdPmtContainer", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("MbdPmtContainer_Dict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_MbdPmtContainer_Dict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_MbdPmtContainer_Dict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_MbdPmtContainer_Dict() {
  TriggerDictionaryInitialization_MbdPmtContainer_Dict_Impl();
}
