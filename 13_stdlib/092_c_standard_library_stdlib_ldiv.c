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
//  ldiv_t ldiv( long int number, long int denom )
//
//  Divides number ( numberator ) by denom ( denominator )

#include <stdio.h>
#include <stdlib.h>

//#include <errno.h>
//#include <string.h>
//#include <dirent.h>
//#include <unistd.h>


int main(){

    ldiv_t output;

    output = ldiv( 27234L, 42L );
    printf( "quotient  part of( 27234 / 42 ) = %ld\n", output.quot );
    printf( "remainder part of( 27234 / 42 ) = %ld\n", output.rem );


return 0;}

/* output

quotient  part of( 27234 / 42 ) = 648
remainder part of( 27234 / 42 ) = 18

Process returned 0 (0x0)   execution time : 0.005 s
Press ENTER to continue.




*/
