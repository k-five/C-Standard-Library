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
#include <stdlib.h>

//#include <errno.h>
//#include <dirent.h>
//#include <unistd.h>


int main( ){

    const char string[] = "how are you today? I am fine.";
    char search_for = '?';
    const char* after_match = NULL;

    after_match = memchr( string, search_for, strlen( string ) );

    const size_t SIZE = strlen( string ) - strlen( after_match );
    char before_match[ SIZE ];
    memcpy( before_match, string, SIZE );
    before_match[ SIZE ] = '\0';

    if( after_match ){ // then:
        printf( "before_match: '%s'\n", before_match );
        printf( "match:        '%c'\n", search_for );
        printf( "after_match:  '%s'\n", after_match + sizeof( search_for ) );
    } else {      // otherwise:
        printf( "%c was not found\n", search_for );
    }




return 0;}

/* output

before_match: 'how are you today'
match:        '?'
after_match:  ' I am fine.'

Process returned 0 (0x0)   execution time : 0.004 s
Press ENTER to continue.



*/
