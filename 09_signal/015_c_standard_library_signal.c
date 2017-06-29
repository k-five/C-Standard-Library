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
/// 07. signal.h

//  The signal.h header file defines a variable type 'sig_atomic_t',
//  two function calls, and several macros to handle different signals
//  reported duration a program's exception.

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <signal.h>

void sighandler( int );

int main(){

    signal( SIGINT, sighandler );

    while( 1 ){
        printf( "going to sleep for a second...\n" );
        sleep( 1 );
    }

return 0;}

void sighandler( int sig_num ){
    printf( "caught signal %d, coming out...\n", sig_num );
    exit ( 1 );
}
/* output exit with Ctrl + C

going to sleep for a second...
going to sleep for a second...
going to sleep for a second...
going to sleep for a second...
going to sleep for a second...
going to sleep for a second...
going to sleep for a second...
^Ccaught signal 2, coming out...

Process returned -1 (0xFFFFFFFF)   execution time : 6.396 s
Press ENTER to continue.


*/










