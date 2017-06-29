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
//  void* memcpy( void* string_1, cosnt void* string_2, size_t N )
//  copies N characters form memory are 'string_2' to memory
//  area 'string_1'. ( string_2 to string_2 not opposite )
#include <stdio.h>
#include <string.h>
//#include <stdlib.h>

//#include <errno.h>
//#include <dirent.h>
//#include <unistd.h>


int main( ){

    const char source[] = "how are you today?";
    char destination[ strlen( source ) ];   // it does not have a clean initialization, so may there are some string

    printf( "Before. destination: '%s'\n", destination );
    memcpy( destination, source, strlen( source ) );
    destination[ strlen( source ) ] = '\0';
    printf( "After. destination: '%s'\n", destination );

return 0;}

/* output

Before. destination: '�'
After. destination: 'how are you today?'

Process returned 0 (0x0)   execution time : 0.007 s
Press ENTER to continue.


*/
