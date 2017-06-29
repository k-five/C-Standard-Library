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

//  int unget( int char, FILE* stream )
//
//  Pushes the character 'char' (an unsigned char) onto the specified
//  stream so that the this is available for the next read operation.

#include <stdio.h>

//#include <errno.h>
//#include <string.h>
//#include <dirent.h>
//#include <unistd.h>

int main(){

    FILE* r_stream = fopen( "file_13", "r" );
    if( r_stream == NULL ){
        perror( "cannot oped the file\n" );
        return -1;
    }

    /// It did not work!
//    size_t ch = '\0';
//    while( ! feof( r_stream ) ){
//
//        ch = getc( r_stream );
//
//        if( ch == 'M' ){
//           ungetc( '+', r_stream );
//        } else {
//            ungetc( ch, r_stream );
//        }
//
//    }

    char buffer[ 100 ];
    fgets( buffer, 100, r_stream );
    fputs( buffer, stdout );

return 0;}

/* output



*/










