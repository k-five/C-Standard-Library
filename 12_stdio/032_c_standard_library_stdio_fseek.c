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

    FILE* wplus_stream = fopen( "file_5", "w+" );

    if( wplus_stream == NULL ) puts( strerror( errno ) );

    fputs( "this text is going into the file_5, that's it!", wplus_stream );

    fseek( wplus_stream, 10, SEEK_SET );
    fputs( "[whence: SEEK_SET: 10]this text is going into the file_5, that's it!", wplus_stream );
    fclose( wplus_stream );

return 0;}

/* output

this text [whence: SEEK_SET: 10]this text is going into the file_5, that's it!

*/










