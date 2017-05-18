/* AUTOGENERATED FILE. DO NOT EDIT. */
#include <string.h>
#include <stdlib.h>
#include <setjmp.h>
#include "unity.h"
#include "cmock.h"
#include "Mock_rkhtrc_filter.h"

static const char* CMockString_ctrl = "ctrl";
static const char* CMockString_e = "e";
static const char* CMockString_evt = "evt";
static const char* CMockString_fd = "fd";
static const char* CMockString_grp = "grp";
static const char* CMockString_mode = "mode";
static const char* CMockString_outFilterTbl = "outFilterTbl";
static const char* CMockString_rkh_trc_filter_event_ = "rkh_trc_filter_event_";
static const char* CMockString_rkh_trc_filter_get = "rkh_trc_filter_get";
static const char* CMockString_rkh_trc_filter_group_ = "rkh_trc_filter_group_";
static const char* CMockString_rkh_trc_isoff_ = "rkh_trc_isoff_";
static const char* CMockString_rkh_trc_symFil = "rkh_trc_symFil";
static const char* CMockString_rkh_trc_symFil_isoff = "rkh_trc_symFil_isoff";
static const char* CMockString_slot = "slot";

typedef struct _CMOCK_rkh_trc_filter_group__CALL_INSTANCE
{
  UNITY_LINE_TYPE LineNumber;
  rui8_t Expected_ctrl;
  RKH_TG_T Expected_grp;
  rui8_t Expected_mode;
  int IgnoreArg_ctrl;
  int IgnoreArg_grp;
  int IgnoreArg_mode;

} CMOCK_rkh_trc_filter_group__CALL_INSTANCE;

typedef struct _CMOCK_rkh_trc_filter_event__CALL_INSTANCE
{
  UNITY_LINE_TYPE LineNumber;
  rui8_t Expected_ctrl;
  RKH_TE_ID_T Expected_evt;
  int IgnoreArg_ctrl;
  int IgnoreArg_evt;

} CMOCK_rkh_trc_filter_event__CALL_INSTANCE;

typedef struct _CMOCK_rkh_trc_isoff__CALL_INSTANCE
{
  UNITY_LINE_TYPE LineNumber;
  rbool_t ReturnVal;
  RKH_TE_ID_T Expected_e;
  int IgnoreArg_e;

} CMOCK_rkh_trc_isoff__CALL_INSTANCE;

typedef struct _CMOCK_rkh_trc_symFil_CALL_INSTANCE
{
  UNITY_LINE_TYPE LineNumber;
  RKHFilter Expected_fd;
  RKH_TRC_FSLOT Expected_slot;
  rui8_t Expected_mode;
  int IgnoreArg_fd;
  int IgnoreArg_slot;
  int IgnoreArg_mode;

} CMOCK_rkh_trc_symFil_CALL_INSTANCE;

typedef struct _CMOCK_rkh_trc_symFil_isoff_CALL_INSTANCE
{
  UNITY_LINE_TYPE LineNumber;
  rbool_t ReturnVal;
  RKHFilter Expected_fd;
  RKH_TRC_FSLOT Expected_slot;
  int IgnoreArg_fd;
  int IgnoreArg_slot;

} CMOCK_rkh_trc_symFil_isoff_CALL_INSTANCE;

typedef struct _CMOCK_rkh_trc_filter_get_CALL_INSTANCE
{
  UNITY_LINE_TYPE LineNumber;
  RKH_FilterTbl* Expected_outFilterTbl;
  int IgnoreArg_outFilterTbl;

} CMOCK_rkh_trc_filter_get_CALL_INSTANCE;

static struct Mock_rkhtrc_filterInstance
{
  int rkh_trc_filter_group__IgnoreBool;
  CMOCK_rkh_trc_filter_group__CALLBACK rkh_trc_filter_group__CallbackFunctionPointer;
  int rkh_trc_filter_group__CallbackCalls;
  CMOCK_MEM_INDEX_TYPE rkh_trc_filter_group__CallInstance;
  int rkh_trc_filter_event__IgnoreBool;
  CMOCK_rkh_trc_filter_event__CALLBACK rkh_trc_filter_event__CallbackFunctionPointer;
  int rkh_trc_filter_event__CallbackCalls;
  CMOCK_MEM_INDEX_TYPE rkh_trc_filter_event__CallInstance;
  int rkh_trc_isoff__IgnoreBool;
  rbool_t rkh_trc_isoff__FinalReturn;
  CMOCK_rkh_trc_isoff__CALLBACK rkh_trc_isoff__CallbackFunctionPointer;
  int rkh_trc_isoff__CallbackCalls;
  CMOCK_MEM_INDEX_TYPE rkh_trc_isoff__CallInstance;
  int rkh_trc_symFil_IgnoreBool;
  CMOCK_rkh_trc_symFil_CALLBACK rkh_trc_symFil_CallbackFunctionPointer;
  int rkh_trc_symFil_CallbackCalls;
  CMOCK_MEM_INDEX_TYPE rkh_trc_symFil_CallInstance;
  int rkh_trc_symFil_isoff_IgnoreBool;
  rbool_t rkh_trc_symFil_isoff_FinalReturn;
  CMOCK_rkh_trc_symFil_isoff_CALLBACK rkh_trc_symFil_isoff_CallbackFunctionPointer;
  int rkh_trc_symFil_isoff_CallbackCalls;
  CMOCK_MEM_INDEX_TYPE rkh_trc_symFil_isoff_CallInstance;
  int rkh_trc_filter_get_IgnoreBool;
  CMOCK_rkh_trc_filter_get_CALLBACK rkh_trc_filter_get_CallbackFunctionPointer;
  int rkh_trc_filter_get_CallbackCalls;
  CMOCK_MEM_INDEX_TYPE rkh_trc_filter_get_CallInstance;
} Mock;

