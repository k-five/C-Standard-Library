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
//  atexit( void ( *func )( void ) )
//
//  Cases the specific function 'func' to be called when the
//  program terminates. You can register your function anywhere
//  you like, but it will be called at the time of the program
//  termination.

#include <stdio.h>
#include <stdlib.h>

//#include <errno.h>
//#include <string.h>
//#include <dirent.h>
//#include <unistd.h>

void end_task(){
    printf( "I am the end task\n" );
}

int main(){

    /* register the termination function */
    atexit( end_task );

    printf( "starting main program...\n" );
    printf( "exiting main program...\n" );

return 0;}

/* output

starting main program...
exiting main program...
I am the end task

Process returned 0 (0x0)   execution time : 0.005 s
Press ENTER to continue.

*/
