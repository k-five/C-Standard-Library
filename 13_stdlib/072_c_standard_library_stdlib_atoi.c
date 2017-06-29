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
//  int atoi( const char* str )
//
//  Converts the string 'str' to an integer type

#include <stdio.h>
#include <stdlib.h>

//#include <errno.h>
//#include <string.h>
//#include <dirent.h>
//#include <unistd.h>

int main(){

    const char* str = "23.432343";
    int i = atoi( str );

    printf( "str:\t%s\ni:\t%d\n", str, i );


return 0;}

/* output

str:    23.432343
i:      23

Process returned 0 (0x0)   execution time : 0.006 s
Press ENTER to continue.


*/










