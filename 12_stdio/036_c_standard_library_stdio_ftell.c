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

//  long int ftell( FILE* stream )
//  Returns the current file position of the given stream.


#include <stdio.h>
#include <errno.h>

//#include <string.h>
//#include <dirent.h>
//#include <unistd.h>

int main(  ){

    FILE* r_stream = fopen( "file_7", "r" );
    if( errno ){    // errno == 0 means there is no error
        perror( strerror( errno ) );
    }

    fseek( r_stream, 0, SEEK_END );
    size_t length_of_file = ftell( r_stream );
    fclose( r_stream );

    printf( "total numbers of bytes in the file is: %d\n", length_of_file );    // 41


return 0;}

/* output



*/










