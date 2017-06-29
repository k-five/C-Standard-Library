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

//  getc( FILE* stream )
//
//  Gets the next characters ( an unsigned char ) form the
//  specific stream and advances the position indicator for
//  the stream.


#include <stdio.h>

//#include <errno.h>
//#include <string.h>
//#include <dirent.h>
//#include <unistd.h>

int main(){

    printf( "Enter a character please: " );
    const char chr = getc( stdin );

    printf( "okay, you entered: ");
    putc( chr, stdout );

return 0;}

/* output


Enter a character please: D
okay, you entered: D

*/










