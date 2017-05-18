/* AUTOGENERATED FILE. DO NOT EDIT. */
#include <string.h>
#include <stdlib.h>
#include <setjmp.h>
#include "unity.h"
#include "cmock.h"
#include "Mock_rkhfwk_hook.h"

static const char* CMockString_e = "e";
static const char* CMockString_me = "me";
static const char* CMockString_rkh_hook_dispatch = "rkh_hook_dispatch";
static const char* CMockString_rkh_hook_exit = "rkh_hook_exit";
static const char* CMockString_rkh_hook_idle = "rkh_hook_idle";
static const char* CMockString_rkh_hook_putTrcEvt = "rkh_hook_putTrcEvt";
static const char* CMockString_rkh_hook_signal = "rkh_hook_signal";
static const char* CMockString_rkh_hook_start = "rkh_hook_start";
static const char* CMockString_rkh_hook_timeout = "rkh_hook_timeout";
static const char* CMockString_rkh_hook_timetick = "rkh_hook_timetick";
static const char* CMockString_t = "t";

typedef struct _CMOCK_rkh_hook_dispatch_CALL_INSTANCE
{
  UNITY_LINE_TYPE LineNumber;
  RKH_SMA_T* Expected_me;
  RKH_EVT_T* Expected_e;
  int IgnoreArg_me;
  int IgnoreArg_e;

} CMOCK_rkh_hook_dispatch_CALL_INSTANCE;

typedef struct _CMOCK_rkh_hook_signal_CALL_INSTANCE
{
  UNITY_LINE_TYPE LineNumber;
  RKH_EVT_T* Expected_e;
  int IgnoreArg_e;

} CMOCK_rkh_hook_signal_CALL_INSTANCE;

typedef struct _CMOCK_rkh_hook_timeout_CALL_INSTANCE
{
  UNITY_LINE_TYPE LineNumber;
  void* Expected_t;
  int IgnoreArg_t;

} CMOCK_rkh_hook_timeout_CALL_INSTANCE;

typedef struct _CMOCK_rkh_hook_start_CALL_INSTANCE
{
  UNITY_LINE_TYPE LineNumber;

} CMOCK_rkh_hook_start_CALL_INSTANCE;

typedef struct _CMOCK_rkh_hook_exit_CALL_INSTANCE
{
  UNITY_LINE_TYPE LineNumber;

} CMOCK_rkh_hook_exit_CALL_INSTANCE;

typedef struct _CMOCK_rkh_hook_idle_CALL_INSTANCE
{
  UNITY_LINE_TYPE LineNumber;

} CMOCK_rkh_hook_idle_CALL_INSTANCE;

typedef struct _CMOCK_rkh_hook_timetick_CALL_INSTANCE
{
  UNITY_LINE_TYPE LineNumber;

} CMOCK_rkh_hook_timetick_CALL_INSTANCE;

typedef struct _CMOCK_rkh_hook_putTrcEvt_CALL_INSTANCE
{
  UNITY_LINE_TYPE LineNumber;

} CMOCK_rkh_hook_putTrcEvt_CALL_INSTANCE;

