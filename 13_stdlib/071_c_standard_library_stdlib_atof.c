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
//  double atof( const char* str )
//
//  Converts the string argument 'str' to a floating-point number( type double )

#include <stdio.h>
#include <stdlib.h>

//#include <errno.h>
//#include <string.h>
//#include <dirent.h>
//#include <unistd.h>

int main(){

    const char* str = "23.432343";
    float f = atof( str );

    printf( "str:\t%s\nf:\t%f\n", str, f );


return 0;}

/* output

str:    23.432343
f:      23.432343


*/










