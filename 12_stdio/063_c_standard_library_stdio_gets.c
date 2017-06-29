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

//  gets( char* str )
//
//  Reads a line from 'stdin' and stores in into the string pointed to by
//  str. It stops when either the newline characters is read,
//                            the end-of-file is reached.

#include <stdio.h>

//#include <errno.h>
//#include <string.h>
//#include <dirent.h>
//#include <unistd.h>

int main(){

    char buffer[ 100 ];

    printf( "Enter a sentence please: " );
    gets( buffer ); // by default reads form the stdin

    printf( "okay, you entered: ");
    puts( buffer );              // by default write to stdout

return 0;}

/* output

Enter a sentence please: how are you today?
okay, you entered: how are you today?


*/










