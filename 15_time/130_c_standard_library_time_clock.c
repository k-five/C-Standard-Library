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
//  clock_t clock( void )
//  Returns the number of clock ticks elapsed since the program
//  was launched. To get the number of seconds used by the CPU
//  you will need to divide by CLOCK_PER_SEC.
//  On a 32 bit system where CLOKC_PER_SEC equals 10,000,000 this
//  function will return the same value approximately every 72 minutes.



#include <stdio.h>
#include <time.h>

//#include <string.h>
//#include <stdlib.h>
//#include <errno.h>
//#include <dirent.h>
//#include <unistd.h>



int main( ){

    clock_t start = 0.0, end = 0.0 , total = 0.0 ;

    start = clock();
    printf( "starting of the program: %ld\n", start );

    printf( "going to scan a big loop, and start time: %ld\n", start );
    for( int index = 0; index < 10000000; ++index );
    end = clock();

    printf( "end of the big loop, %ld\n", end );

    total = ( double )( end - start );
    printf( "total time taken by CPU: %ld\n", total );



return 0;}

/* output

starting of the program: 690
going to scan a big loop, and start time: 690
end of the big loop, 36040
total time taken by CPU: 35350

Process returned 0 (0x0)   execution time : 0.051 s
Press ENTER to continue.




*/
