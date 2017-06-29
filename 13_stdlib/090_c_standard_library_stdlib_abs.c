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
//  int abs( int value )
//
//  Returns the absolute value of int value


#include <stdio.h>
#include <stdlib.h>

//#include <errno.h>
//#include <string.h>
//#include <dirent.h>
//#include <unistd.h>


int main(){

    printf( "before abs() %d and after abs() %d", -3, abs( -3 ) );

return 0;}

/* output
before abs() -3 and after abs() 3
Process returned 0 (0x0)   execution time : 0.003 s
Press ENTER to continue.


*/
