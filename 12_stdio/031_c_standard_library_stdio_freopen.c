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

//  FILE* freopen( const char* filename, const char* mode, FILE* stream )
//  Associates a new 'filename' with the given open stream and the same
//  time close the old fle in the stream.

//  mode: "r", "w", "a", "r+", "w+", "a+"

//  return value: if the file was re-opened successfully, the function
//  returns a pointer to an object identifying the stream or else, null
//  pointer is returned.


#include <stdio.h>
#include <errno.h>
#include <string.h>
//#include <unistd.h>

int main(){

    FILE* wplus_stream;

    printf( "this text is redirect to stdout\n" );

    wplus_stream = freopen( "file_4", "w+", stdout );
    printf( "this text is redirect to file_4 by printf function and also freopen()\n" );

    fclose( wplus_stream );

return 0;}

/* output

this text is redirect to stdout


*/