static struct Mock_rkhfwk_hookInstance
{
  int rkh_hook_dispatch_IgnoreBool;
  CMOCK_rkh_hook_dispatch_CALLBACK rkh_hook_dispatch_CallbackFunctionPointer;
  int rkh_hook_dispatch_CallbackCalls;
  CMOCK_MEM_INDEX_TYPE rkh_hook_dispatch_CallInstance;
  int rkh_hook_signal_IgnoreBool;
  CMOCK_rkh_hook_signal_CALLBACK rkh_hook_signal_CallbackFunctionPointer;
  int rkh_hook_signal_CallbackCalls;
  CMOCK_MEM_INDEX_TYPE rkh_hook_signal_CallInstance;
  int rkh_hook_timeout_IgnoreBool;
  CMOCK_rkh_hook_timeout_CALLBACK rkh_hook_timeout_CallbackFunctionPointer;
  int rkh_hook_timeout_CallbackCalls;
  CMOCK_MEM_INDEX_TYPE rkh_hook_timeout_CallInstance;
  int rkh_hook_start_IgnoreBool;
  CMOCK_rkh_hook_start_CALLBACK rkh_hook_start_CallbackFunctionPointer;
  int rkh_hook_start_CallbackCalls;
  CMOCK_MEM_INDEX_TYPE rkh_hook_start_CallInstance;
  int rkh_hook_exit_IgnoreBool;
  CMOCK_rkh_hook_exit_CALLBACK rkh_hook_exit_CallbackFunctionPointer;
  int rkh_hook_exit_CallbackCalls;
  CMOCK_MEM_INDEX_TYPE rkh_hook_exit_CallInstance;
  int rkh_hook_idle_IgnoreBool;
  CMOCK_rkh_hook_idle_CALLBACK rkh_hook_idle_CallbackFunctionPointer;
  int rkh_hook_idle_CallbackCalls;
  CMOCK_MEM_INDEX_TYPE rkh_hook_idle_CallInstance;
  int rkh_hook_timetick_IgnoreBool;
  CMOCK_rkh_hook_timetick_CALLBACK rkh_hook_timetick_CallbackFunctionPointer;
  int rkh_hook_timetick_CallbackCalls;
  CMOCK_MEM_INDEX_TYPE rkh_hook_timetick_CallInstance;
  int rkh_hook_putTrcEvt_IgnoreBool;
  CMOCK_rkh_hook_putTrcEvt_CALLBACK rkh_hook_putTrcEvt_CallbackFunctionPointer;
  int rkh_hook_putTrcEvt_CallbackCalls;
  CMOCK_MEM_INDEX_TYPE rkh_hook_putTrcEvt_CallInstance;
} Mock;

extern jmp_buf AbortFrame;

void Mock_rkhfwk_hook_Verify(void)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  if (Mock.rkh_hook_dispatch_IgnoreBool)
    Mock.rkh_hook_dispatch_CallInstance = CMOCK_GUTS_NONE;
  UNITY_SET_DETAIL(CMockString_rkh_hook_dispatch);
  UNITY_TEST_ASSERT(CMOCK_GUTS_NONE == Mock.rkh_hook_dispatch_CallInstance, cmock_line, CMockStringCalledLess);
  if (Mock.rkh_hook_dispatch_CallbackFunctionPointer != NULL)
    Mock.rkh_hook_dispatch_CallInstance = CMOCK_GUTS_NONE;
  if (Mock.rkh_hook_signal_IgnoreBool)
    Mock.rkh_hook_signal_CallInstance = CMOCK_GUTS_NONE;
  UNITY_SET_DETAIL(CMockString_rkh_hook_signal);
  UNITY_TEST_ASSERT(CMOCK_GUTS_NONE == Mock.rkh_hook_signal_CallInstance, cmock_line, CMockStringCalledLess);
  if (Mock.rkh_hook_signal_CallbackFunctionPointer != NULL)
    Mock.rkh_hook_signal_CallInstance = CMOCK_GUTS_NONE;
  if (Mock.rkh_hook_timeout_IgnoreBool)
    Mock.rkh_hook_timeout_CallInstance = CMOCK_GUTS_NONE;
  UNITY_SET_DETAIL(CMockString_rkh_hook_timeout);
  UNITY_TEST_ASSERT(CMOCK_GUTS_NONE == Mock.rkh_hook_timeout_CallInstance, cmock_line, CMockStringCalledLess);
  if (Mock.rkh_hook_timeout_CallbackFunctionPointer != NULL)
    Mock.rkh_hook_timeout_CallInstance = CMOCK_GUTS_NONE;
  if (Mock.rkh_hook_start_IgnoreBool)
    Mock.rkh_hook_start_CallInstance = CMOCK_GUTS_NONE;
  UNITY_SET_DETAIL(CMockString_rkh_hook_start);
  UNITY_TEST_ASSERT(CMOCK_GUTS_NONE == Mock.rkh_hook_start_CallInstance, cmock_line, CMockStringCalledLess);
  if (Mock.rkh_hook_start_CallbackFunctionPointer != NULL)
    Mock.rkh_hook_start_CallInstance = CMOCK_GUTS_NONE;
  if (Mock.rkh_hook_exit_IgnoreBool)
    Mock.rkh_hook_exit_CallInstance = CMOCK_GUTS_NONE;
  UNITY_SET_DETAIL(CMockString_rkh_hook_exit);
  UNITY_TEST_ASSERT(CMOCK_GUTS_NONE == Mock.rkh_hook_exit_CallInstance, cmock_line, CMockStringCalledLess);
  if (Mock.rkh_hook_exit_CallbackFunctionPointer != NULL)
    Mock.rkh_hook_exit_CallInstance = CMOCK_GUTS_NONE;
  if (Mock.rkh_hook_idle_IgnoreBool)
    Mock.rkh_hook_idle_CallInstance = CMOCK_GUTS_NONE;
  UNITY_SET_DETAIL(CMockString_rkh_hook_idle);
  UNITY_TEST_ASSERT(CMOCK_GUTS_NONE == Mock.rkh_hook_idle_CallInstance, cmock_line, CMockStringCalledLess);
  if (Mock.rkh_hook_idle_CallbackFunctionPointer != NULL)
    Mock.rkh_hook_idle_CallInstance = CMOCK_GUTS_NONE;
  if (Mock.rkh_hook_timetick_IgnoreBool)
    Mock.rkh_hook_timetick_CallInstance = CMOCK_GUTS_NONE;
  UNITY_SET_DETAIL(CMockString_rkh_hook_timetick);
  UNITY_TEST_ASSERT(CMOCK_GUTS_NONE == Mock.rkh_hook_timetick_CallInstance, cmock_line, CMockStringCalledLess);
  if (Mock.rkh_hook_timetick_CallbackFunctionPointer != NULL)
    Mock.rkh_hook_timetick_CallInstance = CMOCK_GUTS_NONE;
  if (Mock.rkh_hook_putTrcEvt_IgnoreBool)
    Mock.rkh_hook_putTrcEvt_CallInstance = CMOCK_GUTS_NONE;
  UNITY_SET_DETAIL(CMockString_rkh_hook_putTrcEvt);
  UNITY_TEST_ASSERT(CMOCK_GUTS_NONE == Mock.rkh_hook_putTrcEvt_CallInstance, cmock_line, CMockStringCalledLess);
  if (Mock.rkh_hook_putTrcEvt_CallbackFunctionPointer != NULL)
    Mock.rkh_hook_putTrcEvt_CallInstance = CMOCK_GUTS_NONE;
}