extern jmp_buf AbortFrame;

void Mock_rkhtrc_filter_Verify(void)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  if (Mock.rkh_trc_filter_group__IgnoreBool)
    Mock.rkh_trc_filter_group__CallInstance = CMOCK_GUTS_NONE;
  UNITY_SET_DETAIL(CMockString_rkh_trc_filter_group_);
  UNITY_TEST_ASSERT(CMOCK_GUTS_NONE == Mock.rkh_trc_filter_group__CallInstance, cmock_line, CMockStringCalledLess);
  if (Mock.rkh_trc_filter_group__CallbackFunctionPointer != NULL)
    Mock.rkh_trc_filter_group__CallInstance = CMOCK_GUTS_NONE;
  if (Mock.rkh_trc_filter_event__IgnoreBool)
    Mock.rkh_trc_filter_event__CallInstance = CMOCK_GUTS_NONE;
  UNITY_SET_DETAIL(CMockString_rkh_trc_filter_event_);
  UNITY_TEST_ASSERT(CMOCK_GUTS_NONE == Mock.rkh_trc_filter_event__CallInstance, cmock_line, CMockStringCalledLess);
  if (Mock.rkh_trc_filter_event__CallbackFunctionPointer != NULL)
    Mock.rkh_trc_filter_event__CallInstance = CMOCK_GUTS_NONE;
  if (Mock.rkh_trc_isoff__IgnoreBool)
    Mock.rkh_trc_isoff__CallInstance = CMOCK_GUTS_NONE;
  UNITY_SET_DETAIL(CMockString_rkh_trc_isoff_);
  UNITY_TEST_ASSERT(CMOCK_GUTS_NONE == Mock.rkh_trc_isoff__CallInstance, cmock_line, CMockStringCalledLess);
  if (Mock.rkh_trc_isoff__CallbackFunctionPointer != NULL)
    Mock.rkh_trc_isoff__CallInstance = CMOCK_GUTS_NONE;
  if (Mock.rkh_trc_symFil_IgnoreBool)
    Mock.rkh_trc_symFil_CallInstance = CMOCK_GUTS_NONE;
  UNITY_SET_DETAIL(CMockString_rkh_trc_symFil);
  UNITY_TEST_ASSERT(CMOCK_GUTS_NONE == Mock.rkh_trc_symFil_CallInstance, cmock_line, CMockStringCalledLess);
  if (Mock.rkh_trc_symFil_CallbackFunctionPointer != NULL)
    Mock.rkh_trc_symFil_CallInstance = CMOCK_GUTS_NONE;
  if (Mock.rkh_trc_symFil_isoff_IgnoreBool)
    Mock.rkh_trc_symFil_isoff_CallInstance = CMOCK_GUTS_NONE;
  UNITY_SET_DETAIL(CMockString_rkh_trc_symFil_isoff);
  UNITY_TEST_ASSERT(CMOCK_GUTS_NONE == Mock.rkh_trc_symFil_isoff_CallInstance, cmock_line, CMockStringCalledLess);
  if (Mock.rkh_trc_symFil_isoff_CallbackFunctionPointer != NULL)
    Mock.rkh_trc_symFil_isoff_CallInstance = CMOCK_GUTS_NONE;
  if (Mock.rkh_trc_filter_get_IgnoreBool)
    Mock.rkh_trc_filter_get_CallInstance = CMOCK_GUTS_NONE;
  UNITY_SET_DETAIL(CMockString_rkh_trc_filter_get);
  UNITY_TEST_ASSERT(CMOCK_GUTS_NONE == Mock.rkh_trc_filter_get_CallInstance, cmock_line, CMockStringCalledLess);
  if (Mock.rkh_trc_filter_get_CallbackFunctionPointer != NULL)
    Mock.rkh_trc_filter_get_CallInstance = CMOCK_GUTS_NONE;
}

void Mock_rkhtrc_filter_Init(void)
{
  Mock_rkhtrc_filter_Destroy();
}

void Mock_rkhtrc_filter_Destroy(void)
{
  CMock_Guts_MemFreeAll();
  memset(&Mock, 0, sizeof(Mock));
  Mock.rkh_trc_filter_group__CallbackFunctionPointer = NULL;
  Mock.rkh_trc_filter_group__CallbackCalls = 0;
  Mock.rkh_trc_filter_event__CallbackFunctionPointer = NULL;
  Mock.rkh_trc_filter_event__CallbackCalls = 0;
  Mock.rkh_trc_isoff__CallbackFunctionPointer = NULL;
  Mock.rkh_trc_isoff__CallbackCalls = 0;
  Mock.rkh_trc_symFil_CallbackFunctionPointer = NULL;
  Mock.rkh_trc_symFil_CallbackCalls = 0;
  Mock.rkh_trc_symFil_isoff_CallbackFunctionPointer = NULL;
  Mock.rkh_trc_symFil_isoff_CallbackCalls = 0;
  Mock.rkh_trc_filter_get_CallbackFunctionPointer = NULL;
  Mock.rkh_trc_filter_get_CallbackCalls = 0;
}

