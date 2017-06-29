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


int main(){

    // the following example shows the usage of pow() function

    printf( "value 5.0 ^ 3 = %lf\n", pow( 5.0, 3 ) );
    printf( "value 5.8 ^ 8.4 = %lf\n", pow( 5.8, 8.4 ) );

return 0;}

/* output

value 5.0 ^ 3 = 125.000000
value 5.8 ^ 8.4 = 2586992.358716

*/










