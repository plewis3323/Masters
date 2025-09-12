// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME MvtxRawEvtHeaderv1_Dict
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
#include "../MvtxRawEvtHeaderv1.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static void *new_MvtxRawEvtHeaderv1(void *p = nullptr);
   static void *newArray_MvtxRawEvtHeaderv1(Long_t size, void *p);
   static void delete_MvtxRawEvtHeaderv1(void *p);
   static void deleteArray_MvtxRawEvtHeaderv1(void *p);
   static void destruct_MvtxRawEvtHeaderv1(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::MvtxRawEvtHeaderv1*)
   {
      ::MvtxRawEvtHeaderv1 *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::MvtxRawEvtHeaderv1 >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("MvtxRawEvtHeaderv1", ::MvtxRawEvtHeaderv1::Class_Version(), "", 13,
                  typeid(::MvtxRawEvtHeaderv1), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::MvtxRawEvtHeaderv1::Dictionary, isa_proxy, 4,
                  sizeof(::MvtxRawEvtHeaderv1) );
      instance.SetNew(&new_MvtxRawEvtHeaderv1);
      instance.SetNewArray(&newArray_MvtxRawEvtHeaderv1);
      instance.SetDelete(&delete_MvtxRawEvtHeaderv1);
      instance.SetDeleteArray(&deleteArray_MvtxRawEvtHeaderv1);
      instance.SetDestructor(&destruct_MvtxRawEvtHeaderv1);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::MvtxRawEvtHeaderv1*)
   {
      return GenerateInitInstanceLocal(static_cast<::MvtxRawEvtHeaderv1*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::MvtxRawEvtHeaderv1*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr MvtxRawEvtHeaderv1::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *MvtxRawEvtHeaderv1::Class_Name()
{
   return "MvtxRawEvtHeaderv1";
}

//______________________________________________________________________________
const char *MvtxRawEvtHeaderv1::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::MvtxRawEvtHeaderv1*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int MvtxRawEvtHeaderv1::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::MvtxRawEvtHeaderv1*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *MvtxRawEvtHeaderv1::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::MvtxRawEvtHeaderv1*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *MvtxRawEvtHeaderv1::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::MvtxRawEvtHeaderv1*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void MvtxRawEvtHeaderv1::Streamer(TBuffer &R__b)
{
   // Stream an object of class MvtxRawEvtHeaderv1.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(MvtxRawEvtHeaderv1::Class(),this);
   } else {
      R__b.WriteClassBuffer(MvtxRawEvtHeaderv1::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_MvtxRawEvtHeaderv1(void *p) {
      return  p ? new(p) ::MvtxRawEvtHeaderv1 : new ::MvtxRawEvtHeaderv1;
   }
   static void *newArray_MvtxRawEvtHeaderv1(Long_t nElements, void *p) {
      return p ? new(p) ::MvtxRawEvtHeaderv1[nElements] : new ::MvtxRawEvtHeaderv1[nElements];
   }
   // Wrapper around operator delete
   static void delete_MvtxRawEvtHeaderv1(void *p) {
      delete (static_cast<::MvtxRawEvtHeaderv1*>(p));
   }
   static void deleteArray_MvtxRawEvtHeaderv1(void *p) {
      delete [] (static_cast<::MvtxRawEvtHeaderv1*>(p));
   }
   static void destruct_MvtxRawEvtHeaderv1(void *p) {
      typedef ::MvtxRawEvtHeaderv1 current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::MvtxRawEvtHeaderv1

namespace ROOT {
   static TClass *setlEunsignedsPshortgR_Dictionary();
   static void setlEunsignedsPshortgR_TClassManip(TClass*);
   static void *new_setlEunsignedsPshortgR(void *p = nullptr);
   static void *newArray_setlEunsignedsPshortgR(Long_t size, void *p);
   static void delete_setlEunsignedsPshortgR(void *p);
   static void deleteArray_setlEunsignedsPshortgR(void *p);
   static void destruct_setlEunsignedsPshortgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const set<unsigned short>*)
   {
      set<unsigned short> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(set<unsigned short>));
      static ::ROOT::TGenericClassInfo 
         instance("set<unsigned short>", -2, "set", 96,
                  typeid(set<unsigned short>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &setlEunsignedsPshortgR_Dictionary, isa_proxy, 0,
                  sizeof(set<unsigned short>) );
      instance.SetNew(&new_setlEunsignedsPshortgR);
      instance.SetNewArray(&newArray_setlEunsignedsPshortgR);
      instance.SetDelete(&delete_setlEunsignedsPshortgR);
      instance.SetDeleteArray(&deleteArray_setlEunsignedsPshortgR);
      instance.SetDestructor(&destruct_setlEunsignedsPshortgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Insert< set<unsigned short> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("set<unsigned short>","std::set<unsigned short, std::less<unsigned short>, std::allocator<unsigned short> >"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const set<unsigned short>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *setlEunsignedsPshortgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const set<unsigned short>*>(nullptr))->GetClass();
      setlEunsignedsPshortgR_TClassManip(theClass);
   return theClass;
   }

   static void setlEunsignedsPshortgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_setlEunsignedsPshortgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) set<unsigned short> : new set<unsigned short>;
   }
   static void *newArray_setlEunsignedsPshortgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) set<unsigned short>[nElements] : new set<unsigned short>[nElements];
   }
   // Wrapper around operator delete
   static void delete_setlEunsignedsPshortgR(void *p) {
      delete (static_cast<set<unsigned short>*>(p));
   }
   static void deleteArray_setlEunsignedsPshortgR(void *p) {
      delete [] (static_cast<set<unsigned short>*>(p));
   }
   static void destruct_setlEunsignedsPshortgR(void *p) {
      typedef set<unsigned short> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class set<unsigned short>

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
  void TriggerDictionaryInitialization_MvtxRawEvtHeaderv1_Dict_Impl() {
    static const char* headers[] = {
"0",
nullptr
    };
    static const char* includePaths[] = {
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "MvtxRawEvtHeaderv1_Dict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
class MvtxRawEvtHeaderv1;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "MvtxRawEvtHeaderv1_Dict dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#ifndef FUN4ALLRAW_MVTXRAWEVTHEADERV1_H
#define FUN4ALLRAW_MVTXRAWEVTHEADERV1_H

#include "MvtxRawEvtHeader.h"

#include <phool/PHObject.h>

#include <cstdint>
#include <set>

class MvtxRawEvtHeaderv1 : public MvtxRawEvtHeader
{
 public:
  //! ctor
  MvtxRawEvtHeaderv1() = default;

  //! cp/mv ctor
  MvtxRawEvtHeaderv1(const MvtxRawEvtHeaderv1&) = default;
  MvtxRawEvtHeaderv1(MvtxRawEvtHeaderv1&&) = default;

  //! cp/mv assignment
  MvtxRawEvtHeaderv1& operator=(const MvtxRawEvtHeaderv1&) = default;
  MvtxRawEvtHeaderv1& operator=(MvtxRawEvtHeaderv1&&) = default;

  //! dtor
  ~MvtxRawEvtHeaderv1() override = default;

  /// Clear Event
  void Reset() override;

  /** identify Function from PHObject
      @param os Output Stream
   */
  void identify(std::ostream& os = std::cout) const override;

  /// isValid returns non zero if object contains vailid data
  int isValid() const override;

  void AddFeeId(const int& feeid) override { m_MvtxFeeIdSet.insert(feeid); };
  void AddL1Trg(const uint64_t& gtmL1_bco) override { m_MvtxL1TrgSet.insert(gtmL1_bco); };

  void AddFeeId(const std::set<uint16_t>& mvtxFeeIds) override;
  void AddL1Trg(const std::set<uint64_t>& mvtxL1TrgSet) override;

  std::set<uint16_t>& getMvtxFeeIdSet() override { return m_MvtxFeeIdSet; };
  std::set<uint64_t>& getMvtxLvL1BCO() override { return m_MvtxL1TrgSet; };

 private:
  std::set<uint16_t> m_MvtxFeeIdSet;
  std::set<uint64_t> m_MvtxL1TrgSet;

  ClassDefOverride(MvtxRawEvtHeaderv1, 1)
};

#endif

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"MvtxRawEvtHeaderv1", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("MvtxRawEvtHeaderv1_Dict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_MvtxRawEvtHeaderv1_Dict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_MvtxRawEvtHeaderv1_Dict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_MvtxRawEvtHeaderv1_Dict() {
  TriggerDictionaryInitialization_MvtxRawEvtHeaderv1_Dict_Impl();
}
