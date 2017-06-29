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
//  unsigned long int strtoul( const char* str, char** endptr, int base )
//
//  Converts the initial part of the string is 'str' to an unsigned long int
//  value according to the given base, which must be between 2 and 36 inclusive
//  or the special value 0.

#include <stdio.h>
#include <stdlib.h>

//#include <errno.h>
//#include <string.h>
//#include <dirent.h>
//#include <unistd.h>

int main(){

    char string[ 30 ] = "1234567 and a string";
    char* sptr;

    unsigned long int result = strtol( string, &sptr, 0 ); // special value 0

    printf( "unsigned long int result: %lu\n", result );
    printf( "the rest of the string: %s\n", sptr );


return 0;}

/* output

unsigned long int result: 1234567
the rest of the string:  and a string

Process returned 0 (0x0)   execution time : 0.005 s
Press ENTER to continue.



*/










