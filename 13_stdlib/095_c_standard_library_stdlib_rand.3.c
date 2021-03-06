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
//  int rand( void )
//
//  Returns a pseudo-random number in the range 0 to REAND_MAX.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//#include <errno.h>
//#include <string.h>
//#include <dirent.h>
//#include <unistd.h>


int main(){

    time_t t;

    // initializes random number generator
    srand( ( unsigned ) time( &t ) );

    // generate 5 random number from 0 to 9
    for( int index = 0; index < 5; ++index ) printf( "random number: %d\n", rand() % 10 );

return 0;}

/* output

random number: 4
random number: 3
random number: 9
random number: 4
random number: 7

Process returned 0 (0x0)   execution time : 0.006 s
Press ENTER to continue.

*/
