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

//  size_t fwrite( const void* str, size_t size, size_t number_element_of_byte, FILE* stream );
//
//  Writes data from the array pointed to, by 'ptr' to the given stream.
//  ptr:    This is the pointer to the array of elements to be written
//  size:   This is the size in bytes of each element to be written( such as sizeof( char ) )
//  neof:   This is the number of elements, each one with size of 'size' bytes
//  stream: This is the pointer to a FILE object that specifies an output stream.


#include <stdio.h>
#include <errno.h>

//#include <string.h>
//#include <dirent.h>
//#include <unistd.h>

int main(  ){

    char sentence[] = "How are you today? Are you okay?";

    FILE* w_stream = fopen( "file_8", "w" );
    if( errno ){
        puts( strerror( errno ) );
        exit( errno );
    }

    fwrite( sentence, sizeof( char ), sizeof( sentence ), w_stream );
    fclose( w_stream );


return 0;}

/* output ( see the file_8 )



*/