void rkh_trc_filter_group_(rui8_t ctrl, RKH_TG_T grp, rui8_t mode)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  CMOCK_rkh_trc_filter_group__CALL_INSTANCE* cmock_call_instance;
  UNITY_SET_DETAIL(CMockString_rkh_trc_filter_group_);
  cmock_call_instance = (CMOCK_rkh_trc_filter_group__CALL_INSTANCE*)CMock_Guts_GetAddressFor(Mock.rkh_trc_filter_group__CallInstance);
  Mock.rkh_trc_filter_group__CallInstance = CMock_Guts_MemNext(Mock.rkh_trc_filter_group__CallInstance);
  if (Mock.rkh_trc_filter_group__IgnoreBool)
  {
    UNITY_CLR_DETAILS();
    return;
  }
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringCalledMore);
  cmock_line = cmock_call_instance->LineNumber;
  if (!cmock_call_instance->IgnoreArg_ctrl)
  {
    UNITY_SET_DETAILS(CMockString_rkh_trc_filter_group_,CMockString_ctrl);
    UNITY_TEST_ASSERT_EQUAL_MEMORY((void*)(&cmock_call_instance->Expected_ctrl), (void*)(&ctrl), sizeof(rui8_t), cmock_line, CMockStringMismatch);
  }
  if (!cmock_call_instance->IgnoreArg_grp)
  {
    UNITY_SET_DETAILS(CMockString_rkh_trc_filter_group_,CMockString_grp);
    UNITY_TEST_ASSERT_EQUAL_MEMORY((void*)(&cmock_call_instance->Expected_grp), (void*)(&grp), sizeof(RKH_TG_T), cmock_line, CMockStringMismatch);
  }
  if (!cmock_call_instance->IgnoreArg_mode)
  {
    UNITY_SET_DETAILS(CMockString_rkh_trc_filter_group_,CMockString_mode);
    UNITY_TEST_ASSERT_EQUAL_MEMORY((void*)(&cmock_call_instance->Expected_mode), (void*)(&mode), sizeof(rui8_t), cmock_line, CMockStringMismatch);
  }
  if (Mock.rkh_trc_filter_group__CallbackFunctionPointer != NULL)
  {
    Mock.rkh_trc_filter_group__CallbackFunctionPointer(ctrl, grp, mode, Mock.rkh_trc_filter_group__CallbackCalls++);
  }
  UNITY_CLR_DETAILS();
}

void CMockExpectParameters_rkh_trc_filter_group_(CMOCK_rkh_trc_filter_group__CALL_INSTANCE* cmock_call_instance, rui8_t ctrl, RKH_TG_T grp, rui8_t mode)
{
  memcpy(&cmock_call_instance->Expected_ctrl, &ctrl, sizeof(rui8_t));
  cmock_call_instance->IgnoreArg_ctrl = 0;
  memcpy(&cmock_call_instance->Expected_grp, &grp, sizeof(RKH_TG_T));
  cmock_call_instance->IgnoreArg_grp = 0;
  memcpy(&cmock_call_instance->Expected_mode, &mode, sizeof(rui8_t));
  cmock_call_instance->IgnoreArg_mode = 0;
}

void rkh_trc_filter_group__CMockIgnore(void)
{
  Mock.rkh_trc_filter_group__IgnoreBool = (int)1;
}

void rkh_trc_filter_group__CMockExpect(UNITY_LINE_TYPE cmock_line, rui8_t ctrl, RKH_TG_T grp, rui8_t mode)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_rkh_trc_filter_group__CALL_INSTANCE));
  CMOCK_rkh_trc_filter_group__CALL_INSTANCE* cmock_call_instance = (CMOCK_rkh_trc_filter_group__CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.rkh_trc_filter_group__CallInstance = CMock_Guts_MemChain(Mock.rkh_trc_filter_group__CallInstance, cmock_guts_index);
  Mock.rkh_trc_filter_group__IgnoreBool = (int)0;
  cmock_call_instance->LineNumber = cmock_line;
  CMockExpectParameters_rkh_trc_filter_group_(cmock_call_instance, ctrl, grp, mode);
  UNITY_CLR_DETAILS();
}

void rkh_trc_filter_group__StubWithCallback(CMOCK_rkh_trc_filter_group__CALLBACK Callback)
{
  Mock.rkh_trc_filter_group__IgnoreBool = (int)0;
  Mock.rkh_trc_filter_group__CallbackFunctionPointer = Callback;
}

void rkh_trc_filter_group__CMockIgnoreArg_ctrl(UNITY_LINE_TYPE cmock_line)
{
  CMOCK_rkh_trc_filter_group__CALL_INSTANCE* cmock_call_instance = (CMOCK_rkh_trc_filter_group__CALL_INSTANCE*)CMock_Guts_GetAddressFor(CMock_Guts_MemEndOfChain(Mock.rkh_trc_filter_group__CallInstance));
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringIgnPreExp);
  cmock_call_instance->IgnoreArg_ctrl = 1;
}

