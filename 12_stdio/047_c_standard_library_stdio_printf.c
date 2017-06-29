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

//  printf( FILE* stream, const char* format, ... )
//
//  Sends formated output to stdout.



#include <stdio.h>

//#include <errno.h>
//#include <string.h>
//#include <dirent.h>
//#include <unistd.h>

int main(  ){

    for( int chr = 65; chr < 91; ++chr ){
        printf( "ASCII value = %d, == char %c\n", chr, chr );
    }

return 0;}

/* output

ASCII value = 65, == char A
ASCII value = 66, == char B
ASCII value = 67, == char C
ASCII value = 68, == char D
ASCII value = 69, == char E
ASCII value = 70, == char F
ASCII value = 71, == char G
ASCII value = 72, == char H
ASCII value = 73, == char I
ASCII value = 74, == char J
ASCII value = 75, == char K
ASCII value = 76, == char L
ASCII value = 77, == char M
ASCII value = 78, == char N
ASCII value = 79, == char O
ASCII value = 80, == char P
ASCII value = 81, == char Q
ASCII value = 82, == char R
ASCII value = 83, == char S
ASCII value = 84, == char T
ASCII value = 85, == char U
ASCII value = 86, == char V
ASCII value = 87, == char W
ASCII value = 88, == char X
ASCII value = 89, == char Y
ASCII value = 90, == char Z
*/










