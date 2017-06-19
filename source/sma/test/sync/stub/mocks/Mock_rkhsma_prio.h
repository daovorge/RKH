/* AUTOGENERATED FILE. DO NOT EDIT. */
#ifndef _MOCK_RKHSMA_PRIO_H
#define _MOCK_RKHSMA_PRIO_H

#include "rkhsma_prio.h"

/* Ignore the following warnings, since we are copying code */
#if defined(__GNUC__) && !defined(__ICC) && !defined(__TMS470__)
#if !defined(__clang__)
#pragma GCC diagnostic ignored "-Wpragmas"
#endif
#pragma GCC diagnostic ignored "-Wunknown-pragmas"
#pragma GCC diagnostic ignored "-Wduplicate-decl-specifier"
#endif

void Mock_rkhsma_prio_Init(void);
void Mock_rkhsma_prio_Destroy(void);
void Mock_rkhsma_prio_Verify(void);




#define rkh_smaPrio_init_Ignore() rkh_smaPrio_init_CMockIgnore()
void rkh_smaPrio_init_CMockIgnore(void);
#define rkh_smaPrio_init_Expect() rkh_smaPrio_init_CMockExpect(__LINE__)
void rkh_smaPrio_init_CMockExpect(UNITY_LINE_TYPE cmock_line);
typedef void (* CMOCK_rkh_smaPrio_init_CALLBACK)(int cmock_num_calls);
void rkh_smaPrio_init_StubWithCallback(CMOCK_rkh_smaPrio_init_CALLBACK Callback);
#define rkh_smaPrio_isNotReady_IgnoreAndReturn(cmock_retval) rkh_smaPrio_isNotReady_CMockIgnoreAndReturn(__LINE__, cmock_retval)
void rkh_smaPrio_isNotReady_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line, rbool_t cmock_to_return);
#define rkh_smaPrio_isNotReady_ExpectAndReturn(cmock_retval) rkh_smaPrio_isNotReady_CMockExpectAndReturn(__LINE__, cmock_retval)
void rkh_smaPrio_isNotReady_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, rbool_t cmock_to_return);
typedef rbool_t (* CMOCK_rkh_smaPrio_isNotReady_CALLBACK)(int cmock_num_calls);
void rkh_smaPrio_isNotReady_StubWithCallback(CMOCK_rkh_smaPrio_isNotReady_CALLBACK Callback);
#define rkh_smaPrio_isReady_IgnoreAndReturn(cmock_retval) rkh_smaPrio_isReady_CMockIgnoreAndReturn(__LINE__, cmock_retval)
void rkh_smaPrio_isReady_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line, rbool_t cmock_to_return);
#define rkh_smaPrio_isReady_ExpectAndReturn(cmock_retval) rkh_smaPrio_isReady_CMockExpectAndReturn(__LINE__, cmock_retval)
void rkh_smaPrio_isReady_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, rbool_t cmock_to_return);
typedef rbool_t (* CMOCK_rkh_smaPrio_isReady_CALLBACK)(int cmock_num_calls);
void rkh_smaPrio_isReady_StubWithCallback(CMOCK_rkh_smaPrio_isReady_CALLBACK Callback);
#define rkh_smaPrio_setReady_Ignore() rkh_smaPrio_setReady_CMockIgnore()
void rkh_smaPrio_setReady_CMockIgnore(void);
#define rkh_smaPrio_setReady_Expect(prio) rkh_smaPrio_setReady_CMockExpect(__LINE__, prio)
void rkh_smaPrio_setReady_CMockExpect(UNITY_LINE_TYPE cmock_line, rui8_t prio);
typedef void (* CMOCK_rkh_smaPrio_setReady_CALLBACK)(rui8_t prio, int cmock_num_calls);
void rkh_smaPrio_setReady_StubWithCallback(CMOCK_rkh_smaPrio_setReady_CALLBACK Callback);
#define rkh_smaPrio_setReady_IgnoreArg_prio() rkh_smaPrio_setReady_CMockIgnoreArg_prio(__LINE__)
void rkh_smaPrio_setReady_CMockIgnoreArg_prio(UNITY_LINE_TYPE cmock_line);
#define rkh_smaPrio_setUnready_Ignore() rkh_smaPrio_setUnready_CMockIgnore()
void rkh_smaPrio_setUnready_CMockIgnore(void);
#define rkh_smaPrio_setUnready_Expect(prio) rkh_smaPrio_setUnready_CMockExpect(__LINE__, prio)
void rkh_smaPrio_setUnready_CMockExpect(UNITY_LINE_TYPE cmock_line, rui8_t prio);
typedef void (* CMOCK_rkh_smaPrio_setUnready_CALLBACK)(rui8_t prio, int cmock_num_calls);
void rkh_smaPrio_setUnready_StubWithCallback(CMOCK_rkh_smaPrio_setUnready_CALLBACK Callback);
#define rkh_smaPrio_setUnready_IgnoreArg_prio() rkh_smaPrio_setUnready_CMockIgnoreArg_prio(__LINE__)
void rkh_smaPrio_setUnready_CMockIgnoreArg_prio(UNITY_LINE_TYPE cmock_line);
#define rkh_smaPrio_findHighest_IgnoreAndReturn(cmock_retval) rkh_smaPrio_findHighest_CMockIgnoreAndReturn(__LINE__, cmock_retval)
void rkh_smaPrio_findHighest_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line, rui8_t cmock_to_return);
#define rkh_smaPrio_findHighest_ExpectAndReturn(cmock_retval) rkh_smaPrio_findHighest_CMockExpectAndReturn(__LINE__, cmock_retval)
void rkh_smaPrio_findHighest_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, rui8_t cmock_to_return);
typedef rui8_t (* CMOCK_rkh_smaPrio_findHighest_CALLBACK)(int cmock_num_calls);
void rkh_smaPrio_findHighest_StubWithCallback(CMOCK_rkh_smaPrio_findHighest_CALLBACK Callback);

#endif