void rkh_trc_filter_group__CMockIgnoreArg_grp(UNITY_LINE_TYPE cmock_line)
{
  CMOCK_rkh_trc_filter_group__CALL_INSTANCE* cmock_call_instance = (CMOCK_rkh_trc_filter_group__CALL_INSTANCE*)CMock_Guts_GetAddressFor(CMock_Guts_MemEndOfChain(Mock.rkh_trc_filter_group__CallInstance));
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringIgnPreExp);
  cmock_call_instance->IgnoreArg_grp = 1;
}

void rkh_trc_filter_group__CMockIgnoreArg_mode(UNITY_LINE_TYPE cmock_line)
{
  CMOCK_rkh_trc_filter_group__CALL_INSTANCE* cmock_call_instance = (CMOCK_rkh_trc_filter_group__CALL_INSTANCE*)CMock_Guts_GetAddressFor(CMock_Guts_MemEndOfChain(Mock.rkh_trc_filter_group__CallInstance));
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringIgnPreExp);
  cmock_call_instance->IgnoreArg_mode = 1;
}

void rkh_trc_filter_event_(rui8_t ctrl, RKH_TE_ID_T evt)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  CMOCK_rkh_trc_filter_event__CALL_INSTANCE* cmock_call_instance;
  UNITY_SET_DETAIL(CMockString_rkh_trc_filter_event_);
  cmock_call_instance = (CMOCK_rkh_trc_filter_event__CALL_INSTANCE*)CMock_Guts_GetAddressFor(Mock.rkh_trc_filter_event__CallInstance);
  Mock.rkh_trc_filter_event__CallInstance = CMock_Guts_MemNext(Mock.rkh_trc_filter_event__CallInstance);
  if (Mock.rkh_trc_filter_event__IgnoreBool)
  {
    UNITY_CLR_DETAILS();
    return;
  }
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringCalledMore);
  cmock_line = cmock_call_instance->LineNumber;
  if (!cmock_call_instance->IgnoreArg_ctrl)
  {
    UNITY_SET_DETAILS(CMockString_rkh_trc_filter_event_,CMockString_ctrl);
    UNITY_TEST_ASSERT_EQUAL_MEMORY((void*)(&cmock_call_instance->Expected_ctrl), (void*)(&ctrl), sizeof(rui8_t), cmock_line, CMockStringMismatch);
  }
  if (!cmock_call_instance->IgnoreArg_evt)
  {
    UNITY_SET_DETAILS(CMockString_rkh_trc_filter_event_,CMockString_evt);
    UNITY_TEST_ASSERT_EQUAL_MEMORY((void*)(&cmock_call_instance->Expected_evt), (void*)(&evt), sizeof(RKH_TE_ID_T), cmock_line, CMockStringMismatch);
  }
  if (Mock.rkh_trc_filter_event__CallbackFunctionPointer != NULL)
  {
    Mock.rkh_trc_filter_event__CallbackFunctionPointer(ctrl, evt, Mock.rkh_trc_filter_event__CallbackCalls++);
  }
  UNITY_CLR_DETAILS();
}

void CMockExpectParameters_rkh_trc_filter_event_(CMOCK_rkh_trc_filter_event__CALL_INSTANCE* cmock_call_instance, rui8_t ctrl, RKH_TE_ID_T evt)
{
  memcpy(&cmock_call_instance->Expected_ctrl, &ctrl, sizeof(rui8_t));
  cmock_call_instance->IgnoreArg_ctrl = 0;
  memcpy(&cmock_call_instance->Expected_evt, &evt, sizeof(RKH_TE_ID_T));
  cmock_call_instance->IgnoreArg_evt = 0;
}

void rkh_trc_filter_event__CMockIgnore(void)
{
  Mock.rkh_trc_filter_event__IgnoreBool = (int)1;
}

void rkh_trc_filter_event__CMockExpect(UNITY_LINE_TYPE cmock_line, rui8_t ctrl, RKH_TE_ID_T evt)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_rkh_trc_filter_event__CALL_INSTANCE));
  CMOCK_rkh_trc_filter_event__CALL_INSTANCE* cmock_call_instance = (CMOCK_rkh_trc_filter_event__CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.rkh_trc_filter_event__CallInstance = CMock_Guts_MemChain(Mock.rkh_trc_filter_event__CallInstance, cmock_guts_index);
  Mock.rkh_trc_filter_event__IgnoreBool = (int)0;
  cmock_call_instance->LineNumber = cmock_line;
  CMockExpectParameters_rkh_trc_filter_event_(cmock_call_instance, ctrl, evt);
  UNITY_CLR_DETAILS();
}

void rkh_trc_filter_event__StubWithCallback(CMOCK_rkh_trc_filter_event__CALLBACK Callback)
{
  Mock.rkh_trc_filter_event__IgnoreBool = (int)0;
  Mock.rkh_trc_filter_event__CallbackFunctionPointer = Callback;
}

void rkh_trc_filter_event__CMockIgnoreArg_ctrl(UNITY_LINE_TYPE cmock_line)
{
  CMOCK_rkh_trc_filter_event__CALL_INSTANCE* cmock_call_instance = (CMOCK_rkh_trc_filter_event__CALL_INSTANCE*)CMock_Guts_GetAddressFor(CMock_Guts_MemEndOfChain(Mock.rkh_trc_filter_event__CallInstance));
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringIgnPreExp);
  cmock_call_instance->IgnoreArg_ctrl = 1;
}