void Mock_rkhfwk_hook_Init(void)
{
  Mock_rkhfwk_hook_Destroy();
}

void Mock_rkhfwk_hook_Destroy(void)
{
  CMock_Guts_MemFreeAll();
  memset(&Mock, 0, sizeof(Mock));
  Mock.rkh_hook_dispatch_CallbackFunctionPointer = NULL;
  Mock.rkh_hook_dispatch_CallbackCalls = 0;
  Mock.rkh_hook_signal_CallbackFunctionPointer = NULL;
  Mock.rkh_hook_signal_CallbackCalls = 0;
  Mock.rkh_hook_timeout_CallbackFunctionPointer = NULL;
  Mock.rkh_hook_timeout_CallbackCalls = 0;
  Mock.rkh_hook_start_CallbackFunctionPointer = NULL;
  Mock.rkh_hook_start_CallbackCalls = 0;
  Mock.rkh_hook_exit_CallbackFunctionPointer = NULL;
  Mock.rkh_hook_exit_CallbackCalls = 0;
  Mock.rkh_hook_idle_CallbackFunctionPointer = NULL;
  Mock.rkh_hook_idle_CallbackCalls = 0;
  Mock.rkh_hook_timetick_CallbackFunctionPointer = NULL;
  Mock.rkh_hook_timetick_CallbackCalls = 0;
  Mock.rkh_hook_putTrcEvt_CallbackFunctionPointer = NULL;
  Mock.rkh_hook_putTrcEvt_CallbackCalls = 0;
}

