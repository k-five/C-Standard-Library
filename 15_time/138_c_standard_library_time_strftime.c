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
/// 14. time.h
//  size_t strftme( char* str, size_t max_size, const char* format, const struct tm* time_ptr )
//  Formats the times represented in the structure 'time_ptr' according
//  to the formating rules defined in 'format' and stored into 'str'.


#include <stdio.h>
#include <time.h>


//#include <string.h>
//#include <stdlib.h>
//#include <errno.h>
//#include <dirent.h>
//#include <unistd.h>



int main( ){

    time_t raw_time;    // time_t raw_time = time( 0 );
    time( &raw_time );

    struct tm* info = localtime( &raw_time );

    char buffer[ 50 ];
    strftime( buffer, 50, "%x - %I:%M%p", info );
    printf( "formatted date and time: '%s'\n", buffer );

return 0;}

/* output

formatted date and time: '03/01/17 - 12:19PM'

Process returned 0 (0x0)   execution time : 0.003 s
Press ENTER to continue.


*/
