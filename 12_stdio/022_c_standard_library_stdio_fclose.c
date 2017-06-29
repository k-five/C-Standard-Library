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

//  fclose( FILE* stream )
//  Close the stream

#include <stdio.h>
#include <errno.h>

int main(){

    FILE*   write_stream = fopen( "file_1", "w" );

    fprintf( write_stream, "how are you today?\n" );
    fprintf( write_stream, "%s", "how are you today?\n" );
    fclose( write_stream );



return 0;}

/* output



*/










