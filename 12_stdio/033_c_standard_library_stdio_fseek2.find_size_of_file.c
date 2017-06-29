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

//  int fseek( FILE* stream, long int offset, in whence ) [ whence means: from where ]
//  sets the file position of the stream to the given offset

//  SEEK_SET    beginning of file
//  SEEK_CUR    current position of the file
//  SEEK_END    end of file

//  return value:
//  zero if successful, otherwise non-zero value

#include <stdio.h>
#include <errno.h>

//#include <string.h>
//#include <dirent.h>
//#include <unistd.h>

int main(  ){

    FILE* r_stream = fopen( "file_4", "r" );
    if( r_stream == NULL ){
        printf( "cannot open file since: %s\n", strerror( errno ) );
        exit( errno );
    }

    fseek( r_stream, 0, SEEK_SET );
    fseek( r_stream, 0, SEEK_END );
    size_t length_of_file = ftell( r_stream );
    fclose( r_stream );
    printf( "length of file: %d\n", length_of_file ); // 70

return 0;}

/* output



*/










