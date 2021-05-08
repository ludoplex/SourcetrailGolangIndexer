/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 4.0.1
 *
 * This file is not intended to be easily readable and contains a number of
 * coding conventions designed to improve portability and efficiency. Do not make
 * changes to this file unless you know what you are doing--modify the SWIG
 * interface file instead.
 * ----------------------------------------------------------------------------- */

// source: /home/tomatofaq/go/src/github.com/CoatiSoftware/SourcetrailDB-master/resources_swig/interface/sourcetraildb.i

#define SWIGMODULE sourcetraildb

#ifdef __cplusplus
/* SwigValueWrapper is described in swig.swg */
template<typename T> class SwigValueWrapper {
  struct SwigMovePointer {
    T *ptr;
    SwigMovePointer(T *p) : ptr(p) { }
    ~SwigMovePointer() { delete ptr; }
    SwigMovePointer& operator=(SwigMovePointer& rhs) { T* oldptr = ptr; ptr = 0; delete oldptr; ptr = rhs.ptr; rhs.ptr = 0; return *this; }
  } pointer;
  SwigValueWrapper& operator=(const SwigValueWrapper<T>& rhs);
  SwigValueWrapper(const SwigValueWrapper<T>& rhs);
public:
  SwigValueWrapper() : pointer(0) { }
  SwigValueWrapper& operator=(const T& t) { SwigMovePointer tmp(new T(t)); pointer = tmp; return *this; }
  operator T&() const { return *pointer.ptr; }
  T *operator&() { return pointer.ptr; }
};

template <typename T> T SwigValueInit() {
  return T();
}
#endif

/* -----------------------------------------------------------------------------
 *  This section contains generic SWIG labels for method/variable
 *  declarations/attributes, and other compiler dependent labels.
 * ----------------------------------------------------------------------------- */

/* template workaround for compilers that cannot correctly implement the C++ standard */
#ifndef SWIGTEMPLATEDISAMBIGUATOR
# if defined(__SUNPRO_CC) && (__SUNPRO_CC <= 0x560)
#  define SWIGTEMPLATEDISAMBIGUATOR template
# elif defined(__HP_aCC)
/* Needed even with `aCC -AA' when `aCC -V' reports HP ANSI C++ B3910B A.03.55 */
/* If we find a maximum version that requires this, the test would be __HP_aCC <= 35500 for A.03.55 */
#  define SWIGTEMPLATEDISAMBIGUATOR template
# else
#  define SWIGTEMPLATEDISAMBIGUATOR
# endif
#endif

/* inline attribute */
#ifndef SWIGINLINE
# if defined(__cplusplus) || (defined(__GNUC__) && !defined(__STRICT_ANSI__))
#   define SWIGINLINE inline
# else
#   define SWIGINLINE
# endif
#endif

/* attribute recognised by some compilers to avoid 'unused' warnings */
#ifndef SWIGUNUSED
# if defined(__GNUC__)
#   if !(defined(__cplusplus)) || (__GNUC__ > 3 || (__GNUC__ == 3 && __GNUC_MINOR__ >= 4))
#     define SWIGUNUSED __attribute__ ((__unused__))
#   else
#     define SWIGUNUSED
#   endif
# elif defined(__ICC)
#   define SWIGUNUSED __attribute__ ((__unused__))
# else
#   define SWIGUNUSED
# endif
#endif

#ifndef SWIG_MSC_UNSUPPRESS_4505
# if defined(_MSC_VER)
#   pragma warning(disable : 4505) /* unreferenced local function has been removed */
# endif
#endif

#ifndef SWIGUNUSEDPARM
# ifdef __cplusplus
#   define SWIGUNUSEDPARM(p)
# else
#   define SWIGUNUSEDPARM(p) p SWIGUNUSED
# endif
#endif

/* internal SWIG method */
#ifndef SWIGINTERN
# define SWIGINTERN static SWIGUNUSED
#endif

/* internal inline SWIG method */
#ifndef SWIGINTERNINLINE
# define SWIGINTERNINLINE SWIGINTERN SWIGINLINE
#endif

/* exporting methods */
#if defined(__GNUC__)
#  if (__GNUC__ >= 4) || (__GNUC__ == 3 && __GNUC_MINOR__ >= 4)
#    ifndef GCC_HASCLASSVISIBILITY
#      define GCC_HASCLASSVISIBILITY
#    endif
#  endif
#endif

