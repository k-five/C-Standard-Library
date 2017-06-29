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
//  size_t strspn( const char* str1, const char* str2 )
//  Calculates the length of the initial segment of 'str1'
//  which consists entirely of characters in 'str2'.


#include <stdio.h>
#include <string.h>
//#include <stdlib.h>

//#include <errno.h>
//#include <dirent.h>
//#include <unistd.h>



int main( ){

    const char* string_1 = "ABCEFGH1234";
    const char* string_2 = "ABCD";

    const int length = strspn( string_1, string_2 );

    printf( "length of initial segment matching is: %d\n", length );    // ABC == 3

return 0;}

/* output

length of initial segment matching is: 3

Process returned 0 (0x0)   execution time : 0.005 s
Press ENTER to continue.



*/
