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

int sum( int, ... );

int main(){

    printf( "sum of 10, 10, and 20         == %d\n", sum( 3, 10, 10, 20 ) );
    printf( "sum of 101, 101, 201, and 201 == %d\n", sum( 4, 101, 101, 201, 201 ) );

return 0;}

int sum( int size_of_arg, ... ){

    int result = 0;
    va_list first;  // type

    va_start( first, size_of_arg );

    for( int index = 0; index < size_of_arg; ++index ){
        result += va_arg( first, int );
    }

    va_end( first );

    return result;
}

/* output

sum of 10, 10, and 20         == 40
sum of 101, 101, 201, and 201 == 604

*/










