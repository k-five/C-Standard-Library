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

//  fscanf( FILE* stream, const char* format, ... )
//
//  Reads formatted input from a stream.
//
//  Return value:
//  The number of input items successfully matched and
//  assigned.



#include <stdio.h>

//#include <errno.h>
//#include <string.h>
//#include <dirent.h>
//#include <unistd.h>

int main(){

    int year = -1;
    char c_string_1[ 10 ],
         c_string_2[ 10 ],
         c_string_4[ 10 ],
         c_string_3[ 10 ];

    FILE* wp_stream = fopen( "file_11", "w+" );
    if( wp_stream ){/* nothing */}
    else           { exit( -1 ); }

    fputs( "We are in 2017 now\n", wp_stream );

    rewind( wp_stream );

    fscanf( wp_stream, "%s %s %s %d %s", c_string_1, c_string_2, c_string_3, &year, c_string_4 );

    printf( "c_string_1: '%s'\n", c_string_1 );
    printf( "c_string_2: '%s'\n", c_string_2 );
    printf( "c_string_3: '%s'\n", c_string_3 );
    printf( "year      : '%d'\n", year );
    printf( "c_string_4: '%s'\n", c_string_4 );
return 0;}

/* output

c_string_1: 'We'
c_string_2: 'are'
c_string_3: 'in'
year      : '2017'
c_string_4: 'now'



*/










