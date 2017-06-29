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

//  int setvbuf( FILE* stream, char* buffer, int mode, size_ts size )
//
//  Defines how a stream should be buffered.
//
// MODE:
//     _IOFBF   full buffering
//     _IOLBF   line buffering
//     _IONBF   no buffering
//
//  return value:
//  zero for success and non-zero otherwise

#include <stdio.h>


//#include <string.h>
//#include <dirent.h>
#include <unistd.h>

int main(  ){

    char buffer[ 1024 ];

    memset( buffer, '\0', sizeof( buffer ) );

    fprintf( stdout, "going to set full buffering on\n" );
    setvbuf( stdout, buffer, _IOFBF, 1024 );

    fprintf( stdout, "This is tutorialspoint.com\n" );
    fprintf( stdout, "This output will go into buffer\n" );
    fflush( stdout );

    fprintf( stdout, "and this will appear when to program\n" );
    fprintf( stdout, "will come after sleeping 3 seconds\n" );
    sleep( 3 );



return 0;}

/* output

going to set full buffering on
This is tutorialspoint.com
This output will go into buffer
and this will appear when to program
will come after sleeping 3 seconds

*/










