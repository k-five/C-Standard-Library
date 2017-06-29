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
//  char* strstr( const char* haystack, const char* needle )
//  Finds the first occurrence of the substring 'needle' in the
//  string 'haystack'. The terminating '\0' character are not compared.


#include <stdio.h>
#include <string.h>
//#include <stdlib.h>

//#include <errno.h>
//#include <dirent.h>
//#include <unistd.h>



int main( ){

    const char* haystack = "at home at work at school at park at garden";
    const char* needle   = "at";

    char* result = NULL;

    while( ( result = strstr( haystack, needle ) ) ){
        puts( result );
        result += strlen( needle );
        haystack = result;
    }








return 0;}

/* output

at home at work at school at park at garden
at work at school at park at garden
at school at park at garden
at park at garden
at garden

Process returned 0 (0x0)   execution time : 0.004 s
Press ENTER to continue.

*/
