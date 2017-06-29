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
//  char* strcpy( char* destination, const char* source )
//  Copies the string pointed to, by 'source' to 'destination'.
//


#define not !
#include <stdio.h>
#include <string.h>
//#include <stdlib.h>

//#include <errno.h>
//#include <dirent.h>
//#include <unistd.h>


int main( ){

    char destination[ 30 ];
    char      source[ 30 ];

    memset( destination, '\0', sizeof( destination ) );
    memset( source     , '\0', sizeof( source ) );

    strcpy( destination, "Destination" );
    strcpy( source     , "Source" );
    puts( destination );
    puts( source );

    strcpy( destination, source );
    puts( destination );

return 0;}

/* output

Destination
Source
Source

Process returned 0 (0x0)   execution time : 0.006 s
Press ENTER to continue.


*/
