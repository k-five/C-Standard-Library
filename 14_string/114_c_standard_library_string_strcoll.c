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
/// 14. string.h
//  int strcoll( const char* str1, const char* str2 )
//  Compares string 'str1' to 'str2'. The result is dependent
//  on the LC_COLLATE setting of the location.


#define not !
#include <stdio.h>
#include <string.h>
//#include <stdlib.h>

//#include <errno.h>
//#include <dirent.h>
//#include <unistd.h>


int main( ){

    const char* name_1 = "Albert";
    const char* name_2 = "Albert";

    size_t result_of_strcoll = strcoll( name_1, name_2 );

    if( result_of_strcoll == 0 )      puts( "okay" );
    else if ( result_of_strcoll > 0 ) puts( "name_1 is bigger" );
    else                              puts( "name_2 is bigger" );

return 0;}

/* output

okay

Process returned 0 (0x0)   execution time : 0.006 s
Press ENTER to continue.



*/
