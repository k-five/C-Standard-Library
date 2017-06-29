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
/// 11. stddef.h
//  Defines various variable types and macros.
//
//  ptrdiff_t
//  size_t
//  wchar_t
//  NULL
//  offsefof

#include <stdio.h>
//#include <errno.h>
#include <stddef.h>


struct address {
    char name[ 20 ];
    char street[ 30 ];
    int phone;
};

int main(){

    // offsetof( type, member-designator )
    // The C library macro offsetof results in a constant
    // integer of type size_t which is the offset in bytes
    // of a structure member from the beginning of the structure.
    // The member is given by member-designator, and the name
    // of the structure is given in type

    printf( "name offset == %d byte in address structure\n", offsetof( struct address, name ) );    //
    printf( "street offset == %d byte in address structure\n", offsetof( struct address, street ) );  //
    printf( "phone offset == %d byte in address structure\n", offsetof( struct address, phone ) );   //

return 0;}

/* output

name offset == 0 byte in address structure
street offset == 20 byte in address structure
phone offset == 52 byte in address structure


*/










