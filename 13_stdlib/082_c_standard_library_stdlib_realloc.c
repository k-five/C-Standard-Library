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
/// 13 stdlib.h
//
//  realloc( void* ptr, size_t size )
//
//  Attempts to resize the memory block pointed to by 'str' that
//  was previously allocated with a call to 'malloc' or 'calloc'.

#include <stdio.h>
#include <stdlib.h>

//#include <errno.h>
#include <string.h>
//#include <dirent.h>
//#include <unistd.h>

int main(){

    char* c_string;

    // initial memory allocation
    c_string = ( char* )malloc( 20 );
    strcpy( c_string, "how are you today?" );

    printf( "c_string: %s, its address: %p\n", c_string, c_string );

    // reallocation memory
    c_string = ( char* ) realloc( c_string, 30 );  // from 15 to be 30
    strcat( c_string, " I am fine." );
    printf( "c_string: %s, its address: %p\n", c_string, c_string );

    // deallocating the allocated memory
    free( c_string );

return 0;}

/* output

c_string: how are you today?, its address: 0x9542008
c_string: how are you today? I am fine., its address: 0x9542428

Process returned 0 (0x0)   execution time : 0.005 s
Press ENTER to continue.



*/










