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

//  fgetc( FILE* stream )
//
//  Gets the next character ( an unsigned char ) form the specific
//  stream and advances the position indicator for the steam.



#include <stdio.h>

//#include <errno.h>
//#include <string.h>
//#include <dirent.h>
//#include <unistd.h>

int main(){

    FILE* r_stream = fopen( "file_10", "r" );
    if( r_stream == NULL ){
        perror( "Cannot open the file!" );
        return -1;
    }

    size_t c = '\0'; // char c = '\0'; is possible as well

    while( ! feof( r_stream ) ){
        putchar( c );
        c = fgetc( r_stream );
    }

return 0;}

/* output

this is just one argument 10

*/










