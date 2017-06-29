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
/// 13 stdlib.h
//
//  div_t div( int number, int denom )
//
//  Divides number ( numberator ) by denom ( denominator )

#include <stdio.h>
#include <stdlib.h>

//#include <errno.h>
//#include <string.h>
//#include <dirent.h>
//#include <unistd.h>


int main(){

    div_t output;

    output = div( 27, 4 );
    printf( "quotient  part of( 27 / 4 ) = %d\n", output.quot );
    printf( "remainder part of( 27 / 4 ) = %d\n", output.rem );

    output = div( 23, 12 );
    printf( "quotient  part of( 23 / 12 ) = %d\n", output.quot );
    printf( "remainder part of( 23 / 12 ) = %d\n", output.rem );


return 0;}

/* output

quotient  part of( 27 / 4 ) = 6
remainder part of( 27 / 4 ) = 3
quotient  part of( 23 / 12 ) = 1
remainder part of( 23 / 12 ) = 11

Process returned 0 (0x0)   execution time : 0.006 s
Press ENTER to continue.

*/