void rkh_trc_filter_event__CMockIgnoreArg_evt(UNITY_LINE_TYPE cmock_line)
{
  CMOCK_rkh_trc_filter_event__CALL_INSTANCE* cmock_call_instance = (CMOCK_rkh_trc_filter_event__CALL_INSTANCE*)CMock_Guts_GetAddressFor(CMock_Guts_MemEndOfChain(Mock.rkh_trc_filter_event__CallInstance));
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringIgnPreExp);
  cmock_call_instance->IgnoreArg_evt = 1;
}

rbool_t rkh_trc_isoff_(RKH_TE_ID_T e)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  CMOCK_rkh_trc_isoff__CALL_INSTANCE* cmock_call_instance;
  UNITY_SET_DETAIL(CMockString_rkh_trc_isoff_);
  cmock_call_instance = (CMOCK_rkh_trc_isoff__CALL_INSTANCE*)CMock_Guts_GetAddressFor(Mock.rkh_trc_isoff__CallInstance);
  Mock.rkh_trc_isoff__CallInstance = CMock_Guts_MemNext(Mock.rkh_trc_isoff__CallInstance);
  if (Mock.rkh_trc_isoff__IgnoreBool)
  {
    UNITY_CLR_DETAILS();
    if (cmock_call_instance == NULL)
      return Mock.rkh_trc_isoff__FinalReturn;
    memcpy(&Mock.rkh_trc_isoff__FinalReturn, &cmock_call_instance->ReturnVal, sizeof(rbool_t));
    return cmock_call_instance->ReturnVal;
  }
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringCalledMore);
  cmock_line = cmock_call_instance->LineNumber;
  if (!cmock_call_instance->IgnoreArg_e)
  {
    UNITY_SET_DETAILS(CMockString_rkh_trc_isoff_,CMockString_e);
    UNITY_TEST_ASSERT_EQUAL_MEMORY((void*)(&cmock_call_instance->Expected_e), (void*)(&e), sizeof(RKH_TE_ID_T), cmock_line, CMockStringMismatch);
  }
  if (Mock.rkh_trc_isoff__CallbackFunctionPointer != NULL)
  {
    cmock_call_instance->ReturnVal = Mock.rkh_trc_isoff__CallbackFunctionPointer(e, Mock.rkh_trc_isoff__CallbackCalls++);
  }
  UNITY_CLR_DETAILS();
  return cmock_call_instance->ReturnVal;
}

void CMockExpectParameters_rkh_trc_isoff_(CMOCK_rkh_trc_isoff__CALL_INSTANCE* cmock_call_instance, RKH_TE_ID_T e)
{
  memcpy(&cmock_call_instance->Expected_e, &e, sizeof(RKH_TE_ID_T));
  cmock_call_instance->IgnoreArg_e = 0;
}

void rkh_trc_isoff__CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line, rbool_t cmock_to_return)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_rkh_trc_isoff__CALL_INSTANCE));
  CMOCK_rkh_trc_isoff__CALL_INSTANCE* cmock_call_instance = (CMOCK_rkh_trc_isoff__CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.rkh_trc_isoff__CallInstance = CMock_Guts_MemChain(Mock.rkh_trc_isoff__CallInstance, cmock_guts_index);
  Mock.rkh_trc_isoff__IgnoreBool = (int)0;
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->ReturnVal = cmock_to_return;
  Mock.rkh_trc_isoff__IgnoreBool = (int)1;
}

void rkh_trc_isoff__CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, RKH_TE_ID_T e, rbool_t cmock_to_return)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_rkh_trc_isoff__CALL_INSTANCE));
  CMOCK_rkh_trc_isoff__CALL_INSTANCE* cmock_call_instance = (CMOCK_rkh_trc_isoff__CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.rkh_trc_isoff__CallInstance = CMock_Guts_MemChain(Mock.rkh_trc_isoff__CallInstance, cmock_guts_index);
  Mock.rkh_trc_isoff__IgnoreBool = (int)0;
  cmock_call_instance->LineNumber = cmock_line;
  CMockExpectParameters_rkh_trc_isoff_(cmock_call_instance, e);
  memcpy(&cmock_call_instance->ReturnVal, &cmock_to_return, sizeof(rbool_t));
  UNITY_CLR_DETAILS();
}

void rkh_trc_isoff__StubWithCallback(CMOCK_rkh_trc_isoff__CALLBACK Callback)
{
  Mock.rkh_trc_isoff__IgnoreBool = (int)0;
  Mock.rkh_trc_isoff__CallbackFunctionPointer = Callback;
}

void rkh_trc_isoff__CMockIgnoreArg_e(UNITY_LINE_TYPE cmock_line)
{
  CMOCK_rkh_trc_isoff__CALL_INSTANCE* cmock_call_instance = (CMOCK_rkh_trc_isoff__CALL_INSTANCE*)CMock_Guts_GetAddressFor(CMock_Guts_MemEndOfChain(Mock.rkh_trc_isoff__CallInstance));
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringIgnPreExp);
  cmock_call_instance->IgnoreArg_e = 1;
}

