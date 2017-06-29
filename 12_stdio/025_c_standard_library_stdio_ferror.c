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

//  int ferror( FILE* stream );
//  Tests the error indicator for the given stream

//  returns a non-zero value for any error
//  returns 0 for no error

#include <stdio.h>
#include <errno.h>

int main(){

    FILE* read_stream = fopen( "nofile" , "r" );

    char chr = fgetc( read_stream );
    if( ferror( read_stream ) ){
        puts( "error, when we would try to read from a read-only stream" );
    }

    FILE* write_stream = fopen( "nofile" , "w" );

    chr = fgetc( write_stream );
    if( ferror( write_stream ) ){
        puts( "error, when we would try to read from  write-only stream" );
    }





return 0;}

/* output

error, when we would try to read from  write-only stream


*/










