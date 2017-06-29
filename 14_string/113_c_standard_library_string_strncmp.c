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
/// 14. string.h
//  int strcmp( const char* str1, const char* str2, size_t N )
//  Compares at most the first N bytes of 'str1' and 'str2'.
//
//  returns:
//  0 for equality
//  bigger that 0 for str1 is bigger than str2
//  less   than 0 for str1 is less   then str2


#define not !
#include <stdio.h>
#include <string.h>
//#include <stdlib.h>

//#include <errno.h>
//#include <dirent.h>
//#include <unistd.h>


int main( ){

    if( not strncmp( "abc_DEF", "abc_ABC", 4 ) ) puts( "both are equal up to abc_" );

return 0;}

/* output


both are equal up to abc_

Process returned 0 (0x0)   execution time : 0.005 s
Press ENTER to continue.

*/
