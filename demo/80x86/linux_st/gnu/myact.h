/*
 *	myact.h
 */


#ifndef __MYACT_H__
#define __MYACT_H__


#include "rkh.h"


/*
 *	Defines HSM init function
 */

void my_init( const struct RKH_SMA_T *sma );


/*
 *	Defines state entry functions
 */

void set_x_1( const struct RKH_SMA_T *sma );
void set_x_2( const struct RKH_SMA_T *sma );
void set_x_3( const struct RKH_SMA_T *sma );
void set_y_0( const struct RKH_SMA_T *sma );


/*
 *	Defines state exit functions
 */

void dummy_exit( const struct RKH_SMA_T *sma );


/*
 *	Defines state preprocessor functions
 */



/*
 *	Defines transition action functions
 */

void set_x1( const struct RKH_SMA_T *sma, RKH_EVT_T *pe );
void set_y_2( const struct RKH_SMA_T *sma, RKH_EVT_T *pe );
void set_y_1( const struct RKH_SMA_T *sma, RKH_EVT_T *pe );
void dummy_act( const struct RKH_SMA_T *sma, RKH_EVT_T *pe );
void show_data( const struct RKH_SMA_T *sma, RKH_EVT_T *pe );
void terminate( const struct RKH_SMA_T *sma, RKH_EVT_T *pe );


/*
 *	Defines branch's guards
 */

ruint y_0( const struct RKH_SMA_T *sma, RKH_EVT_T *pe );
ruint y_1( const struct RKH_SMA_T *sma, RKH_EVT_T *pe );
ruint y_2( const struct RKH_SMA_T *sma, RKH_EVT_T *pe );
ruint x1( const struct RKH_SMA_T *sma, RKH_EVT_T *pe );
ruint x2_or_x3( const struct RKH_SMA_T *sma, RKH_EVT_T *pe );


/*
 *	Defines guard functions
 */


#endif
