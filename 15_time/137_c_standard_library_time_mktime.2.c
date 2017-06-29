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
//  time_t mktime( struct tm* time_ptr )
//  Converts the structure pointed to by 'time_ptr' into a time_t
//  value according to the local time zone.


#include <stdio.h>
#include <time.h>


//#include <string.h>
//#include <stdlib.h>
//#include <errno.h>
//#include <dirent.h>
//#include <unistd.h>



int main( ){

    int result;
    struct tm info;

    info.tm_year = 2017 - 1900;
    info.tm_mon  = 4;
    info.tm_mday = 28;
    info.tm_hour = 2;
    info.tm_min  = 26;
    info.tm_sec  = 33;

    result = mktime( &info );   // reruns a time_t object or -1 for failure

    time_t now = time( NULL );

    printf( "time_t info: %s\n", asctime( &info ) );
    printf( "time_t now:  %s\n", ctime( & now ) );


return 0;}

/* output

time_t info: Sun May 28 02:26:33 2017

time_t now:  Tue Feb 28 14:30:19 2017


Process returned 0 (0x0)   execution time : 0.005 s
Press ENTER to continue.


*/
