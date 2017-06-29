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
/// 14. time.h
//  struct tm* gmtime( const time_t timer )
//  Uses the value pointed by timer to fill 'tm' structure
//  with the values that represent the corresponding time,
//  expressed in Coordinated Universal Time (UTC) or GMT timezone.



#include <stdio.h>
#include <time.h>
#include <unistd.h>

#define BST +1
#define CCT +8
#define IRS +3.30

//#include <string.h>
//#include <stdlib.h>
//#include <errno.h>
//#include <dirent.h>
//#include <unistd.h>



int main( ){

    time_t raw_time;
    struct tm* info;

    time( &raw_time );

    // getting GMT time:
    info = gmtime( &raw_time );

    printf( "Current world clock:\n" );
    printf( "London: %2d:%2d\n", ( info->tm_hour + BST ) % 24, info->tm_min );
    printf( "China : %2d:%2d\n", ( info->tm_hour + CCT ) % 24, info->tm_min );


return 0;}

/* output

Current world clock:
London: 10:35
China : 17:35

Process returned 0 (0x0)   execution time : 0.005 s
Press ENTER to continue.



*/
