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
//  qsort( void* base, size_t nitem, size_t size, int (*compare)( const void*, const void* ) )
//
//  quick sort function.


#include <stdio.h>
#include <stdlib.h>

//#include <errno.h>
//#include <string.h>
//#include <dirent.h>
//#include <unistd.h>

int comfunc( const void* A, const void* B ){
    return ( *(int*)A - *(int*)B );         // first cast to int and then dereference it
}

int main(){

    int list[] = { 7, 1, 33, 12, 98, 23, 34, 88, 3, 12 };

    printf( "list, before sort:\n" );
    for( short index = 0; index < 10; ++index ) printf( "%d ", list[ index ] );

    // call the function:
    qsort( list, 10, sizeof( int ), comfunc );
    puts( "" );

    printf( "list, after sort:\n" );
    for( short index = 0; index < 10; ++index ) printf( "%d ", list[ index ] );



return 0;}

/* output

list, before sort:
7 1 33 12 98 23 34 88 3 12
list, after sort:
1 3 7 12 12 23 33 34 88 98
Process returned 0 (0x0)   execution time : 0.006 s
Press ENTER to continue.

*/
