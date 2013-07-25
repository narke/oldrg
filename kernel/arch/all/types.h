#ifndef _TYPES_H_
#define _TYPES_H_

/**
 * @file types.h
 * @author Konstantin Tcholokachvili
 * @date 2007
 * @license MIT License
 * 
 * Basic types definition
 */

#define NULL ((void*)0)

typedef enum { FALSE=0, TRUE } bool_t;

typedef unsigned long long int  uint64_t;
typedef unsigned long int       uint32_t; 	/* 32 bits unsigned */
typedef unsigned short int      uint16_t; 	/* 16 bits unsigned */
typedef unsigned char           uint8_t;  	/* 8  bits unsigned */
typedef unsigned char           uchar_t;  	/* 8  bits unsigned */

typedef signed long long int    sint64_t;	/* 64 bits signed */
typedef signed long int         sint32_t; 	/* 32 bits signed */
typedef signed short int        sint16_t; 	/* 16 bits signed */
typedef signed char             sint8_t;	/* 8  bits signed */

#endif // _TYPES_H_

