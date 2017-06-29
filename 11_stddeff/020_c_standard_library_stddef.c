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
/// 11. stddef.h
//  Defines various variable types and macros.
//
//  ptrdiff_t
//  size_t
//  wchar_t
//  NULL
//  offsefof

#include <stdio.h>
#include <errno.h>
#include <stddef.h>



int main(){

    FILE* input_stream;
    input_stream = fopen( "file", "r" );

    if( input_stream == NULL ){
        printf( "could not open file since, %s\n", strerror( errno ) );
    } else {
        puts( "file was opened successfully" );
    }
    input_stream = fopen( "temp.c", "r" );

    if( input_stream == NULL ){
        printf( "could not open file since, %s\n", strerror( errno ) );
    } else {
        puts( "file was opened successfully" );
    }


return 0;}

/* output

could not open file since, No such file or directory
file was opened successfully


*/










