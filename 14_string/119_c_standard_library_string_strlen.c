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
//  size_t strlen( const char* str )
//  Computes the length of the string 'str' up to.,
//  but not including the terminating null character.


#include <stdio.h>
#include <string.h>
//#include <stdlib.h>

#include <errno.h>
//#include <dirent.h>
//#include <unistd.h>



int main( ){

    printf( "length of the string is: %d\n", strlen( "any string" ) );

return 0;}

/* output

length of the string is: 10

Process returned 0 (0x0)   execution time : 0.006 s
Press ENTER to continue.



*/
