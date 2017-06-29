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
// void* bsearch( const void* key, const void* base, size_t nitems, size_t size, int (*compare)(const void*,const void*) )
//
// Binary search function. The given list to it, should have been sorted.


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

    int list[] = { 3, 4, 7, 11, 33, 51, 90, 234, 9009 };
    int* result;
    int key = 33;

    result = bsearch( &key, list, 9, sizeof( int ), comfunc );

    if( result == NULL ) printf( "not found\n" );
    else                 printf( "found it %d\n", *result );

return 0;}

/* output

found it 33

Process returned 0 (0x0)   execution time : 0.005 s
Press ENTER to continue.

*/
