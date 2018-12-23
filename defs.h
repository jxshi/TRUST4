#ifndef _LSONG_DEFS_HEADER
#define _LSONG_DEFS_HEADER

#include <stdint.h>

extern char nucToNum[26] ; 
extern char numToNuc[26] ;

#define MAX(x,y) (((x)>(y))?(x):(y))
#define MIN(x,y) (((x)<(y))?(x):(y))
#define ABS(x) (((x)>(0))?(x):(-(x)))

typedef uint32_t index_t ; 

struct _pair
{
	int a, b ;
} ;

/*struct _pair_b64
{
	int a ;
	uint64_t b ;
} ;*/

#endif
