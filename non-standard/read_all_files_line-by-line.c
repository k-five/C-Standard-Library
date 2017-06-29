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
/// 14. stdlib.h
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//#include <errno.h>
//#include <string.h>
//#include <dirent.h>
//#include <unistd.h>


int main( int argc, char** argv ){

    ++argv; // ignore argv[ 0 ]

    FILE* r_stream;
    size_t count_line = 0;
    char buffer_line[ 1024 ] = "";
    const char* filename = "";

    printf( "line:\t\tfilename:\n" );
    while( *argv ){

        filename = *argv;

        r_stream = fopen( filename, "r" );
        if( ! r_stream ){
            perror("cannot open file since" );
            puts( "" );
        }

        while( fgets( buffer_line, 512, r_stream ) != NULL ){
            printf( "%03d\t\t%s |%s", ++count_line, filename,  buffer_line );
        }
        fclose( r_stream );
        puts( "" );

        ++argv;
        count_line = 0;
    }


return 0;}

/* output


*/
