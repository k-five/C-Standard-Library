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
/// 13 stdlib.h
//
//  int mblen( const char* str size_t n )
//  Returns the length of a multi-byte character pointed to, by the argument str

//  size_t mbstowcs( schar_t* pwcs, const char* str, size_t n )
//  Converts the string of multi-byte characters pointed to, by the argument str to the array pointed to by 'pwcs'

//  int mbtowc( wchar_t pwc, const char* str, size_t n )
//  converts multi-byte sequence to a wide character

//  size_t wcstombs( char* str, const wchar_t* pwcs, size_t n )
//  Converts the wide-character string 'pwcs' to a multi-byte string starting at str, At most n bytes are written to 'str'/

//  wctomb( char* str, wchar_t wchar )
//  Converts the wide character 'wchar' to its multi-byte representation and stores it at the beginning of the character array pointed to by 'str'.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//#include <errno.h>
//#include <string.h>
//#include <dirent.h>
//#include <unistd.h>


int main(){

    // these that mentioned about, was ignored.

return 0;}

/* output


*/
