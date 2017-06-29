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
//  size_t strcspn( const char* str1, const char* str2 )
//  Calculate the length of the initial segment of 'str1',
//  which consists entirely of characters  not 'str2'.


#include <stdio.h>
#include <string.h>
//#include <stdlib.h>

//#include <errno.h>
//#include <dirent.h>
//#include <unistd.h>



int main( ){

    int length = 0;
    const char string_1[] = "ABCDEF4960910";
    const char string_2[] = "013";

    length = strcspn( string_1, string_2 );

    printf( "first match character is at %d\n", length + 1 );

return 0;}

/* output

first match character is at 10

Process returned 0 (0x0)   execution time : 0.006 s
Press ENTER to continue.



*/
