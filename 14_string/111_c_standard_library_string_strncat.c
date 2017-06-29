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
//  char* strncat( char* destination, char* source, size_t N )
//  Appends the string pointed to by 'source' to the
//  of the string pointed to by 'destination' up to
//  N characters long.


#include <stdio.h>
#include <string.h>
//#include <stdlib.h>

//#include <errno.h>
//#include <dirent.h>
#include <unistd.h>


int main( ){

    char destination[ 40 ];
    char      source[ 40 ];

    strcpy( destination, "Destination" );
    strcpy( source     , " + Source" );

    strncat( destination, source, 4 );  // 4 = ' + S'

    printf( "result: %s\n", destination );

return 0;}

/* output

result: Destination + S

Process returned 0 (0x0)   execution time : 0.004 s
Press ENTER to continue.



*/