void rkh_hook_dispatch(RKH_SMA_T* me, RKH_EVT_T* e)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  CMOCK_rkh_hook_dispatch_CALL_INSTANCE* cmock_call_instance;
  UNITY_SET_DETAIL(CMockString_rkh_hook_dispatch);
  cmock_call_instance = (CMOCK_rkh_hook_dispatch_CALL_INSTANCE*)CMock_Guts_GetAddressFor(Mock.rkh_hook_dispatch_CallInstance);
  Mock.rkh_hook_dispatch_CallInstance = CMock_Guts_MemNext(Mock.rkh_hook_dispatch_CallInstance);
  if (Mock.rkh_hook_dispatch_IgnoreBool)
  {
    UNITY_CLR_DETAILS();
    return;
  }
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringCalledMore);
  cmock_line = cmock_call_instance->LineNumber;
  if (!cmock_call_instance->IgnoreArg_me)
  {
    UNITY_SET_DETAILS(CMockString_rkh_hook_dispatch,CMockString_me);
    UNITY_TEST_ASSERT_EQUAL_PTR(cmock_call_instance->Expected_me, me, cmock_line, CMockStringMismatch);
  }
  if (!cmock_call_instance->IgnoreArg_e)
  {
    UNITY_SET_DETAILS(CMockString_rkh_hook_dispatch,CMockString_e);
    UNITY_TEST_ASSERT_EQUAL_PTR(cmock_call_instance->Expected_e, e, cmock_line, CMockStringMismatch);
  }
  if (Mock.rkh_hook_dispatch_CallbackFunctionPointer != NULL)
  {
    Mock.rkh_hook_dispatch_CallbackFunctionPointer(me, e, Mock.rkh_hook_dispatch_CallbackCalls++);
  }
  UNITY_CLR_DETAILS();
}

void CMockExpectParameters_rkh_hook_dispatch(CMOCK_rkh_hook_dispatch_CALL_INSTANCE* cmock_call_instance, RKH_SMA_T* me, RKH_EVT_T* e)
{
  cmock_call_instance->Expected_me = me;
  cmock_call_instance->IgnoreArg_me = 0;
  cmock_call_instance->Expected_e = e;
  cmock_call_instance->IgnoreArg_e = 0;
}

void rkh_hook_dispatch_CMockIgnore(void)
{
  Mock.rkh_hook_dispatch_IgnoreBool = (int)1;
}

void rkh_hook_dispatch_CMockExpect(UNITY_LINE_TYPE cmock_line, RKH_SMA_T* me, RKH_EVT_T* e)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_rkh_hook_dispatch_CALL_INSTANCE));
  CMOCK_rkh_hook_dispatch_CALL_INSTANCE* cmock_call_instance = (CMOCK_rkh_hook_dispatch_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.rkh_hook_dispatch_CallInstance = CMock_Guts_MemChain(Mock.rkh_hook_dispatch_CallInstance, cmock_guts_index);
  Mock.rkh_hook_dispatch_IgnoreBool = (int)0;
  cmock_call_instance->LineNumber = cmock_line;
  CMockExpectParameters_rkh_hook_dispatch(cmock_call_instance, me, e);
  UNITY_CLR_DETAILS();
}

void rkh_hook_dispatch_StubWithCallback(CMOCK_rkh_hook_dispatch_CALLBACK Callback)
{
  Mock.rkh_hook_dispatch_IgnoreBool = (int)0;
  Mock.rkh_hook_dispatch_CallbackFunctionPointer = Callback;
}

void rkh_hook_dispatch_CMockIgnoreArg_me(UNITY_LINE_TYPE cmock_line)
{
  CMOCK_rkh_hook_dispatch_CALL_INSTANCE* cmock_call_instance = (CMOCK_rkh_hook_dispatch_CALL_INSTANCE*)CMock_Guts_GetAddressFor(CMock_Guts_MemEndOfChain(Mock.rkh_hook_dispatch_CallInstance));
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringIgnPreExp);
  cmock_call_instance->IgnoreArg_me = 1;
}

void rkh_hook_dispatch_CMockIgnoreArg_e(UNITY_LINE_TYPE cmock_line)
{
  CMOCK_rkh_hook_dispatch_CALL_INSTANCE* cmock_call_instance = (CMOCK_rkh_hook_dispatch_CALL_INSTANCE*)CMock_Guts_GetAddressFor(CMock_Guts_MemEndOfChain(Mock.rkh_hook_dispatch_CallInstance));
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringIgnPreExp);
  cmock_call_instance->IgnoreArg_e = 1;
}

