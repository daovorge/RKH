/* AUTOGENERATED FILE. DO NOT EDIT. */
#ifndef _MOCKRKHSM_H
#define _MOCKRKHSM_H

#include "rkhsm.h"

/* Ignore the following warnings, since we are copying code */
#if defined(__GNUC__) && !defined(__ICC) && !defined(__TMS470__)
#if !defined(__clang__)
#pragma GCC diagnostic ignored "-Wpragmas"
#endif
#pragma GCC diagnostic ignored "-Wunknown-pragmas"
#pragma GCC diagnostic ignored "-Wduplicate-decl-specifier"
#endif

void Mockrkhsm_Init(void);
void Mockrkhsm_Destroy(void);
void Mockrkhsm_Verify(void);




#define rkh_sm_init_Expect(me) rkh_sm_init_CMockExpect(__LINE__, me)
void rkh_sm_init_CMockExpect(UNITY_LINE_TYPE cmock_line, RKH_SM_T* me);
#define rkh_sm_dispatch_ExpectAndReturn(me, e, cmock_retval) rkh_sm_dispatch_CMockExpectAndReturn(__LINE__, me, e, cmock_retval)
void rkh_sm_dispatch_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, RKH_SM_T* me, RKH_EVT_T* e, ruint cmock_to_return);
#define rkh_sm_ctor_Expect(me) rkh_sm_ctor_CMockExpect(__LINE__, me)
void rkh_sm_ctor_CMockExpect(UNITY_LINE_TYPE cmock_line, RKH_SM_T* me);
#define rkh_sm_clear_history_Expect(h) rkh_sm_clear_history_CMockExpect(__LINE__, h)
void rkh_sm_clear_history_CMockExpect(UNITY_LINE_TYPE cmock_line, RKHROM RKH_SHIST_T* h);
#define rkh_sm_else_ExpectAndReturn(sma, pe, cmock_retval) rkh_sm_else_CMockExpectAndReturn(__LINE__, sma, pe, cmock_retval)
void rkh_sm_else_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, const RKH_SM_T* sma, RKH_EVT_T* pe, rbool_t cmock_to_return);

#endif
