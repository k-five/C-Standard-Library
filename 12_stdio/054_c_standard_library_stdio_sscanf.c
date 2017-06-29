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

//  sscanf( const char* str, const char* format, ... )
//
//  Reads formatted input from a string.



#include <stdio.h>

//#include <errno.h>
#include <string.h>
//#include <dirent.h>
//#include <unistd.h>

int main(){

    char question[ 100 ];
    strcpy( question, "how are you today? are you okay?" );

    char first [ 10 ];
    char second[ 10 ];
    char third [ 10 ];
    char fourth[ 10 ];
    sscanf( question, "%s %s %s %s", first, second, third, fourth );

    printf( "we captured: '%s %s %s %s'\n", first, second, third, fourth );

return 0;}

/* output

we captured: 'how are you today?'

*/










