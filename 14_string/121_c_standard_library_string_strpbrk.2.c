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

    char* string_1 = "one 1 two 2 three 3 four 4 five 5 six";
    char* string_2 = "12345";  // for breaking down as multi-delimiter

    char* result = NULL;

    while( *string_2 ){
        result = strpbrk( string_1, string_2 );
        puts( result );
        ++string_2;
    }

return 0;}

/* output



*/
