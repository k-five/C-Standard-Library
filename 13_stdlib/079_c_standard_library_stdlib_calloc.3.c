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
//  void* calloc( size_t number_of_element, size_t size )
//
//  Allocates the requested memory and returns a pointer to it.
//  The difference in 'malloc' and calloc' is that malloc does
//  not set the memory to zero whereas calloc sets allocated
//  memory to zero.

#include <stdio.h>
#include <stdlib.h>

//#include <errno.h>
//#include <string.h>
//#include <dirent.h>
//#include <unistd.h>

int main(){

    int number_of_element = 0;
    int * ptr;

    printf( "Enter number of element to be allocated: " );
    scanf( "%d", &number_of_element );

    ptr = ( int* )calloc( number_of_element, sizeof( int ) );

    printf( "Enter %d number:\n", number_of_element );
    for( size_t index = 0; index < number_of_element; ++index ){
        scanf( "%d", &ptr[ index ] );
    }

    printf( "The entered number are: " );
    for( size_t index = 0; index < number_of_element; ++index ){
        printf( "%d ", ptr[ index ] );
    }

    free( ptr );


return 0;}

/* output

Enter number of element to be allocated: 3
Enter 3 number:
12
13
14
The entered number are: 12 13 14
Process returned 0 (0x0)   execution time : 7.824 s
Press ENTER to continue.



*/










