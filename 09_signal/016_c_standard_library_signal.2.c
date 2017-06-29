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
#include <signal.h>

void signal_catch_function( int );

int main(){

    int ret;

    ret = signal( SIGINT, signal_catch_function );

    if( ret == SIG_ERR ){
        printf( "error: unable to set signal handler\n" );
        exit( 0 );
    }

    printf( "going to raise a signal\n" );
    ret = raise( SIGINT );
    if( ret != 0 ){
        printf( "error: unable to raise SIGINT signal\n" );
        exit( 0 );
    }

    printf( "exiting...\n" );

return 0;}

void signal_catch_function( int signal ){
    printf( "|| signal caught ||\n" );

}

/* output

going to raise a signal
|| signal caught ||
exiting...



*/










