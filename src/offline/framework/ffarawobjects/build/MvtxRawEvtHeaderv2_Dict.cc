// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME MvtxRawEvtHeaderv2_Dict
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
#include "../MvtxRawEvtHeaderv2.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static void *new_MvtxRawEvtHeaderv2(void *p = nullptr);
   static void *newArray_MvtxRawEvtHeaderv2(Long_t size, void *p);
   static void delete_MvtxRawEvtHeaderv2(void *p);
   static void deleteArray_MvtxRawEvtHeaderv2(void *p);
   static void destruct_MvtxRawEvtHeaderv2(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::MvtxRawEvtHeaderv2*)
   {
      ::MvtxRawEvtHeaderv2 *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::MvtxRawEvtHeaderv2 >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("MvtxRawEvtHeaderv2", ::MvtxRawEvtHeaderv2::Class_Version(), "", 13,
                  typeid(::MvtxRawEvtHeaderv2), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::MvtxRawEvtHeaderv2::Dictionary, isa_proxy, 4,
                  sizeof(::MvtxRawEvtHeaderv2) );
      instance.SetNew(&new_MvtxRawEvtHeaderv2);
      instance.SetNewArray(&newArray_MvtxRawEvtHeaderv2);
      instance.SetDelete(&delete_MvtxRawEvtHeaderv2);
      instance.SetDeleteArray(&deleteArray_MvtxRawEvtHeaderv2);
      instance.SetDestructor(&destruct_MvtxRawEvtHeaderv2);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::MvtxRawEvtHeaderv2*)
   {
      return GenerateInitInstanceLocal(static_cast<::MvtxRawEvtHeaderv2*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::MvtxRawEvtHeaderv2*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr MvtxRawEvtHeaderv2::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *MvtxRawEvtHeaderv2::Class_Name()
{
   return "MvtxRawEvtHeaderv2";
}

//______________________________________________________________________________
const char *MvtxRawEvtHeaderv2::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::MvtxRawEvtHeaderv2*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int MvtxRawEvtHeaderv2::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::MvtxRawEvtHeaderv2*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *MvtxRawEvtHeaderv2::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::MvtxRawEvtHeaderv2*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *MvtxRawEvtHeaderv2::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::MvtxRawEvtHeaderv2*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void MvtxRawEvtHeaderv2::Streamer(TBuffer &R__b)
{
   // Stream an object of class MvtxRawEvtHeaderv2.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(MvtxRawEvtHeaderv2::Class(),this);
   } else {
      R__b.WriteClassBuffer(MvtxRawEvtHeaderv2::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_MvtxRawEvtHeaderv2(void *p) {
      return  p ? new(p) ::MvtxRawEvtHeaderv2 : new ::MvtxRawEvtHeaderv2;
   }
   static void *newArray_MvtxRawEvtHeaderv2(Long_t nElements, void *p) {
      return p ? new(p) ::MvtxRawEvtHeaderv2[nElements] : new ::MvtxRawEvtHeaderv2[nElements];
   }
   // Wrapper around operator delete
   static void delete_MvtxRawEvtHeaderv2(void *p) {
      delete (static_cast<::MvtxRawEvtHeaderv2*>(p));
   }
   static void deleteArray_MvtxRawEvtHeaderv2(void *p) {
      delete [] (static_cast<::MvtxRawEvtHeaderv2*>(p));
   }
   static void destruct_MvtxRawEvtHeaderv2(void *p) {
      typedef ::MvtxRawEvtHeaderv2 current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::MvtxRawEvtHeaderv2

namespace ROOT {
   static TClass *setlEunsignedsPlonggR_Dictionary();
   static void setlEunsignedsPlonggR_TClassManip(TClass*);
   static void *new_setlEunsignedsPlonggR(void *p = nullptr);
   static void *newArray_setlEunsignedsPlonggR(Long_t size, void *p);
   static void delete_setlEunsignedsPlonggR(void *p);
   static void deleteArray_setlEunsignedsPlonggR(void *p);
   static void destruct_setlEunsignedsPlonggR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const set<unsigned long>*)
   {
      set<unsigned long> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(set<unsigned long>));
      static ::ROOT::TGenericClassInfo 
         instance("set<unsigned long>", -2, "set", 96,
                  typeid(set<unsigned long>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &setlEunsignedsPlonggR_Dictionary, isa_proxy, 0,
                  sizeof(set<unsigned long>) );
      instance.SetNew(&new_setlEunsignedsPlonggR);
      instance.SetNewArray(&newArray_setlEunsignedsPlonggR);
      instance.SetDelete(&delete_setlEunsignedsPlonggR);
      instance.SetDeleteArray(&deleteArray_setlEunsignedsPlonggR);
      instance.SetDestructor(&destruct_setlEunsignedsPlonggR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Insert< set<unsigned long> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("set<unsigned long>","std::set<unsigned long, std::less<unsigned long>, std::allocator<unsigned long> >"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const set<unsigned long>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *setlEunsignedsPlonggR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const set<unsigned long>*>(nullptr))->GetClass();
      setlEunsignedsPlonggR_TClassManip(theClass);
   return theClass;
   }

   static void setlEunsignedsPlonggR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_setlEunsignedsPlonggR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) set<unsigned long> : new set<unsigned long>;
   }
   static void *newArray_setlEunsignedsPlonggR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) set<unsigned long>[nElements] : new set<unsigned long>[nElements];
   }
   // Wrapper around operator delete
   static void delete_setlEunsignedsPlonggR(void *p) {
      delete (static_cast<set<unsigned long>*>(p));
   }
   static void deleteArray_setlEunsignedsPlonggR(void *p) {
      delete [] (static_cast<set<unsigned long>*>(p));
   }
   static void destruct_setlEunsignedsPlonggR(void *p) {
      typedef set<unsigned long> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class set<unsigned long>

namespace {
  void TriggerDictionaryInitialization_MvtxRawEvtHeaderv2_Dict_Impl() {
    static const char* headers[] = {
"0",
nullptr
    };
    static const char* includePaths[] = {
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "MvtxRawEvtHeaderv2_Dict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
class MvtxRawEvtHeaderv2;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "MvtxRawEvtHeaderv2_Dict dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#ifndef FUN4ALLRAW_MVTXRAWEVTHEADERV2_H
#define FUN4ALLRAW_MVTXRAWEVTHEADERV2_H

#include "MvtxRawEvtHeader.h"

#include <phool/PHObject.h>

class MvtxFeeIdInfo;
class TClonesArray;

class MvtxRawEvtHeaderv2 : public MvtxRawEvtHeader
{
 public:
  //! ctor
  MvtxRawEvtHeaderv2();

  //! cp/mv ctor
  MvtxRawEvtHeaderv2(const MvtxRawEvtHeaderv2 &) = default;
  MvtxRawEvtHeaderv2(MvtxRawEvtHeaderv2 &&) = default;

  //! cp/mv assignment
  MvtxRawEvtHeaderv2 &operator=(const MvtxRawEvtHeaderv2 &) = default;
  MvtxRawEvtHeaderv2 &operator=(MvtxRawEvtHeaderv2 &&) = default;

  //! dtor
  ~MvtxRawEvtHeaderv2() override;

  /// Clear Event
  void Reset() override;

  /** identify Function from PHObject
      @param os Output Stream
   */
  void identify(std::ostream &os = std::cout) const override;

  /// isValid returns non zero if object contains vailid data
  int isValid() const override;

  MvtxFeeIdInfo *AddFeeIdInfo() override;
  MvtxFeeIdInfo *AddFeeIdInfo(MvtxFeeIdInfo *feeIdInfo) override;

  uint64_t get_nFeeIdInfo() override;
  MvtxFeeIdInfo *get_feeIdInfo(unsigned int index) override;

  void AddL1Trg(const uint64_t &gtmL1_bco) override { m_MvtxL1TrgSet.insert(gtmL1_bco); };
  void AddL1Trg(const std::set<uint64_t> &mvtxL1TrgSet) override;

  std::set<uint64_t> &getMvtxLvL1BCO() override { return m_MvtxL1TrgSet; };

 private:
  TClonesArray *m_MvtxFeeIdInfoTCArray = nullptr;

  std::set<uint64_t> m_MvtxL1TrgSet;

  ClassDefOverride(MvtxRawEvtHeaderv2, 1)
};

#endif

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"MvtxRawEvtHeaderv2", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("MvtxRawEvtHeaderv2_Dict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_MvtxRawEvtHeaderv2_Dict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_MvtxRawEvtHeaderv2_Dict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_MvtxRawEvtHeaderv2_Dict() {
  TriggerDictionaryInitialization_MvtxRawEvtHeaderv2_Dict_Impl();
}
