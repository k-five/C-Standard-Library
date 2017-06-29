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

//  size_t fread( void* ptr, size_t size, size_t number_element_byte, FILE* stream )
//  Reads data from the given stream into the array pointed to, by ptr

//  returns the total number of elements successfully read as a size_t object,
//  which is an integral data type.
//  If this number differs from the number_element_byte parameter, then either
//  an error had occurred or the End Of File was reached.

#include <stdio.h>
#include <errno.h>
#include <string.h>
//#include <unistd.h>

int main(){

    FILE* wr_stream;
    char array[] = "how are you today?";
    char buffer[ 20 ];

    // open file for both reading and writing
    wr_stream = fopen( "file_3", "w+" );

    // write data to the file
    fwrite( array, strlen( array ) + 1, 1, wr_stream );

    // seek to the beginning of the file
    fseek( wr_stream, SEEK_SET, 0 );

    // read and display data
    fread( buffer, strlen( array ) + 1, 1, wr_stream );
    printf( "%s\n", buffer );
    fclose( wr_stream );




return 0;}

/* output

how are you today?

*/










