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

//  fputc( int char, FILE* stream )
//
//  Writes a characters ( an unsigned char ) specified by the argument 'char'
//  to the specified stream and advances the position indicator for the stream.

#include <stdio.h>

//#include <errno.h>
//#include <string.h>
//#include <dirent.h>
//#include <unistd.h>

int main(){

    FILE* w_stream = fopen( "file_12", "w+" );
    if( w_stream == NULL ){
        perror( "Cannot open the file!" );
        return -1;
    }

    for( size_t chr = 33; chr < 100; ++chr ){
        fputc( chr, w_stream );
    }
    fputc( '\n', w_stream );

    fclose( w_stream );

return 0;}

/* output

 c_standard_library   cat file_12
!"#$%&'()*+,-./0123456789:;<=>?@ABCDEFGHIJKLMNOPQRSTUVWXYZ[\]^_`abc

*/










