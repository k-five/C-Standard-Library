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

//  void setbuf( FILE* stream, char* buffer )
//
//  Defines how a stream should be buffered. This function should be called
//  once the file associated with the stream has already been opened, but
// before any input or output operator has taken place.

#include <stdio.h>


//#include <string.h>
//#include <dirent.h>
//#include <unistd.h>

int main(  ){

    char buffer[ BUFSIZ ];

    setbuf( stdout, buffer );
    puts( "This is a simple c program." );

    fflush( stdout );



return 0;}

/* output
This is a simple c program.



*/










