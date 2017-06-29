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

//  vfprintf( FILE* stream, const char* format, va_list arg )
//
//  Sends the formatted output to a stream using an
//  argument list passed to it.


#include <stdio.h>
#include <stdarg.h>


//#include <errno.h>
//#include <string.h>
//#include <dirent.h>
//#include <unistd.h>

void write_format( FILE* stream, char* format, ... ){

    va_list args;

    va_start( args, format );
    vfprintf( stream, format, args );
    va_end( args );

}

int main(  ){

    FILE* w_stream = fopen( "file_10", "w" );
    if( w_stream ){
        puts( "file was created..." );
    } else {
        exit( -1 );
    }

    write_format( w_stream, "this is just one argument %d\n", 10 );
    fclose( w_stream );

return 0;}

/* output


*/










