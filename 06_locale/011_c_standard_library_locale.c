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
/// 06. locale.h
//  The header file locale.h defines the location specific setting,
//  such as date formats and current symbols. You will find several
//  macros defined along with an important structure 'struct Iconv'
//  and two important functions listed below

//  char* setlocale( int category, const char* locale )
//      sets or reads location dependent information

//  struct lconv* localeconv( void )
//      sets or read location dependent information

#include <stdio.h>
#include <locale.h>
#include <time.h>

int main(){

    time_t current_time;
    struct tm* timer;
    char buffer[ 90 ];

    time( &current_time );
    timer = localtime( &current_time );

    printf( "locale is %s\n", setlocale( LC_ALL, "fa_IR" ) );
    strftime( buffer, 90, "%c", timer );
    printf( "Date is %s\n", buffer );

    printf( "locale is %s\n", setlocale( LC_ALL, "en_US" ) );
    strftime( buffer, 90, "%c", timer );
    printf( "Date is %s\n", buffer );




return 0;}

/* output



*/










