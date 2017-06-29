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
/// 05 limit.h
//  The macros defined in this header, limits the values
//  of various variables type like: char, int and long.



#include <stdio.h>
#include <limits.h>

int main(){

    printf( "the number of bits in a byte %d\n", CHAR_BIT );
    printf( "the minimum value of SIGNED CHAR == %d\n", SCHAR_MIN );

return 0;}

/* output

the number of bits in a byte 8
the minimum value of SIGNED CHAR == -128


*/










