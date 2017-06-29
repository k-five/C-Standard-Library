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

//  char* tmpnam( char* str )
//
//  Generates and returns a valid temporary filename, which does not exist.
//  if 'str' is null then it simply returns the tmp file name.

#include <stdio.h>


//#include <string.h>
//#include <dirent.h>
#include <unistd.h>

int main(  ){

    char buffer[ L_tmpnam ];
    char* ptr;

    tmpnam( buffer );
    printf( "temporary filename 1: %s\n", buffer );

    ptr = tmpnam( NULL );
    printf( "temporary filename 1: %s\n", ptr );


return 0;}

/* output

temporary filename 1: /tmp/file72jbh8
temporary filename 1: /tmp/file0A55Qi


*/










