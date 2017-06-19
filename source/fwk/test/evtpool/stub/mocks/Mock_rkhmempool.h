/* AUTOGENERATED FILE. DO NOT EDIT. */
#ifndef _MOCK_RKHMEMPOOL_H
#define _MOCK_RKHMEMPOOL_H

#include "rkhmempool.h"

/* Ignore the following warnings, since we are copying code */
#if defined(__GNUC__) && !defined(__ICC) && !defined(__TMS470__)
#if !defined(__clang__)
#pragma GCC diagnostic ignored "-Wpragmas"
#endif
#pragma GCC diagnostic ignored "-Wunknown-pragmas"
#pragma GCC diagnostic ignored "-Wduplicate-decl-specifier"
#endif

void Mock_rkhmempool_Init(void);
void Mock_rkhmempool_Destroy(void);
void Mock_rkhmempool_Verify(void);




#define rkh_memPool_init_Ignore() rkh_memPool_init_CMockIgnore()
void rkh_memPool_init_CMockIgnore(void);
#define rkh_memPool_init_Expect(mp, sstart, ssize, bsize) rkh_memPool_init_CMockExpect(__LINE__, mp, sstart, ssize, bsize)
void rkh_memPool_init_CMockExpect(UNITY_LINE_TYPE cmock_line, RKH_MEMPOOL_T* mp, void* sstart, rui16_t ssize, RKH_MPBS_T bsize);
typedef void (* CMOCK_rkh_memPool_init_CALLBACK)(RKH_MEMPOOL_T* mp, void* sstart, rui16_t ssize, RKH_MPBS_T bsize, int cmock_num_calls);
void rkh_memPool_init_StubWithCallback(CMOCK_rkh_memPool_init_CALLBACK Callback);
#define rkh_memPool_init_IgnoreArg_mp() rkh_memPool_init_CMockIgnoreArg_mp(__LINE__)
void rkh_memPool_init_CMockIgnoreArg_mp(UNITY_LINE_TYPE cmock_line);
#define rkh_memPool_init_IgnoreArg_sstart() rkh_memPool_init_CMockIgnoreArg_sstart(__LINE__)
void rkh_memPool_init_CMockIgnoreArg_sstart(UNITY_LINE_TYPE cmock_line);
#define rkh_memPool_init_IgnoreArg_ssize() rkh_memPool_init_CMockIgnoreArg_ssize(__LINE__)
void rkh_memPool_init_CMockIgnoreArg_ssize(UNITY_LINE_TYPE cmock_line);
#define rkh_memPool_init_IgnoreArg_bsize() rkh_memPool_init_CMockIgnoreArg_bsize(__LINE__)
void rkh_memPool_init_CMockIgnoreArg_bsize(UNITY_LINE_TYPE cmock_line);
#define rkh_memPool_get_IgnoreAndReturn(cmock_retval) rkh_memPool_get_CMockIgnoreAndReturn(__LINE__, cmock_retval)
void rkh_memPool_get_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line, void* cmock_to_return);
#define rkh_memPool_get_ExpectAndReturn(mp, cmock_retval) rkh_memPool_get_CMockExpectAndReturn(__LINE__, mp, cmock_retval)
void rkh_memPool_get_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, RKH_MEMPOOL_T* mp, void* cmock_to_return);
typedef void* (* CMOCK_rkh_memPool_get_CALLBACK)(RKH_MEMPOOL_T* mp, int cmock_num_calls);
void rkh_memPool_get_StubWithCallback(CMOCK_rkh_memPool_get_CALLBACK Callback);
#define rkh_memPool_get_IgnoreArg_mp() rkh_memPool_get_CMockIgnoreArg_mp(__LINE__)
void rkh_memPool_get_CMockIgnoreArg_mp(UNITY_LINE_TYPE cmock_line);
#define rkh_memPool_put_Ignore() rkh_memPool_put_CMockIgnore()
void rkh_memPool_put_CMockIgnore(void);
#define rkh_memPool_put_Expect(mp, blk) rkh_memPool_put_CMockExpect(__LINE__, mp, blk)
void rkh_memPool_put_CMockExpect(UNITY_LINE_TYPE cmock_line, RKH_MEMPOOL_T* mp, void* blk);
typedef void (* CMOCK_rkh_memPool_put_CALLBACK)(RKH_MEMPOOL_T* mp, void* blk, int cmock_num_calls);
void rkh_memPool_put_StubWithCallback(CMOCK_rkh_memPool_put_CALLBACK Callback);
#define rkh_memPool_put_IgnoreArg_mp() rkh_memPool_put_CMockIgnoreArg_mp(__LINE__)
void rkh_memPool_put_CMockIgnoreArg_mp(UNITY_LINE_TYPE cmock_line);
#define rkh_memPool_put_IgnoreArg_blk() rkh_memPool_put_CMockIgnoreArg_blk(__LINE__)
void rkh_memPool_put_CMockIgnoreArg_blk(UNITY_LINE_TYPE cmock_line);
#define rkh_memPool_get_bsize_IgnoreAndReturn(cmock_retval) rkh_memPool_get_bsize_CMockIgnoreAndReturn(__LINE__, cmock_retval)
void rkh_memPool_get_bsize_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line, RKH_MPBS_T cmock_to_return);
#define rkh_memPool_get_bsize_ExpectAndReturn(mp, cmock_retval) rkh_memPool_get_bsize_CMockExpectAndReturn(__LINE__, mp, cmock_retval)
void rkh_memPool_get_bsize_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, RKH_MEMPOOL_T* mp, RKH_MPBS_T cmock_to_return);
typedef RKH_MPBS_T (* CMOCK_rkh_memPool_get_bsize_CALLBACK)(RKH_MEMPOOL_T* mp, int cmock_num_calls);
void rkh_memPool_get_bsize_StubWithCallback(CMOCK_rkh_memPool_get_bsize_CALLBACK Callback);
#define rkh_memPool_get_bsize_IgnoreArg_mp() rkh_memPool_get_bsize_CMockIgnoreArg_mp(__LINE__)
void rkh_memPool_get_bsize_CMockIgnoreArg_mp(UNITY_LINE_TYPE cmock_line);
#define rkh_memPool_get_nfree_IgnoreAndReturn(cmock_retval) rkh_memPool_get_nfree_CMockIgnoreAndReturn(__LINE__, cmock_retval)
void rkh_memPool_get_nfree_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line, RKH_MPNB_T cmock_to_return);
#define rkh_memPool_get_nfree_ExpectAndReturn(mp, cmock_retval) rkh_memPool_get_nfree_CMockExpectAndReturn(__LINE__, mp, cmock_retval)
void rkh_memPool_get_nfree_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, RKH_MEMPOOL_T* mp, RKH_MPNB_T cmock_to_return);
typedef RKH_MPNB_T (* CMOCK_rkh_memPool_get_nfree_CALLBACK)(RKH_MEMPOOL_T* mp, int cmock_num_calls);
void rkh_memPool_get_nfree_StubWithCallback(CMOCK_rkh_memPool_get_nfree_CALLBACK Callback);
#define rkh_memPool_get_nfree_IgnoreArg_mp() rkh_memPool_get_nfree_CMockIgnoreArg_mp(__LINE__)
void rkh_memPool_get_nfree_CMockIgnoreArg_mp(UNITY_LINE_TYPE cmock_line);
#define rkh_memPool_get_low_wmark_IgnoreAndReturn(cmock_retval) rkh_memPool_get_low_wmark_CMockIgnoreAndReturn(__LINE__, cmock_retval)
void rkh_memPool_get_low_wmark_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line, RKH_MPNB_T cmock_to_return);
#define rkh_memPool_get_low_wmark_ExpectAndReturn(mp, cmock_retval) rkh_memPool_get_low_wmark_CMockExpectAndReturn(__LINE__, mp, cmock_retval)
void rkh_memPool_get_low_wmark_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, RKH_MEMPOOL_T* mp, RKH_MPNB_T cmock_to_return);
typedef RKH_MPNB_T (* CMOCK_rkh_memPool_get_low_wmark_CALLBACK)(RKH_MEMPOOL_T* mp, int cmock_num_calls);
void rkh_memPool_get_low_wmark_StubWithCallback(CMOCK_rkh_memPool_get_low_wmark_CALLBACK Callback);
#define rkh_memPool_get_low_wmark_IgnoreArg_mp() rkh_memPool_get_low_wmark_CMockIgnoreArg_mp(__LINE__)
void rkh_memPool_get_low_wmark_CMockIgnoreArg_mp(UNITY_LINE_TYPE cmock_line);
#define rkh_memPool_get_info_Ignore() rkh_memPool_get_info_CMockIgnore()
void rkh_memPool_get_info_CMockIgnore(void);
#define rkh_memPool_get_info_Expect(mp, mpi) rkh_memPool_get_info_CMockExpect(__LINE__, mp, mpi)
void rkh_memPool_get_info_CMockExpect(UNITY_LINE_TYPE cmock_line, RKH_MEMPOOL_T* mp, RKH_MPI_T* mpi);
typedef void (* CMOCK_rkh_memPool_get_info_CALLBACK)(RKH_MEMPOOL_T* mp, RKH_MPI_T* mpi, int cmock_num_calls);
void rkh_memPool_get_info_StubWithCallback(CMOCK_rkh_memPool_get_info_CALLBACK Callback);
#define rkh_memPool_get_info_IgnoreArg_mp() rkh_memPool_get_info_CMockIgnoreArg_mp(__LINE__)
void rkh_memPool_get_info_CMockIgnoreArg_mp(UNITY_LINE_TYPE cmock_line);
#define rkh_memPool_get_info_IgnoreArg_mpi() rkh_memPool_get_info_CMockIgnoreArg_mpi(__LINE__)
void rkh_memPool_get_info_CMockIgnoreArg_mpi(UNITY_LINE_TYPE cmock_line);
#define rkh_memPool_clear_info_Ignore() rkh_memPool_clear_info_CMockIgnore()
void rkh_memPool_clear_info_CMockIgnore(void);
#define rkh_memPool_clear_info_Expect(mp) rkh_memPool_clear_info_CMockExpect(__LINE__, mp)
void rkh_memPool_clear_info_CMockExpect(UNITY_LINE_TYPE cmock_line, RKH_MEMPOOL_T* mp);
typedef void (* CMOCK_rkh_memPool_clear_info_CALLBACK)(RKH_MEMPOOL_T* mp, int cmock_num_calls);
void rkh_memPool_clear_info_StubWithCallback(CMOCK_rkh_memPool_clear_info_CALLBACK Callback);
#define rkh_memPool_clear_info_IgnoreArg_mp() rkh_memPool_clear_info_CMockIgnoreArg_mp(__LINE__)
void rkh_memPool_clear_info_CMockIgnoreArg_mp(UNITY_LINE_TYPE cmock_line);

#endif