#ifndef SWIGEXPORT
# if defined(_WIN32) || defined(__WIN32__) || defined(__CYGWIN__)
#   if defined(STATIC_LINKED)
#     define SWIGEXPORT
#   else
#     define SWIGEXPORT __declspec(dllexport)
#   endif
# else
#   if defined(__GNUC__) && defined(GCC_HASCLASSVISIBILITY)
#     define SWIGEXPORT __attribute__ ((visibility("default")))
#   else
#     define SWIGEXPORT
#   endif
# endif
#endif

/* calling conventions for Windows */
#ifndef SWIGSTDCALL
# if defined(_WIN32) || defined(__WIN32__) || defined(__CYGWIN__)
#   define SWIGSTDCALL __stdcall
# else
#   define SWIGSTDCALL
# endif
#endif

/* Deal with Microsoft's attempt at deprecating C standard runtime functions */
#if !defined(SWIG_NO_CRT_SECURE_NO_DEPRECATE) && defined(_MSC_VER) && !defined(_CRT_SECURE_NO_DEPRECATE)
# define _CRT_SECURE_NO_DEPRECATE
#endif

/* Deal with Microsoft's attempt at deprecating methods in the standard C++ library */
#if !defined(SWIG_NO_SCL_SECURE_NO_DEPRECATE) && defined(_MSC_VER) && !defined(_SCL_SECURE_NO_DEPRECATE)
# define _SCL_SECURE_NO_DEPRECATE
#endif

/* Deal with Apple's deprecated 'AssertMacros.h' from Carbon-framework */
#if defined(__APPLE__) && !defined(__ASSERT_MACROS_DEFINE_VERSIONS_WITHOUT_UNDERSCORES)
# define __ASSERT_MACROS_DEFINE_VERSIONS_WITHOUT_UNDERSCORES 0
#endif

/* Intel's compiler complains if a variable which was never initialised is
 * cast to void, which is a common idiom which we use to indicate that we
 * are aware a variable isn't used.  So we just silence that warning.
 * See: https://github.com/swig/swig/issues/192 for more discussion.
 */
#ifdef __INTEL_COMPILER
# pragma warning disable 592
#endif


#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>



typedef long long intgo;
typedef unsigned long long uintgo;


# if !defined(__clang__) && (defined(__i386__) || defined(__x86_64__))
#   define SWIGSTRUCTPACKED __attribute__((__packed__, __gcc_struct__))
# else
#   define SWIGSTRUCTPACKED __attribute__((__packed__))
# endif



typedef struct { char *p; intgo n; } _gostring_;
typedef struct { void* array; intgo len; intgo cap; } _goslice_;




#define swiggo_size_assert_eq(x, y, name) typedef char name[(x-y)*(x-y)*-2+1];
#define swiggo_size_assert(t, n) swiggo_size_assert_eq(sizeof(t), n, swiggo_sizeof_##t##_is_not_##n)

swiggo_size_assert(char, 1)
swiggo_size_assert(short, 2)
swiggo_size_assert(int, 4)
typedef long long swiggo_long_long;
swiggo_size_assert(swiggo_long_long, 8)
swiggo_size_assert(float, 4)
swiggo_size_assert(double, 8)

#ifdef __cplusplus
extern "C" {
#endif
extern void crosscall2(void (*fn)(void *, int), void *, int);
extern char* _cgo_topofstack(void) __attribute__ ((weak));
extern void _cgo_allocate(void *, int);
extern void _cgo_panic(void *, int);
#ifdef __cplusplus
}
#endif

static char *_swig_topofstack() {
  if (_cgo_topofstack) {
    return _cgo_topofstack();
  } else {
    return 0;
  }
}

static void _swig_gopanic(const char *p) {
  struct {
    const char *p;
  } SWIGSTRUCTPACKED a;
  a.p = p;
  crosscall2(_cgo_panic, &a, (int) sizeof a);
}




#define SWIG_contract_assert(expr, msg) \
  if (!(expr)) { _swig_gopanic(msg); } else


static _gostring_ Swig_AllocateString(const char *p, size_t l) {
  _gostring_ ret;
  ret.p = (char*)malloc(l);
  memcpy(ret.p, p, l);
  ret.n = l;
  return ret;
}


static void Swig_free(void* p) {
  free(p);
}

static void* Swig_malloc(int c) {
  return malloc(c);
}


#include <string>


#include "sourcetraildb.h"

