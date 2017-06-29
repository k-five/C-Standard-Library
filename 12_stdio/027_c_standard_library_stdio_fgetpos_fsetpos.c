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

//  int fgetpos( FILE* stream, fpos_t* pos )
//  Gets the current file position of the stream
//  and writes it to pos

//  return: zero on success, otherwise non-zero in case of an error


#include <stdio.h>
#include <errno.h>
//#include <unistd.h>

int main(){

    FILE* wr_stream = fopen( "file_2", "w+" );
    fpos_t stream_pos;

    fgetpos( wr_stream, &stream_pos );
    fputs( "how are you today?", wr_stream );

    fsetpos( wr_stream, &stream_pos );  // this set the pos not get it!
    fputs( "\n\nthis is going to override the previous content\n", wr_stream );
    fclose( wr_stream );

return 0;}

/* output



this is going to override the previous content

*/










