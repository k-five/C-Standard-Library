/*
    The C standard Library review

    01. assert.h
    02. ctype.h
    03. errno.h
        04. float.h
    05. limits.h
    06. locale.h
    07. math.h
    08. setjmp.h
    09. signal.h
    10. stdarg.h
    11. stddef.h
    12. stdio.h
    13. stdlib.h
    14. string.h
    15. time.h
*/
/// 04. float.h
//  This header file contains a set of various platform-dependent constant
//  related to floating point values.

//  S   sing ( + / - )
//  b   base or radix of exponent representation, 2 for binary, 10 for decimal, 16 for hexadecimal, and so on
//  e   exponent, an integer between a minimum e.min and a maximum e.max
//  p   precision, the number of base-b digit in significand




#include <stdio.h>
#include <float.h>

int main(){

    printf( "the maximum value of float = %.10e\n", FLT_MAX );
    printf( "the maximum value of float = %.10e\n", FLT_MIN );

return 0;}

/* output

the maximum value of float = 3.4028234664e+38
the maximum value of float = 1.1754943508e-38


*/










