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
/// 02. ctype.h
//  The <ctype.h> header file of the C standard library declare
//  several functions that are useful for testing and mapping
//  characters.

// touuper and tolower

#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(){

    char string[] = "this is a string";
    const size_t length = strlen( string );

    for( short index = 0; index < length; ++index ){
        string[ index ] = toupper( string[ index ] );
    }
    printf( "string: %s\n\n", string );

    for( short index = 0; index < length; ++index ){
        string[ index ] = tolower( string[ index ] );
    }
    printf( "string: %s\n\n", string );




return 0;
}

/* output




*/
