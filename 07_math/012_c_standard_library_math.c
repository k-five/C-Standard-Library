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
/// 07. math.h
//  defines various mathematical functions and one macro.
//  All the functions available in this library take 'double'
//  as an argument and returns double as the result.


#include <stdio.h>
#include <math.h>

#define PI 3.1419

int main(){

    double x, ret, val;

    x = 0.9;
    val =  100 / PI;

    ret = acos( x ) * val;
    printf( "the arc consine of %lf is %lf degrees\n", x, ret );

return 0;}

/* output

the arc consine of 0.900000 is 14.355225 degrees



*/










