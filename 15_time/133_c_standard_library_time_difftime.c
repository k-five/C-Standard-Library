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
//  double difftime( time_t time_1, time_t time_2 )
//  Returns the difference of seconds between time_1 and time_2
//  i.e ( time_1 - time_2 ).
//  The times re specified in calendar time, which represents the
//  time elapsed since the Epoch ( 00:00:00 on January 1, 1970,
//                                 Coordinated Universal Time ) or UTC



#include <stdio.h>
#include <time.h>
#include <unistd.h>

//#include <string.h>
//#include <stdlib.h>
//#include <errno.h>
//#include <dirent.h>
//#include <unistd.h>



int main( ){

    time_t start, end;
    double result; // difference time

    printf( "starting of the program...\n" );
    time( &start ); // record the time

    printf( "sleeping for 3 seconds...\n" );
    sleep( 3 );

    time( &end );   // record the time

    result = difftime( end, start );

    printf( "the program take the %lf seconds\n", result );

return 0;}

/* output

starting of the program...
sleeping for 3 seconds...
the program take the 3.000000 seconds

Process returned 0 (0x0)   execution time : 3.005 s
Press ENTER to continue.



*/
