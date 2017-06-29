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

//  vprintf( const char* format, va_list arg )
//
//  Sends the formatted output to the stdout using an
//  argument list passed to it.


#include <stdio.h>
#include <stdarg.h>


//#include <errno.h>
//#include <string.h>
//#include <dirent.h>
//#include <unistd.h>

void write_format( char* format, ... ){

    va_list args;

    va_start( args, format );
    vprintf( format, args );
    va_end( args );

}

int main(  ){

    write_format( "this is just one argument %d\n", 10 );


return 0;}

/* output

this is just one argument 10

*/










