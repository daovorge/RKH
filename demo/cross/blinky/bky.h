/*
 *	bky.h
 */


#ifndef __BKY_H__
#define __BKY_H__


#include "rkh.h"


#define LED_OFF_TIME			RKH_TIME_SEC( 2 )
#define LED_ON_TIME				RKH_TIME_SEC( 2 )


/*
 * 	Signals.
 */

enum
{
	TIMEOUT,		/* 'blktim' timeout */
	TERMINATE,		/* press the key escape on the keyboard */
	BKY_NUM_EVENTS
};


typedef struct
{
	RKH_SMA_T sma;	/* base structure */
	rkhui8_t cnt;	/* private member */
} BKYSM_T;			/* SMA derived from RKH_SMA_T structure */

typedef struct BKY_ST_T
{
	RKHROM RKH_SBSC_T base;
	const char *title;
} BKY_ST_T;


/*
 *	Declare HSM.
 */

RKH_SMA_DCLR( blinky );


/*
 *	Declare states and pseudostates.
 */

RKH_DCLR_BASIC_STATE led_off/*, led_on*/;
extern const BKY_ST_T led_on;


#endif