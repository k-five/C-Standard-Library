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
//  void* memchar( const void* str, int c, size_t n )
//  Searches for the first occurrence of the character c
//  in the first n bytes of the string pointed to, by the argument 'str'.

#include <stdio.h>
#include <string.h>

//#include <stdlib.h>
//#include <errno.h>
//#include <dirent.h>
//#include <unistd.h>


int main( ){

    const char string[] = "how are you today? I am fine.";
    char search_for = '?';
    const char* result = NULL;

    result = memchr( string, search_for, strlen( string ) );
    if( result ){ // then:
        printf( "%c was found at %s\n", search_for, result );
        printf( "%c is at index %d\n", search_for, result - string );
        printf( "%c is at index %d\n", string[ result - string ], result - string );
        printf( "length of (%s) is: %d\n", string, strlen( string ) );
        printf( "length of (%s) is: %d\n", result, strlen( result ) );
        printf( "index again, at %d\n", strlen( string ) - strlen( result ) );
    } else {      // otherwise:
        printf( "%c was not found\n", search_for );
    }




return 0;}

/* output


*/
