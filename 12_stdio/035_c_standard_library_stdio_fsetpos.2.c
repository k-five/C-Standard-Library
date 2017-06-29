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

//  int fsetpos( FILE* stream, const fpos_t* pos )
//  Sets the file position of the given stream to the
//  given position. The argument pos is a position
//  given by the function fgetpos.

#include <stdio.h>
//#include <errno.h>

//#include <string.h>
//#include <dirent.h>
//#include <unistd.h>

int main(  ){

    FILE*   wplus_stream = fopen( "file_7", "w+" );
    fpos_t position;
    fputs( "a test for fsetpos()\n", wplus_stream );    // writes to the file_7

    // then gets position
    fgetpos( wplus_stream, &position );     // store the position in the wplus_stream
    fsetpos( wplus_stream, &position );     // return the position again
    fputs( "override the file_7\n", wplus_stream );
    fclose( wplus_stream );


return 0;}

/* output



*/