void rkh_trc_symFil(RKHFilter fd, RKH_TRC_FSLOT slot, rui8_t mode)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  CMOCK_rkh_trc_symFil_CALL_INSTANCE* cmock_call_instance;
  UNITY_SET_DETAIL(CMockString_rkh_trc_symFil);
  cmock_call_instance = (CMOCK_rkh_trc_symFil_CALL_INSTANCE*)CMock_Guts_GetAddressFor(Mock.rkh_trc_symFil_CallInstance);
  Mock.rkh_trc_symFil_CallInstance = CMock_Guts_MemNext(Mock.rkh_trc_symFil_CallInstance);
  if (Mock.rkh_trc_symFil_IgnoreBool)
  {
    UNITY_CLR_DETAILS();
    return;
  }
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringCalledMore);
  cmock_line = cmock_call_instance->LineNumber;
  if (!cmock_call_instance->IgnoreArg_fd)
  {
    UNITY_SET_DETAILS(CMockString_rkh_trc_symFil,CMockString_fd);
    UNITY_TEST_ASSERT_EQUAL_MEMORY((void*)(&cmock_call_instance->Expected_fd), (void*)(&fd), sizeof(RKHFilter), cmock_line, CMockStringMismatch);
  }
  if (!cmock_call_instance->IgnoreArg_slot)
  {
    UNITY_SET_DETAILS(CMockString_rkh_trc_symFil,CMockString_slot);
    UNITY_TEST_ASSERT_EQUAL_MEMORY((void*)(&cmock_call_instance->Expected_slot), (void*)(&slot), sizeof(RKH_TRC_FSLOT), cmock_line, CMockStringMismatch);
  }
  if (!cmock_call_instance->IgnoreArg_mode)
  {
    UNITY_SET_DETAILS(CMockString_rkh_trc_symFil,CMockString_mode);
    UNITY_TEST_ASSERT_EQUAL_MEMORY((void*)(&cmock_call_instance->Expected_mode), (void*)(&mode), sizeof(rui8_t), cmock_line, CMockStringMismatch);
  }
  if (Mock.rkh_trc_symFil_CallbackFunctionPointer != NULL)
  {
    Mock.rkh_trc_symFil_CallbackFunctionPointer(fd, slot, mode, Mock.rkh_trc_symFil_CallbackCalls++);
  }
  UNITY_CLR_DETAILS();
}

void CMockExpectParameters_rkh_trc_symFil(CMOCK_rkh_trc_symFil_CALL_INSTANCE* cmock_call_instance, RKHFilter fd, RKH_TRC_FSLOT slot, rui8_t mode)
{
  memcpy(&cmock_call_instance->Expected_fd, &fd, sizeof(RKHFilter));
  cmock_call_instance->IgnoreArg_fd = 0;
  memcpy(&cmock_call_instance->Expected_slot, &slot, sizeof(RKH_TRC_FSLOT));
  cmock_call_instance->IgnoreArg_slot = 0;
  memcpy(&cmock_call_instance->Expected_mode, &mode, sizeof(rui8_t));
  cmock_call_instance->IgnoreArg_mode = 0;
}

void rkh_trc_symFil_CMockIgnore(void)
{
  Mock.rkh_trc_symFil_IgnoreBool = (int)1;
}

void rkh_trc_symFil_CMockExpect(UNITY_LINE_TYPE cmock_line, RKHFilter fd, RKH_TRC_FSLOT slot, rui8_t mode)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_rkh_trc_symFil_CALL_INSTANCE));
  CMOCK_rkh_trc_symFil_CALL_INSTANCE* cmock_call_instance = (CMOCK_rkh_trc_symFil_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.rkh_trc_symFil_CallInstance = CMock_Guts_MemChain(Mock.rkh_trc_symFil_CallInstance, cmock_guts_index);
  Mock.rkh_trc_symFil_IgnoreBool = (int)0;
  cmock_call_instance->LineNumber = cmock_line;
  CMockExpectParameters_rkh_trc_symFil(cmock_call_instance, fd, slot, mode);
  UNITY_CLR_DETAILS();
}

void rkh_trc_symFil_StubWithCallback(CMOCK_rkh_trc_symFil_CALLBACK Callback)
{
  Mock.rkh_trc_symFil_IgnoreBool = (int)0;
  Mock.rkh_trc_symFil_CallbackFunctionPointer = Callback;
}

void rkh_trc_symFil_CMockIgnoreArg_fd(UNITY_LINE_TYPE cmock_line)
{
  CMOCK_rkh_trc_symFil_CALL_INSTANCE* cmock_call_instance = (CMOCK_rkh_trc_symFil_CALL_INSTANCE*)CMock_Guts_GetAddressFor(CMock_Guts_MemEndOfChain(Mock.rkh_trc_symFil_CallInstance));
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringIgnPreExp);
  cmock_call_instance->IgnoreArg_fd = 1;
}

void rkh_trc_symFil_CMockIgnoreArg_slot(UNITY_LINE_TYPE cmock_line)
{
  CMOCK_rkh_trc_symFil_CALL_INSTANCE* cmock_call_instance = (CMOCK_rkh_trc_symFil_CALL_INSTANCE*)CMock_Guts_GetAddressFor(CMock_Guts_MemEndOfChain(Mock.rkh_trc_symFil_CallInstance));
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringIgnPreExp);
  cmock_call_instance->IgnoreArg_slot = 1;
}

