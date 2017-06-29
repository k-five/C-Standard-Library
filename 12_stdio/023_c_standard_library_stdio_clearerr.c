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

//  clearerr( FILE* stream )
//  this function clears the end-of-file and error indicators
//  for the given stream

#include <stdio.h>
#include <errno.h>

int main(){

    // assuming we have a text file "file.txt", which is an empty file,
    // let us compiling and run the program, this will produce an error
    // because we try to read a file which we opened in write only mode

    FILE* w_stream = fopen( "file.txt",  "w" );

    char chr = fgetc( w_stream );   // read a char
    if( ferror( w_stream ) ) puts( "error in reading from file: file.txt" );

    clearerr( w_stream );
    if( ferror( w_stream ) ) puts( "error in reading from file againŝ: file.txt" );

return 0;}

/* output

error in reading from file: file.txt


*/










