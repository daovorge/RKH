/*
 *	svr.h
 */


#ifndef __SVR_H__
#define __SVR_H__


#include "rkh.h"
#include "scevt.h"
#include "cli.h"


/* Helper macro */
#define CLI_ID( _cp )			((_cp) - RKH_GET_PRIO(CLI(0)))


typedef struct
{
	RKHSMA_T sma;		                                   /* base structure */
	rkhui32_t ntot;		                /* total number of attended requests */
							  /* number of attended requests of every client */
	rkhui32_t ncr[ NUM_CLIENTS ];
} SVR_T;			        /* Active Object derived from RKHSMA_T structure */


/*
 *	Declare HSM.
 */

RKH_SMA_DCLR( svr );


/*
 *	Declare states and pseudostates.
 */

RKH_DCLR_BASIC_STATE	svr_idle, svr_busy, svr_paused;


#endif