void rkh_hook_signal(RKH_EVT_T* e)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  CMOCK_rkh_hook_signal_CALL_INSTANCE* cmock_call_instance;
  UNITY_SET_DETAIL(CMockString_rkh_hook_signal);
  cmock_call_instance = (CMOCK_rkh_hook_signal_CALL_INSTANCE*)CMock_Guts_GetAddressFor(Mock.rkh_hook_signal_CallInstance);
  Mock.rkh_hook_signal_CallInstance = CMock_Guts_MemNext(Mock.rkh_hook_signal_CallInstance);
  if (Mock.rkh_hook_signal_IgnoreBool)
  {
    UNITY_CLR_DETAILS();
    return;
  }
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringCalledMore);
  cmock_line = cmock_call_instance->LineNumber;
  if (!cmock_call_instance->IgnoreArg_e)
  {
    UNITY_SET_DETAILS(CMockString_rkh_hook_signal,CMockString_e);
    UNITY_TEST_ASSERT_EQUAL_PTR(cmock_call_instance->Expected_e, e, cmock_line, CMockStringMismatch);
  }
  if (Mock.rkh_hook_signal_CallbackFunctionPointer != NULL)
  {
    Mock.rkh_hook_signal_CallbackFunctionPointer(e, Mock.rkh_hook_signal_CallbackCalls++);
  }
  UNITY_CLR_DETAILS();
}

void CMockExpectParameters_rkh_hook_signal(CMOCK_rkh_hook_signal_CALL_INSTANCE* cmock_call_instance, RKH_EVT_T* e)
{
  cmock_call_instance->Expected_e = e;
  cmock_call_instance->IgnoreArg_e = 0;
}

void rkh_hook_signal_CMockIgnore(void)
{
  Mock.rkh_hook_signal_IgnoreBool = (int)1;
}

void rkh_hook_signal_CMockExpect(UNITY_LINE_TYPE cmock_line, RKH_EVT_T* e)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_rkh_hook_signal_CALL_INSTANCE));
  CMOCK_rkh_hook_signal_CALL_INSTANCE* cmock_call_instance = (CMOCK_rkh_hook_signal_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.rkh_hook_signal_CallInstance = CMock_Guts_MemChain(Mock.rkh_hook_signal_CallInstance, cmock_guts_index);
  Mock.rkh_hook_signal_IgnoreBool = (int)0;
  cmock_call_instance->LineNumber = cmock_line;
  CMockExpectParameters_rkh_hook_signal(cmock_call_instance, e);
  UNITY_CLR_DETAILS();
}

void rkh_hook_signal_StubWithCallback(CMOCK_rkh_hook_signal_CALLBACK Callback)
{
  Mock.rkh_hook_signal_IgnoreBool = (int)0;
  Mock.rkh_hook_signal_CallbackFunctionPointer = Callback;
}

void rkh_hook_signal_CMockIgnoreArg_e(UNITY_LINE_TYPE cmock_line)
{
  CMOCK_rkh_hook_signal_CALL_INSTANCE* cmock_call_instance = (CMOCK_rkh_hook_signal_CALL_INSTANCE*)CMock_Guts_GetAddressFor(CMock_Guts_MemEndOfChain(Mock.rkh_hook_signal_CallInstance));
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringIgnPreExp);
  cmock_call_instance->IgnoreArg_e = 1;
}

void rkh_hook_timeout(const void* t)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  CMOCK_rkh_hook_timeout_CALL_INSTANCE* cmock_call_instance;
  UNITY_SET_DETAIL(CMockString_rkh_hook_timeout);
  cmock_call_instance = (CMOCK_rkh_hook_timeout_CALL_INSTANCE*)CMock_Guts_GetAddressFor(Mock.rkh_hook_timeout_CallInstance);
  Mock.rkh_hook_timeout_CallInstance = CMock_Guts_MemNext(Mock.rkh_hook_timeout_CallInstance);
  if (Mock.rkh_hook_timeout_IgnoreBool)
  {
    UNITY_CLR_DETAILS();
    return;
  }
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringCalledMore);
  cmock_line = cmock_call_instance->LineNumber;
  if (!cmock_call_instance->IgnoreArg_t)
  {
    UNITY_SET_DETAILS(CMockString_rkh_hook_timeout,CMockString_t);
    UNITY_TEST_ASSERT_EQUAL_PTR(cmock_call_instance->Expected_t, t, cmock_line, CMockStringMismatch);
  }
  if (Mock.rkh_hook_timeout_CallbackFunctionPointer != NULL)
  {
    Mock.rkh_hook_timeout_CallbackFunctionPointer(t, Mock.rkh_hook_timeout_CallbackCalls++);
  }
  UNITY_CLR_DETAILS();
}

