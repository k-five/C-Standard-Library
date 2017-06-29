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

//  void rewind( FILE* stream )
//
//  Sets the file position to the beginning of the file of the given stream.


#include <stdio.h>
#include <errno.h>

//#include <string.h>
//#include <dirent.h>
//#include <unistd.h>

int main(  ){

    FILE* r_stream = fopen( "file_1", "r" );

    char chr = '\0';
    while( ! feof( r_stream ) ){
        putchar( chr );
        chr = fgetc( r_stream );
    }

    // sets the stream position to the beginning
    puts( ".................." );
    rewind( r_stream );
    chr = '\0';
    while( ! feof( r_stream ) ){
            putchar( chr );
            chr = fgetc( r_stream );
        }

return 0;}

/* output


how are you today?
how are you today?
..................
how are you today?
how are you today?


*/










