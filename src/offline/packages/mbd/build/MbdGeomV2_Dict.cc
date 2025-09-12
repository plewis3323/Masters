// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME MbdGeomV2_Dict
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
#include "../MbdGeomV2.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static void *new_MbdGeomV2(void *p = nullptr);
   static void *newArray_MbdGeomV2(Long_t size, void *p);
   static void delete_MbdGeomV2(void *p);
   static void deleteArray_MbdGeomV2(void *p);
   static void destruct_MbdGeomV2(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::MbdGeomV2*)
   {
      ::MbdGeomV2 *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::MbdGeomV2 >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("MbdGeomV2", ::MbdGeomV2::Class_Version(), "", 9,
                  typeid(::MbdGeomV2), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::MbdGeomV2::Dictionary, isa_proxy, 4,
                  sizeof(::MbdGeomV2) );
      instance.SetNew(&new_MbdGeomV2);
      instance.SetNewArray(&newArray_MbdGeomV2);
      instance.SetDelete(&delete_MbdGeomV2);
      instance.SetDeleteArray(&deleteArray_MbdGeomV2);
      instance.SetDestructor(&destruct_MbdGeomV2);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::MbdGeomV2*)
   {
      return GenerateInitInstanceLocal(static_cast<::MbdGeomV2*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::MbdGeomV2*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr MbdGeomV2::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *MbdGeomV2::Class_Name()
{
   return "MbdGeomV2";
}

//______________________________________________________________________________
const char *MbdGeomV2::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::MbdGeomV2*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int MbdGeomV2::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::MbdGeomV2*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *MbdGeomV2::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::MbdGeomV2*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *MbdGeomV2::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::MbdGeomV2*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void MbdGeomV2::Streamer(TBuffer &R__b)
{
   // Stream an object of class MbdGeomV2.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(MbdGeomV2::Class(),this);
   } else {
      R__b.WriteClassBuffer(MbdGeomV2::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_MbdGeomV2(void *p) {
      return  p ? new(p) ::MbdGeomV2 : new ::MbdGeomV2;
   }
   static void *newArray_MbdGeomV2(Long_t nElements, void *p) {
      return p ? new(p) ::MbdGeomV2[nElements] : new ::MbdGeomV2[nElements];
   }
   // Wrapper around operator delete
   static void delete_MbdGeomV2(void *p) {
      delete (static_cast<::MbdGeomV2*>(p));
   }
   static void deleteArray_MbdGeomV2(void *p) {
      delete [] (static_cast<::MbdGeomV2*>(p));
   }
   static void destruct_MbdGeomV2(void *p) {
      typedef ::MbdGeomV2 current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::MbdGeomV2

namespace ROOT {
   static TClass *multimaplEintcOintgR_Dictionary();
   static void multimaplEintcOintgR_TClassManip(TClass*);
   static void *new_multimaplEintcOintgR(void *p = nullptr);
   static void *newArray_multimaplEintcOintgR(Long_t size, void *p);
   static void delete_multimaplEintcOintgR(void *p);
   static void deleteArray_multimaplEintcOintgR(void *p);
   static void destruct_multimaplEintcOintgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const multimap<int,int>*)
   {
      multimap<int,int> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(multimap<int,int>));
      static ::ROOT::TGenericClassInfo 
         instance("multimap<int,int>", -2, "map", 101,
                  typeid(multimap<int,int>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &multimaplEintcOintgR_Dictionary, isa_proxy, 0,
                  sizeof(multimap<int,int>) );
      instance.SetNew(&new_multimaplEintcOintgR);
      instance.SetNewArray(&newArray_multimaplEintcOintgR);
      instance.SetDelete(&delete_multimaplEintcOintgR);
      instance.SetDeleteArray(&deleteArray_multimaplEintcOintgR);
      instance.SetDestructor(&destruct_multimaplEintcOintgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< multimap<int,int> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("multimap<int,int>","std::multimap<int, int, std::less<int>, std::allocator<std::pair<int const, int> > >"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const multimap<int,int>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *multimaplEintcOintgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const multimap<int,int>*>(nullptr))->GetClass();
      multimaplEintcOintgR_TClassManip(theClass);
   return theClass;
   }

   static void multimaplEintcOintgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_multimaplEintcOintgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) multimap<int,int> : new multimap<int,int>;
   }
   static void *newArray_multimaplEintcOintgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) multimap<int,int>[nElements] : new multimap<int,int>[nElements];
   }
   // Wrapper around operator delete
   static void delete_multimaplEintcOintgR(void *p) {
      delete (static_cast<multimap<int,int>*>(p));
   }
   static void deleteArray_multimaplEintcOintgR(void *p) {
      delete [] (static_cast<multimap<int,int>*>(p));
   }
   static void destruct_multimaplEintcOintgR(void *p) {
      typedef multimap<int,int> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class multimap<int,int>

namespace {
  void TriggerDictionaryInitialization_MbdGeomV2_Dict_Impl() {
    static const char* headers[] = {
"0",
nullptr
    };
    static const char* includePaths[] = {
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "MbdGeomV2_Dict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
class MbdGeomV2;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "MbdGeomV2_Dict dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#ifndef __MBD_GEOM_V2_H__
#define __MBD_GEOM_V2_H__

#include "MbdGeom.h"
#include <map>

class MbdGeomV2 : public MbdGeom
{
 public:
  MbdGeomV2();
  ~MbdGeomV2() override = default;

  float get_x(const unsigned int pmtch) const override { return pmt_x[pmtch]; }
  float get_y(const unsigned int pmtch) const override { return pmt_y[pmtch]; }
  float get_z(const unsigned int pmtch) const override { return pmt_z[pmtch]; }
  float get_r(const unsigned int pmtch) const override { return pmt_r[pmtch]; }
  float get_phi(const unsigned int pmtch) const override { return pmt_phi[pmtch]; }

  void set_xyz(const unsigned int ipmt, const float x, const float y, const float z) override;

  void download_hv() override;
  const std::multimap<int,int>& get_hvmap();

  virtual void Reset() override {}

 private:
  float pmt_x[128]{};
  float pmt_y[128]{};
  float pmt_z[128]{};
  float pmt_r[128]{};
  float pmt_phi[128]{};

  std::multimap<int,int> pmt_hv;

  ClassDefOverride(MbdGeomV2, 1)
};

#endif  // __MBD_GEOM_V2_H__

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"MbdGeomV2", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("MbdGeomV2_Dict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_MbdGeomV2_Dict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_MbdGeomV2_Dict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_MbdGeomV2_Dict() {
  TriggerDictionaryInitialization_MbdGeomV2_Dict_Impl();
}