void rkh_trc_symFil_CMockIgnoreArg_mode(UNITY_LINE_TYPE cmock_line)
{
  CMOCK_rkh_trc_symFil_CALL_INSTANCE* cmock_call_instance = (CMOCK_rkh_trc_symFil_CALL_INSTANCE*)CMock_Guts_GetAddressFor(CMock_Guts_MemEndOfChain(Mock.rkh_trc_symFil_CallInstance));
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringIgnPreExp);
  cmock_call_instance->IgnoreArg_mode = 1;
}

rbool_t rkh_trc_symFil_isoff(RKHFilter fd, RKH_TRC_FSLOT slot)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  CMOCK_rkh_trc_symFil_isoff_CALL_INSTANCE* cmock_call_instance;
  UNITY_SET_DETAIL(CMockString_rkh_trc_symFil_isoff);
  cmock_call_instance = (CMOCK_rkh_trc_symFil_isoff_CALL_INSTANCE*)CMock_Guts_GetAddressFor(Mock.rkh_trc_symFil_isoff_CallInstance);
  Mock.rkh_trc_symFil_isoff_CallInstance = CMock_Guts_MemNext(Mock.rkh_trc_symFil_isoff_CallInstance);
  if (Mock.rkh_trc_symFil_isoff_IgnoreBool)
  {
    UNITY_CLR_DETAILS();
    if (cmock_call_instance == NULL)
      return Mock.rkh_trc_symFil_isoff_FinalReturn;
    memcpy(&Mock.rkh_trc_symFil_isoff_FinalReturn, &cmock_call_instance->ReturnVal, sizeof(rbool_t));
    return cmock_call_instance->ReturnVal;
  }
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringCalledMore);
  cmock_line = cmock_call_instance->LineNumber;
  if (!cmock_call_instance->IgnoreArg_fd)
  {
    UNITY_SET_DETAILS(CMockString_rkh_trc_symFil_isoff,CMockString_fd);
    UNITY_TEST_ASSERT_EQUAL_MEMORY((void*)(&cmock_call_instance->Expected_fd), (void*)(&fd), sizeof(RKHFilter), cmock_line, CMockStringMismatch);
  }
  if (!cmock_call_instance->IgnoreArg_slot)
  {
    UNITY_SET_DETAILS(CMockString_rkh_trc_symFil_isoff,CMockString_slot);
    UNITY_TEST_ASSERT_EQUAL_MEMORY((void*)(&cmock_call_instance->Expected_slot), (void*)(&slot), sizeof(RKH_TRC_FSLOT), cmock_line, CMockStringMismatch);
  }
  if (Mock.rkh_trc_symFil_isoff_CallbackFunctionPointer != NULL)
  {
    cmock_call_instance->ReturnVal = Mock.rkh_trc_symFil_isoff_CallbackFunctionPointer(fd, slot, Mock.rkh_trc_symFil_isoff_CallbackCalls++);
  }
  UNITY_CLR_DETAILS();
  return cmock_call_instance->ReturnVal;
}

void CMockExpectParameters_rkh_trc_symFil_isoff(CMOCK_rkh_trc_symFil_isoff_CALL_INSTANCE* cmock_call_instance, RKHFilter fd, RKH_TRC_FSLOT slot)
{
  memcpy(&cmock_call_instance->Expected_fd, &fd, sizeof(RKHFilter));
  cmock_call_instance->IgnoreArg_fd = 0;
  memcpy(&cmock_call_instance->Expected_slot, &slot, sizeof(RKH_TRC_FSLOT));
  cmock_call_instance->IgnoreArg_slot = 0;
}

void rkh_trc_symFil_isoff_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line, rbool_t cmock_to_return)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_rkh_trc_symFil_isoff_CALL_INSTANCE));
  CMOCK_rkh_trc_symFil_isoff_CALL_INSTANCE* cmock_call_instance = (CMOCK_rkh_trc_symFil_isoff_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.rkh_trc_symFil_isoff_CallInstance = CMock_Guts_MemChain(Mock.rkh_trc_symFil_isoff_CallInstance, cmock_guts_index);
  Mock.rkh_trc_symFil_isoff_IgnoreBool = (int)0;
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->ReturnVal = cmock_to_return;
  Mock.rkh_trc_symFil_isoff_IgnoreBool = (int)1;
}

void rkh_trc_symFil_isoff_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, RKHFilter fd, RKH_TRC_FSLOT slot, rbool_t cmock_to_return)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_rkh_trc_symFil_isoff_CALL_INSTANCE));
  CMOCK_rkh_trc_symFil_isoff_CALL_INSTANCE* cmock_call_instance = (CMOCK_rkh_trc_symFil_isoff_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.rkh_trc_symFil_isoff_CallInstance = CMock_Guts_MemChain(Mock.rkh_trc_symFil_isoff_CallInstance, cmock_guts_index);
  Mock.rkh_trc_symFil_isoff_IgnoreBool = (int)0;
  cmock_call_instance->LineNumber = cmock_line;
  CMockExpectParameters_rkh_trc_symFil_isoff(cmock_call_instance, fd, slot);
  memcpy(&cmock_call_instance->ReturnVal, &cmock_to_return, sizeof(rbool_t));
  UNITY_CLR_DETAILS();
}

