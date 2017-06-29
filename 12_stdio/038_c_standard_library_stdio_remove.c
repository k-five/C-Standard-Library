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

//  int remove( const char* filename )
//
//  Deletes the given filename so that it is no longer accessible
//  return value:
//  On success zero is returned, on error, -1 is returned and
//  'errno' is also set appropriately

#include <stdio.h>
#include <errno.h>

//#include <string.h>
//#include <dirent.h>
//#include <unistd.h>

int main(  ){

    const char* filename = "file_for_removing";

    FILE* w_stream = fopen( filename , "w" );

    fputs( "sends to the file_for_removing\n", w_stream );
    fclose( w_stream );

    FILE* r_stream = fopen( filename, "r" );

    char chr;
    while( ! feof( r_stream ) ){
        printf( "%c", chr );
        chr = fgetc( r_stream );
    }

    fclose( r_stream );

    short result = remove( filename );
    if( result == 0 ){
        puts( "file was removed successfully" );
    } else {
        puts( strerror( errno ) );
    }

return 0;}

/* output

sends to the file_for_removing
file was removed successfully


*/










