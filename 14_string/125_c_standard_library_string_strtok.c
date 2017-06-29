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
/// 14. string.h
//  char* strtok( char* str, const char* delimiter )
//  Breaks the string 'str' into a series of tokens using
//  the delimiter 'delimiter'.


#include <stdio.h>
#include <string.h>
//#include <stdlib.h>

//#include <errno.h>
//#include <dirent.h>
//#include <unistd.h>



int main( ){

    char string[] = "at home at work at school at park at garden";
    const char* delimiter   = "at";

    char* result = strtok( string, delimiter );
    puts( result );

    result = strtok( 0, delimiter );
    puts( result );

    result = strtok( NULL, delimiter );
    puts( result );

return 0;}

/* output

 home
 work
 school

Process returned 0 (0x0)   execution time : 0.005 s
Press ENTER to continue.


*/
