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

//  FILE* tmpfile( void )
//
//  Creates a temporary file in binary update mode ( wb+ ).
//  The temporary file created is automatically deleted when
//  the stream is closed ( fclose ) or when the program terminates.


#include <stdio.h>


//#include <string.h>
//#include <dirent.h>
#include <unistd.h>

int main(  ){

    FILE* t_stream = tmpfile();
    if( t_stream != NULL )
        puts( "temporary file was created" );
    else
        exit( -1 );

//    fprintf( t_stream, "this is going to go into the temporary file" );
//    fflush( t_stream );

//    sleep( 40 );
    fclose( t_stream );

return 0;}

/* output


*/










