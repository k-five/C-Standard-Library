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
/// 12. stdio.h

//  vsprintf( const char* str, const char* format, va_list arg )
//
//  Sends the formatted output to a string using an
//  argument list passed to it.


#include <stdio.h>
#include <stdarg.h>


//#include <errno.h>
//#include <string.h>
//#include <dirent.h>
//#include <unistd.h>

int vsp_function( const char* str, const char* format, ... ){

    va_list args;
    int result = -1;

    va_start( args, format );
    result = vsprintf( str, format, args );
    va_end( args );

    return result;

}

int main(  ){

    char buffer[ 100 ];

    vsp_function( buffer, "%s and %d", "this text goes to the buffer\n", 10 );

    printf( "%s\n", buffer );


return 0;}

/* output

this text goes to the buffer
 and 10



*/










