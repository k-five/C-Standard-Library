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
//  int memcmp( const char* str1, const char* str2, size_t n )
//  Compares the first 'n'bytes of memory area 'str1' and memory
//  area 'str2'.

#include <stdio.h>
#include <string.h>
//#include <stdlib.h>

//#include <errno.h>
//#include <dirent.h>
//#include <unistd.h>


int main( ){

    const size_t index_size = 10;
    char string_1[ index_size ];
    char string_2[ index_size ];

    int result;

    memcpy( string_1, "abcdefgh", index_size );
    memcpy( string_2, "ABCDEFGH", index_size );

    result = memcmp( string_1, string_2, index_size / 2 );  // 5 first index

    if( result > 0 )      printf( "string_1 is more than string_2\n" );
    else if( result < 0 ) printf( "string_1 is less than string_2\n" );
    else                  printf( "both are equal\n" );

return 0;}

/* output

string_1 is more than string_2

Process returned 0 (0x0)   execution time : 0.005 s
Press ENTER to continue.


*/
