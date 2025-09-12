// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME MvtxRawEvtHeader_Dict
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
#include "../MvtxRawEvtHeader.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static void *new_MvtxRawEvtHeader(void *p = nullptr);
   static void *newArray_MvtxRawEvtHeader(Long_t size, void *p);
   static void delete_MvtxRawEvtHeader(void *p);
   static void deleteArray_MvtxRawEvtHeader(void *p);
   static void destruct_MvtxRawEvtHeader(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::MvtxRawEvtHeader*)
   {
      ::MvtxRawEvtHeader *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::MvtxRawEvtHeader >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("MvtxRawEvtHeader", ::MvtxRawEvtHeader::Class_Version(), "", 15,
                  typeid(::MvtxRawEvtHeader), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::MvtxRawEvtHeader::Dictionary, isa_proxy, 4,
                  sizeof(::MvtxRawEvtHeader) );
      instance.SetNew(&new_MvtxRawEvtHeader);
      instance.SetNewArray(&newArray_MvtxRawEvtHeader);
      instance.SetDelete(&delete_MvtxRawEvtHeader);
      instance.SetDeleteArray(&deleteArray_MvtxRawEvtHeader);
      instance.SetDestructor(&destruct_MvtxRawEvtHeader);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::MvtxRawEvtHeader*)
   {
      return GenerateInitInstanceLocal(static_cast<::MvtxRawEvtHeader*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::MvtxRawEvtHeader*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr MvtxRawEvtHeader::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *MvtxRawEvtHeader::Class_Name()
{
   return "MvtxRawEvtHeader";
}

//______________________________________________________________________________
const char *MvtxRawEvtHeader::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::MvtxRawEvtHeader*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int MvtxRawEvtHeader::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::MvtxRawEvtHeader*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *MvtxRawEvtHeader::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::MvtxRawEvtHeader*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *MvtxRawEvtHeader::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::MvtxRawEvtHeader*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void MvtxRawEvtHeader::Streamer(TBuffer &R__b)
{
   // Stream an object of class MvtxRawEvtHeader.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(MvtxRawEvtHeader::Class(),this);
   } else {
      R__b.WriteClassBuffer(MvtxRawEvtHeader::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_MvtxRawEvtHeader(void *p) {
      return  p ? new(p) ::MvtxRawEvtHeader : new ::MvtxRawEvtHeader;
   }
   static void *newArray_MvtxRawEvtHeader(Long_t nElements, void *p) {
      return p ? new(p) ::MvtxRawEvtHeader[nElements] : new ::MvtxRawEvtHeader[nElements];
   }
   // Wrapper around operator delete
   static void delete_MvtxRawEvtHeader(void *p) {
      delete (static_cast<::MvtxRawEvtHeader*>(p));
   }
   static void deleteArray_MvtxRawEvtHeader(void *p) {
      delete [] (static_cast<::MvtxRawEvtHeader*>(p));
   }
   static void destruct_MvtxRawEvtHeader(void *p) {
      typedef ::MvtxRawEvtHeader current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::MvtxRawEvtHeader

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
  void TriggerDictionaryInitialization_MvtxRawEvtHeader_Dict_Impl() {
    static const char* headers[] = {
"0",
nullptr
    };
    static const char* includePaths[] = {
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "MvtxRawEvtHeader_Dict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
class MvtxRawEvtHeader;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "MvtxRawEvtHeader_Dict dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#ifndef FUN4ALLRAW_MVTXRAWEVTHEADER_H
#define FUN4ALLRAW_MVTXRAWEVTHEADER_H

#include <phool/PHObject.h>

#include <cstdint>
#include <limits>
#include <map>
#include <set>

class MvtxFeeIdInfo;

class MvtxRawEvtHeader : public PHObject
{
 public:
  //! ctor
  MvtxRawEvtHeader() = default;

  //! cp/mv ctor
  MvtxRawEvtHeader(const MvtxRawEvtHeader &) = default;
  MvtxRawEvtHeader(MvtxRawEvtHeader &&) = default;

  //! cp/mv assignment
  MvtxRawEvtHeader &operator=(const MvtxRawEvtHeader &) = default;
  MvtxRawEvtHeader &operator=(MvtxRawEvtHeader &&) = default;

  //! dtor
  ~MvtxRawEvtHeader() override = default;

  virtual void AddFeeId(const int & /*dummy*/) { return; }
  virtual void AddL1Trg(const uint64_t & /*dummy*/) { return; }

  virtual void AddFeeId(const std::set<uint16_t> & /*dummy*/) { return; }
  virtual void AddL1Trg(const std::set<uint64_t> & /*dummy*/) { return; }

  virtual std::set<uint16_t> &getMvtxFeeIdSet() { return dummySet16; }
  virtual std::set<uint64_t> &getMvtxLvL1BCO() { return dummySet64; }

  virtual MvtxFeeIdInfo *AddFeeIdInfo() { return nullptr; }
  virtual MvtxFeeIdInfo *AddFeeIdInfo(MvtxFeeIdInfo * /*dummy*/) { return nullptr; }

  virtual uint64_t get_nFeeIdInfo() { return 100; }
  virtual MvtxFeeIdInfo *get_feeIdInfo(unsigned int /*dummy*/) { return nullptr; }

 private:
  std::set<uint16_t> dummySet16;
  std::set<uint64_t> dummySet64;

  ClassDefOverride(MvtxRawEvtHeader, 1)
};

#endif

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"MvtxRawEvtHeader", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("MvtxRawEvtHeader_Dict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_MvtxRawEvtHeader_Dict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_MvtxRawEvtHeader_Dict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_MvtxRawEvtHeader_Dict() {
  TriggerDictionaryInitialization_MvtxRawEvtHeader_Dict_Impl();
}
