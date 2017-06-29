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
//  char* getenv( const char* name )
//
//  Searches for the environment string pointed to, by name
//  and returns the associated value to the string.

#include <stdio.h>
#include <stdlib.h>

//#include <errno.h>
//#include <string.h>
//#include <dirent.h>
//#include <unistd.h>

int main(){

    printf( "PATH: %s\n", getenv( "PATH" ) );
    printf( "HOME: %s\n", getenv( "HOME" ) );
    printf( "ROOT: %s\n", getenv( "ROOT" ) );

return 0;}

/* output


PATH: /usr/bin:/usr:/usr/local/sbin:/usr/local/bin:/usr/sbin:/sbin:/bin:/usr/games:/usr/local/games:/snap/bin
HOME: /home/shu
ROOT: (null)


*/










