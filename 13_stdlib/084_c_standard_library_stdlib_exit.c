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
/// 13 stdlib.h
//
//  void exit( int status )
//
//  Terminates the calling process immediately.
//  Any open file descriptors belonging to the
//  process are closed and any children of the
//  inherited by process 1, init, and the process
//  parent is sent a SIGCHLD signal.

#include <stdio.h>
#include <stdlib.h>

//#include <errno.h>
#include <string.h>
//#include <dirent.h>
//#include <unistd.h>

int main(){

    printf( "start of the program...\n" );
    printf( "exiting of the program...\n" );
    exit( 0 );

    printf( "end of the program\n" );

return 0;}

/* output

start of the program...
exiting of the program...

Process returned 0 (0x0)   execution time : 0.006 s
Press ENTER to continue.



*/