void CMockExpectParameters_rkh_hook_timeout(CMOCK_rkh_hook_timeout_CALL_INSTANCE* cmock_call_instance, const void* t)
{
  cmock_call_instance->Expected_t = (void*)t;
  cmock_call_instance->IgnoreArg_t = 0;
}

void rkh_hook_timeout_CMockIgnore(void)
{
  Mock.rkh_hook_timeout_IgnoreBool = (int)1;
}

void rkh_hook_timeout_CMockExpect(UNITY_LINE_TYPE cmock_line, const void* t)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_rkh_hook_timeout_CALL_INSTANCE));
  CMOCK_rkh_hook_timeout_CALL_INSTANCE* cmock_call_instance = (CMOCK_rkh_hook_timeout_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.rkh_hook_timeout_CallInstance = CMock_Guts_MemChain(Mock.rkh_hook_timeout_CallInstance, cmock_guts_index);
  Mock.rkh_hook_timeout_IgnoreBool = (int)0;
  cmock_call_instance->LineNumber = cmock_line;
  CMockExpectParameters_rkh_hook_timeout(cmock_call_instance, t);
  UNITY_CLR_DETAILS();
}

void rkh_hook_timeout_StubWithCallback(CMOCK_rkh_hook_timeout_CALLBACK Callback)
{
  Mock.rkh_hook_timeout_IgnoreBool = (int)0;
  Mock.rkh_hook_timeout_CallbackFunctionPointer = Callback;
}

void rkh_hook_timeout_CMockIgnoreArg_t(UNITY_LINE_TYPE cmock_line)
{
  CMOCK_rkh_hook_timeout_CALL_INSTANCE* cmock_call_instance = (CMOCK_rkh_hook_timeout_CALL_INSTANCE*)CMock_Guts_GetAddressFor(CMock_Guts_MemEndOfChain(Mock.rkh_hook_timeout_CallInstance));
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringIgnPreExp);
  cmock_call_instance->IgnoreArg_t = 1;
}

void rkh_hook_start(void)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  CMOCK_rkh_hook_start_CALL_INSTANCE* cmock_call_instance;
  UNITY_SET_DETAIL(CMockString_rkh_hook_start);
  cmock_call_instance = (CMOCK_rkh_hook_start_CALL_INSTANCE*)CMock_Guts_GetAddressFor(Mock.rkh_hook_start_CallInstance);
  Mock.rkh_hook_start_CallInstance = CMock_Guts_MemNext(Mock.rkh_hook_start_CallInstance);
  if (Mock.rkh_hook_start_IgnoreBool)
  {
    UNITY_CLR_DETAILS();
    return;
  }
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringCalledMore);
  cmock_line = cmock_call_instance->LineNumber;
  if (Mock.rkh_hook_start_CallbackFunctionPointer != NULL)
  {
    Mock.rkh_hook_start_CallbackFunctionPointer(Mock.rkh_hook_start_CallbackCalls++);
  }
  UNITY_CLR_DETAILS();
}

void rkh_hook_start_CMockIgnore(void)
{
  Mock.rkh_hook_start_IgnoreBool = (int)1;
}

void rkh_hook_start_CMockExpect(UNITY_LINE_TYPE cmock_line)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_rkh_hook_start_CALL_INSTANCE));
  CMOCK_rkh_hook_start_CALL_INSTANCE* cmock_call_instance = (CMOCK_rkh_hook_start_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.rkh_hook_start_CallInstance = CMock_Guts_MemChain(Mock.rkh_hook_start_CallInstance, cmock_guts_index);
  Mock.rkh_hook_start_IgnoreBool = (int)0;
  cmock_call_instance->LineNumber = cmock_line;
  UNITY_CLR_DETAILS();
}

void rkh_hook_start_StubWithCallback(CMOCK_rkh_hook_start_CALLBACK Callback)
{
  Mock.rkh_hook_start_IgnoreBool = (int)0;
  Mock.rkh_hook_start_CallbackFunctionPointer = Callback;
}

