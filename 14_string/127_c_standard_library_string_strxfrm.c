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
//  size_t strxfrm( char* destination, const char* source, size_t N )
//  Transforms the first N characters of the string 'source' into
//  current locale and place them in the string 'destination'.


#include <stdio.h>
#include <string.h>
//#include <stdlib.h>

//#include <errno.h>
//#include <dirent.h>
//#include <unistd.h>



int main( ){

    char      source[ 20 ];
    char destination[ 10 ];

    strcpy( source, "how are you today?" );
    size_t length = strxfrm( destination, source, 9 );

    puts( destination );

return 0;}

/* output


how are y

Process returned 0 (0x0)   execution time : 0.005 s
Press ENTER to continue.



*/
