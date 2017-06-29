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
//  char* strncpy( char* destination, const char* source, )
//  Copies up to N character form the string pointed to, by 'source'
//  to 'destination'. In a case where the length of 'source' is less
//  then of N, then remainder of 'destination' will be padded with null bytes.


#include <stdio.h>
#include <string.h>
//#include <stdlib.h>

//#include <errno.h>
//#include <dirent.h>
//#include <unistd.h>



int main( ){

    char source      [ 30 ];
    char destination [ 10 ];

    memset( destination, '\0', 10 );
    strcpy( source, "abcdefghijklmnopqrstuvwxyz" );
    strncpy( destination, source , 9 ); // okay
//    strncpy( destination, source , 10 ); // overflow

    puts( destination );


return 0;}

/* output
abcdefghi

Process returned 0 (0x0)   execution time : 0.005 s
Press ENTER to continue.



*/
