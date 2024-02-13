/*
 * Platform_Types.h
 *
 *  Created on: Feb 1, 2024
 *      Author: Omar Awad
 */

#ifndef PLATFORM_TYPES_H_
#define PLATFORM_TYPES_H_

#include <stdbool.h>
#include <stdint.h>

/*
 * Platform type and endianess definitions, specific for ARM Cortex-M4F
 */
#define CPU_TYPE						CPU_TYPE_32
#define CPU_BIT_ORDER					LSB_FIRST
#define CPU_BYTE_ORDER					HIGH_BYTE_FIRST

#ifndef _Bool
#define _Bool							unsigned char
#endif

typedef _Bool							boolean;

typedef char							char_t;
typedef int8_t							sint8;// signed char
typedef uint8_t							uint8;// unsigned char
typedef int16_t							sint16;// signed short
typedef uint16_t						uint16;// unsigned short
typedef int32_t							sint32;// signed int
typedef uint32_t						uint32;// unsigned int
typedef int64_t							sint64;// signed long long int
typedef uint64_t						uint64;// unsigned long long int
/*long in 32 bit processors is 4 bytes (same as int) but as we are mostly
 * going to have by max 32 bit processors hence why we typedef long long
 * as it's 8 bytes in 32 bit processors */

typedef volatile int8_t					vint8_t;// signed char
typedef volatile uint8_t				vuint8_t;// unsigned char
typedef volatile int16_t				vint16_t;// signed short
typedef volatile uint16_t				vuint16_t;// unsigned short
typedef volatile int32_t				vint32_t;// signed int
typedef volatile uint32_t				vuint32_t;// unsigned int
typedef volatile sint64					vint64_t;// signed long long int
typedef volatile uint64					vuint64_t;// unsigned long long int

typedef	float							float32;
typedef double							float64;

/*
 * Boolean Values
 */
#ifndef TRUE
#define TRUE 							(boolean)true
#endif

#ifndef FALSE
#define FALSE 				(boolean)false
#endif


#endif /* PLATFORM_TYPES_H_ */
