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
/// 14. string.h
//  char* strpbrk( const char* str1, const char* str2 )
//  Finds the first character in the string 'str1' that matches
//  any character specified in 'str2'. This does not including the
//  terminating null-character.


#include <stdio.h>
#include <string.h>
//#include <stdlib.h>

#include <errno.h>
//#include <dirent.h>
//#include <unistd.h>



int main( ){

    const char string_1[] = "abcdef2abd3jkem4iew";
    const char string_2[] = "34";

    char* result = NULL;

    result = strpbrk( string_1, string_2 );

    if( result ) printf( "first match character: %c and the whole string %s\n", *result, result );
    else         puts( "not found" );

return 0;}

/* output

first match character: 3 and the whole string 3jkem4iew

Process returned 0 (0x0)   execution time : 0.005 s
Press ENTER to continue.


*/
