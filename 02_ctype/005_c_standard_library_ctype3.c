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
/// 02. ctype.h
//  The <ctype.h> header file of the C standard library declare
//  several functions that are useful for testing and mapping
//  characters.

// Following are the functions defined in this header:

// int isalnum( int )   -> checks whether the passed character is alphanumeric
// int isalpha( int )   -> checks whether the passed character is alphabetic
// int ischtrl( int )   -> checks whether the passed character is control character
// int isdigit( int )   -> checks whether the passed character is decimal digit
// int isgraph( int )   -> checks whether the passed character has graphical representation using locale
// int islower( int )   -> checks whether the passed character is lowercase letter
// int isupper( int )   -> checks whether the passed character is an uppercase letter
// int isprint( int )   -> checks whether the passed character is printable
// int ispunct( int )   -> checks whether the passed character is is punctuation
// int isspace( int )   -> checks whether the passed character is whitespace
// int isxdigit( int )  -> checks whether the passed character is hexadecimal
/**
__exctype (isalnum);
__exctype (isalpha);
__exctype (iscntrl);
__exctype (isdigit);
__exctype (islower);
__exctype (isgraph);
__exctype (isprint);
__exctype (ispunct);
__exctype (isspace);
__exctype (isupper);
__exctype (isxdigit);

**/
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(){

    const char xdigit[] = "0xE";
    if( isxdigit( xdigit[ 0 ] ) ){
        puts( "okay" );
    }


return 0;
}

/* output




*/
