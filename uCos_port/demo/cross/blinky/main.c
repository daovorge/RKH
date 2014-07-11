/*
 * main.c
 */


#include "rkh.h"
#include "rkhtrc.h"
#include "bsp.h"
#include "bky.h"
#include "bkyact.h"


#define QSTO_SIZE			4

static RKH_EVT_T *qsto[ QSTO_SIZE ];
extern RKH_TMR_T bkytim;


int
main( int argc, char *argv[] )
{
	/* invoke the rkh_fwk_init() function */
	bsp_init( argc, argv );

	/* send objects to trazer */
	RKH_TR_FWK_AO( blinky );
	RKH_TR_FWK_QUEUE( &blinky->equeue );
	RKH_TR_FWK_STATE( blinky, &led_on );
	RKH_TR_FWK_STATE( blinky, &led_off );
	RKH_TR_FWK_TIMER( &bkytim );

	/* send signals to trazer */
	RKH_TR_FWK_SIG( TIMEOUT );

	rkh_sma_activate( blinky, (const RKH_EVT_T **)qsto, QSTO_SIZE, CV(0), 0 );
	rkh_fwk_enter();

	RKH_TRC_CLOSE();
	return 0;
}
