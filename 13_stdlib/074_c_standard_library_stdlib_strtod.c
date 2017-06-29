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
//  double strtod( const char* str, char** endptr )
//
//  Converts the string pointed to by the argument 'str'
//  to a floating-point number( type double ). If 'endptr'
//  is not NULL, a pointer to the character after the last
//  character used in the conversion is stored in the location
//  referencing by 'endptr'.

#include <stdio.h>
#include <stdlib.h>

//#include <errno.h>
//#include <string.h>
//#include <dirent.h>
//#include <unistd.h>

int main(){

    char string[ 20 ] = "234.432 and a string";
    char* sptr;

    double result = strtod( string, &sptr );

    printf( "double result: %lf\n", result );
    printf( "the rest of the string: %s\n", sptr );


return 0;}

/* output

double result: 234.432000
the rest of the string:  and a string

*/










