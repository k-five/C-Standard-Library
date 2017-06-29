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

//  fputs( const char* str, FILE* stream )
//
//  Writes a string to the specified stream up to but
//  not including the null character.


#include <stdio.h>

//#include <errno.h>
//#include <string.h>
//#include <dirent.h>
//#include <unistd.h>

int main(){

    FILE* w_stream = fopen( "file_13", "w+" );
    if( w_stream == NULL ){
        perror( "Cannot open the file!" );
        return -1;
    }

    size_t size = fputs( "A B C D E F G H I J K L M N O P Q R S T U V W X Y Z\n", w_stream );
    if( size )  // a non-zero
        puts( "success" );
    else
        puts( "failure" );

    fclose( w_stream );

return 0;}

/* output

success

*/










