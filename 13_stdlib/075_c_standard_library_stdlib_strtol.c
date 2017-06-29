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
//  long int strtol( const char* str, char** endptr, int base )
//
//  Converts the initial part of the string in 'str' at a long int
//  value according to the given base, which must be between 2 and
//  36 inclusive, or be the special value 0.

#include <stdio.h>
#include <stdlib.h>

//#include <errno.h>
//#include <string.h>
//#include <dirent.h>
//#include <unistd.h>

int main(){

    char string[ 30 ] = "1234567890 and a string";
    char* sptr;

    long int result = strtol( string, &sptr, 10 );

    printf( "long int result: %ld\n", result );
    printf( "the rest of the string: %s\n", sptr );


return 0;}

/* output

long int result: 1234567890
the rest of the string:  and a string

Process returned 0 (0x0)   execution time : 0.006 s
Press ENTER to continue.


*/










