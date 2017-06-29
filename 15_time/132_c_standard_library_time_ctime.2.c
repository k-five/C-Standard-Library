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

    time_t today = time( NULL );
    printf("today: %s\n", ctime( &today ) );    //

return 0;}

/* output
today: Tue Feb 28 12:46:16 2017


Process returned 0 (0x0)   execution time : 0.005 s
Press ENTER to continue.


*/
