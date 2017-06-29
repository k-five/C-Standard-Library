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
/// 12. stdio.h

//  getchar( void )
//
//  Gets a characters ( an unsigned char ) from stdin.
//  This is equivalent to 'getc' with stdin as its argument.


#include <stdio.h>

//#include <errno.h>
//#include <string.h>
//#include <dirent.h>
//#include <unistd.h>

int main(){

    // it also read the Enter!

    printf( "Enter a character please: " );
    const char chr = getchar(); // by default read from stdin

    printf( "okay, you entered: ");
    putchar( chr);              // by default write to stdout

return 0;}

/* output

Enter a character please: D
okay, you entered: D
Process returned 0 (0x0)   execution time : 1.698 s
Press ENTER to continue.



*/










