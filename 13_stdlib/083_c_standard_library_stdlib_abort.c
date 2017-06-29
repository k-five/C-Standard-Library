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
//  void abort( void )
//
//  Aborts the program execution and comes out directly
//  from the place of the call.

#include <stdio.h>
#include <stdlib.h>

//#include <errno.h>
#include <string.h>
//#include <dirent.h>
//#include <unistd.h>

int main(){

    printf( "going to open no_file.\n" );
    FILE* r_stream = fopen( "no_file", "r" );
    if( r_stream == NULL ){
        printf( "going to abort the program\n" );
        abort();
    }

    printf( "going to close no_file\n" );
    fclose( r_stream  );

return 0;}

/* output

going to open no_file.
going to abort the program
Aborted (core dumped)

Process returned 134 (0x86)   execution time : 0.372 s
Press ENTER to continue.




*/










