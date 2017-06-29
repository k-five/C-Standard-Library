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

//  int feof( FILE* stream )
//  Tests the end-of-file indicators for the given stream

#include <stdio.h>
#include <errno.h>

int main(){

    FILE* read_stream = fopen( "file_1", "r" );
    if( read_stream == NULL ){
        printf( "Error with 'file_1' since %s", strerror( errno ) );
        exit( errno );
    }

    int chr;
    while( 1 ){
        chr = fgetc( read_stream );
        if( feof( read_stream ) ){
            break;
        }
        printf( "%c", chr );
    }
    fclose( read_stream );




return 0;}

/* output

how are you today?
how are you today?

*/










