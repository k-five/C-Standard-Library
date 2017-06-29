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

//  FILE *fopen( const char* filename, char char* mode );
//  Opens the filename pointed to, by filename using the given mode

//  MODE
//  "r"     Opens a file for reading. The file must exist.
//  "w"     Creates an empty file for writing. If a file with the same name already exists, its content is erased and the file is considered as a new empty file
//  "a"     Appends to a file. Writing operations, append data at the end of the file. The file is created if it does not exist.
//  "r+"    Opens a file to update both reading and writing. The file must exist.
//  "w+"    Creates an empty file for both reading and writing.
//  "a+"    Opens a file for reading and appending.


#include <stdio.h>
#include <errno.h>
//#include <unistd.h>

int main(){

    FILE* r_stream = fopen( "file_2", "r" );

    int chr = 0;

//    for( ; !feof( r_stream ); chr = fgetc( r_stream ) ){
//        printf( "%c", chr );
//    }
//
//
    while( ! feof( r_stream ) ){
        printf( "%c", chr );
        chr = fgetc( r_stream );
    }
    fclose( r_stream );


return 0;}

/* output



*/










