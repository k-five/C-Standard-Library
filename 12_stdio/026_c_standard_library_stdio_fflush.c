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

//  int fflush( FILE* stream )
//  flushes the output stream buffer of a stream
//
//  returns a zero value on success. If an error occurs
//  EOF is returned and the error indicator is set( i.e. feof )

#include <stdio.h>
#include <errno.h>
#include <unistd.h>

int main(){

    char buffer[ 512 ];

    memset( buffer, '\0', sizeof( buffer ) );

    fprintf( stdout, "going to set full buffering on\n" );
    setvbuf( stdout, buffer, _IOFBF, 512 );

    fprintf( stdout, "this is tutorialspoint.com\n" );
    fprintf( stdout, "this output will go the buffer\n" );
    fprintf( stdout, "------------------------------\n" );
    fflush( stdout );

    fprintf( stdout, "and this will appear when program\n" );
    fprintf( stdout, "will come after sleeping 3 minutes\n" );
    sleep( 3 );

return 0;}

/* output

going to set full buffering on
this is tutorialspoint.com
this output will go the buffer
------------------------------
and this will appear when program
will come after sleeping 3 minutes


*/










