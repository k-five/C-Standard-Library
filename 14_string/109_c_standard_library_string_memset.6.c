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
//  void* memset( void* string, int chr, size N )
//  Copies the character 'chr' to the first N characters of
//  the string pointed to, by the argument 'string'.


#include <stdio.h>
#include <string.h>
//#include <stdlib.h>

//#include <errno.h>
//#include <dirent.h>
#include <unistd.h>


int main( ){

    char string[ strlen( "one string two string three string" ) ];

    strcpy( string, "one string two string three string" );
    puts( string );

//    memset( string, '_', 10 );
//    instead of memset

//   if we want to string just by the substitution itself

    char* result = strstr( string, "string" );  // point to that point where the string is began
    // result = string library function;

    int length = strlen( "string" );
    while( length-- ){ // then
        *result = '_';
        ++result;

        // substitute all 'string'
        if( length == 0 && strstr( string, "string" ) ){
            result = strstr( string, "string" );
            length = strlen( "string" );
        }
    }


    puts( string );


//    puts( string );

return 0;}

/* output
one string two string three string
one ______ two ______ three ______

Process returned 0 (0x0)   execution time : 0.002 s
Press ENTER to continue.


*/
