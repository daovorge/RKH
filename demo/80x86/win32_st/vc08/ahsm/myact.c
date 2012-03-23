/*
 *	myact.c
 */


#include <stdio.h>
#include "rkh.h"
#include "my.h"
#include "myevt.h"
#include "rkhtim.h"


#define MY_TICK			1000
#define CMY( s )		(( MYSM_T* )(s))


RKHT_T my_timer;


/*
 *	Defines HSM init function
 */

void 
my_init( const struct rkhsma_t *sma )
{
	CMY( sma )->x = CMY( sma )->y = 0;
	rkh_tim_init( &my_timer, TOUT, 0 );
}


/*
 *	Defines state entry functions
 */


void
set_x_1( const struct rkhsma_t *sma )
{
	CMY( sma )->x = 1;
}


void
set_x_2( const struct rkhsma_t *sma )
{
	CMY( sma )->x = 2;
}


void
set_x_3( const struct rkhsma_t *sma )
{
	CMY( sma )->x = 3;
}


void
set_y_0( const struct rkhsma_t *sma )
{
	CMY( sma )->y = 0;
}


/*
 *	Defines state exit functions
 */

void 
dummy_exit( const struct rkhsma_t *sma )
{
}


void 
clean_exit( const struct rkhsma_t *sma )
{
	rkh_tim_stop( &my_timer );
}


/*
 *	Defines state preprocessor functions
 */



/*
 *	Defines transition action functions
 */


void
set_y_2( const struct rkhsma_t *sma, RKHEVT_T *pe )
{
	CMY( sma )->y = 2;
}


void
set_y_1( const struct rkhsma_t *sma, RKHEVT_T *pe )
{
	CMY( sma )->y = 1;
}


void
dummy_act( const struct rkhsma_t *sma, RKHEVT_T *pe )
{
}


void
show_data( const struct rkhsma_t *sma, RKHEVT_T *pe )
{
}


void 
terminate( const struct rkhsma_t *sma, RKHEVT_T *pe )
{
	rkh_exit();
}


void 
start_timer( const struct rkhsma_t *sma, RKHEVT_T *pe )
{
	rkh_tim_oneshot( &my_timer, sma, MY_TICK );
}


void 
stop_timer( const struct rkhsma_t *sma, RKHEVT_T *pe )
{
	rkh_tim_stop( &my_timer );
}


void 
gen_events( const struct rkhsma_t *sma, RKHEVT_T *pe )
{
	MYEVT_T *e;

	e = RKH_ALLOC_EVENT( MYEVT_T, SIX );
	e = RKH_ALLOC_EVENT( MYEVT_T, SIX );
	e = RKH_ALLOC_EVENT( MYEVT_T, SIX );
	e->ts = ( rkhui16_t )rand();
	rkh_sma_post_fifo( my, ( RKHEVT_T* )e );
	rkh_sma_post_fifo( my, ( RKHEVT_T* )e );
	rkh_sma_post_fifo( my, ( RKHEVT_T* )e );
}


/*
 *	Defines branch's guards
 */


HUInt
y0( const struct rkhsma_t *sma, RKHEVT_T *pe )
{
	return CMY( sma )->y == 0 ? RKH_GTRUE : RKH_GFALSE;
}


HUInt
y1( const struct rkhsma_t *sma, RKHEVT_T *pe )
{
	return CMY( sma )->y == 1 ? RKH_GTRUE : RKH_GFALSE;
}


HUInt
y2( const struct rkhsma_t *sma, RKHEVT_T *pe )
{
	return CMY( sma )->y == 2 ? RKH_GTRUE : RKH_GFALSE;
}


HUInt
x1( const struct rkhsma_t *sma, RKHEVT_T *pe )
{
	return CMY( sma )->x == 1 ? RKH_GTRUE : RKH_GFALSE;
}


HUInt
x2_or_x3( const struct rkhsma_t *sma, RKHEVT_T *pe )
{
	return CMY( sma )->x == 2 || CMY( sma )->x == 3 ? RKH_GTRUE : RKH_GFALSE;
}


/*
 *	Defines guard functions
 */


HUInt
x_equal_1( const struct rkhsma_t *sma, RKHEVT_T *pe )
{
	return CMY( sma )->x == 1 ? RKH_GTRUE : RKH_GFALSE;
}