void rkh_hook_exit(void)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  CMOCK_rkh_hook_exit_CALL_INSTANCE* cmock_call_instance;
  UNITY_SET_DETAIL(CMockString_rkh_hook_exit);
  cmock_call_instance = (CMOCK_rkh_hook_exit_CALL_INSTANCE*)CMock_Guts_GetAddressFor(Mock.rkh_hook_exit_CallInstance);
  Mock.rkh_hook_exit_CallInstance = CMock_Guts_MemNext(Mock.rkh_hook_exit_CallInstance);
  if (Mock.rkh_hook_exit_IgnoreBool)
  {
    UNITY_CLR_DETAILS();
    return;
  }
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringCalledMore);
  cmock_line = cmock_call_instance->LineNumber;
  if (Mock.rkh_hook_exit_CallbackFunctionPointer != NULL)
  {
    Mock.rkh_hook_exit_CallbackFunctionPointer(Mock.rkh_hook_exit_CallbackCalls++);
  }
  UNITY_CLR_DETAILS();
}

void rkh_hook_exit_CMockIgnore(void)
{
  Mock.rkh_hook_exit_IgnoreBool = (int)1;
}

void rkh_hook_exit_CMockExpect(UNITY_LINE_TYPE cmock_line)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_rkh_hook_exit_CALL_INSTANCE));
  CMOCK_rkh_hook_exit_CALL_INSTANCE* cmock_call_instance = (CMOCK_rkh_hook_exit_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.rkh_hook_exit_CallInstance = CMock_Guts_MemChain(Mock.rkh_hook_exit_CallInstance, cmock_guts_index);
  Mock.rkh_hook_exit_IgnoreBool = (int)0;
  cmock_call_instance->LineNumber = cmock_line;
  UNITY_CLR_DETAILS();
}

void rkh_hook_exit_StubWithCallback(CMOCK_rkh_hook_exit_CALLBACK Callback)
{
  Mock.rkh_hook_exit_IgnoreBool = (int)0;
  Mock.rkh_hook_exit_CallbackFunctionPointer = Callback;
}

void rkh_hook_idle(void)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  CMOCK_rkh_hook_idle_CALL_INSTANCE* cmock_call_instance;
  UNITY_SET_DETAIL(CMockString_rkh_hook_idle);
  cmock_call_instance = (CMOCK_rkh_hook_idle_CALL_INSTANCE*)CMock_Guts_GetAddressFor(Mock.rkh_hook_idle_CallInstance);
  Mock.rkh_hook_idle_CallInstance = CMock_Guts_MemNext(Mock.rkh_hook_idle_CallInstance);
  if (Mock.rkh_hook_idle_IgnoreBool)
  {
    UNITY_CLR_DETAILS();
    return;
  }
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringCalledMore);
  cmock_line = cmock_call_instance->LineNumber;
  if (Mock.rkh_hook_idle_CallbackFunctionPointer != NULL)
  {
    Mock.rkh_hook_idle_CallbackFunctionPointer(Mock.rkh_hook_idle_CallbackCalls++);
  }
  UNITY_CLR_DETAILS();
}

void rkh_hook_idle_CMockIgnore(void)
{
  Mock.rkh_hook_idle_IgnoreBool = (int)1;
}

void rkh_hook_idle_CMockExpect(UNITY_LINE_TYPE cmock_line)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_rkh_hook_idle_CALL_INSTANCE));
  CMOCK_rkh_hook_idle_CALL_INSTANCE* cmock_call_instance = (CMOCK_rkh_hook_idle_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.rkh_hook_idle_CallInstance = CMock_Guts_MemChain(Mock.rkh_hook_idle_CallInstance, cmock_guts_index);
  Mock.rkh_hook_idle_IgnoreBool = (int)0;
  cmock_call_instance->LineNumber = cmock_line;
  UNITY_CLR_DETAILS();
}

void rkh_hook_idle_StubWithCallback(CMOCK_rkh_hook_idle_CALLBACK Callback)
{
  Mock.rkh_hook_idle_IgnoreBool = (int)0;
  Mock.rkh_hook_idle_CallbackFunctionPointer = Callback;
}

