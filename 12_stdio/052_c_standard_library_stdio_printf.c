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

//  vsprintf( const char* str, const char* format, va_list arg )
//
//  Sends the formatted output to a string using an
//  argument list passed to it.


#include <stdio.h>
#include <stdarg.h>


//#include <errno.h>
//#include <string.h>
//#include <dirent.h>
//#include <unistd.h>



int main( int argc, char** argv){

    const char* rename_format = "";
    const char*     to_format = "";
    const char* remove_format = "";

    if( argc < 100000 ){
        rename_format = "%05d rename: %s\n";
            to_format = "%13s %s\n";
        remove_format = "%05d remove: %s";
    }
    if( argc < 10000 ){
        rename_format = "%04d rename: %s\n";
            to_format = "%12s %s\n";
        remove_format = "%04d remove: %s";
    }
    if( argc < 1000 ){
        rename_format = "%03d rename: %s\n";
            to_format = "%11s %s\n";
        remove_format = "%03d remove: %s";
    }
    if( argc < 100 ){
        rename_format = "%02d rename: %s\n";
            to_format = "%10s %s\n";
        remove_format = "%02d remove: %s";
    }
    if( argc < 10 ){
        rename_format = "%01d rename: %s\n";
            to_format = "%9s %s\n";
        remove_format = "%01d remove: %s";
    }

    size_t index = 0;
    while( *argv ){
        printf( rename_format, ++index, *argv );
        printf(  to_format   ,"to:"   , *argv );

        ++argv;
    }

return 0;}

/* output



*/










