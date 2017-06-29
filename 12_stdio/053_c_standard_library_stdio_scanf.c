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

//  scanf( const char* format, ... )
//
//  Reads formatted input form stdin.



#include <stdio.h>

//#include <errno.h>
//#include <string.h>
//#include <dirent.h>
//#include <unistd.h>

int main(){

    char name[ 20 ];
    int  age;

    printf( "Enter your name: " );
    scanf( "%s", name );

    printf( "Enter your age: " );
    scanf( "%d", &age );

    printf( "Your name is: %s, and you have %d old\n", name, age );

return 0;}

/* output
Enter your name: Shakib
Enter your age: 30
Your name is: Shakib, and you have 30 old


*/










