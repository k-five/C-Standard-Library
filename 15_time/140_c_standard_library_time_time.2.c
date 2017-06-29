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
//  time_t time( time_t* timeer )
//  Returns the time since the Epoch ( 00:00:00 UTC January 1, 1970 ),
//  measured in 'timers'. If 'timers' is not NULLt, the return value
//  is also stored in variable 'timers'.

#include <stdio.h>
#include <time.h>


//#include <string.h>
//#include <stdlib.h>
//#include <errno.h>
//#include <dirent.h>
//#include <unistd.h>



int main( ){

    time_t raw_time;// not use NULL then | = time( NULL ); // returns measured seconds since Epoch with NULL
    time( &raw_time );
    printf( "%d\n", raw_time );

return 0;}

/* output

1488358507

Process returned 0 (0x0)   execution time : 0.005 s
Press ENTER to continue.




*/
