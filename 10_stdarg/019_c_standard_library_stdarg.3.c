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
/// 10. stdarg.h

//  The stdarg.h header defines a variable type 'va_list' and three macros
//  which can be used to get the arguments in a function when the number of
//  arguments are not known i.e. variable number of argument.

// variable
//      va_list: This is a type suitable for holding information
//      needed by they three macros: va_start(), va_arg(), va_end().


#include <stdio.h>
#include <stdarg.h>

int find_max( int, ... );

int main(){

    printf( "max of 1,4,5,0,8,2 is: %d\n", find_max( 6, 1, 4, 5, 0, 8, 2 ) );
    printf( "max of 1,4,5,20,8,2 is: %d\n", find_max( 6, 1, 4, 5, 20, 8, 2 ) );
    printf( "max of 1,4,53,20,8,2 is: %d\n", find_max( 6, 1, 4, 53, 20, 8, 2 ) );

return 0;}

int find_max( int size_of_arg, ... ){

    int max = -1;
    va_list first;

    va_start( first, size_of_arg );

    int max_temp;
    for( int index = 0; index < size_of_arg; ++index ){
        max_temp = va_arg( first, int );
        if( max < max_temp ){
            max = max_temp;
        }

    }

    va_end( first );

    return max;
}

/* output

max of 1,4,5,0,8,2 is: 8
max of 1,4,5,20,8,2 is: 20
max of 1,4,53,20,8,2 is: 53


*/