#ifdef __cplusplus
extern "C" {
#endif

void _wrap_Swig_free_sourcetraildb_d01c6fe4bdcf0ab5(void *_swig_go_0) {
  void *arg1 = (void *) 0 ;
  
  arg1 = *(void **)&_swig_go_0; 
  
  Swig_free(arg1);
  
}


void *_wrap_Swig_malloc_sourcetraildb_d01c6fe4bdcf0ab5(intgo _swig_go_0) {
  int arg1 ;
  void *result = 0 ;
  void *_swig_go_result;
  
  arg1 = (int)_swig_go_0; 
  
  result = (void *)Swig_malloc(arg1);
  *(void **)&_swig_go_result = (void *)result; 
  return _swig_go_result;
}


intgo _wrap_DEFINITION_IMPLICIT_sourcetraildb_d01c6fe4bdcf0ab5() {
  DefinitionKind result;
  intgo _swig_go_result;
  
  
  result = DEFINITION_IMPLICIT;
  
  _swig_go_result = (intgo)result; 
  return _swig_go_result;
}


intgo _wrap_DEFINITION_EXPLICIT_sourcetraildb_d01c6fe4bdcf0ab5() {
  DefinitionKind result;
  intgo _swig_go_result;
  
  
  result = DEFINITION_EXPLICIT;
  
  _swig_go_result = (intgo)result; 
  return _swig_go_result;
}


intgo _wrap_SYMBOL_TYPE_sourcetraildb_d01c6fe4bdcf0ab5() {
  SymbolKind result;
  intgo _swig_go_result;
  
  
  result = SYMBOL_TYPE;
  
  _swig_go_result = (intgo)result; 
  return _swig_go_result;
}


intgo _wrap_SYMBOL_BUILTIN_TYPE_sourcetraildb_d01c6fe4bdcf0ab5() {
  SymbolKind result;
  intgo _swig_go_result;
  
  
  result = SYMBOL_BUILTIN_TYPE;
  
  _swig_go_result = (intgo)result; 
  return _swig_go_result;
}


intgo _wrap_SYMBOL_MODULE_sourcetraildb_d01c6fe4bdcf0ab5() {
  SymbolKind result;
  intgo _swig_go_result;
  
  
  result = SYMBOL_MODULE;
  
  _swig_go_result = (intgo)result; 
  return _swig_go_result;
}


intgo _wrap_SYMBOL_NAMESPACE_sourcetraildb_d01c6fe4bdcf0ab5() {
  SymbolKind result;
  intgo _swig_go_result;
  
  
  result = SYMBOL_NAMESPACE;
  
  _swig_go_result = (intgo)result; 
  return _swig_go_result;
}


intgo _wrap_SYMBOL_PACKAGE_sourcetraildb_d01c6fe4bdcf0ab5() {
  SymbolKind result;
  intgo _swig_go_result;
  
  
  result = SYMBOL_PACKAGE;
  
  _swig_go_result = (intgo)result; 
  return _swig_go_result;
}


intgo _wrap_SYMBOL_STRUCT_sourcetraildb_d01c6fe4bdcf0ab5() {
  SymbolKind result;
  intgo _swig_go_result;
  
  
  result = SYMBOL_STRUCT;
  
  _swig_go_result = (intgo)result; 
  return _swig_go_result;
}


intgo _wrap_SYMBOL_CLASS_sourcetraildb_d01c6fe4bdcf0ab5() {
  SymbolKind result;
  intgo _swig_go_result;
  
  
  result = SYMBOL_CLASS;
  
  _swig_go_result = (intgo)result; 
  return _swig_go_result;
}


intgo _wrap_SYMBOL_INTERFACE_sourcetraildb_d01c6fe4bdcf0ab5() {
  SymbolKind result;
  intgo _swig_go_result;
  
  
  result = SYMBOL_INTERFACE;
  
  _swig_go_result = (intgo)result; 
  return _swig_go_result;
}


intgo _wrap_SYMBOL_ANNOTATION_sourcetraildb_d01c6fe4bdcf0ab5() {
  SymbolKind result;
  intgo _swig_go_result;
  
  
  result = SYMBOL_ANNOTATION;
  
  _swig_go_result = (intgo)result; 
  return _swig_go_result;
}


intgo _wrap_SYMBOL_GLOBAL_VARIABLE_sourcetraildb_d01c6fe4bdcf0ab5() {
  SymbolKind result;
  intgo _swig_go_result;
  
  
  result = SYMBOL_GLOBAL_VARIABLE;
  
  _swig_go_result = (intgo)result; 
  return _swig_go_result;
}


intgo _wrap_SYMBOL_FIELD_sourcetraildb_d01c6fe4bdcf0ab5() {
  SymbolKind result;
  intgo _swig_go_result;
  
  
  result = SYMBOL_FIELD;
  
  _swig_go_result = (intgo)result; 
  return _swig_go_result;
}


intgo _wrap_SYMBOL_FUNCTION_sourcetraildb_d01c6fe4bdcf0ab5() {
  SymbolKind result;
  intgo _swig_go_result;
  
  
  result = SYMBOL_FUNCTION;
  
  _swig_go_result = (intgo)result; 
  return _swig_go_result;
}


intgo _wrap_SYMBOL_METHOD_sourcetraildb_d01c6fe4bdcf0ab5() {
  SymbolKind result;
  intgo _swig_go_result;
  
  
  result = SYMBOL_METHOD;
  
  _swig_go_result = (intgo)result; 
  return _swig_go_result;
}


intgo _wrap_SYMBOL_ENUM_sourcetraildb_d01c6fe4bdcf0ab5() {
  SymbolKind result;
  intgo _swig_go_result;
  
  
  result = SYMBOL_ENUM;
  
  _swig_go_result = (intgo)result; 
  return _swig_go_result;
}


intgo _wrap_SYMBOL_ENUM_CONSTANT_sourcetraildb_d01c6fe4bdcf0ab5() {
  SymbolKind result;
  intgo _swig_go_result;
  
  
  result = SYMBOL_ENUM_CONSTANT;
  
  _swig_go_result = (intgo)result; 
  return _swig_go_result;
}


intgo _wrap_SYMBOL_TYPEDEF_sourcetraildb_d01c6fe4bdcf0ab5() {
  SymbolKind result;
  intgo _swig_go_result;
  
  
  result = SYMBOL_TYPEDEF;
  
  _swig_go_result = (intgo)result; 
  return _swig_go_result;
}


intgo _wrap_SYMBOL_TYPE_PARAMETER_sourcetraildb_d01c6fe4bdcf0ab5() {
  SymbolKind result;
  intgo _swig_go_result;
  
  
  result = SYMBOL_TYPE_PARAMETER;
  
  _swig_go_result = (intgo)result; 
  return _swig_go_result;
}


intgo _wrap_SYMBOL_MACRO_sourcetraildb_d01c6fe4bdcf0ab5() {
  SymbolKind result;
  intgo _swig_go_result;
  
  
  result = SYMBOL_MACRO;
  
  _swig_go_result = (intgo)result; 
  return _swig_go_result;
}


intgo _wrap_SYMBOL_UNION_sourcetraildb_d01c6fe4bdcf0ab5() {
  SymbolKind result;
  intgo _swig_go_result;
  
  
  result = SYMBOL_UNION;
  
  _swig_go_result = (intgo)result; 
  return _swig_go_result;
}


intgo _wrap_REFERENCE_TYPE_USAGE_sourcetraildb_d01c6fe4bdcf0ab5() {
  ReferenceKind result;
  intgo _swig_go_result;
  
  
  result = REFERENCE_TYPE_USAGE;
  
  _swig_go_result = (intgo)result; 
  return _swig_go_result;
}


intgo _wrap_REFERENCE_USAGE_sourcetraildb_d01c6fe4bdcf0ab5() {
  ReferenceKind result;
  intgo _swig_go_result;
  
  
  result = REFERENCE_USAGE;
  
  _swig_go_result = (intgo)result; 
  return _swig_go_result;
}


intgo _wrap_REFERENCE_CALL_sourcetraildb_d01c6fe4bdcf0ab5() {
  ReferenceKind result;
  intgo _swig_go_result;
  
  
  result = REFERENCE_CALL;
  
  _swig_go_result = (intgo)result; 
  return _swig_go_result;
}


intgo _wrap_REFERENCE_INHERITANCE_sourcetraildb_d01c6fe4bdcf0ab5() {
  ReferenceKind result;
  intgo _swig_go_result;
  
  
  result = REFERENCE_INHERITANCE;
  
  _swig_go_result = (intgo)result; 
  return _swig_go_result;
}


intgo _wrap_REFERENCE_OVERRIDE_sourcetraildb_d01c6fe4bdcf0ab5() {
  ReferenceKind result;
  intgo _swig_go_result;
  
  
  result = REFERENCE_OVERRIDE;
  
  _swig_go_result = (intgo)result; 
  return _swig_go_result;
}


intgo _wrap_REFERENCE_TYPE_ARGUMENT_sourcetraildb_d01c6fe4bdcf0ab5() {
  ReferenceKind result;
  intgo _swig_go_result;
  
  
  result = REFERENCE_TYPE_ARGUMENT;
  
  _swig_go_result = (intgo)result; 
  return _swig_go_result;
}


intgo _wrap_REFERENCE_TEMPLATE_SPECIALIZATION_sourcetraildb_d01c6fe4bdcf0ab5() {
  ReferenceKind result;
  intgo _swig_go_result;
  
  
  result = REFERENCE_TEMPLATE_SPECIALIZATION;
  
  _swig_go_result = (intgo)result; 
  return _swig_go_result;
}


intgo _wrap_REFERENCE_INCLUDE_sourcetraildb_d01c6fe4bdcf0ab5() {
  ReferenceKind result;
  intgo _swig_go_result;
  
  
  result = REFERENCE_INCLUDE;
  
  _swig_go_result = (intgo)result; 
  return _swig_go_result;
}


intgo _wrap_REFERENCE_IMPORT_sourcetraildb_d01c6fe4bdcf0ab5() {
  ReferenceKind result;
  intgo _swig_go_result;
  
  
  result = REFERENCE_IMPORT;
  
  _swig_go_result = (intgo)result; 
  return _swig_go_result;
}


intgo _wrap_REFERENCE_MACRO_USAGE_sourcetraildb_d01c6fe4bdcf0ab5() {
  ReferenceKind result;
  intgo _swig_go_result;
  
  
  result = REFERENCE_MACRO_USAGE;
  
  _swig_go_result = (intgo)result; 
  return _swig_go_result;
}


intgo _wrap_REFERENCE_ANNOTATION_USAGE_sourcetraildb_d01c6fe4bdcf0ab5() {
  ReferenceKind result;
  intgo _swig_go_result;
  
  
  result = REFERENCE_ANNOTATION_USAGE;
  
  _swig_go_result = (intgo)result; 
  return _swig_go_result;
}


_gostring_ _wrap_getVersionString_sourcetraildb_d01c6fe4bdcf0ab5() {
  std::string result;
  _gostring_ _swig_go_result;
  
  
  result = getVersionString();
  _swig_go_result = Swig_AllocateString((&result)->data(), (&result)->length()); 
  return _swig_go_result;
}


intgo _wrap_getSupportedDatabaseVersion_sourcetraildb_d01c6fe4bdcf0ab5() {
  int result;
  intgo _swig_go_result;
  
  
  result = (int)getSupportedDatabaseVersion();
  _swig_go_result = result; 
  return _swig_go_result;
}


_gostring_ _wrap_getLastError_sourcetraildb_d01c6fe4bdcf0ab5() {
  std::string result;
  _gostring_ _swig_go_result;
  
  
  result = getLastError();
  _swig_go_result = Swig_AllocateString((&result)->data(), (&result)->length()); 
  return _swig_go_result;
}


void _wrap_clearLastError_sourcetraildb_d01c6fe4bdcf0ab5() {
  clearLastError();
  
}


bool _wrap_open_sourcetraildb_d01c6fe4bdcf0ab5(_gostring_ _swig_go_0) {
  std::string arg1 ;
  bool result;
  bool _swig_go_result;
  
  (&arg1)->assign(_swig_go_0.p, _swig_go_0.n); 
  
  result = (bool)open(arg1);
  _swig_go_result = result; 
  return _swig_go_result;
}


bool _wrap_close_sourcetraildb_d01c6fe4bdcf0ab5() {
  bool result;
  bool _swig_go_result;
  
  
  result = (bool)close();
  _swig_go_result = result; 
  return _swig_go_result;
}


bool _wrap_clear_sourcetraildb_d01c6fe4bdcf0ab5() {
  bool result;
  bool _swig_go_result;
  
  
  result = (bool)clear();
  _swig_go_result = result; 
  return _swig_go_result;
}


bool _wrap_isEmpty_sourcetraildb_d01c6fe4bdcf0ab5() {
  bool result;
  bool _swig_go_result;
  
  
  result = (bool)isEmpty();
  _swig_go_result = result; 
  return _swig_go_result;
}


bool _wrap_isCompatible_sourcetraildb_d01c6fe4bdcf0ab5() {
  bool result;
  bool _swig_go_result;
  
  
  result = (bool)isCompatible();
  _swig_go_result = result; 
  return _swig_go_result;
}


intgo _wrap_getLoadedDatabaseVersion_sourcetraildb_d01c6fe4bdcf0ab5() {
  int result;
  intgo _swig_go_result;
  
  
  result = (int)getLoadedDatabaseVersion();
  _swig_go_result = result; 
  return _swig_go_result;
}


bool _wrap_beginTransaction_sourcetraildb_d01c6fe4bdcf0ab5() {
  bool result;
  bool _swig_go_result;
  
  
  result = (bool)beginTransaction();
  _swig_go_result = result; 
  return _swig_go_result;
}


bool _wrap_commitTransaction_sourcetraildb_d01c6fe4bdcf0ab5() {
  bool result;
  bool _swig_go_result;
  
  
  result = (bool)commitTransaction();
  _swig_go_result = result; 
  return _swig_go_result;
}


bool _wrap_rollbackTransaction_sourcetraildb_d01c6fe4bdcf0ab5() {
  bool result;
  bool _swig_go_result;
  
  
  result = (bool)rollbackTransaction();
  _swig_go_result = result; 
  return _swig_go_result;
}


bool _wrap_optimizeDatabaseMemory_sourcetraildb_d01c6fe4bdcf0ab5() {
  bool result;
  bool _swig_go_result;
  
  
  result = (bool)optimizeDatabaseMemory();
  _swig_go_result = result; 
  return _swig_go_result;
}


intgo _wrap_recordSymbol_sourcetraildb_d01c6fe4bdcf0ab5(_gostring_ _swig_go_0) {
  std::string arg1 ;
  int result;
  intgo _swig_go_result;
  
  (&arg1)->assign(_swig_go_0.p, _swig_go_0.n); 
  
  result = (int)recordSymbol(arg1);
  _swig_go_result = result; 
  return _swig_go_result;
}


bool _wrap_recordSymbolDefinitionKind_sourcetraildb_d01c6fe4bdcf0ab5(intgo _swig_go_0, intgo _swig_go_1) {
  int arg1 ;
  DefinitionKind arg2 ;
  bool result;
  bool _swig_go_result;
  
  arg1 = (int)_swig_go_0; 
  arg2 = (DefinitionKind)_swig_go_1; 
  
  result = (bool)recordSymbolDefinitionKind(arg1,arg2);
  _swig_go_result = result; 
  return _swig_go_result;
}


bool _wrap_recordSymbolKind_sourcetraildb_d01c6fe4bdcf0ab5(intgo _swig_go_0, intgo _swig_go_1) {
  int arg1 ;
  SymbolKind arg2 ;
  bool result;
  bool _swig_go_result;
  
  arg1 = (int)_swig_go_0; 
  arg2 = (SymbolKind)_swig_go_1; 
  
  result = (bool)recordSymbolKind(arg1,arg2);
  _swig_go_result = result; 
  return _swig_go_result;
}


bool _wrap_recordSymbolLocation_sourcetraildb_d01c6fe4bdcf0ab5(intgo _swig_go_0, intgo _swig_go_1, intgo _swig_go_2, intgo _swig_go_3, intgo _swig_go_4, intgo _swig_go_5) {
  int arg1 ;
  int arg2 ;
  int arg3 ;
  int arg4 ;
  int arg5 ;
  int arg6 ;
  bool result;
  bool _swig_go_result;
  
  arg1 = (int)_swig_go_0; 
  arg2 = (int)_swig_go_1; 
  arg3 = (int)_swig_go_2; 
  arg4 = (int)_swig_go_3; 
  arg5 = (int)_swig_go_4; 
  arg6 = (int)_swig_go_5; 
  
  result = (bool)recordSymbolLocation(arg1,arg2,arg3,arg4,arg5,arg6);
  _swig_go_result = result; 
  return _swig_go_result;
}


bool _wrap_recordSymbolScopeLocation_sourcetraildb_d01c6fe4bdcf0ab5(intgo _swig_go_0, intgo _swig_go_1, intgo _swig_go_2, intgo _swig_go_3, intgo _swig_go_4, intgo _swig_go_5) {
  int arg1 ;
  int arg2 ;
  int arg3 ;
  int arg4 ;
  int arg5 ;
  int arg6 ;
  bool result;
  bool _swig_go_result;
  
  arg1 = (int)_swig_go_0; 
  arg2 = (int)_swig_go_1; 
  arg3 = (int)_swig_go_2; 
  arg4 = (int)_swig_go_3; 
  arg5 = (int)_swig_go_4; 
  arg6 = (int)_swig_go_5; 
  
  result = (bool)recordSymbolScopeLocation(arg1,arg2,arg3,arg4,arg5,arg6);
  _swig_go_result = result; 
  return _swig_go_result;
}


bool _wrap_recordSymbolSignatureLocation_sourcetraildb_d01c6fe4bdcf0ab5(intgo _swig_go_0, intgo _swig_go_1, intgo _swig_go_2, intgo _swig_go_3, intgo _swig_go_4, intgo _swig_go_5) {
  int arg1 ;
  int arg2 ;
  int arg3 ;
  int arg4 ;
  int arg5 ;
  int arg6 ;
  bool result;
  bool _swig_go_result;
  
  arg1 = (int)_swig_go_0; 
  arg2 = (int)_swig_go_1; 
  arg3 = (int)_swig_go_2; 
  arg4 = (int)_swig_go_3; 
  arg5 = (int)_swig_go_4; 
  arg6 = (int)_swig_go_5; 
  
  result = (bool)recordSymbolSignatureLocation(arg1,arg2,arg3,arg4,arg5,arg6);
  _swig_go_result = result; 
  return _swig_go_result;
}


intgo _wrap_recordReference_sourcetraildb_d01c6fe4bdcf0ab5(intgo _swig_go_0, intgo _swig_go_1, intgo _swig_go_2) {
  int arg1 ;
  int arg2 ;
  ReferenceKind arg3 ;
  int result;
  intgo _swig_go_result;
  
  arg1 = (int)_swig_go_0; 
  arg2 = (int)_swig_go_1; 
  arg3 = (ReferenceKind)_swig_go_2; 
  
  result = (int)recordReference(arg1,arg2,arg3);
  _swig_go_result = result; 
  return _swig_go_result;
}


bool _wrap_recordReferenceLocation_sourcetraildb_d01c6fe4bdcf0ab5(intgo _swig_go_0, intgo _swig_go_1, intgo _swig_go_2, intgo _swig_go_3, intgo _swig_go_4, intgo _swig_go_5) {
  int arg1 ;
  int arg2 ;
  int arg3 ;
  int arg4 ;
  int arg5 ;
  int arg6 ;
  bool result;
  bool _swig_go_result;
  
  arg1 = (int)_swig_go_0; 
  arg2 = (int)_swig_go_1; 
  arg3 = (int)_swig_go_2; 
  arg4 = (int)_swig_go_3; 
  arg5 = (int)_swig_go_4; 
  arg6 = (int)_swig_go_5; 
  
  result = (bool)recordReferenceLocation(arg1,arg2,arg3,arg4,arg5,arg6);
  _swig_go_result = result; 
  return _swig_go_result;
}


bool _wrap_recordReferenceIsAmbiguous_sourcetraildb_d01c6fe4bdcf0ab5(intgo _swig_go_0) {
  int arg1 ;
  bool result;
  bool _swig_go_result;
  
  arg1 = (int)_swig_go_0; 
  
  result = (bool)recordReferenceIsAmbiguous(arg1);
  _swig_go_result = result; 
  return _swig_go_result;
}


intgo _wrap_recordReferenceToUnsolvedSymhol_sourcetraildb_d01c6fe4bdcf0ab5(intgo _swig_go_0, intgo _swig_go_1, intgo _swig_go_2, intgo _swig_go_3, intgo _swig_go_4, intgo _swig_go_5, intgo _swig_go_6) {
  int arg1 ;
  ReferenceKind arg2 ;
  int arg3 ;
  int arg4 ;
  int arg5 ;
  int arg6 ;
  int arg7 ;
  int result;
  intgo _swig_go_result;
  
  arg1 = (int)_swig_go_0; 
  arg2 = (ReferenceKind)_swig_go_1; 
  arg3 = (int)_swig_go_2; 
  arg4 = (int)_swig_go_3; 
  arg5 = (int)_swig_go_4; 
  arg6 = (int)_swig_go_5; 
  arg7 = (int)_swig_go_6; 
  
  result = (int)recordReferenceToUnsolvedSymhol(arg1,arg2,arg3,arg4,arg5,arg6,arg7);
  _swig_go_result = result; 
  return _swig_go_result;
}


bool _wrap_recordQualifierLocation_sourcetraildb_d01c6fe4bdcf0ab5(intgo _swig_go_0, intgo _swig_go_1, intgo _swig_go_2, intgo _swig_go_3, intgo _swig_go_4, intgo _swig_go_5) {
  int arg1 ;
  int arg2 ;
  int arg3 ;
  int arg4 ;
  int arg5 ;
  int arg6 ;
  bool result;
  bool _swig_go_result;
  
  arg1 = (int)_swig_go_0; 
  arg2 = (int)_swig_go_1; 
  arg3 = (int)_swig_go_2; 
  arg4 = (int)_swig_go_3; 
  arg5 = (int)_swig_go_4; 
  arg6 = (int)_swig_go_5; 
  
  result = (bool)recordQualifierLocation(arg1,arg2,arg3,arg4,arg5,arg6);
  _swig_go_result = result; 
  return _swig_go_result;
}


intgo _wrap_recordFile_sourcetraildb_d01c6fe4bdcf0ab5(_gostring_ _swig_go_0) {
  std::string arg1 ;
  int result;
  intgo _swig_go_result;
  
  (&arg1)->assign(_swig_go_0.p, _swig_go_0.n); 
  
  result = (int)recordFile(arg1);
  _swig_go_result = result; 
  return _swig_go_result;
}


bool _wrap_recordFileLanguage_sourcetraildb_d01c6fe4bdcf0ab5(intgo _swig_go_0, _gostring_ _swig_go_1) {
  int arg1 ;
  std::string arg2 ;
  bool result;
  bool _swig_go_result;
  
  arg1 = (int)_swig_go_0; 
  (&arg2)->assign(_swig_go_1.p, _swig_go_1.n); 
  
  result = (bool)recordFileLanguage(arg1,arg2);
  _swig_go_result = result; 
  return _swig_go_result;
}


intgo _wrap_recordLocalSymbol_sourcetraildb_d01c6fe4bdcf0ab5(_gostring_ _swig_go_0) {
  std::string arg1 ;
  int result;
  intgo _swig_go_result;
  
  (&arg1)->assign(_swig_go_0.p, _swig_go_0.n); 
  
  result = (int)recordLocalSymbol(arg1);
  _swig_go_result = result; 
  return _swig_go_result;
}


bool _wrap_recordLocalSymbolLocation_sourcetraildb_d01c6fe4bdcf0ab5(intgo _swig_go_0, intgo _swig_go_1, intgo _swig_go_2, intgo _swig_go_3, intgo _swig_go_4, intgo _swig_go_5) {
  int arg1 ;
  int arg2 ;
  int arg3 ;
  int arg4 ;
  int arg5 ;
  int arg6 ;
  bool result;
  bool _swig_go_result;
  
  arg1 = (int)_swig_go_0; 
  arg2 = (int)_swig_go_1; 
  arg3 = (int)_swig_go_2; 
  arg4 = (int)_swig_go_3; 
  arg5 = (int)_swig_go_4; 
  arg6 = (int)_swig_go_5; 
  
  result = (bool)recordLocalSymbolLocation(arg1,arg2,arg3,arg4,arg5,arg6);
  _swig_go_result = result; 
  return _swig_go_result;
}


bool _wrap_recordAtomicSourceRange_sourcetraildb_d01c6fe4bdcf0ab5(intgo _swig_go_0, intgo _swig_go_1, intgo _swig_go_2, intgo _swig_go_3, intgo _swig_go_4) {
  int arg1 ;
  int arg2 ;
  int arg3 ;
  int arg4 ;
  int arg5 ;
  bool result;
  bool _swig_go_result;
  
  arg1 = (int)_swig_go_0; 
  arg2 = (int)_swig_go_1; 
  arg3 = (int)_swig_go_2; 
  arg4 = (int)_swig_go_3; 
  arg5 = (int)_swig_go_4; 
  
  result = (bool)recordAtomicSourceRange(arg1,arg2,arg3,arg4,arg5);
  _swig_go_result = result; 
  return _swig_go_result;
}


bool _wrap_recordError_sourcetraildb_d01c6fe4bdcf0ab5(_gostring_ _swig_go_0, bool _swig_go_1, intgo _swig_go_2, intgo _swig_go_3, intgo _swig_go_4, intgo _swig_go_5, intgo _swig_go_6) {
  std::string arg1 ;
  bool arg2 ;
  int arg3 ;
  int arg4 ;
  int arg5 ;
  int arg6 ;
  int arg7 ;
  bool result;
  bool _swig_go_result;
  
  (&arg1)->assign(_swig_go_0.p, _swig_go_0.n); 
  arg2 = (bool)_swig_go_1; 
  arg3 = (int)_swig_go_2; 
  arg4 = (int)_swig_go_3; 
  arg5 = (int)_swig_go_4; 
  arg6 = (int)_swig_go_5; 
  arg7 = (int)_swig_go_6; 
  
  result = (bool)recordError(arg1,arg2,arg3,arg4,arg5,arg6,arg7);
  _swig_go_result = result; 
  return _swig_go_result;
}


#ifdef __cplusplus
}
#endif

