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
//  void* memmove( void* destination, const void* source, size_t n )
//  Copies 'n' characters from 'source' to 'destination', but for
//  overlapping memory blocks, memmove() is a safer approach then memcpy()


#include <stdio.h>
#include <string.h>
//#include <stdlib.h>

//#include <errno.h>
//#include <dirent.h>
//#include <unistd.h>


int main( ){

    const char      source[] = "new string";
          char destination[] = "old string";

    printf( "Before memmove() '%s' and '%s'\n", destination, source );
    memmove( destination, source, strlen( destination ) );
    printf( "After memmove() '%s' and '%s' \n", destination, source );

return 0;}

/* output

Before memmove() 'old string' and 'new string'
After memmove() 'new string' and 'new string'

Process returned 0 (0x0)   execution time : 0.005 s
Press ENTER to continue.



*/