void rkh_hook_timetick(void)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  CMOCK_rkh_hook_timetick_CALL_INSTANCE* cmock_call_instance;
  UNITY_SET_DETAIL(CMockString_rkh_hook_timetick);
  cmock_call_instance = (CMOCK_rkh_hook_timetick_CALL_INSTANCE*)CMock_Guts_GetAddressFor(Mock.rkh_hook_timetick_CallInstance);
  Mock.rkh_hook_timetick_CallInstance = CMock_Guts_MemNext(Mock.rkh_hook_timetick_CallInstance);
  if (Mock.rkh_hook_timetick_IgnoreBool)
  {
    UNITY_CLR_DETAILS();
    return;
  }
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringCalledMore);
  cmock_line = cmock_call_instance->LineNumber;
  if (Mock.rkh_hook_timetick_CallbackFunctionPointer != NULL)
  {
    Mock.rkh_hook_timetick_CallbackFunctionPointer(Mock.rkh_hook_timetick_CallbackCalls++);
  }
  UNITY_CLR_DETAILS();
}

void rkh_hook_timetick_CMockIgnore(void)
{
  Mock.rkh_hook_timetick_IgnoreBool = (int)1;
}

void rkh_hook_timetick_CMockExpect(UNITY_LINE_TYPE cmock_line)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_rkh_hook_timetick_CALL_INSTANCE));
  CMOCK_rkh_hook_timetick_CALL_INSTANCE* cmock_call_instance = (CMOCK_rkh_hook_timetick_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.rkh_hook_timetick_CallInstance = CMock_Guts_MemChain(Mock.rkh_hook_timetick_CallInstance, cmock_guts_index);
  Mock.rkh_hook_timetick_IgnoreBool = (int)0;
  cmock_call_instance->LineNumber = cmock_line;
  UNITY_CLR_DETAILS();
}

void rkh_hook_timetick_StubWithCallback(CMOCK_rkh_hook_timetick_CALLBACK Callback)
{
  Mock.rkh_hook_timetick_IgnoreBool = (int)0;
  Mock.rkh_hook_timetick_CallbackFunctionPointer = Callback;
}

void rkh_hook_putTrcEvt(void)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  CMOCK_rkh_hook_putTrcEvt_CALL_INSTANCE* cmock_call_instance;
  UNITY_SET_DETAIL(CMockString_rkh_hook_putTrcEvt);
  cmock_call_instance = (CMOCK_rkh_hook_putTrcEvt_CALL_INSTANCE*)CMock_Guts_GetAddressFor(Mock.rkh_hook_putTrcEvt_CallInstance);
  Mock.rkh_hook_putTrcEvt_CallInstance = CMock_Guts_MemNext(Mock.rkh_hook_putTrcEvt_CallInstance);
  if (Mock.rkh_hook_putTrcEvt_IgnoreBool)
  {
    UNITY_CLR_DETAILS();
    return;
  }
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringCalledMore);
  cmock_line = cmock_call_instance->LineNumber;
  if (Mock.rkh_hook_putTrcEvt_CallbackFunctionPointer != NULL)
  {
    Mock.rkh_hook_putTrcEvt_CallbackFunctionPointer(Mock.rkh_hook_putTrcEvt_CallbackCalls++);
  }
  UNITY_CLR_DETAILS();
}

void rkh_hook_putTrcEvt_CMockIgnore(void)
{
  Mock.rkh_hook_putTrcEvt_IgnoreBool = (int)1;
}

void rkh_hook_putTrcEvt_CMockExpect(UNITY_LINE_TYPE cmock_line)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_rkh_hook_putTrcEvt_CALL_INSTANCE));
  CMOCK_rkh_hook_putTrcEvt_CALL_INSTANCE* cmock_call_instance = (CMOCK_rkh_hook_putTrcEvt_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.rkh_hook_putTrcEvt_CallInstance = CMock_Guts_MemChain(Mock.rkh_hook_putTrcEvt_CallInstance, cmock_guts_index);
  Mock.rkh_hook_putTrcEvt_IgnoreBool = (int)0;
  cmock_call_instance->LineNumber = cmock_line;
  UNITY_CLR_DETAILS();
}

void rkh_hook_putTrcEvt_StubWithCallback(CMOCK_rkh_hook_putTrcEvt_CALLBACK Callback)
{
  Mock.rkh_hook_putTrcEvt_IgnoreBool = (int)0;
  Mock.rkh_hook_putTrcEvt_CallbackFunctionPointer = Callback;
}
