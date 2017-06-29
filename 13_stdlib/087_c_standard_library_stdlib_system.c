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
//  int system( const char* str )
//
//  Passes the command name of program name specified by 'str'
//  to the hos environment to be executed by the command processor
//  and returns after the command has been completed.

#include <stdio.h>
#include <stdlib.h>

//#include <errno.h>
#include <string.h>
//#include <dirent.h>
//#include <unistd.h>



int main(){

    char command[ 10 ];

    strcpy( command, "lsplk" );
    system( command );

    puts( "-----------------" );

    strcpy( command, "lsblk" );
    system( command );



return 0;}

/* output

sh: 1: lsplk: not found
-----------------
NAME   MAJ:MIN RM   SIZE RO TYPE MOUNTPOINT
sdb      8:16   0   1.8T  0 disk
├─sdb2   8:18   0 931.5G  0 part
├─sdb3   8:19   0 931.5G  0 part
└─sdb1   8:17   0   128M  0 part
fd0      2:0    1     4K  0 disk
sda      8:0    0 931.5G  0 disk
├─sda4   8:4    0 638.9G  0 part
├─sda2   8:2    0     1K  0 part
├─sda5   8:5    0   1.9G  0 part [SWAP]
├─sda3   8:3    0 190.8G  0 part /
└─sda1   8:1    0   100G  0 part

Process returned 0 (0x0)   execution time : 0.035 s
Press ENTER to continue.


*/
