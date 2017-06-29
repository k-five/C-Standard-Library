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
/// 14. string.h
//  char* strerror( int errnum )
//  Searches an internal array for the error number 'errnum' and
//  returns a pointer to an error message string. The error string
//  produced by 'strerror' depend on the developing platform and
//  compiler.


#include <stdio.h>
#include <string.h>
//#include <stdlib.h>

#include <errno.h>
//#include <dirent.h>
//#include <unistd.h>



int main( ){

    FILE* r_stream = fopen( "no_file", "r" );
    if( r_stream == NULL ){
        printf( "error: %s\n", strerror( errno ) );
    }

return 0;}

/* output

error: No such file or directory

Process returned 0 (0x0)   execution time : 0.005 s
Press ENTER to continue.



*/
