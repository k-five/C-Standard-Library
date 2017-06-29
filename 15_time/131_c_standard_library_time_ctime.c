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
//  char* ctime( const time_t* timer )
//  Returns a string representing the local-time based on
//  the argument 'timer'.



#include <stdio.h>
#include <time.h>

//#include <string.h>
//#include <stdlib.h>
//#include <errno.h>
//#include <dirent.h>
//#include <unistd.h>



int main( ){

    time_t today;
    printf("today: %s\n", ctime( &today ) );    // 1955

    time( &today );
    printf("today: %s\n", ctime( &today ) );    // 1955
return 0;}

/* output

today: Wed Nov  6 06:21:08 1935

today: Tue Feb 28 12:43:41 2017


Process returned 0 (0x0)   execution time : 0.006 s
Press ENTER to continue.



*/
