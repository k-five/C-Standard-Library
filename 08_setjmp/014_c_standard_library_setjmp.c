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
/// 07. setjmp.h
//
//  The setjmp.h header defines the macro setjmp(), one
//  function longtime(), and one variable jum_buf, for
//  bypassing the normal function call and return discipline.

//  int setjmp( jmp_buf environment )

#include <stdio.h>
#include <stdlib.h>
#include <setjmp.h>


int main(){

    int number;
    jmp_buf env_buffer;

    // save calling environment for longjmp
    number = setjmp( env_buffer );
    if( number != 0 ){
        printf( "Returned from a longjmp() with value == %s\n", number );
        exit( 0 );
    }

    printf( "jump function call\n" );
    jmpfunction( env_buffer );

return 0;}

void jmpfunction( jmp_buf env_buf ){
    longjmp( env_buf, "tutorialspoint.com" );
}

/* output

jump function call
Returned from a longjmp() with value == tutorialspoint.com

*/










