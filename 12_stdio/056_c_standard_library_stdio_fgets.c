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

//  fgets( char* str, int n, FILE* stream )
//
//  Reads a line from a specific stream and stores it
//  into the string pointed to by 'str'. It stops when
//  either ( n - 1 ) characters are read, the newline
//  character is read,or the end-of-file is reached,
//  whichever comes first.


#include <stdio.h>

//#include <errno.h>
//#include <string.h>
//#include <dirent.h>
//#include <unistd.h>

int main(){

    FILE* r_stream = fopen( "file_7", "r" );
    if( r_stream == NULL ){
        perror( "Cannot open the file!" );
        return -1;
    }

    char buffer[ 100 ];

    while( fgets( buffer, 100, r_stream ) )
        printf( "\033[0;32m%s\033[m", buffer );

return 0;}

/* output

a test for fsetpos()
override the file_7


*/










