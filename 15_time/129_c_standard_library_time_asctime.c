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
//  char* asctime( const struct tm* time_ptr )
//  Returns a pointer to a string which represents the day,
//  and the time of the structure 'strcut time_ptr'.
//
// struct tm {
//  int tm_sec;         seconds, range 0 to 59
//  int tm_min;         minutes, range 0 to 59
//  int tm_hour;        hours,   range 0 to 23
//  int tm_mday;        day of the month, range 1 to 31
//  int tm_mon;         month,   range 0 to 11
//  int tm_year;        the  number of years since 1900
//  int tm_wday;        day of the week, range 0 to 6
//  int tm_yday;        day in the year, range 0 to 365
//  int tm_isdst;       daylight saving time
// }
#include <stdio.h>
#include <time.h>

//#include <string.h>
//#include <stdlib.h>
//#include <errno.h>
//#include <dirent.h>
//#include <unistd.h>



int main( ){

    struct tm time;

    time.tm_sec     = 10;
    time.tm_min     = 20;
    time.tm_hour    = 3;
    time.tm_mday    = 23;
    time.tm_mon     = 4;
    time.tm_year    = 117;
    time.tm_wday    = 4;


    puts( asctime( &time ) );

return 0;}

/* output

Thu May 23 03:20:10 2017


Process returned 0 (0x0)   execution time : 0.005 s
Press ENTER to continue.




*/
