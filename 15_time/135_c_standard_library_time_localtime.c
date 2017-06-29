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
//  struct tm* localtime( const time_t* timer )
//  Uses the time pointed by 'timer' to fill 'tm' structure
//  with the values that represent the corresponding local time.
//  The value of 'timer' in broken up into the structure 'tm' and
//  expressed in the local time zone.



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
    info = localtime( &raw_time );
    puts( asctime( info ) );




return 0;}

/* output

Tue Feb 28 13:11:04 2017


Process returned 0 (0x0)   execution time : 0.005 s
Press ENTER to continue.



*/
