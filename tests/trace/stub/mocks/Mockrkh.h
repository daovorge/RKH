/* AUTOGENERATED FILE. DO NOT EDIT. */
#ifndef _MOCKRKH_H
#define _MOCKRKH_H

#include "rkh.h"

/* Ignore the following warnings, since we are copying code */
#if defined(__GNUC__) && !defined(__ICC) && !defined(__TMS470__)
#if !defined(__clang__)
#pragma GCC diagnostic ignored "-Wpragmas"
#endif
#pragma GCC diagnostic ignored "-Wunknown-pragmas"
#pragma GCC diagnostic ignored "-Wduplicate-decl-specifier"
#endif

void Mockrkh_Init(void);
void Mockrkh_Destroy(void);
void Mockrkh_Verify(void);




#define rkh_fwk_init_Ignore() rkh_fwk_init_CMockIgnore()
void rkh_fwk_init_CMockIgnore(void);
#define rkh_fwk_init_Expect() rkh_fwk_init_CMockExpect(__LINE__)
void rkh_fwk_init_CMockExpect(UNITY_LINE_TYPE cmock_line);
#define rkh_fwk_enter_Ignore() rkh_fwk_enter_CMockIgnore()
void rkh_fwk_enter_CMockIgnore(void);
#define rkh_fwk_enter_Expect() rkh_fwk_enter_CMockExpect(__LINE__)
void rkh_fwk_enter_CMockExpect(UNITY_LINE_TYPE cmock_line);
#define rkh_fwk_exit_Ignore() rkh_fwk_exit_CMockIgnore()
void rkh_fwk_exit_CMockIgnore(void);
#define rkh_fwk_exit_Expect() rkh_fwk_exit_CMockExpect(__LINE__)
void rkh_fwk_exit_CMockExpect(UNITY_LINE_TYPE cmock_line);
#define rkh_tmr_tick_Ignore() rkh_tmr_tick_CMockIgnore()
void rkh_tmr_tick_CMockIgnore(void);
#define rkh_tmr_tick_Expect(sender) rkh_tmr_tick_CMockExpect(__LINE__, sender)
void rkh_tmr_tick_CMockExpect(UNITY_LINE_TYPE cmock_line, const void* const sender);
#define rkh_tmr_tick_IgnoreArg_sender() rkh_tmr_tick_CMockIgnoreArg_sender(__LINE__)
void rkh_tmr_tick_CMockIgnoreArg_sender(UNITY_LINE_TYPE cmock_line);
#define rkh_fwk_epool_register_Ignore() rkh_fwk_epool_register_CMockIgnore()
void rkh_fwk_epool_register_CMockIgnore(void);
#define rkh_fwk_epool_register_Expect(sstart, ssize, esize) rkh_fwk_epool_register_CMockExpect(__LINE__, sstart, ssize, esize)
void rkh_fwk_epool_register_CMockExpect(UNITY_LINE_TYPE cmock_line, void* sstart, rui32_t ssize, RKH_ES_T esize);
#define rkh_fwk_epool_register_IgnoreArg_sstart() rkh_fwk_epool_register_CMockIgnoreArg_sstart(__LINE__)
void rkh_fwk_epool_register_CMockIgnoreArg_sstart(UNITY_LINE_TYPE cmock_line);
#define rkh_fwk_epool_register_IgnoreArg_ssize() rkh_fwk_epool_register_CMockIgnoreArg_ssize(__LINE__)
void rkh_fwk_epool_register_CMockIgnoreArg_ssize(UNITY_LINE_TYPE cmock_line);
#define rkh_fwk_epool_register_IgnoreArg_esize() rkh_fwk_epool_register_CMockIgnoreArg_esize(__LINE__)
void rkh_fwk_epool_register_CMockIgnoreArg_esize(UNITY_LINE_TYPE cmock_line);
#define rkh_fwk_ae_IgnoreAndReturn(cmock_retval) rkh_fwk_ae_CMockIgnoreAndReturn(__LINE__, cmock_retval)
void rkh_fwk_ae_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line, RKH_EVT_T* cmock_to_return);
#define rkh_fwk_ae_ExpectAndReturn(esize, e, sender, cmock_retval) rkh_fwk_ae_CMockExpectAndReturn(__LINE__, esize, e, sender, cmock_retval)
void rkh_fwk_ae_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, RKH_ES_T esize, RKH_SIG_T e, const void* const sender, RKH_EVT_T* cmock_to_return);
#define rkh_fwk_ae_IgnoreArg_esize() rkh_fwk_ae_CMockIgnoreArg_esize(__LINE__)
void rkh_fwk_ae_CMockIgnoreArg_esize(UNITY_LINE_TYPE cmock_line);
#define rkh_fwk_ae_IgnoreArg_e() rkh_fwk_ae_CMockIgnoreArg_e(__LINE__)
void rkh_fwk_ae_CMockIgnoreArg_e(UNITY_LINE_TYPE cmock_line);
#define rkh_fwk_ae_IgnoreArg_sender() rkh_fwk_ae_CMockIgnoreArg_sender(__LINE__)
void rkh_fwk_ae_CMockIgnoreArg_sender(UNITY_LINE_TYPE cmock_line);
#define rkh_fwk_gc_Ignore() rkh_fwk_gc_CMockIgnore()
void rkh_fwk_gc_CMockIgnore(void);
#define rkh_fwk_gc_Expect(e, sender) rkh_fwk_gc_CMockExpect(__LINE__, e, sender)
void rkh_fwk_gc_CMockExpect(UNITY_LINE_TYPE cmock_line, RKH_EVT_T* e, const void* const sender);
#define rkh_fwk_gc_IgnoreArg_e() rkh_fwk_gc_CMockIgnoreArg_e(__LINE__)
void rkh_fwk_gc_CMockIgnoreArg_e(UNITY_LINE_TYPE cmock_line);
#define rkh_fwk_gc_IgnoreArg_sender() rkh_fwk_gc_CMockIgnoreArg_sender(__LINE__)
void rkh_fwk_gc_CMockIgnoreArg_sender(UNITY_LINE_TYPE cmock_line);
#define rkh_fwk_reserve_Ignore() rkh_fwk_reserve_CMockIgnore()
void rkh_fwk_reserve_CMockIgnore(void);
#define rkh_fwk_reserve_Expect(e) rkh_fwk_reserve_CMockExpect(__LINE__, e)
void rkh_fwk_reserve_CMockExpect(UNITY_LINE_TYPE cmock_line, RKH_EVT_T* e);
#define rkh_fwk_reserve_IgnoreArg_e() rkh_fwk_reserve_CMockIgnoreArg_e(__LINE__)
void rkh_fwk_reserve_CMockIgnoreArg_e(UNITY_LINE_TYPE cmock_line);
#define rkh_hook_dispatch_Ignore() rkh_hook_dispatch_CMockIgnore()
void rkh_hook_dispatch_CMockIgnore(void);
#define rkh_hook_dispatch_Expect(me, e) rkh_hook_dispatch_CMockExpect(__LINE__, me, e)
void rkh_hook_dispatch_CMockExpect(UNITY_LINE_TYPE cmock_line, RKH_SMA_T* me, RKH_EVT_T* e);
#define rkh_hook_dispatch_IgnoreArg_me() rkh_hook_dispatch_CMockIgnoreArg_me(__LINE__)
void rkh_hook_dispatch_CMockIgnoreArg_me(UNITY_LINE_TYPE cmock_line);
#define rkh_hook_dispatch_IgnoreArg_e() rkh_hook_dispatch_CMockIgnoreArg_e(__LINE__)
void rkh_hook_dispatch_CMockIgnoreArg_e(UNITY_LINE_TYPE cmock_line);
#define rkh_hook_signal_Ignore() rkh_hook_signal_CMockIgnore()
void rkh_hook_signal_CMockIgnore(void);
#define rkh_hook_signal_Expect(e) rkh_hook_signal_CMockExpect(__LINE__, e)
void rkh_hook_signal_CMockExpect(UNITY_LINE_TYPE cmock_line, RKH_EVT_T* e);
#define rkh_hook_signal_IgnoreArg_e() rkh_hook_signal_CMockIgnoreArg_e(__LINE__)
void rkh_hook_signal_CMockIgnoreArg_e(UNITY_LINE_TYPE cmock_line);
#define rkh_hook_timeout_Ignore() rkh_hook_timeout_CMockIgnore()
void rkh_hook_timeout_CMockIgnore(void);
#define rkh_hook_timeout_Expect(t) rkh_hook_timeout_CMockExpect(__LINE__, t)
void rkh_hook_timeout_CMockExpect(UNITY_LINE_TYPE cmock_line, const void* t);
#define rkh_hook_timeout_IgnoreArg_t() rkh_hook_timeout_CMockIgnoreArg_t(__LINE__)
void rkh_hook_timeout_CMockIgnoreArg_t(UNITY_LINE_TYPE cmock_line);
#define rkh_hook_start_Ignore() rkh_hook_start_CMockIgnore()
void rkh_hook_start_CMockIgnore(void);
#define rkh_hook_start_Expect() rkh_hook_start_CMockExpect(__LINE__)
void rkh_hook_start_CMockExpect(UNITY_LINE_TYPE cmock_line);
#define rkh_hook_exit_Ignore() rkh_hook_exit_CMockIgnore()
void rkh_hook_exit_CMockIgnore(void);
#define rkh_hook_exit_Expect() rkh_hook_exit_CMockExpect(__LINE__)
void rkh_hook_exit_CMockExpect(UNITY_LINE_TYPE cmock_line);
#define rkh_hook_idle_Ignore() rkh_hook_idle_CMockIgnore()
void rkh_hook_idle_CMockIgnore(void);
#define rkh_hook_idle_Expect() rkh_hook_idle_CMockExpect(__LINE__)
void rkh_hook_idle_CMockExpect(UNITY_LINE_TYPE cmock_line);
#define rkh_hook_timetick_Ignore() rkh_hook_timetick_CMockIgnore()
void rkh_hook_timetick_CMockIgnore(void);
#define rkh_hook_timetick_Expect() rkh_hook_timetick_CMockExpect(__LINE__)
void rkh_hook_timetick_CMockExpect(UNITY_LINE_TYPE cmock_line);
#define rkh_hook_putTrcEvt_Ignore() rkh_hook_putTrcEvt_CMockIgnore()
void rkh_hook_putTrcEvt_CMockIgnore(void);
#define rkh_hook_putTrcEvt_Expect() rkh_hook_putTrcEvt_CMockExpect(__LINE__)
void rkh_hook_putTrcEvt_CMockExpect(UNITY_LINE_TYPE cmock_line);
#define rkh_trc_open_Ignore() rkh_trc_open_CMockIgnore()
void rkh_trc_open_CMockIgnore(void);
#define rkh_trc_open_Expect() rkh_trc_open_CMockExpect(__LINE__)
void rkh_trc_open_CMockExpect(UNITY_LINE_TYPE cmock_line);
#define rkh_trc_close_Ignore() rkh_trc_close_CMockIgnore()
void rkh_trc_close_CMockIgnore(void);
#define rkh_trc_close_Expect() rkh_trc_close_CMockExpect(__LINE__)
void rkh_trc_close_CMockExpect(UNITY_LINE_TYPE cmock_line);
#define rkh_trc_flush_Ignore() rkh_trc_flush_CMockIgnore()
void rkh_trc_flush_CMockIgnore(void);
#define rkh_trc_flush_Expect() rkh_trc_flush_CMockExpect(__LINE__)
void rkh_trc_flush_CMockExpect(UNITY_LINE_TYPE cmock_line);
#define rkh_trc_getts_IgnoreAndReturn(cmock_retval) rkh_trc_getts_CMockIgnoreAndReturn(__LINE__, cmock_retval)
void rkh_trc_getts_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line, RKH_TS_T cmock_to_return);
#define rkh_trc_getts_ExpectAndReturn(cmock_retval) rkh_trc_getts_CMockExpectAndReturn(__LINE__, cmock_retval)
void rkh_trc_getts_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, RKH_TS_T cmock_to_return);

#endif
