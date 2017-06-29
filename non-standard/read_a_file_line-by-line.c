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

    FILE* r_stream = fopen( argv[ 1 ], "r" );
    if( ! r_stream ) exit( EXIT_FAILURE );

    size_t count_line = 0;
    char buffer_line[ 512 ] = "";
    printf( "line:\t\tfilename:\n" );
    while( fgets( buffer_line, 512, r_stream ) != NULL ){
        printf( "%03d\t\t%s |%s", ++count_line, argv[ 1 ],  buffer_line );
    }
    fclose( r_stream );
    puts( "" );


return 0;}

/* output


*/
