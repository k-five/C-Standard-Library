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


    char* ptr;

    while( 1 ){
        ptr = tmpnam( NULL );
        printf( "temporary filename 1: %s\n", ptr );
        sleep( 1 );
    }


return 0;}

/* output

temporary filename 1: /tmp/filefrUbqR
temporary filename 1: /tmp/fileDCkMwk
temporary filename 1: /tmp/fileXidoPP
temporary filename 1: /tmp/fileVgK1jn
temporary filename 1: /tmp/file7bfN0W
temporary filename 1: /tmp/filebggATy
temporary filename 1: /tmp/fileLSGuYc
temporary filename 1: /tmp/fileHUTvfT
temporary filename 1: /tmp/file111CIB
temporary filename 1: /tmp/filefBNPnm
temporary filename 1: /tmp/fileJJ93e9
temporary filename 1: /tmp/filePcjmiY
temporary filename 1: /tmp/file9JZFxP
temporary filename 1: /tmp/filebPq1YI
temporary filename 1: /tmp/fileNn4uCE
temporary filename 1: /tmp/fileBAa0rC
temporary filename 1: /tmp/file70xAtC
temporary filename 1: /tmp/fileNP7hHE
temporary filename 1: /tmp/filephK16I

*/










