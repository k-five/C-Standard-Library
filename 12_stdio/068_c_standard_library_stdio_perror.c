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

//  void perror( const char* str )
//
//  Prints a descriptive error message to stderr. First string
//  str is printed, followed by a colon then a space.


#include <stdio.h>

//#include <errno.h>
//#include <string.h>
//#include <dirent.h>
//#include <unistd.h>

int main(){

    FILE* r_stream = fopen( "nothing", "r" );
    if( r_stream == NULL ){
        perror( "cannot opened the file" );
        return -1;
    }
    fclose( r_stream );

return 0;}

/* output

cannot opened the file: No such file or directory

*/