void rkh_trc_symFil_isoff_StubWithCallback(CMOCK_rkh_trc_symFil_isoff_CALLBACK Callback)
{
  Mock.rkh_trc_symFil_isoff_IgnoreBool = (int)0;
  Mock.rkh_trc_symFil_isoff_CallbackFunctionPointer = Callback;
}

void rkh_trc_symFil_isoff_CMockIgnoreArg_fd(UNITY_LINE_TYPE cmock_line)
{
  CMOCK_rkh_trc_symFil_isoff_CALL_INSTANCE* cmock_call_instance = (CMOCK_rkh_trc_symFil_isoff_CALL_INSTANCE*)CMock_Guts_GetAddressFor(CMock_Guts_MemEndOfChain(Mock.rkh_trc_symFil_isoff_CallInstance));
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringIgnPreExp);
  cmock_call_instance->IgnoreArg_fd = 1;
}

void rkh_trc_symFil_isoff_CMockIgnoreArg_slot(UNITY_LINE_TYPE cmock_line)
{
  CMOCK_rkh_trc_symFil_isoff_CALL_INSTANCE* cmock_call_instance = (CMOCK_rkh_trc_symFil_isoff_CALL_INSTANCE*)CMock_Guts_GetAddressFor(CMock_Guts_MemEndOfChain(Mock.rkh_trc_symFil_isoff_CallInstance));
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringIgnPreExp);
  cmock_call_instance->IgnoreArg_slot = 1;
}

void rkh_trc_filter_get(RKH_FilterTbl* outFilterTbl)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  CMOCK_rkh_trc_filter_get_CALL_INSTANCE* cmock_call_instance;
  UNITY_SET_DETAIL(CMockString_rkh_trc_filter_get);
  cmock_call_instance = (CMOCK_rkh_trc_filter_get_CALL_INSTANCE*)CMock_Guts_GetAddressFor(Mock.rkh_trc_filter_get_CallInstance);
  Mock.rkh_trc_filter_get_CallInstance = CMock_Guts_MemNext(Mock.rkh_trc_filter_get_CallInstance);
  if (Mock.rkh_trc_filter_get_IgnoreBool)
  {
    UNITY_CLR_DETAILS();
    return;
  }
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringCalledMore);
  cmock_line = cmock_call_instance->LineNumber;
  if (!cmock_call_instance->IgnoreArg_outFilterTbl)
  {
    UNITY_SET_DETAILS(CMockString_rkh_trc_filter_get,CMockString_outFilterTbl);
    UNITY_TEST_ASSERT_EQUAL_PTR(cmock_call_instance->Expected_outFilterTbl, outFilterTbl, cmock_line, CMockStringMismatch);
  }
  if (Mock.rkh_trc_filter_get_CallbackFunctionPointer != NULL)
  {
    Mock.rkh_trc_filter_get_CallbackFunctionPointer(outFilterTbl, Mock.rkh_trc_filter_get_CallbackCalls++);
  }
  UNITY_CLR_DETAILS();
}

void CMockExpectParameters_rkh_trc_filter_get(CMOCK_rkh_trc_filter_get_CALL_INSTANCE* cmock_call_instance, RKH_FilterTbl* outFilterTbl)
{
  cmock_call_instance->Expected_outFilterTbl = outFilterTbl;
  cmock_call_instance->IgnoreArg_outFilterTbl = 0;
}

void rkh_trc_filter_get_CMockIgnore(void)
{
  Mock.rkh_trc_filter_get_IgnoreBool = (int)1;
}

void rkh_trc_filter_get_CMockExpect(UNITY_LINE_TYPE cmock_line, RKH_FilterTbl* outFilterTbl)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_rkh_trc_filter_get_CALL_INSTANCE));
  CMOCK_rkh_trc_filter_get_CALL_INSTANCE* cmock_call_instance = (CMOCK_rkh_trc_filter_get_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.rkh_trc_filter_get_CallInstance = CMock_Guts_MemChain(Mock.rkh_trc_filter_get_CallInstance, cmock_guts_index);
  Mock.rkh_trc_filter_get_IgnoreBool = (int)0;
  cmock_call_instance->LineNumber = cmock_line;
  CMockExpectParameters_rkh_trc_filter_get(cmock_call_instance, outFilterTbl);
  UNITY_CLR_DETAILS();
}

void rkh_trc_filter_get_StubWithCallback(CMOCK_rkh_trc_filter_get_CALLBACK Callback)
{
  Mock.rkh_trc_filter_get_IgnoreBool = (int)0;
  Mock.rkh_trc_filter_get_CallbackFunctionPointer = Callback;
}

void rkh_trc_filter_get_CMockIgnoreArg_outFilterTbl(UNITY_LINE_TYPE cmock_line)
{
  CMOCK_rkh_trc_filter_get_CALL_INSTANCE* cmock_call_instance = (CMOCK_rkh_trc_filter_get_CALL_INSTANCE*)CMock_Guts_GetAddressFor(CMock_Guts_MemEndOfChain(Mock.rkh_trc_filter_get_CallInstance));
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringIgnPreExp);
  cmock_call_instance->IgnoreArg_outFilterTbl = 1;
}

